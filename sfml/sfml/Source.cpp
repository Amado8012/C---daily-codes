#include<SFML/Graphics.hpp>


//function declaration
void drawBirb(int xpos, int ypos, int color[3]);

void drawFlower(int xpos, int ypos, int color[3]);


sf::RenderWindow window(sf::VideoMode(800, 800), "Happy Spring!"); //set up game window

int main() {//////////////////////////////////////////////////////////////////////////////////////////////////

	sf::Event game_event;

	//this next line is an array. Arrays are a lot like python lists.
	int birbColor[] = { 255, 200, 200 }; //set up an array of colors to make your birb PINK!
	int FlowerColer[] = { 255, 200, 200 }; 

	while (window.isOpen()) {//GAME LOOP OMG-------------------------------------
		while (window.pollEvent(game_event)) {
			if (game_event.type == sf::Event::Closed) {
				window.close();
			}
		}
		window.clear(sf::Color::Black);

		drawFlower(200, 300, FlowerColer);
		int FlowerColer2[] = { 128, 0 ,0 };
		int FlowerColer3[] = { 0, 0 ,255 };
		int FlowerColer4[] = { 0, 0 ,128 };

		drawFlower(300, 400, FlowerColer2);
		
		drawFlower(400, 500, FlowerColer3);

		drawFlower(100, 200, FlowerColer4);

		drawBirb(200, 200, birbColor); //function call
		int birdColor4[] = { 255,0, 200 };
		int birdColor2[] = { 255, 200, 20 };
		int birdColor3[] = { 5, 200, 200 };


		drawBirb(300, 300, birbColor); //function call

		drawBirb(400, 400, birdColor2); //function call

		drawBirb(500, 500, birdColor3); //function call
		window.display();

	}//end game loop-----------------------------------------------

}//////////////////////////////////////////////////////////////////////////////////////////////////

void drawFlower(int xpos, int ypos, int color[3]) {
	sf::CircleShape body;
	sf::RectangleShape stem;

	//leggies
	stem.setPosition(xpos + 17, ypos + 35);
	stem.setFillColor(sf::Color(250, 250, 250));
	stem.setSize(sf::Vector2f(5, 15));
	window.draw(stem); //first leg
	stem.setPosition(xpos + 25, ypos + 35);
	

	//body 
	body.setRadius(20);
	body.setFillColor((sf::Color(color[0], color[10], color[2]))); //noticing accessing slots of an array is just like getting to slots of a list
	body.setPosition(xpos, ypos);
	window.draw(body);


	//leggies
	stem.setPosition(xpos + 17, ypos + 35);
	stem.setFillColor(sf::Color(250, 250, 250));
	stem.setSize(sf::Vector2f(5, 15));
	window.draw(stem); //first leg
	stem.setPosition(xpos + 25, ypos + 35);


	//body 
	body.setRadius(20);
	body.setFillColor((sf::Color(color[0], color[10], color[2]))); //noticing accessing slots of an array is just like getting to slots of a list
	body.setPosition(xpos, ypos);
	window.draw(body);

	
	//leggies
	stem.setPosition(xpos + 17, ypos + 35);
	stem.setFillColor(sf::Color(250, 250, 250));
	stem.setSize(sf::Vector2f(5, 15));
	window.draw(stem); //first leg
	stem.setPosition(xpos + 25, ypos + 35);


	//body 
	body.setRadius(20);
	body.setFillColor((sf::Color(color[0], color[10], color[2]))); //noticing accessing slots of an array is just like getting to slots of a list
	body.setPosition(xpos, ypos);
	window.draw(body);


	//leggies
	stem.setPosition(xpos + 17, ypos + 35);
	stem.setFillColor(sf::Color(250, 250, 250));
	stem.setSize(sf::Vector2f(5, 15));
	window.draw(stem); //first leg
	stem.setPosition(xpos + 25, ypos + 35);


	//body 
	body.setRadius(20);
	body.setFillColor((sf::Color(color[0], color[10], color[2]))); //noticing accessing slots of an array is just like getting to slots of a list
	body.setPosition(xpos, ypos);
	window.draw(body);

	
}

