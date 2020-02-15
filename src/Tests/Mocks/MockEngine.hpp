#pragma once

#include "CppDI/Interfaces.hpp"
#include "gmock/gmock.h"

class MockEngine : public IEngine
{
public:
	MOCK_METHOD(int, run, (), (override, const, noexcept));
};


