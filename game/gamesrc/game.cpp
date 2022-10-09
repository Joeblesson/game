#include <iostream>
#include "game.h"

//Constructors & Deconstructors

Game::Game() {
    this->initVars();
    this->initWindow();
}

Game::~Game() {
    delete this->window;
}

//Accessors

const bool Game::running() const {
    return this->window->isOpen();
}

//Functions

void Game::pollEvents() {
    //event polling
    while(this->window->pollEvent(this->ev)) {
        switch (this->ev.type){
            case sf::Event::Closed:
                this->window->close();
                break;

            case sf::Event::KeyPressed:
                if(this->ev.key.code == sf::Keyboard::J) {
                    std::cout << "Key \"J\" pressed!\n";
                }
                break;
            default:
                break;
        }
    }
}

void Game::update() {
    this->pollEvents();
}

void Game::render() {

    ///////////////////////////////
    // @return void              //
    // - clear old frame         //
    // - render objects          //
    // - display frame in window //
    //                           //
    // Renders the game objects  //
    ///////////////////////////////

    this->window->clear(sf::Color(255, 0, 0, 255));
    //Draw here
    this->window->display();
}

//Private Functions
void Game::initVars() {
    this->window = nullptr;
}

void Game::initWindow() {
    this -> videoMode.height = 600;
    this->videoMode.width = 800;
    this->window = new sf::RenderWindow(this->videoMode, "game ig", sf::Style::Titlebar | sf::Style::Close);

}

