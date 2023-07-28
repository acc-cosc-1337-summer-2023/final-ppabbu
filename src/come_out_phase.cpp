//
#include "come_out_phase.h"

RollOutcome ComeOutPhase::get_outcome(Roll* roll)
{
    int roll_val = roll->roll_value();
    if(roll_val == 7 || roll_val == 11) {
        return RollOutcome::natural;
    }
    else if(roll_val == 2 || roll_val == 3 || roll_val == 12) {
        return RollOutcome::craps;
    }
    else {
        return RollOutcome::point;
    }
}