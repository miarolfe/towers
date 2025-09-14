// Copyright Mia Rolfe. All rights reserved.
#pragma once

#include <Systems/Interface/AudioSystemInterface.h>

class AudioSystem : public AudioSystemInterface
{
public:
	AudioSystem();
	void Init() override;
	void Update() override;
	void Shutdown() override;
};