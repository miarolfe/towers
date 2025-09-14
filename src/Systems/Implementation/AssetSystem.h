// Copyright Mia Rolfe. All rights reserved.
#pragma once

#include <cstdint>
#include <Systems/Interface/AssetSystemInterface.h>

static constexpr size_t maxFilePathLength = 512u;

class AssetSystem : public AssetSystemInterface
{
public:
	AssetSystem();
	void Init() override;
	void Update() override;
	void Shutdown() override;

protected:
	char m_baseFilePath[maxFilePathLength]{};
	char m_assetsFilePath[maxFilePathLength]{};
};