// Copyright Mia Rolfe. All rights reserved.
#pragma once

#include <Systems/Implementation/AssetSystem.h>
#include <Systems/Implementation/AudioSystem.h>
#include <Systems/Implementation/EntitySystem.h>
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
	AssetSystem m_assetSystem;
	AudioSystem m_audioSystem;
	EntitySystem m_entitySystem;
	GraphicsSystem m_graphicsSystem;
	InputSystem m_inputSystem;

	bool m_isRunning = true;
};