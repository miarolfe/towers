// Copyright Mia Rolfe. All rights reserved.
#pragma once

class Game
{
public:
	Game();
	void Init();
	void Frame();
	void Shutdown();

	bool IsRunning();
};
