#include <SFML/Graphics.hpp>
#include <iostream>
#include "Player.h"
#include "ChaserEnemy.h"
#include "PatrollingEnemy.h"


const int WINDOW_WIDTH = 1920;
const int WINDOW_HEIGHT = 1080;

int main() {

	sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Game");
	Player p(50, 50, "asset//banane pix.png", 0.05, 3);
    Chaser c(50, 50, "asset//pêche.jpg", 0.05, 3);
    Patrolling pa(50, 50, "asset//Pastèque.jpg", 0.05, 3);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close(); 
        }
        p.handlInput();
        c.handlInput();
        pa.handlInput();
        window.clear();
        window.draw(p.sprite);
        window.draw(c.sprite);
        window.draw(pa.sprite);
        window.display();
    }



};