// Ship.h
// Created by Michael Bilan and Bryant Klug on 2/12/2019.
// Last Modified: 2/20/2019

#ifndef CS372_PROJ1_SHIP_H
#define CS372_PROJ1_SHIP_H

#include <string>
#include <vector>

struct coordinate{
    int x;
    char y;
};

class Ship {
public:
    Ship(){
        _name = "Battleship";
        _size = 4;
        _position.resize(_size);
        for(int n = 0; n < _size; ++n){
            coordinate newPos = { 1, static_cast<char>('A' + n)};
            _position[n] = newPos;
        }
    }

    std::string &getName() {
        return _name;
    }
    void setName(std::string  const &newName){
        _name = newName;
    }
    int &getSize(){
        return _size;
    }
    std::vector<coordinate> getPosition() {
        return _position;
    }
    coordinate getPosition(int x) {
        return _position[x];
    }
private:
    std::string _name;
    int _size;
    std::vector<coordinate> _position;
};


#endif //CS372_PROJ1_SHIP_H
