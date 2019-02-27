// TUIGameboard.h
// Created on 2/24/2019 by Michale Bilan & Bryant Klug
// Last Modified: 2/26/2019

#ifndef TUIGAMEBOARD_INCLUDED
#define TUIGAMEBOARD_INCLUDED

#include <string>
#include <vector>

#include "Ship.h"

class TUIGameboard{
public:
    std::string draw( int height, int width){

        if(!_board.empty()){
            return _board;
        }
        std::string row_line;
        std::string row_temp;

        row_line.assign("  ");
        row_line.append(4 * width + 3, '-');
        row_line.append(1u,'\n');

        row_temp.assign("    ");
        for(int i = 0; i < width; ++i){
            row_temp.append("| ");
            if(i < 9){
                row_temp.append(1u, '1' + i);
                row_temp.append(" ");
            } else {
                row_temp.append("1");
                row_temp.append(1u, '0' + (i + 1) % 10);
            }
        }
        row_temp.append("|\n");
        _board.append(row_temp);

        for(int i = 0; i < height; ++i){
            _board.append(row_line);

            row_temp.assign("  ");
            row_temp.append(1u, 'A' + i);
            row_temp.append(" ");
            for(int j = 0; j < width; ++j){
                row_temp.append("|   ");
            }

            row_temp.append("|\n");
            _board.append(row_temp);
        }
        _board.append(row_line);

        return _board;
    }
    std::string update(int posX, int posY, std::string newChar){
        int location = 2 * 46 * posY + posX * 4 + 2;

        _board.replace(location, 1, newChar);
        return _board;
    }

private:
    std::string _board;
};

#endif
