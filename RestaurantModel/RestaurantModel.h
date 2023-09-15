#pragma once

using namespace System;
using namespace System::Collections::Generic;

namespace RestaurantModel {
    public ref class Coordinate {
    public:
        property float X;
        property float Y;
        Coordinate();
        Coordinate(float x, float y);
    };

	public ref class RobotWaiter {
        public:
            property int Id; //Variable de instancia
            property String^ FactoryCode;
            property String^ SerialNumber;
            property int BatteryAvailableTime;
            property int Diameter;
            property int Velocity;
            property int LoadCapacity;
            property String^ TrayType;
            property String^ Language;
            property int TableNumber;
            property double InvoiceTotal;
            property List<String^>^ Devices;
            property String^ Name;
            property Coordinate^ Position;

            void MoveTo(Coordinate^ destiny);
            void LoadProducts();
            void NotifyDeliver();
    };

    public ref class Obstacle {
        public:
            property int Id;
            property List<Coordinate^>^ Coordinates;
    };

    public ref class Table {
    public:
        property int Id;
        property float Capacity;
        property String^ Status;
        property Coordinate^ Position;
    };

    public ref class RestaurantMap {
        public:
            property List<Table^>^ Tables;
            property List<Obstacle^>^ Obstacles;

            //Métodos
            void AddTable(Table^ table);
            Table^ SearchTable(int tableNumber);
    };


}
