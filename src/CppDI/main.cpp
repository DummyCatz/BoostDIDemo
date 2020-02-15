#include "CarFactory.hpp"

int main() 
{
	auto car = createCar<Engine, Wheel>();
	car->run();	

	return 0;
}