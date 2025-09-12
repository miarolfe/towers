// Copyright Mia Rolfe. All rights reserved.
#pragma once

#include <cstdint>
#include <SDL3/SDL.h>
#include <Systems/Interface/InputSystemInterface.h>
#include <InputState.h>

class InputSystem : InputSystemInterface
{
public:
	InputSystem();
	void Init() override;
	void Update() override;
	void Shutdown() override;

	void OnKeyDown(SDL_Keycode key) override;
	void OnKeyUp(SDL_Keycode key) override;
	void OnMouseMotion(float x, float y, float xRel, float yRel) override;
	void OnMouseButtonDown(uint8_t buttonIndex) override;
	void OnMouseButtonUp(uint8_t buttonIndex) override;

protected:
	InputState m_inputState;
};