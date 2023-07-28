//
#ifndef PHASE_H
#define PHASE_H
#include "roll.h"
#include "phase.h"
#include "die.h"
#include "shooter.h"
#include <iostream>

enum class RollOutcome{natural, craps, point, seven_out, nopoint};
 
class Phase
{
  public:
    virtual RollOutcome get_outcome(Roll* roll) = 0;
};

#endif
