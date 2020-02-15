#pragma once

#include "Car.hpp"
#include "boost/di.hpp"
#include "Utils.hpp"

template<typename EngineType, typename WheelType>
std::unique_ptr<Car> createCar()
{
	using namespace boost;
	auto injector = di::make_injector(
		di::bind<IEngine>.to<EngineType>(),
	    di::bind<IWheel>.to<WheelType>()
	);

	return diutils::createInstance<std::unique_ptr<Car>>(injector);
}

