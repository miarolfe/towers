// Copyright Mia Rolfe. All rights reserved
#pragma once

#include <SDL3/SDL.h>

struct InputStateKey
{
	SDL_Keycode keycode;
	bool pressedThisFrame;
	bool down;
};

struct InputState
{
public:

};
