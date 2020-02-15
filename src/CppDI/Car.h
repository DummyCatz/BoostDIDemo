#pragma once

#include "Interfaces.hpp"
#include <memory>

class Car
{
public:
	Car(std::unique_ptr<IEngine> engine,
		std::unique_ptr<IWheel> wheel);

	void run() const noexcept;

private:
	std::unique_ptr<IEngine> m_engine;
	std::unique_ptr<IWheel> m_wheel;
};


class Wheel : public IWheel
{
public:
	virtual int run() const noexcept override;
};

class Engine : public IEngine
{
public:
	virtual int run() const noexcept override;
};
