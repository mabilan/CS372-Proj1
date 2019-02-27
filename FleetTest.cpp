// FleetTest.cpp
// Created by Michael Bilan & Bryant Klug on 2/26/2019.
// Last modified: 2/26/2019

#include "catch.hpp"
#include "Fleet.h"

TEST_CASE("Tests for Battleship Game Fleets"){
    SECTION("Can make a fleet"){
        Fleet testFleet;
    }
    SECTION("Can retrieve Player Name from Fleet"){
        Fleet testFleet;
        REQUIRE_FALSE(testFleet.getPlayerName().empty());
    }

    SECTION("Default player names numerically increase"){
        Fleet testFleet1;
        Fleet testFleet2;
        REQUIRE(testFleet1.getPlayerName() == "Player 1");
        REQUIRE(testFleet2.getPlayerName() == "Player 2");
    }

    SECTION("Default fleet has 5 ships"){
        Fleet testFleet;
        REQUIRE(testFleet.fleetSize() == 5);
    }

    SECTION("Default ships have unique IDs"){
        Fleet testFleet;
        REQUIRE(testFleet.getShipID(0) == 'P');
        REQUIRE(testFleet.getShipID(1) == 'S');
        REQUIRE(testFleet.getShipID(2) == 'D');
        REQUIRE(testFleet.getShipID(3) == 'B');
        REQUIRE(testFleet.getShipID(4) == 'C');
    }

    SECTION("Default fleets use a default gameboard"){
        Fleet testFleet;
        REQUIRE(testFleet.getBoardHeight() == 10);
        REQUIRE(testFleet.getBoardWidth() == 10);
    }

    SECTION("Fleet gameboard properly varies with gameboard changes"){
        SECTION("Square board"){
            Gameboard squareBoard(5);
            Fleet testFleet(squareBoard);
            REQUIRE(testFleet.getBoardHeight() == 5);
            REQUIRE(testFleet.getBoardWidth() == 5);
        }
        SECTION("Non-square rectangular board"){
            Gameboard rectangleBoard(5,10);
            Fleet testFleet(rectangleBoard);
            REQUIRE(testFleet.getBoardHeight() == 5);
            REQUIRE(testFleet.getBoardWidth() == 10);
        }
    }

    SECTION("Fleet constructors with player name"){
        SECTION("Single parameter constructor"){
            Fleet testFleet("TestName");
            REQUIRE(testFleet.getPlayerName() == "TestName");
            REQUIRE(testFleet.getBoardHeight() == testFleet.getBoardWidth());
        }
        SECTION("Two parameter constructor"){
            Gameboard rectangleBoard(5,10);
            Fleet testFleet("TestName", rectangleBoard);
            REQUIRE(testFleet.getPlayerName() == "TestName");
            REQUIRE(testFleet.getBoardHeight() == 5);
            REQUIRE(testFleet.getBoardWidth() == 10);
        }
    }
}

