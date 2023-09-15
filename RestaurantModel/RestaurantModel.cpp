#include "pch.h"

#include "RestaurantModel.h"

void RestaurantModel::RestaurantMap::AddTable(Table^ table)
{
    Tables->Add(table);
}

RestaurantModel::Table^ RestaurantModel::RestaurantMap::SearchTable(int tableNumber)
{	
	for each (Table^ table in Tables)
	{
		if (table->Id == tableNumber)
			return table;
	}
	return nullptr;
}

void RestaurantModel::RobotWaiter::MoveTo(Coordinate^ destiny)
{
	//Aquí se programaría las instrucciones necesarias para dar la orden al robot 
	//para que se dirija a su destino.
	System::Console::WriteLine("El robot se mueve desde su posicion en curso(Position) hacia la "
								+ "posicion(" + destiny->X + ", " + destiny->Y + ")");
}

void RestaurantModel::RobotWaiter::LoadProducts()
{
	//Se invoca a la instrucción del robot que indica que se acaba de colocar los platos en su bandeja.
	System::Console::WriteLine("Se ha procedido a cargar los productos en la bandeja");
}

void RestaurantModel::RobotWaiter::NotifyDeliver()
{
	//Aquí se programaría las instrucciones necesarias para dar la orden al robot 
	//para que realice un aviso a la mesa destino de que su(s) plato(s) ha(n) llegado.
	System::Console::WriteLine("Se ha procedido a notificar la llegada a la mesa con los platos.");
}

RestaurantModel::Coordinate::Coordinate()
{
	X = 1;
	Y = 1;
}

RestaurantModel::Coordinate::Coordinate(float x, float y)
{
	this->X = x;
	this->Y = y;
}
