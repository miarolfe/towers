// Copyright Mia Rolfe. All rights reserved.
#pragma once

#include <Systems/Implementation/InputSystem.h>
#include <Systems/Implementation/GraphicsSystem.h>

class Game
{
public:
	Game();
	void Init();
	void Frame();
	void Shutdown();

	bool IsRunning();

private:
	InputSystem m_inputSystem;
	GraphicsSystem m_graphicsSystem;
};
