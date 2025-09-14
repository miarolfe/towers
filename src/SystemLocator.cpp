// Copyright Mia Rolfe. All rights reserved.
#include <SystemLocator.h>

#include <cassert>

AssetSystemInterface* SystemLocator::s_assetSystem = nullptr;
AudioSystemInterface* SystemLocator::s_audioSystem = nullptr;
EntitySystemInterface* SystemLocator::s_entitySystem = nullptr;
GraphicsSystemInterface* SystemLocator::s_graphicsSystem = nullptr;
InputSystemInterface* SystemLocator::s_inputSystem = nullptr;

void SystemLocator::RegisterAssetSystem(AssetSystemInterface* assetSystem)
{
	assert(assetSystem);

	s_assetSystem = assetSystem;
}

void SystemLocator::RegisterAudioSystem(AudioSystemInterface* audioSystem)
{
	assert(audioSystem);

	s_audioSystem = audioSystem;
}

void SystemLocator::RegisterEntitySystem(EntitySystemInterface* entitySystem)
{
	assert(entitySystem);

	s_entitySystem = entitySystem;
}

void SystemLocator::RegisterGraphicsSystem(GraphicsSystemInterface* graphicsSystem)
{
	assert(graphicsSystem);

	s_graphicsSystem = graphicsSystem;
}

void SystemLocator::RegisterInputSystem(InputSystemInterface* inputSystem)
{
	assert(inputSystem);

	s_inputSystem = inputSystem;
}

void SystemLocator::DeregisterAssetSystem()
{
	if (s_assetSystem)
	{
		s_assetSystem = nullptr;
	}
}

void SystemLocator::DeregisterAudioSystem()
{
	if (s_audioSystem)
	{
		s_audioSystem = nullptr;
	}
}

void SystemLocator::DeregisterEntitySystem()
{
	if (s_entitySystem)
	{
		s_entitySystem = nullptr;
	}
}

void SystemLocator::DeregisterGraphicsSystem()
{
	if (s_graphicsSystem)
	{
		s_graphicsSystem = nullptr;
	}
}

void SystemLocator::DeregisterInputSystem()
{
	if (s_inputSystem)
	{
		s_inputSystem = nullptr;
	}
}

AssetSystemInterface* SystemLocator::GetAssetSystem()
{
	return s_assetSystem;
}

AudioSystemInterface* SystemLocator::GetAudioSystem()
{
	return s_audioSystem;
}

EntitySystemInterface* SystemLocator::GetEntitySystem()
{
	return s_entitySystem;
}

GraphicsSystemInterface* SystemLocator::GetGraphicsSystem()
{
	return s_graphicsSystem;
}

InputSystemInterface* SystemLocator::GetInputSystem()
{
	return s_inputSystem;
}
