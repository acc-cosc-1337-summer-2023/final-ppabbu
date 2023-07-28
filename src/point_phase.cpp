//
#include "point_phase.h"

PointPhase::PointPhase(int p) : point(p) {}

RollOutcome PointPhase::get_outcome(Roll* roll)
{
    int roll_val = roll->roll_value();
    if(roll_val == point) {
        return RollOutcome::point;
    }
    else if(roll_val == 7) {
        return RollOutcome::seven_out;
    }
    else {
        return RollOutcome::nopoint;
    }
}