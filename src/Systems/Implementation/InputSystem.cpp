// Copyright Mia Rolfe. All rights reserved.
#include <Systems/Implementation/InputSystem.h>

#include <cassert>
#include <SDL3/SDL.h>

InputSystem::InputSystem()
{

}

void InputSystem::Init()
{
	const uint8_t numKeys = static_cast<uint8_t>(InputStateKey::SIZE);
	m_inputState.keys = new InputStateButton[numKeys];
	m_inputState.numKeys = numKeys;
}

void InputSystem::Update()
{
	m_inputState.mouse.rel.x = 0.0f;
	m_inputState.mouse.rel.y = 0.0f;

	m_inputState.mouse.button0.pressedThisFrame = false;
	m_inputState.mouse.button1.pressedThisFrame = false;
	for (int32_t i = 0; i < m_inputState.numKeys; i++)
	{
		m_inputState.keys[i].pressedThisFrame = false;
	}
}

void InputSystem::Shutdown()
{
	delete m_inputState.keys;
}

void InputSystem::OnKeyDown(SDL_Keycode keycode)
{
	const InputStateKey key = SDLKeycodeToInputStateKey(keycode);
	const size_t keyAsIndex = static_cast<size_t>(key);

	assert(keyAsIndex >= 0 && keyAsIndex <= m_inputState.numKeys);

	m_inputState.keys[keyAsIndex].pressedThisFrame = true;
	m_inputState.keys[keyAsIndex].pressed = true;
}

void InputSystem::OnKeyUp(SDL_Keycode keycode)
{
	const InputStateKey key = SDLKeycodeToInputStateKey(keycode);
	const size_t keyAsIndex = static_cast<size_t>(key);

	assert(keyAsIndex >= 0 && keyAsIndex <= m_inputState.numKeys);

	m_inputState.keys[keyAsIndex].pressed = false;
}

void InputSystem::OnMouseMotion(float x, float y, float xRel, float yRel)
{
	m_inputState.mouse.position.x = x;
	m_inputState.mouse.position.y = y;
	m_inputState.mouse.rel.x = xRel;
	m_inputState.mouse.rel.y = yRel;
}

void InputSystem::OnMouseButtonDown(uint8_t buttonIndex)
{
	if (buttonIndex == 0)
	{
		m_inputState.mouse.button0.pressedThisFrame = true;
		m_inputState.mouse.button0.pressed = true;
	}
	else if (buttonIndex == 1)
	{
		m_inputState.mouse.button1.pressedThisFrame = true;
		m_inputState.mouse.button1.pressed = true;
	}
}

void InputSystem::OnMouseButtonUp(uint8_t buttonIndex)
{
	if (buttonIndex == 0)
	{
		m_inputState.mouse.button0.pressed = false;
	}
	else if (buttonIndex == 1)
	{
		m_inputState.mouse.button1.pressed = false;
	}
}

Vec2 InputSystem::GetMousePosition()
{
	return m_inputState.mouse.position;
}

const InputState& InputSystem::GetInputState()
{
	return m_inputState;
}

InputStateKey InputSystem::SDLKeycodeToInputStateKey(SDL_Keycode key)
{
	switch (key)
	{
		case SDLK_0:
			return InputStateKey::ZERO;
		case SDLK_1:
			return InputStateKey::ONE;
		case SDLK_2:
			return InputStateKey::TWO;
		case SDLK_3:
			return InputStateKey::THREE;
		case SDLK_4:
			return InputStateKey::FOUR;
		case SDLK_5:
			return InputStateKey::FIVE;
		case SDLK_6:
			return InputStateKey::SIX;
		case SDLK_7:
			return InputStateKey::SEVEN;
		case SDLK_8:
			return InputStateKey::EIGHT;
		case SDLK_9:
			return InputStateKey::NINE;
		case SDLK_A:
			return InputStateKey::A;
		case SDLK_B:
			return InputStateKey::B;
		case SDLK_C:
			return InputStateKey::C;
		case SDLK_D:
			return InputStateKey::D;
		case SDLK_E:
			return InputStateKey::E;
		case SDLK_F:
			return InputStateKey::F;
		case SDLK_G:
			return InputStateKey::G;
		case SDLK_H:
			return InputStateKey::H;
		case SDLK_I:
			return InputStateKey::I;
		case SDLK_J:
			return InputStateKey::J;
		case SDLK_K:
			return InputStateKey::K;
		case SDLK_L:
			return InputStateKey::L;
		case SDLK_M:
			return InputStateKey::M;
		case SDLK_N:
			return InputStateKey::N;
		case SDLK_O:
			return InputStateKey::O;
		case SDLK_P:
			return InputStateKey::P;
		case SDLK_Q:
			return InputStateKey::Q;
		case SDLK_R:
			return InputStateKey::R;
		case SDLK_S:
			return InputStateKey::S;
		case SDLK_T:
			return InputStateKey::T;
		case SDLK_U:
			return InputStateKey::U;
		case SDLK_V:
			return InputStateKey::V;
		case SDLK_W:
			return InputStateKey::W;
		case SDLK_X:
			return InputStateKey::X;
		case SDLK_Y:
			return InputStateKey::Y;
		case SDLK_Z:
			return InputStateKey::Z;
		default:
			return InputStateKey::INVALID;
	}
}
