// Gameboard.h
// Created on 2/20/2019 by Bryant Klug
//  last updated 2/20/2019

#ifndef GAMEBOARD_H_INCLUDED
#define GAMEBOARD_H_INCLUDED

class Gameboard{
public:
    Gameboard(){
        _height = 10;
        _width = 10;
    }

    int getHeight(){
        return _height;
    }
    int getWidth(){
        return _width;
    }
private:
    int _height, _width;

};

#endif
