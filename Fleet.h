// Fleet.h
// Created by Michael Bilan & Bryant Klug on 2/26/2019.
// Last modified: 2/26/2019

#ifndef CS372_PROJ1_FLEET_H
#define CS372_PROJ1_FLEET_H

#include <string>
#include <utility>
#include <vector>
#include <iostream>

#include "Ship.h"
#include "Gameboard.h"
#include "TUIGameboard.h"

enum coordinateStatus {isWater, isMiss, isShip};

class Fleet {
public:
    Fleet(){
        addPlayer();
        setPlayerName("Player "+std::to_string(_numberOfPlayers));
        _shipList = defaultFleet();
        mapInitialize();
    }

    explicit Fleet(std::string playerName): _playerName(std::move(playerName)){
        addPlayer();
        _shipList = defaultFleet();
        mapInitialize();
    }

    explicit Fleet(Gameboard board): _fleetBoard(board){
        addPlayer();
        setPlayerName("Player " + std::to_string(_numberOfPlayers));
        _shipList = defaultFleet();
        mapInitialize();
    }

    Fleet(std::string playerName, Gameboard board): _playerName(std::move(playerName)), _fleetBoard(board){
        addPlayer();
        _shipList = defaultFleet();
        mapInitialize();
    }

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
    const char getShipID(int index){
        return _shipList[index] -> getID();
    }
    const int getBoardHeight(){
        return _fleetBoard.getHeight();
    }
    const int getBoardWidth(){
        return _fleetBoard.getWidth();
    }

    std::vector<Ship *> defaultFleet(){
        std::vector<Ship *> defaultShips {new PatrolBoat, new Submarine, new Destroyer, new Battleship, new Carrier};
        return defaultShips;
    }

    void mapInitialize(){
        for(int i=0; i<(this->getBoardHeight()); i++){
            std::vector<std::pair<coordinateStatus, char>> row;
            for(int j=0; j<(this->getBoardWidth()); j++){
                row.emplace_back(std::make_pair(isWater,' '));
            }
            _fleetMap.push_back(row);
        }
    }

    std::pair<coordinateStatus, char> getCoordinateStatus(const int row, const int column){
        return _fleetMap[row][column];
    }

    void drawGame(){
        std::cout << _fleetTUI.draw(getBoardHeight(), getBoardWidth());
    }

private:
    std::string _playerName;
    Gameboard _fleetBoard;
    std::vector<Ship *> _shipList;
    TUIGameboard _fleetTUI;
    std::vector<std::vector<std::pair<coordinateStatus, char>>> _fleetMap;

    static int _numberOfPlayers;
};

int Fleet::_numberOfPlayers = 0;

#endif //CS372_PROJ1_FLEET_H
