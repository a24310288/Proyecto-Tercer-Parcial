#pragma once

#include <SFML/Graphics.hpp>

class Fighter
{
public:

    Fighter(float x, float y);

    void MoveLeft();
    void MoveRight();
    void Jump ();

    sf::RectangleShape GetShape();
    sf::Sprite GetSprite();

private:

    float speed;

    float velocityY;
    float gravity;

    bool isJumping;

    float groundY;

    sf::RectangleShape fighterShape;
    sf::Texture texture;
    sf::Sprite sprite;
};