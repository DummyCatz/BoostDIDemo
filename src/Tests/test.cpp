#include "pch.h"
#include "gmock/gmock.h"
#include "Mocks/MockEngine.hpp"
#include "Mocks/MockWheel.hpp"

#include "CppDI/Car.hpp"

#include <memory>

using ::testing::_;
using ::testing::AtLeast;  
using ::testing::Return;

TEST(MockTest, TestEngine)
{ 
	auto mockEngine = std::make_unique<MockEngine>(); 
	EXPECT_CALL(*mockEngine, run())
		.Times(AtLeast(1))
		.WillOnce(Return(0));

	auto mockWheel = std::make_unique<MockWheel>();
	EXPECT_CALL(*mockWheel, run())
		.Times(AtLeast(1))
		.WillOnce(Return(0));

	auto car = std::make_unique<Car>(std::move(mockEngine), std::move(mockWheel));
	car->run();
}