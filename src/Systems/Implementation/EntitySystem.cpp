// Copyright Mia Rolfe. All rights reserved.
#include <Systems/Implementation/EntitySystem.h>

#include <cstdint>

constexpr size_t maxNumEntities = 32;

EntitySystem::EntitySystem()
{

}

void EntitySystem::Init()
{
	m_entities = new Entity[maxNumEntities];
}

void EntitySystem::Update()
{
	for (int32_t i = 0; i < m_numEntities; i++)
	{
		
	}
}

void EntitySystem::Shutdown()
{

}
