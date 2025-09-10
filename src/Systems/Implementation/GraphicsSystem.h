// Copyright Mia Rolfe. All rights reserved.
#pragma once

#include <Systems/Interface/GraphicsSystemInterface.h>

class GraphicsSystem : GraphicsSystemInterface
{
public:
	GraphicsSystem();
	void Init() override;
	void Update() override;
	void Shutdown() override;
	
	void Draw();
};