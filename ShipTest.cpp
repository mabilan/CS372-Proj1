// ShipTest.cpp for testing the ship class
// Created by Michael Bilan & Bryant Klug on 2/12/2019.
// Last Updated: 2/20/2019

#include "catch.hpp"
#include "Ship.h"

TEST_CASE("Testing the ship class.","[ship]"){
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
    SECTION("Ships can be assigned names at creation"){
        Ship testerShip("Tester Ship");
        REQUIRE(testerShip.getName() == "Tester Ship");
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

TEST_CASE("Testing the default ships for battleship"){
    PatrolBoat testPatrol;

    REQUIRE(testPatrol.getName() == "Patrol Boat");
    REQUIRE(testPatrol.getSize() == 2);

    Submarine testSub;

    REQUIRE(testSub.getName() == "Submarine");
    REQUIRE(testSub.getSize() == 3);

    Destroyer testDestroyer;

    REQUIRE(testDestroyer.getName() == "Destroyer");
    REQUIRE(testDestroyer.getSize() == 3);

    Battleship testBattle;

    REQUIRE(testBattle.getName() == "Battleship");
    REQUIRE(testBattle.getSize() == 4);

    Carrier testCarrier;

    REQUIRE(testCarrier.getName() == "Carrier");
    REQUIRE(testCarrier.getSize() == 5);

}
