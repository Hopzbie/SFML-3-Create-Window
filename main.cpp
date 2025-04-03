// library
#include <SFML/Graphics.hpp>


// main program
int main()
{
    // create window
    sf::RenderWindow window(sf::VideoMode({800, 600}), "Title");

    // while window is still open
    while (window.isOpen())
    {
        // handle events
        while (std::optional event = window.pollEvent())
        {
            // when close button is clicked
            if (event->is<sf::Event::Closed>())
            {
                // close window
                window.close();
            }
        }

        // fill window with color
        window.clear(sf::Color(127, 127, 127));

        // display
        window.display();
    }

    
    // program end successfully
    return 0;
}