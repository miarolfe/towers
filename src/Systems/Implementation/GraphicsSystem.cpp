// Copyright Mia Rolfe. All rights reserved.
#include <Systems/Implementation/GraphicsSystem.h>

GraphicsSystem::GraphicsSystem()
{

}

void GraphicsSystem::Init()
{
	m_window = SDL_CreateWindow("Towers", 640, 480, 0);
}

void GraphicsSystem::Update()
{

}

void GraphicsSystem::Shutdown()
{
	SDL_DestroyWindow(m_window);
}

void GraphicsSystem::Draw()
{
	
}

void GraphicsSystem::OnWindowResized(int32_t width, int32_t height)
{
	
}
