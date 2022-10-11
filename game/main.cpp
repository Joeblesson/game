#include "include.h"

using std::string;

int main() {
    int fps;
    string title;
    char choice;
    sf::Window window(sf::VideoMode(800, 600), "cool window", sf::Style::Close);
    
    while(window.isOpen()) {
        sf::Event event;
        std::cout << "do you want to change the title (Y/N)? ";
        std::cin >> choice;
        switch (choice)
        {
        case 'Y':
            std::cout << "Okay then: ";
            std::cin >> title;
            window.setTitle(title);
            _sleep(5000);
            window.close();
            break;
        case 'N':
            std::cout << "Okay then...";
            _sleep(1000);
            window.close();
            break;
        default:
            std::cout << "Wrong answer.\n";
            _sleep(1000);
            window.close();
        }
        while(window.pollEvent(event)) {
            if(event.type == sf::Event::Closed) {
                window.close();
            }
        }
    }
    return 0;
}