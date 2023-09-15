#pragma once

using namespace System;
using namespace RestaurantModel;
using namespace System::Collections::Generic;

namespace RestaurantController {
	public ref class Controller
	{
		static List<RobotWaiter^>^ RobotWaiterDB = gcnew List<RobotWaiter^>();
		public:
			static void DeliverProduct(RobotWaiter^ robot, Coordinate^ beginPoint, Coordinate^ endPoint);
			static void AddRobotWaiter(RobotWaiter^);
			static List<RobotWaiter^>^ QueryAllRobotWaiters();
			static RobotWaiter^ QueryRobotWaiterById(int);
			static void UpdateRobotWaiter(RobotWaiter^);
			static void DeleteRobotWaiter(int);
	};
}
