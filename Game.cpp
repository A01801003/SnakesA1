#include "Game.h"
# include<iostream>

Game::Game(const std::vector<std::string>& playerNames) : 
    currentPlayer(0), 
    board({1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30}), 
    players(playerNames.size()) 
{
    for (size_t i = 0; i < playerNames.size(); ++i) {
        players[i] = Player(playerNames[i]); 
    }
}

void Game::startGame() {
    while (true) {
        playTurn(currentPlayer);

        // Check if a player has won
        if (getPlayer(currentPlayer).getPosition() == getBoard().getNumberOfS()) {
            std::cout << "Player " << getPlayer(currentPlayer).getName() << " wins!" << std::endl;
            break;
        }

        currentPlayer = (currentPlayer + 1) % players.size();
    }
}

void Game::playTurn(int playerIndex) {
    std::cout << "Player " << getPlayer(playerIndex).getName() << "'s turn:" << std::endl;
    int diceRoll = rollDice();
    std::cout << "Dice roll: " << diceRoll << std::endl;
    int currentPosition = getPlayer(playerIndex).getPosition();
    int newPosition = currentPosition + diceRoll;

    if (newPosition > getBoard().getNumberOfS()) {
        std::cout << "You went past the end of the board. Stay where you are." << std::endl;
        newPosition = currentPosition; // Stay on the current position
    }

    int finalPosition = getBoard().getDestination(newPosition); 
    std::cout << "Player moved to: " << finalPosition << std::endl;

    getPlayer(playerIndex).setPosition(finalPosition);
}

int Game::rollDice() {
    return distribution(generator);
}

int Game::getCurrentPlayer() const {
    return currentPlayer;
}

Player Game::getPlayer(int index) const{ 
    return players[index];
}

Board Game::getBoard() const{
    return board;
}