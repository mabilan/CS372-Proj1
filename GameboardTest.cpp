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
    SECTION("Gameboard is able to resize"){
        testBoard.setHeight(5);
        testBoard.setWidth(15);
        REQUIRE(testBoard.getHeight() == 5);
        REQUIRE(testBoard.getWidth() == 15);
    }
}
