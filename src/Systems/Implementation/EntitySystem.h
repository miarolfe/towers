// Copyright Mia Rolfe. All rights reserved.
#pragma once

#include <Systems/Interface/EntitySystemInterface.h>
#include <Entity.h>

class EntitySystem : EntitySystemInterface
{
public:
	EntitySystem();
	void Init() override;
	void Update() override;
	void Shutdown() override;

protected:
	Entity* m_entities = nullptr;
	size_t m_numEntities = 0;
};