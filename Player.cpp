#include "Player.h"

Player::Player(const std::string& name) : 
    name(name),
    position(1) {}

std::string Player::getName() const {
    return name;
}

int Player::getPosition() const {
    return position;
}

void Player::setPosition(int newPosition) {
    position = newPosition;
}