// Fleet.h
// Created by Michael Bilan & Bryant Klug on 2/26/2019.
// Last modified: 2/26/2019

#ifndef CS372_PROJ1_FLEET_H
#define CS372_PROJ1_FLEET_H

#include "Ship.h"
#include "Gameboard.h"
#include <string>
#include <utility>
#include <vector>

class Fleet {
public:
    Fleet(){
        addPlayer();
        setPlayerName("Player "+std::to_string(_numberOfPlayers));
        _shipList.push_back(new PatrolBoat);
        _shipList.push_back(new Submarine);
        _shipList.push_back(new Destroyer);
        _shipList.push_back(new Battleship);
        _shipList.push_back(new Carrier);
    }

    Fleet(std::string playerName, Gameboard board): _playerName(std::move(playerName)), _fleetBoard(board){}

    ~Fleet(){
        removePlayer();
    }

    void addPlayer(){
        _numberOfPlayers += 1;
    }
    void removePlayer(){
        _numberOfPlayers -= 1;
    }

    void setPlayerName(std::string playerName){
        _playerName = std::move(playerName);
    }

    const std::string getPlayerName(){
        return _playerName;
    }

    const int fleetSize(){
        return _shipList.size();
    }
private:
    std::string _playerName;
    Gameboard _fleetBoard;
    std::vector<Ship *> _shipList;

    static int _numberOfPlayers;
};

int Fleet::_numberOfPlayers = 0;

#endif //CS372_PROJ1_FLEET_H
