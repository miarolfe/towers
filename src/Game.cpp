// Copyright Mia Rolfe. All rights reserved.
#include <Game.h>

Game::Game()
{

}

void Game::Init()
{
	m_graphicsSystem.Init();
}

void Game::Frame()
{
	m_graphicsSystem.Update();

	m_graphicsSystem.Draw();
}

void Game::Shutdown()
{
	m_graphicsSystem.Shutdown();
}

bool Game::IsRunning()
{
	return false;
}
