#ifndef _GAME_H_
#define _GAME_H_
# include <iostream>
#include <random>
#include <vector>

#include "Player.h"
#include "Board.h"

class Game {
private:
    int currentPlayer;
    Board board;
    std::vector<Player> players;
    std::default_random_engine generator;
    std::uniform_int_distribution<int> distribution{1, 6};

public:
    Game(const std::vector<std::string>& playerNames);
    void startGame();
    void playTurn(int playerIndex);
    int rollDice();
    int getCurrentPlayer() const;
    Player getPlayer(int index) const;
    Board getBoard() const;
};

#endif  // GAME_H