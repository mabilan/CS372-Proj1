// Ship.h
// Created by Michael Bilan and Bryant Klug on 2/12/2019.
// Last Modified: 2/12/2019

#ifndef CS372_PROJ1_SHIP_H
#define CS372_PROJ1_SHIP_H

#include <string>

class Ship {
public:
    std::string &getName() {
        return _name;
    }

    void setName(std::string  const &newName){
        _name = newName;
    }

    int &getSize(){
        return _size;
    }
private:
    std::string _name;
    int _size = 1;
};


#endif //CS372_PROJ1_SHIP_H
