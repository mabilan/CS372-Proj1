// GameboardTest.cpp
// Created on 2/20/2019 by Michael Bilan & Bryant Klug
// Last Modified: 2/26/2019

#include "catch.hpp"
#include "Gameboard.h"

TEST_CASE("Testing the Gameboard class", "[gameboard]"){
    Gameboard testBoard;
    SECTION("Gameboard has a default height and width"){
        REQUIRE(testBoard.getHeight() == 10);
        REQUIRE(testBoard.getWidth() == 10);
    }

    SECTION("Gameboard is able to resize"){
        testBoard.setHeight(5);
        testBoard.setWidth(15);
        REQUIRE(testBoard.getHeight() == 5);
        REQUIRE(testBoard.getWidth() == 15);
    }

    SECTION("Gameboard has a single parameter constructor (square gameboard)"){
        Gameboard testSquare(5);
        REQUIRE(testSquare.getHeight() == 5);
        REQUIRE(testSquare.getWidth() == testSquare.getHeight());
    }

    SECTION("Gameboard has a two-parameter constructor (rectangular board)"){
        Gameboard testRectangle(5,10);
        REQUIRE(testRectangle.getHeight() == 5);
        REQUIRE(testRectangle.getWidth() == 10);
    }
}