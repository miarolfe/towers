// Copyright Mia Rolfe. All rights reserved.
#pragma once

#include <Systems/Implementation/GraphicsSystem.h>
#include <Systems/Implementation/InputSystem.h>

class Game
{
public:
	Game();
	void Init();
	void Frame();
	void Shutdown();

	bool IsRunning();

private:
	GraphicsSystem m_graphicsSystem;
	InputSystem m_inputSystem;

	bool m_isRunning = true;
};