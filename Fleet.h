// Fleet.h
// Created by Michael Bilan & Bryant Klug on 2/26/2019.
// Last modified: 2/26/2019

#ifndef CS372_PROJ1_FLEET_H
#define CS372_PROJ1_FLEET_H

#include "Ship.h"
#include "Gameboard.h"
#include <string>
#include <utility>

class Fleet {
public:
    Fleet(){
        addPlayer();
        setPlayerName("Player "+std::to_string(_numberOfPlayers));
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
private:
    std::string _playerName;
    Gameboard _fleetBoard;

    static int _numberOfPlayers;
};

int Fleet::_numberOfPlayers = 0;

#endif //CS372_PROJ1_FLEET_H
