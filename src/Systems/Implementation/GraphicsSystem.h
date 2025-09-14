// Copyright Mia Rolfe. All rights reserved.
#pragma once

#include <cstdint>
#include <SDL3/SDL.h>
#include <Systems/Interface/GraphicsSystemInterface.h>

class GraphicsSystem : public GraphicsSystemInterface
{
public:
	GraphicsSystem();
	void Init() override;
	void Update() override;
	void Shutdown() override;
	
	void Draw();
	void OnWindowResized(int32_t width, int32_t height) override;

protected:
	SDL_Window* m_window;
	SDL_Renderer* m_renderer;
};