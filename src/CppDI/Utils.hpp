#pragma once

namespace diutils
{
	// Stops the intelligence from reporting error
	template<typename T, typename Injector>
	T createInstance(Injector &injector)
	{
		return injector.create<T>();
	}
}
