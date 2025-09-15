// Copyright Mia Rolfe. All rights reserved.
#pragma once

#include <cstdint>
#include <SDL3/SDL.h>
#include <InputState.h>
#include <Systems/Interface/SystemInterface.h>
#include <Vec.h>

class InputSystemInterface : SystemInterface
{
public:
	virtual void OnKeyDown(SDL_Keycode key) = 0;
	virtual void OnKeyUp(SDL_Keycode key) = 0;
	virtual void OnMouseMotion(float x, float y, float xRel, float yRel) = 0;
	virtual void OnMouseButtonDown(uint8_t buttonIndex) = 0;
	virtual void OnMouseButtonUp(uint8_t buttonIndex) = 0;

	virtual Vec2 GetMousePosition() = 0;
	virtual const InputState& GetInputState() = 0;
};