// Ship.h
// Created by Michael Bilan and Bryant Klug on 2/12/2019.
// Last Modified: 2/20/2019

#ifndef CS372_PROJ1_SHIP_H
#define CS372_PROJ1_SHIP_H

#include <string>
#include <vector>
#include <utility>
#include <ostream>

class Ship {
public:
    Ship(){
        _name = "";
        _size = 0;
        _id = ' ';
    }

    explicit Ship(std::string name): _name(std::move(name)), _size(0), _id(_name.at(0)){}

    explicit Ship(std::string name, int size): _name(std::move(name)), _size(size), _id(_name.at(0)){}

    explicit Ship(std::string name, int size, char ID): _name(std::move(name)), _size(size), _id(ID){}

    const std::string &getName() {
        return _name;
    }
    void setName(std::string  const &newName){
        _name = newName;
    }
    const int &getSize(){
        return _size;
    }
    const char getID(){
        return _id;
    }

private:
    std::string _name;
    int _size;
    char _id;
};

class PatrolBoat : public Ship{
public:
    PatrolBoat(): Ship("Patrol Boat", 2, 'P'){
    }
};

class Submarine : public Ship{
public:
    Submarine() : Ship("Submarine", 3, 'S'){
    }
};

class Destroyer : public Ship{
public:
    Destroyer() : Ship("Destroyer", 3, 'D'){
    }
};

class Battleship : public Ship{
public:
    Battleship() : Ship("Battleship", 4, 'B'){
    }
};

class Carrier : public Ship{
public:
    Carrier() : Ship("Carrier", 5, 'C'){
    }
};

#endif //CS372_PROJ1_SHIP_H
