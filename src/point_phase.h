//
#ifndef POINT_PHASE_H
#define POINT_PHASE_H

#include "phase.h"

// define point phase class based on phase
class PointPhase : public Phase 
{
    public:
        // pointphase constructor with p int parameter
        PointPhase(int p);
        //get the outcome of the roll
        RollOutcome get_outcome(Roll* roll) override;
    private:
        //declare point int
        int point;
};

#endif