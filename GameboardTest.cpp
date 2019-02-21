// GameboardTest.cpp
// Created on 2/20/2019 by Bryant Klug
//   last modified: 2/20/2019

#include "catch.hpp"
#include "Gameboard.h"

TEST_CASE("Testing the Gameboard class", "[gameboard]"){
    Gameboard testBoard;
    SECTION("Gameboard has a size"){
        REQUIRE(testBoard.getHeight() == 10);
        REQUIRE(testBoard.getWidth() == 10);
   }
}
