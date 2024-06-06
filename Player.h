#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <string>

class Player {
private:
    std::string name;
    int position;

public:
    Player(const std::string& name);
    std::string getName() const;
    int getPosition() const;
    void setPosition(int newPosition);
};

#endif  // PLAYER_H