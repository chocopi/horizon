#pragma once
#include "block/bus.hpp"
#include "core/tool.hpp"
#include "tool_place_junction.hpp"
#include "tool_helper_move.hpp"

namespace horizon {

class ToolPlaceBusRipper : public ToolPlaceJunction, public ToolHelperMove {
public:
    ToolPlaceBusRipper(IDocument *c, ToolID tid);
    bool can_begin() override;
    std::set<InToolActionID> get_actions() const override
    {
        using I = InToolActionID;
        return {
                I::LMB, I::CANCEL, I::RMB, I::ROTATE, I::MIRROR, I::EDIT,
        };
    }

private:
    void create_attached() override;
    void delete_attached() override;
    bool begin_attached() override;
    bool update_attached(const ToolArgs &args) override;
    bool check_line(class LineNet *li) override;
    class BusRipper *ri = nullptr;
    Orientation last_orientation = Orientation::RIGHT;
    Bus *bus = nullptr;

    std::vector<Bus::Member *> bus_members;
    size_t bus_member_current = 0;
};
} // namespace horizon
