#version 330
layout(points) in;
layout(triangle_strip, max_vertices = 4) out;


in vec2 p0_to_geom[1];
in vec2 p1_to_geom[1];
in vec2 p2_to_geom[1];
in int color_to_geom[1];
in int color2_to_geom[1];
in int lod_to_geom[1];
smooth out vec3 color_to_fragment;
smooth out vec2 round_pos_to_fragment;

##ubo

int mode = layer_flags;

vec4 t(vec2 p) {
    return vec4((screenmat*viewmat*vec3(p, 1)), 1);
}

vec2 p2r(float phi, float l) {
	return vec2(cos(phi), sin(phi))*l;
}

void main() {
	vec2 p0 = p0_to_geom[0];
	vec2 p1 = p1_to_geom[0];
	vec2 p2 = p2_to_geom[0];

	color_to_fragment = get_color(color_to_geom[0], color2_to_geom[0]);
	
	float border_width = min_line_width;
	float width = p2.x/2+(border_width/scale/2);
		
	width = max(width, min_line_width*.5/scale);
	vec2 v = p1-p0;
	vec2 o = vec2(-v.y, v.x);
	o /= length(o);
	o *= width;
	vec2 vw = (v/length(v))*(min_line_width/scale/2);
	p0 -= vw;
	p1 += vw;
		

	float xm = 1/(1-border_width*2/(length(v)*scale));
	float ym = 1/(1-border_width/(width*scale));
	
	gl_Position = t(p0-o);
	round_pos_to_fragment = vec2(-xm,-ym);
	EmitVertex();
	
	gl_Position = t(p0+o);
	round_pos_to_fragment = vec2(-xm,ym);
	EmitVertex();

	gl_Position = t(p1-o);
	round_pos_to_fragment = vec2(xm,-ym);
	EmitVertex();
	
	gl_Position = t(p1+o);
	round_pos_to_fragment = vec2(xm,ym);
	EmitVertex();
	
	EndPrimitive();
	
}
