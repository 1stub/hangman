#include <iostream>
#include "game.h"

int main()
{
	Hangman game;

	int choice{};
	do 
	{
		std::cout << "Welcome to Hangman! Please select one of the options below:\n";
		std::cout << "[1] Play \n";
		std::cout << "[2] Exit \n";
		std::cin >> choice;
		if (choice == 1)
		{
			std::cin.clear();
			std::cin.ignore(256, '\n');
			game.GameLoop();
			system("cls");
		}
		if (choice == 2)
		{
			std::cout << "Goodbye" << std::endl;
		}
		if ( choice != 1 && choice != 2)
		{
			std::cout << "Please enter a valid option" << std::endl;
			std::cin.clear();
			std::cin.ignore(256, '\n');
			system("cls");
		}
	} while (choice != 2);
}
