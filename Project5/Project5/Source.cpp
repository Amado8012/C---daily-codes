#include <SFML/Graphics.hpp> //bring in library

int main() //starting point of all C++ programs
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "Trees"); //set up screen
	sf::CircleShape circle; //tell the program we're using this shape
	sf::RectangleShape rect; //this one too!



	while (window.isOpen())//GAME LOOP--------------------------------
	{
		sf::Event event; //look for keyboard/mouse/etc clicks
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed) //check if player has closed window with top left 'x' button
				window.close();

		}

		//render section-------------------------------
		window.clear(); //wipe screen (needed more for animations)

		//left branch
		circle.setRadius(30);
		circle.setFillColor((sf::Color(0, 100, 80)));
		circle.setPosition(200, 180);
		window.draw(circle);

		//right branch
		circle.setRadius(30);
		circle.setFillColor((sf::Color(80, 100, 0)));
		circle.setPosition(250, 180);
		window.draw(circle);

		//top branch
		circle.setRadius(30);
		circle.setFillColor((sf::Color(0, 100, 0)));
		circle.setPosition(225, 150);
		window.draw(circle);

		//trunk
		rect.setPosition(245, 200);
		rect.setFillColor(sf::Color(100, 80, 0));
		rect.setSize(sf::Vector2f(20, 100));
		window.draw(rect);

		//left branch
		circle.setRadius(40);
		circle.setFillColor((sf::Color(0, 100, 80)));
		circle.setPosition(400, 280);
		window.draw(circle);

		//right branch
		circle.setRadius(40);
		circle.setFillColor((sf::Color(80, 100, 0)));
		circle.setPosition(450, 280);
		window.draw(circle);

		//top branch
		circle.setRadius(40);
		circle.setFillColor((sf::Color(50, 100, 0)));
		circle.setPosition(425, 250);
		window.draw(circle);

		//trunk
		rect.setPosition(445, 300);
		rect.setFillColor(sf::Color(100, 80, 0));
		rect.setSize(sf::Vector2f(30, 200));
		window.draw(rect);

		//left branch
		circle.setRadius(40);
		circle.setFillColor((sf::Color(0, 100, 80)));
		circle.setPosition(200, 380);
		window.draw(circle);

		//right branch
		circle.setRadius(40);
		circle.setFillColor((sf::Color(80, 100, 0)));
		circle.setPosition(250, 380);
		window.draw(circle);

		//top branch
		circle.setRadius(40);
		circle.setFillColor((sf::Color(50, 100, 0)));
		circle.setPosition(225, 350);
		window.draw(circle);

		//trunk
		rect.setPosition(245, 400);
		rect.setFillColor(sf::Color(100, 80, 0));
		rect.setSize(sf::Vector2f(30, 200));
		window.draw(rect);

		//bush 
		circle.setRadius(20);
		circle.setFillColor((sf::Color(50, 100, 0)));
		circle.setPosition(330, 550);
		window.draw(circle);

		//bush 
		circle.setRadius(20);
		circle.setFillColor((sf::Color(80, 150, 0)));
		circle.setPosition(345, 545);
		window.draw(circle);

		//bush 
		circle.setRadius(20);
		circle.setFillColor((sf::Color(70, 120, 0)));
		circle.setPosition(345, 560);
		window.draw(circle);

		//bush 
		circle.setRadius(20);
		circle.setFillColor((sf::Color(50, 100, 0)));
		circle.setPosition(430, 150);
		window.draw(circle);

		//bush 
		circle.setRadius(20);
		circle.setFillColor((sf::Color(80, 150, 0)));
		circle.setPosition(445, 145);
		window.draw(circle);

		//bush 
		circle.setRadius(20);
		circle.setFillColor((sf::Color(70, 120, 0)));
		circle.setPosition(445, 160);
		window.draw(circle);

		//bush 
		circle.setRadius(20);
		circle.setFillColor((sf::Color(60, 140, 0)));
		circle.setPosition(430, 160);
		window.draw(circle);

		//bush 
		circle.setRadius(20);
		circle.setFillColor((sf::Color(50, 100, 0)));
		circle.setPosition(130, 350);
		window.draw(circle);

		//bush 
		circle.setRadius(20);
		circle.setFillColor((sf::Color(80, 150, 0)));
		circle.setPosition(145, 345);
		window.draw(circle);

		//bush 
		circle.setRadius(20);
		circle.setFillColor((sf::Color(70, 120, 0)));
		circle.setPosition(145, 360);
		window.draw(circle);

		//bush 
		circle.setRadius(20);
		circle.setFillColor((sf::Color(50, 100, 0)));
		circle.setPosition(530, 450);
		window.draw(circle);

		//bush 
		circle.setRadius(20);
		circle.setFillColor((sf::Color(80, 150, 0)));
		circle.setPosition(545, 445);
		window.draw(circle);

		//bush 
		circle.setRadius(20);
		circle.setFillColor((sf::Color(70, 120, 0)));
		circle.setPosition(545, 460);
		window.draw(circle);

		window.display();

	}//end game loop-------------------------------------------------



	return 0; //tell the operating system we finished the program successfully 
} //end main