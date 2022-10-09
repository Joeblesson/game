#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>
#include <SFML/Network.hpp>

/////////////////////////////////////////
// Class that acts as the game engine  //
// Wrapper class.                      //
/////////////////////////////////////////


class Game {
    private:
        //Variables
        //Window
        sf::RenderWindow* window;
        sf::VideoMode videoMode;
        sf::Event ev;

        //Private functions
        void initVars();
        void initWindow();
    public:
        //Constructors & Destructors
        Game();
        virtual ~Game();

        //Accessors
        const bool running() const;

        //Functions
        void pollEvents();
        void update();
        void render();
};

#endif