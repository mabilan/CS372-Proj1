// Game.cpp
// Created by Bryant Klug and Mike on 2/26

#include <iostream>
#include <string>

#include "Fleet.h"

void clearScreen(){
    std::cout << std::string( 100, '\n') << std::endl;
}

int main(){
    std::string player1, player2;

    clearScreen();
    std::cout << "Hello Players" << std::endl;
    std::cout << "Enter Player 1's Name (Leave blank for Player 1): ";
    std::cin >> player1;
    std::cout << std::endl << "Enter Player 2's Name (Leave blank for Player 2): ";
    std::cin >> player2;

    clearScreen();

    Fleet player1Fleet(player1);
    Fleet player2Fleet(player2);

    std::cout << "Prepare for the battle of a lifetime "
              << player1 << " and " << player2 << "!" << std::endl;
    std::cout << "(Press Enter to start " << player1 << "'s turn)";
    std::cin.ignore().get();

    player1Fleet.drawGame();
    return 0;
}
