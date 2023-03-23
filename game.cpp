#include <iostream>
#include <windows.h>
#include "game.h"

void Hangman::GameLoop()
{
	system("cls");
	int guesses{};
	srand(time(NULL));
	int len = sizeof(wordList) / sizeof(wordList[0]);
	int n = rand() % len;
	std::string word = wordList[n];

	std::string LifePoints = "******";

	int wordLength = word.length();
	std::string unknown = std::string(word.length(), '*');

	std::cout << "lifepoints: [" << LifePoints << "] \n";
	std::cout << HANGMAN_ART[guesses];
	std::cout << std::endl;
	std::cout << unknown << '\n';

	char userGuess{};
	while (guesses != MAX_GUESSES)
	{
			std::cin >> userGuess;
			if(word.find(userGuess) != std::string::npos)
			{
				for (int i = 0; i < wordLength; ++i)
				{
					if (word[i] == userGuess)
					{
						unknown[i] = userGuess;
					}
				}
				system("cls");
				std::cout << "lifepoints: [" << LifePoints << "] \n";
				std::cout << HANGMAN_ART[guesses] << std::endl;
				std::cout << unknown << '\n';
				std::cout << "Correct Guess! \n";
				std::cin.clear();
				std::cin.ignore(256, '\n');
				if (unknown == word)
				{
					std::string winner = "You guessed the word correctly!";
					for (int i = 0; i < winner[i]; ++i)
					{
						std::cout << winner[i];
						Sleep(50);
					}
					std::cout << std::endl;
					system("pause");
					break;
				}
			}
			else
			{
				system("cls");
				++guesses;
				LifePoints[MAX_GUESSES-guesses] = ' ';
				std::cout << "lifepoints: [" << LifePoints << "] \n";
				std::cout << HANGMAN_ART[guesses] << std::endl;
				std::cout << unknown << '\n';
			}
	}
	if (guesses == MAX_GUESSES)
	{
		std::cout << "You Lost..." << std::endl;
		std::cout << "The word was: " << word << std::endl;
		system("pause");
	}
}