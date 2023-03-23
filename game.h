#pragma once

#ifndef GAME_TEST
#define GAME_TEST

const std::string HANGMAN_ART[7] = {
        " +---+\n"
        " |  \\|\n"
        "     |\n"
        "     |\n"
        "     |\n"
        "     |\n"
        "==========",
        " +---+\n"
        " |  \\|\n"
        " O   |\n"
        "     |\n"
        "     |\n"
        "     |\n"
        "==========",
        " +---+\n"
        " |  \\|\n"
        " O   |\n"
        " |   |\n"
        "     |\n"
        "     |\n"
        "==========",
        " +---+\n"
        " |  \\|\n"
        " O   |\n"
        "/|   |\n"
        "     |\n"
        "     |\n"
        "==========",
        " +---+\n"
        " |  \\|\n"
        " O   |\n"
        "/|\\  |\n"
        "     |\n"
        "     |\n"
        "==========",
        " +---+\n"
        " |   |\n"
        " O   |\n"
        "/|\\  |\n"
        "/    |\n"
        "     |\n"
        "==========",
        " +---+\n"
        " |  \\|\n"
        " O   |\n"
        "/|\\  |\n"
        "/ \\  |\n"
        "     |\n"
        "=========="
};

const std::string wordList[] = {"school", "anything", "murakami", "immaculate", "fisherman"};

const int MAX_GUESSES = 6;

class Hangman {

	public: 
        void GameLoop();
    private:
        std::string word;
};

#endif