#include "Header.h"
#include <iostream>



PlayerData createPlayer1()
{
	PlayerData player1 = {};
	std::cout << "Enter your player's name: " << std::endl;
	std::cin >> player1.name;
	std::cout << "Enter your score: " << std::endl;
	std::cin >> player1.score;
	std::cout << "You entered: " << player1.name << std::endl << player1.score << std::endl;

	return player1;
}

Shop generalStore()
{
	Shop generalStore1 = {};
	generalStore1.gold = 2500;
	char item;
	std::cout << "Welcome to my shop, what would you like to buy?" << std::endl;

	for (int i = 0; i < 5; ++i)
	{
		std::cout << generalStore1.itemName[i] << std::endl;
		std::cout << " X "<< generalStore1.quanity[i] << std::endl;
		std::cout << "$"<< generalStore1.price[i] << std::endl;
	}
	
	std::cin >> item; 
	
	
	
	return generalStore1;
}