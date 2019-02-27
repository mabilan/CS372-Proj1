// TUIGameboard.h
// Created on 2/24/2019 by Michale Bilan & Bryant Klug
// Last Modified: 2/26/2019

#ifndef TUIGAMEBOARD_INCLUDED
#define TUIGAMEBOARD_INCLUDED

#include <string>

class TUIGameboard{
public:
    std::string draw( int height, int width){
        std::string board;
        std::string row_line;
        std::string row_temp;

        row_line.assign(4 * width + 1, '-');
        row_line.append(1u,'\n');

        row_temp = "|   |   |   |   |   |   |   |   |   |   |\n";

        for(int i = 0; i < height; ++i){
            board.append(row_line);
            row_temp.clear();
            for(int j = 0; j < width; ++j){
                row_temp.append("| ");
                row_temp.append(" "); // for future replacement with ship
                row_temp.append(" ");
            }
            row_temp.append("|\n");
            board.append(row_temp);
        }
        board.append(row_line);

        return board;
    }

private:
    std::string tuiboard = "-----------------------------------------"
                           "|   |   |   |   |   |   |   |   |   |   |"
                           "-----------------------------------------"
                           "|   |   |   |   |   |   |   |   |   |   |"
                           "-----------------------------------------"
                           "|   |   |   |   |   |   |   |   |   |   |"
                           "-----------------------------------------"
                           "|   |   |   |   |   |   |   |   |   |   |"
                           "-----------------------------------------"
                           "|   |   |   |   |   |   |   |   |   |   |"
                           "-----------------------------------------"
                           "|   |   |   |   |   |   |   |   |   |   |"
                           "-----------------------------------------"
                           "|   |   |   |   |   |   |   |   |   |   |"
                           "-----------------------------------------"
                           "|   |   |   |   |   |   |   |   |   |   |"
                           "-----------------------------------------"
                           "|   |   |   |   |   |   |   |   |   |   |"
                           "-----------------------------------------"
                           "|   |   |   |   |   |   |   |   |   |   |"
                           "-----------------------------------------";
};

#endif
