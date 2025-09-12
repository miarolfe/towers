// Copyright Mia Rolfe. All rights reserved.
#pragma once

#include <Systems/Interface/AssetSystemInterface.h>

class AssetSystem : AssetSystemInterface
{
public:
	AssetSystem();
	void Init() override;
	void Update() override;
	void Shutdown() override;
};