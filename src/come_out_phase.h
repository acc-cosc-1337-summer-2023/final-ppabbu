//
#ifndef COME_OUT_PHASE_H
#define COME_OUT_PHASE_H

#include "phase.h"
 
// ComeOutPhase inherits the characteristics of the Phase class
class ComeOutPhase : public Phase 
{
    public:
        // Rolloutcome using get_outcome with roll parameters
        RollOutcome get_outcome(Roll* roll) override;
};



#endif