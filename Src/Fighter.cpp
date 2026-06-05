#include "Fighter.hpp"

Fighter::Fighter(float x, float y)
{
    speed = 5.0f;
   speed = 5.0f;

    fighterShape.setSize(sf::Vector2f(50.f, 100.f));
    fighterShape.setPosition(x, y);
    fighterShape.setFillColor(sf::Color::Blue);
    velocityY = 0.0f;
    gravity = 0.5f;

    isJumping = false;

    groundY = y;

    texture.loadFromFile("assets/chabo mk.png");

    sprite.setTexture(texture);

    sprite.setPosition(x, y);

    sprite.setScale({0.5f, 0.5f});
}

void Fighter::MoveLeft()
{
    fighterShape.move(-speed, 0);
}

void Fighter::MoveLeft()
{
    fighterShape.move(-speed, 0);
}

void Fighter::MoveRight()
{
    fighterShape.move(speed, 0);
}

void Fighter::Jump()
{
    if (!isJumping)
    {
        velocityY = -12.0f;
        isJumping = true;
    }
}

void Fighter::Update()
{
    velocityY += gravity;

    fighterShape.move(0, velocityY);
    sprite.move({0, velocityY});

    if (fighterShape.getPosition().y >= groundY)
    if (sprite.getPosition().y >= groundY)
    {
        fighterShape.setPosition(
            fighterShape.getPosition().x,
            groundY
        sprite.setPosition(
            {sprite.getPosition().x, groundY}
        );

        velocityY = 0;
        isJumping = false;
    }
}

sf::RectangleShape Fighter::GetShape()
sf::Sprite Fighter::GetSprite()
{
    return fighterShape;
    return sprite;
}
