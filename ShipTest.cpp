// ShipTest.cpp for testing the ship class
// Created by Michael Bilan & Bryant Klug on 2/12/2019.
// Last Updated: 2/12/2019

#include "catch.hpp"
#include "Ship.h"

TEST_CASE("Testing the ship class."){
    Ship testShip;

    SECTION("Ships have default names"){
        INFO("Check default ship name is not empty-string");
        REQUIRE_FALSE(testShip.getName().empty());
    }

    SECTION("Ships have default size greater than 0."){
        INFO("Check default ship size is non-zero");
        REQUIRE_FALSE(testShip.getSize()==0);
    }

    SECTION("Ships can change names."){
        INFO("Change ship name to TestShip.");
        testShip.setName("TestShip");
        REQUIRE(testShip.getName() == "TestShip");
    }
    SECTION("Ships know their position on the board"){
        REQUIRE_FALSE(testShip.getPosition().empty());
    }
    SECTION("Ships default to have the first position to be '1,A'"){
        REQUIRE( testShip.getPosition(0).x == 1);
        REQUIRE( testShip.getPosition(0).y == 'A');
    }
    SECTION("Ships default be positioned vertically"){
        INFO("All x's will be 1, y's will increase from A to D");
        REQUIRE( testShip.getPosition(0).x == 1);
        REQUIRE( testShip.getPosition(0).y == 'A');
        REQUIRE( testShip.getPosition(1).x == 1);
        REQUIRE( testShip.getPosition(1).y == 'B');
        REQUIRE( testShip.getPosition(2).x == 1);
        REQUIRE( testShip.getPosition(2).y == 'C');
        REQUIRE( testShip.getPosition(3).x == 1);
        REQUIRE( testShip.getPosition(3).y == 'D');
    }

}
