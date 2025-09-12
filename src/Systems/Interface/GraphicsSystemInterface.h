// Copyright Mia Rolfe. All rights reserved.
#pragma once

#include <cstdint>
#include <Systems/Interface/SystemInterface.h>

class GraphicsSystemInterface : SystemInterface
{
public:
	virtual void OnWindowResized(int32_t width, int32_t height) = 0;
};