//function definition
void drawBirb(int xpos, int ypos, int color[3]) {
	//SFML stuff
	sf::CircleShape body;
	sf::CircleShape beak; //SFML lets you set the number of sides of a circle, so this is how we make a triangle!
	sf::RectangleShape feets;

	//leggies
	feets.setPosition(xpos + 10, ypos + 35);
	feets.setFillColor(sf::Color(250, 250, 250));
	feets.setSize(sf::Vector2f(5, 15));
	window.draw(feets); //first leg
	feets.setPosition(xpos + 25, ypos + 35);
	window.draw(feets); //second leg

	//body 
	body.setRadius(20);
	body.setFillColor((sf::Color(color[0], color[1], color[2]))); //noticing accessing slots of an array is just like getting to slots of a list
	body.setPosition(xpos, ypos);
	window.draw(body);

	//birb eyes
	body.setRadius(4);
	body.setFillColor((sf::Color(0, 0, 0))); //black
	body.setPosition(xpos + 15, ypos + 10);
	window.draw(body); //first eye
	body.setPosition(xpos + 30, ypos + 10);
	window.draw(body); //second eye

	//birb beak
	beak.setPointCount(3); //make it a triangle
	beak.setRadius(10);
	beak.setFillColor((sf::Color(20, 150, 50))); //orange
	beak.setPosition(xpos + 17, ypos + 10);
	window.draw(beak);


	//leggies
	feets.setPosition(xpos + 10, ypos + 35);
	feets.setFillColor(sf::Color(200, 150, 0));
	feets.setSize(sf::Vector2f(5, 15));
	window.draw(feets); //first leg
	feets.setPosition(xpos + 25, ypos + 35);
	window.draw(feets); //second leg

	//body 
	body.setRadius(20);
	body.setFillColor((sf::Color(color[0], color[1], color[2]))); //noticing accessing slots of an array is just like getting to slots of a list
	body.setPosition(xpos, ypos);
	window.draw(body);

	//birb eyes
	body.setRadius(4);
	body.setFillColor((sf::Color(0, 0, 0))); //black
	body.setPosition(xpos + 15, ypos + 10);
	window.draw(body); //first eye
	body.setPosition(xpos + 30, ypos + 10);
	window.draw(body); //second eye

	//birb beak
	beak.setPointCount(3); //make it a triangle
	beak.setRadius(10);
	beak.setFillColor((sf::Color(200, 150, 0))); //orange
	beak.setPosition(xpos + 17, ypos + 10);
	window.draw(beak);


	//leggies
	feets.setPosition(xpos + 10, ypos + 35);
	feets.setFillColor(sf::Color(200, 150, 0));
	feets.setSize(sf::Vector2f(5, 15));
	window.draw(feets); //first leg
	feets.setPosition(xpos + 25, ypos + 35);
	window.draw(feets); //second leg

	//body 
	body.setRadius(20);
	body.setFillColor((sf::Color(color[0], color[1], color[2]))); //noticing accessing slots of an array is just like getting to slots of a list
	body.setPosition(xpos, ypos);
	window.draw(body);

	//birb eyes
	body.setRadius(4);
	body.setFillColor((sf::Color(0, 0, 0))); //black
	body.setPosition(xpos + 15, ypos + 10);
	window.draw(body); //first eye
	body.setPosition(xpos + 30, ypos + 10);
	window.draw(body); //second eye

	//birb beak
	beak.setPointCount(3); //make it a triangle
	beak.setRadius(10);
	beak.setFillColor((sf::Color(200, 150, 0))); //orange
	beak.setPosition(xpos + 17, ypos + 10);
	window.draw(beak);

	
	//leggies
	feets.setPosition(xpos + 10, ypos + 35);
	feets.setFillColor(sf::Color(200, 150, 0));
	feets.setSize(sf::Vector2f(5, 15));
	window.draw(feets); //first leg
	feets.setPosition(xpos + 25, ypos + 35);
	window.draw(feets); //second leg

	//body 
	body.setRadius(20);
	body.setFillColor((sf::Color(color[0], color[1], color[2]))); //noticing accessing slots of an array is just like getting to slots of a list
	body.setPosition(xpos, ypos);
	window.draw(body);

	//birb eyes
	body.setRadius(4);
	body.setFillColor((sf::Color(0, 0, 0))); //black
	body.setPosition(xpos + 15, ypos + 10);
	window.draw(body); //first eye
	body.setPosition(xpos + 30, ypos + 10);
	window.draw(body); //second eye

	//birb beak
	beak.setPointCount(3); //make it a triangle
	beak.setRadius(10);
	beak.setFillColor((sf::Color(200, 150, 0))); //orange
	beak.setPosition(xpos + 17, ypos + 10);
	window.draw(beak);



	
}
