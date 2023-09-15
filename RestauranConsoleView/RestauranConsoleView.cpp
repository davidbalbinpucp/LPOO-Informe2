#include "pch.h"
//#include "RestaurantModel.h"

using namespace System;
using namespace RestaurantModel;
using namespace RestaurantController;

int main(array<System::String ^> ^args)
{
    RobotWaiter^ robot = gcnew RobotWaiter();
    Coordinate^ kitchenPos = gcnew Coordinate();
    kitchenPos->X = 10;
    kitchenPos->Y = 3;

    Coordinate^ tableEnd = gcnew Coordinate(5,1);
    
    Controller::DeliverProduct(robot, kitchenPos, tableEnd);    
}
