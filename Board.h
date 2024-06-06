#ifndef BOARD_H
#define BOARD_H

#include <vector>

class Board {
private:
    std::vector<int> squares;

public:
    Board(const std::vector<int>& boardConfiguration);
    int getDestination(int squareNumber) const;
    int getNumberOfS() const;
};

#endif  // BOARD_H