// Copyright Mia Rolfe. All rights reserved.
#include <Game.h>

Game::Game()
{

}

void Game::Init()
{
	SDL_InitSubSystem(SDL_INIT_VIDEO);

	m_graphicsSystem.Init();
	m_inputSystem.Init();
}

void Game::Frame()
{
	m_graphicsSystem.Update();
	m_inputSystem.Update();

	SDL_Event event;
	while (SDL_PollEvent(&event))
	{
		switch (event.type)
		{
			event.window.data1;
			case SDL_EVENT_QUIT:
				m_isRunning = false;
				break;
			case SDL_EVENT_WINDOW_RESIZED:
				m_graphicsSystem.OnWindowResized(event.window.data1, event.window.data2);
				break;
			case SDL_EVENT_KEY_DOWN:
				event.key.key;
				m_inputSystem.OnKeyDown(event.key.key);
				break;
			case SDL_EVENT_KEY_UP:
				m_inputSystem.OnKeyUp(event.key.key);
				break;
			case SDL_EVENT_MOUSE_MOTION:
				m_inputSystem.OnMouseMotion
				(
					event.motion.x, 
					event.motion.y, 
					event.motion.xrel, 
					event.motion.yrel
				);
				break;
			case SDL_EVENT_MOUSE_BUTTON_DOWN:
				m_inputSystem.OnMouseButtonDown(event.button.button);
				break;
			case SDL_EVENT_MOUSE_BUTTON_UP:
				m_inputSystem.OnMouseButtonUp(event.button.button);
				break;
		}
	}

	m_graphicsSystem.Draw();
}

void Game::Shutdown()
{
	m_graphicsSystem.Shutdown();
	m_inputSystem.Shutdown();

	SDL_QuitSubSystem(SDL_INIT_VIDEO);
	SDL_Quit();
}

bool Game::IsRunning()
{
	return m_isRunning;
}
