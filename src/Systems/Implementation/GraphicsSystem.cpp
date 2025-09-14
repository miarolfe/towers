// Copyright Mia Rolfe. All rights reserved.
#include <Systems/Implementation/GraphicsSystem.h>

#include <cstdio>
#include <SystemLocator.h>
#include <Vec.h>

GraphicsSystem::GraphicsSystem()
{

}

void GraphicsSystem::Init()
{
	m_window = SDL_CreateWindow("Towers", 640, 480, 0);
	m_renderer = SDL_CreateRenderer(m_window, nullptr);
}

void GraphicsSystem::Update()
{

}

void GraphicsSystem::Shutdown()
{
	SDL_DestroyRenderer(m_renderer);
	SDL_DestroyWindow(m_window);
}

void GraphicsSystem::Draw()
{
	SDL_SetRenderDrawColor(m_renderer, 255, 255, 255, 255);
	SDL_RenderClear(m_renderer);

	const Vec2 mousePosition = SystemLocator::GetInputSystem()->GetMousePosition();
	char buf[128];
	sprintf(buf, "%f %f", mousePosition.x, mousePosition.y);
	
	SDL_SetRenderDrawColor(m_renderer, 0, 0, 0, 255);
	SDL_RenderDebugText(m_renderer, 25, 25, buf);
	// TODO: ...

	SDL_RenderPresent(m_renderer);
}

void GraphicsSystem::OnWindowResized(int32_t width, int32_t height)
{

}
