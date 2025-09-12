// Copyright Mia Rolfe. All rights reserved.
#pragma once

#include <cstdint>
#include <Vec.h>

using EntityID = int32_t;

class Entity
{
public:
	Entity() = default;
	Entity(Vec2 position);
	Vec2 GetPosition();
	void SetPosition(Vec2 position);

protected:
	Vec2 m_position;
};
