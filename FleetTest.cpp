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
}