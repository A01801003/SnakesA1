#include "Board.h"
#include<iostream>


Board::Board(const std::vector<int>& boardConfiguration) : 
    squares(boardConfiguration) {}

int Board::getDestination(int squareNumber) const {
    if (squareNumber <= squares.size()) {
        return squares[squareNumber - 1]; 
    } else {
        std::cout << "Invalid square number: " << squareNumber << std::endl;
        return squareNumber; // Handle invalid square gracefully
    }
}

