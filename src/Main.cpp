// Copyright Mia Rolfe. All rights reserved.
#include <Game.h>

int main()
{
    Game* game = new Game;
    game->Init();

    while (game->IsRunning())
    {
        game->Frame();
    }

    game->Shutdown();
}