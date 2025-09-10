// Copyright Mia Rolfe. All rights reserved.
#pragma once

#include <Systems/Interface/InputSystemInterface.h>

class InputSystem : InputSystemInterface
{
public:
	InputSystem();
	void Init() override;
	void Update() override;
	void Shutdown() override;
};