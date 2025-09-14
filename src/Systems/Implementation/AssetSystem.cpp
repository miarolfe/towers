// Copyright Mia Rolfe. All rights reserved.
#include <Systems/Implementation/AssetSystem.h>

#include <cstring>
#include <SDL3/SDL.h>
#include <stb/stb_image.h>

AssetSystem::AssetSystem()
{
	
}

void AssetSystem::Init()
{
	const char* applicationBasePath = SDL_GetBasePath();
	snprintf(m_baseFilePath, maxFilePathLength, "%s", applicationBasePath);
	snprintf(m_assetsFilePath, maxFilePathLength, "%s%s", applicationBasePath, "assets/");
}

void AssetSystem::Update()
{

}

void AssetSystem::Shutdown()
{

}
