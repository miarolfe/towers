// Copyright Mia Rolfe. All rights reserved.
#include <Game.h>

int main(int argc, char* args[])
{
    Game* game = new Game;
    game->Init();

    while (game->IsRunning())
    {
        game->Frame();
    }

    game->Shutdown();
    delete game;
}