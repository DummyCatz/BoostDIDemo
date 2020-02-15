#include "Car.h"

#include <iostream>

Car::Car(std::unique_ptr<IEngine> engine, std::unique_ptr<IWheel> wheel):
	m_engine{std::move(engine)}, m_wheel{std::move(wheel)} {}

void Car::run() const noexcept
{
	m_engine->run();
	m_wheel->run();
}

int Wheel::run() const noexcept 
{
	std::cout << "wheel is running" << std::endl;
	return 0;
}

int Engine::run() const noexcept 
{
	std::cout << "Engine is running" << std::endl;
	return 0;
}
