// Copyright Mia Rolfe. All rights reserved.
#include <Entity.h>

Entity::Entity(Vec2 position)
{
	SetPosition(m_position);
}

Vec2 Entity::GetPosition()
{
	return m_position;
}

void Entity::SetPosition(Vec2 position)
{
	m_position = position;
}
