#pragma once

struct IEngine
{
	virtual ~IEngine()               = default;
	virtual int run() const noexcept = 0;
};

struct IWheel
{
	virtual ~IWheel()                    = default;
	virtual int run() const noexcept     = 0;
};
