#include "die.cpp"
#include "roll.cpp"
#include "shooter.cpp"
#include "phase.cpp"
#include "come_out_phase.cpp"
#include "point_phase.cpp"
#include <iostream>
using namespace std;

int main() 
{
	srand(time(0));
	Shooter shooter;
	Roll* roll;
	Die die1, die2;
	roll = shooter.throw_dice(die1, die2);

	ComeOutPhase come_out_phase;

	while(come_out_phase.get_outcome(roll) == RollOutcome::natural || come_out_phase.get_outcome(roll) == RollOutcome::craps){
		cout << "Rolled " << roll->roll_value() << " roll again" << "\n";
		roll = shooter.throw_dice(die1, die2); 
	}

	cout << "--------------------" << "\n";
	cout << "Rolled " << roll->roll_value() << " start of point phase" << "\n";
	cout << "Roll until " << roll->roll_value() << " or 7 is rolled." << "\n";

	int point = roll->roll_value();
	roll = shooter.throw_dice(die1, die2);
	PointPhase point_phase(point);

	while(point_phase.get_outcome(roll) != RollOutcome::point && point_phase.get_outcome(roll) != RollOutcome::seven_out){
		cout << "Rolled " << roll->roll_value() << " roll again" << "\n";
		roll = shooter.throw_dice(die1, die2);
	}

	cout << "Rolled value: " << roll->roll_value() << "\n" << " End of Point Phase" << "\n";


	return 0;
}