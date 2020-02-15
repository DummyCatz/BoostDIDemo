#include "boost/di.hpp"
#include "Interfaces.hpp"
#include "Car.h"

#include <iostream>

using namespace boost;

namespace diutils
{
	// Stops the intelligence from reporting error
	template<typename T, typename Injector>
	T createInstance(Injector &injector)
	{
		return injector.create<T>();
	}
}

int main() 
{
	auto injector = di::make_injector(
		di::bind<IEngine>.to<Engine>(),
	    di::bind<IWheel>.to<Wheel>()
	);

	auto car = diutils::createInstance<std::unique_ptr< Car>>(injector);
	car->run();	

	return 0;
}