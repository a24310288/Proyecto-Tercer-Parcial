#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

#include "Fighter.hpp"

int main()
{
    std::string selectedCharacter;
    std::string selectedCharacter1;
    std::string selectedCharacter2;

    int option;
    int option1;
    int option2;

    std::cout << "===== SELECCIONA PERSONAJE =====\n";
    std::cout << "\n===== JUGADOR 1 =====\n";
    std::cout << "1 - Chabo mk\n";
    std::cout << "2 - Omniman mk\n";
    std::cout << "3 - kratos\n";
    std::cout << "4 - rengoku\n";
    std::cout << "2 - omniman mk\n";
    std::cout << "3 - kratos mk\n";
    std::cout << "4 - rengoku mk\n";

    std::cin >> option;
    std::cin >> option1;

    if(option == 1)
    {
        selectedCharacter = "assets/chavo.png";
    }
    if(option1 == 1)
        selectedCharacter1 = "assets/chabo mk.png";

    if(option == 2)
    {
        selectedCharacter = "assets/omniman.png";
    }
    if(option1 == 2)
        selectedCharacter1 = "assets/omniman mk.png";

    if(option == 3)
    {
        selectedCharacter = "assets/kratos.png";
    }
    if(option1 == 3)
        selectedCharacter1 = "assets/kratos mk.png";

    if(option == 4)
    {
        selectedCharacter = "assets/rengoku.png";
    }
    sf::RenderWindow window(
        sf::VideoMode({1280, 720}),
        "Mortal Kombat"
    );
    if(option1 == 4)
        selectedCharacter1 = "assets/rengoku mk.png";

    std::cout << "\n===== JUGADOR 2 =====\n";
    std::cout << "1 - Chabo mk\n";
    std::cout << "2 - omniman mk\n";
    std::cout << "3 - Kratos mk\n";
    std::cout << "4 - rengoku mk\n";

    std::cin >> option2;

    if(option2 == 1)
        selectedCharacter2 = "assets/chabo mk.png";

    if(option2 == 2)
        selectedCharacter2 = "assets/omniman mk.png";

    if(option2 == 3)
        selectedCharacter2 = "assets/kratos mk.png";

    if(option2 == 4)
        selectedCharacter2 = "assets/rengoku mk.png";

    Fighter player(
    Fighter player1(
        200,
        500,
        selectedCharacter
        selectedCharacter1
    );

    Fighter player2(
        900,
        500,
        selectedCharacter2
    );

    while (window.isOpen())
    sf::RenderWindow window(
        sf::VideoMode({1280, 720}),
        "Mortal Kombat"
    );

    while(window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        while(const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            if(event->is<sf::Event::Closed>())
            {
                window.close();
            }
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
        {
            player1.MoveLeft();
        }

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
        {
            player.MoveLeft();
            player1.MoveRight();
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Space))
        {
            player.MoveRight();
            player1.Jump();
        }

         if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Space))
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left))
        {
            player.Jump();
            player2.MoveLeft();
        }
         
        player.Update();

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right))
        {
            player2.MoveRight();
        }

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::RShift))
        {
            player2.Jump();
        }

        player1.Update();
        player2.Update();

        window.clear();

        window.draw(player.GetSprite());
        window.draw(player1.GetSprite());
        window.draw(player2.GetSprite());

        window.display();
    }

    return 0;
}
