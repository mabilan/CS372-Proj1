// Gameboard.h
// Created on 2/20/2019 by Michale Bilan & Bryant Klug
// Last Modified: 2/26/2019

#ifndef GAMEBOARD_H_INCLUDED
#define GAMEBOARD_H_INCLUDED


class Gameboard{
public:
    Gameboard(): _height(10), _width(10){};

    explicit Gameboard(int sideLength): _height(sideLength), _width(sideLength){};

    explicit Gameboard(int height, int width): _height(height), _width(width){};

    const int getHeight(){
        return _height;
    }
    const int getWidth(){
        return _width;
    }
    void setWidth(int w){
        _width = w;
    }
    void setHeight(int h){
        _height = h;
    }
private:
    int _height, _width;
};

#endif
