#include "tool_catalog.hpp"

namespace horizon {
	const std::map<ToolID, ToolCatalogItem> tool_catalog = {
		{ToolID::MOVE, {"Move"}},
		{ToolID::ROTATE, {"Rotate"}},
		{ToolID::MIRROR, {"Mirror"}},
		{ToolID::MOVE_EXACTLY, {"Move exactly"}},
		{ToolID::DELETE, {"Delete"}},
		{ToolID::ADD_COMPONENT, {"Place component"}},
		{ToolID::ADD_PART, {"Place part"}},
		{ToolID::BEND_LINE_NET, {"Bend net line"}},
		{ToolID::DISCONNECT, {"Disconnect symbol"}},
		{ToolID::DRAW_ARC, {"Draw arc"}},
		{ToolID::DRAW_LINE, {"Draw line"}},
		{ToolID::DRAW_NET, {"Draw net line"}},
		{ToolID::DRAW_POLYGON, {"Draw polygon"}},
		{ToolID::EDIT_SYMBOL_PIN_NAMES, {"Edit symbol pin names"}},
		{ToolID::ENTER_DATUM, {"Enter datum"}},
		{ToolID::MANAGE_BUSES, {"Manage buses"}},
		{ToolID::MAP_PIN, {"Map pin"}},
		{ToolID::MAP_SYMBOL, {"Place symbol"}},
		{ToolID::SELECT_NET_SEGMENT, {"Select net segment"}},
		{ToolID::MOVE_NET_SEGMENT, {"Move net segment to other net"}},
		{ToolID::MOVE_NET_SEGMENT_NEW, {"Move net segment to new net"}},
		{ToolID::PASTE, {"Paste"}},
		{ToolID::PLACE_BUS_LABEL, {"Place bus label"}},
		{ToolID::PLACE_BUS_RIPPER, {"Place bus ripper"}},
		{ToolID::PLACE_HOLE, {"Place hole"}},
		{ToolID::PLACE_JUNCTION, {"Place junction"}},
		{ToolID::PLACE_NET_LABEL, {"Place net label"}},
		{ToolID::PLACE_PAD, {"Place pad"}},
		{ToolID::PLACE_POWER_SYMBOL, {"Place power symbol"}},
		{ToolID::PLACE_TEXT, {"Place text"}},
		{ToolID::ASSIGN_PART, {"Assign part"}},
		{ToolID::MAP_PACKAGE, {"Place package"}},
		{ToolID::PLACE_VIA, {"Place via"}},
		{ToolID::ROUTE_TRACK, {"Route track"}},
		{ToolID::DRAG_KEEP_SLOPE, {"Drag and keep slope"}},
		{ToolID::DRAW_TRACK, {"Draw track"}},
		{ToolID::ANNOTATE, {"Annotate"}},
		{ToolID::SMASH, {"Smash"}},
		{ToolID::UNSMASH, {"Unsmash"}},
		{ToolID::PLACE_SHAPE, {"Place shape"}},
		{ToolID::EDIT_SHAPE, {"Edit shape"}},
		{ToolID::IMPORT_DXF, {"Import DXF"}},
		{ToolID::MANAGE_NET_CLASSES, {"Manage net classes"}},
		{ToolID::EDIT_PAD_PARAMETER_SET, {"Edit pad parameter set"}},
		{ToolID::DRAW_POLYGON_RECTANGLE, {"Draw polygon rectangle"}},
		{ToolID::DRAW_LINE_RECTANGLE, {"Draw line rectangle"}},
		{ToolID::EDIT_LINE_RECTANGLE, {"Edit line rectangle"}},
		{ToolID::EDIT_SCHEMATIC_PROPERTIES, {"Edit schematic properties"}},
		{ToolID::ROUTE_TRACK_INTERACTIVE, {"Route track interactive"}},
		{ToolID::EDIT_VIA, {"Edit via"}},
		{ToolID::ROTATE_ARBITRARY, {"Rotate arbitrary"}},
		{ToolID::ADD_PLANE, {"Add Plane"}},
		{ToolID::EDIT_PLANE, {"Edit Plane"}},
		{ToolID::CLEAR_PLANE, {"Clear Plane"}},
		{ToolID::UPDATE_PLANE, {"Update Plane"}},
		{ToolID::UPDATE_ALL_PLANES, {"Update all Planes"}},
		{ToolID::CLEAR_ALL_PLANES, {"Clear all Planes"}},
		{ToolID::EDIT_STACKUP, {"Edit Stackup"}},
	};
}
