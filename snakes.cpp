#include <iostream>
#include <vector>
#include "Game.h" // Include the Game header file

int main() {
    std::vector<std::string> playerNames = {"Player 1", "Player 2"};

    Game game(playerNames); // Initialize the game
    game.startGame(); // Start the game loop

    return 0;
}