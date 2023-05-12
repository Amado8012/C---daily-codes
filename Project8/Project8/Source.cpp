#include <SFML/Graphics.hpp> //import SFML library 

int main()//starting point of program 
{
	//create game windo 
	sf::RenderWindow window(sf::VideoMode(600, 600), "Red Circle simulator!");
	//create shape
	sf::CircleShape shape(300.f);
	//set color 
	shape.setFillColor(sf::Color::Red);

	while (window.isOpen()) //Game Loop!
	{
		sf::Event event; //event queue 
		while (window.pollEvent(event)) //look for events 
		{
			if (event.type == sf::Event::Closed) //check if window's close button is clicked
				window.close(); //kill game window
		}

		window.clear(); //wipe screen 
		window.draw(shape); //draw shape 
		window.display(); //flip screen
			
	}

	return 0; //tell operating system all is chill
}