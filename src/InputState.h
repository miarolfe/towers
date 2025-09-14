// Copyright Mia Rolfe. All rights reserved
#pragma once

#include <cstdint>
#include <SDL3/SDL.h>
#include <Vec.h>

enum class InputStateKey : uint8_t
{
	ZERO = 0u,
	ONE = 1u,
	TWO = 2u,
	THREE = 3u,
	FOUR = 4u,
	FIVE = 5u,
	SIX = 6u,
	SEVEN = 7u,
	EIGHT = 8u,
	NINE = 9u,
	A = 10u,
	B = 11u,
	C = 12u,
	D = 13u,
	E = 14u,
	F = 15u,
	G = 16u,
	H = 17u,
	I = 18u,
	J = 19u,
	K = 20u,
	L = 21u,
	M = 22u,
	N = 23u,
	O = 24u,
	P = 25u,
	Q = 26u,
	R = 27u,
	S = 28u,
	T = 29u,
	U = 30u,
	V = 31u,
	W = 32u, 
	X = 33u,
	Y = 34u,
	Z = 35u,
	INVALID = 36u,
	SIZE
};

struct InputStateButton
{
public:
	bool pressedThisFrame;
	bool pressed;
};

struct InputStateMouse
{
public:
	Vec2 position;
	Vec2 rel;
	InputStateButton button0;
	InputStateButton button1;
};

struct InputState
{
public:
	InputStateMouse mouse;
	InputStateButton* keys = nullptr;
	size_t numKeys = 0;
};
