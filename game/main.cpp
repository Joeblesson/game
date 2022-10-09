#include <iostream>

#include "gamesrc/game.h"

int main() {
    //Init Game engine
    Game game;

    //Game
    while(game.running()) {
        

        //Update
        game.update();


        //Render
        game.render();

    }

    return 0;

}