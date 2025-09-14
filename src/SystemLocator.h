// Copyright Mia Rolfe. All rights reserved.
#pragma once

#include <Systems/Interface/AssetSystemInterface.h>
#include <Systems/Interface/AudioSystemInterface.h>
#include <Systems/Interface/EntitySystemInterface.h>
#include <Systems/Interface/GraphicsSystemInterface.h>
#include <Systems/Interface/InputSystemInterface.h>

class SystemLocator
{
public:
	static void RegisterAssetSystem(AssetSystemInterface* assetSystem);
	static void RegisterAudioSystem(AudioSystemInterface* audioSystem);
	static void RegisterEntitySystem(EntitySystemInterface* entitySystem);
	static void RegisterGraphicsSystem(GraphicsSystemInterface* graphicsSystem);
	static void RegisterInputSystem(InputSystemInterface* inputSystem);

public:
	static void DeregisterAssetSystem();
	static void DeregisterAudioSystem();
	static void DeregisterEntitySystem();
	static void DeregisterGraphicsSystem();
	static void DeregisterInputSystem();

public:
	static AssetSystemInterface* GetAssetSystem();
	static AudioSystemInterface* GetAudioSystem();
	static EntitySystemInterface* GetEntitySystem();
	static GraphicsSystemInterface* GetGraphicsSystem();
	static InputSystemInterface* GetInputSystem();

protected:
	static AssetSystemInterface* s_assetSystem;
	static AudioSystemInterface* s_audioSystem;
	static EntitySystemInterface* s_entitySystem;
	static GraphicsSystemInterface* s_graphicsSystem;
	static InputSystemInterface* s_inputSystem;
};