#pragma once

#include "CppDI/Interfaces.hpp"
#include "gmock/gmock.h"

class MockWheel : public IWheel
{
public:
	MOCK_METHOD(int, run, (), (override, const, noexcept));
};
