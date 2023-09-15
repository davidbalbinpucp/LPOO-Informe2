#include "pch.h"

#include "RestaurantController.h"

void RestaurantController::Controller::DeliverProduct(RobotWaiter^ robot, Coordinate^ beginPoint, Coordinate^ endPoint)
{
       //Mover el robot desde su posición al beginPoint
        robot->MoveTo(beginPoint);
       //Cargar los productos al robot
        robot->LoadProducts();
       //Mover el robot desde el beginPoint hasta el endPoint
        robot->MoveTo(endPoint);
        //Entregar el producto a la mesa
        robot->NotifyDeliver();
}

void RestaurantController::Controller::AddRobotWaiter(RobotWaiter^ robot)
{
    RobotWaiterDB->Add(robot);
}

List<RobotWaiter^>^ RestaurantController::Controller::QueryAllRobotWaiters()
{
    return RobotWaiterDB;
}

RobotWaiter^ RestaurantController::Controller::QueryRobotWaiterById(int robotId)
{
    for (int i = 0; i < RobotWaiterDB->Count; i++) {
        if (RobotWaiterDB[i]->Id == robotId)
            return RobotWaiterDB[i];
    }
    return nullptr;
}

void RestaurantController::Controller::UpdateRobotWaiter(RobotWaiter^ robot)
{
    for (int i = 0; i < RobotWaiterDB->Count; i++) {
        if (RobotWaiterDB[i]->Id == robot->Id)
            RobotWaiterDB[i] = robot;
    }

}

void RestaurantController::Controller::DeleteRobotWaiter(int robotId)
{
    for (int i = 0; i < RobotWaiterDB->Count; i++) {
        if (RobotWaiterDB[i]->Id == robotId)
            RobotWaiterDB->RemoveAt(i);
    }
}
