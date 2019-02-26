// ShipTest.cpp for testing the ship class
// Created by Michael Bilan & Bryant Klug on 2/12/2019.
// Last Modified: 2/26/2019

#include "catch.hpp"
#include "Ship.h"

TEST_CASE("Testing the ship class.","[ship]"){
    Ship testShip;

    SECTION("Ships have no default names"){
        INFO("Check default ship name is empty-string");
        REQUIRE(testShip.getName().empty());
    }

    SECTION("Ships have default size of 0."){
        INFO("Check default ship size zero");
        REQUIRE(testShip.getSize()==0);
    }

    SECTION("Ships can change names."){
        INFO("Change ship name to TestShip.");
        testShip.setName("TestShip");
        REQUIRE(testShip.getName() == "TestShip");
    }
    SECTION("Ships have a name-only constructor"){
        Ship testConstructorOne("Test Ship");
        REQUIRE(testConstructorOne.getName() == "Test Ship");
        REQUIRE(testConstructorOne.getID() == 'T');
    }
    SECTION("Ships can be assigned names and size at creation"){
        Ship testConstructorTwo("Test Ship", 2);
        REQUIRE(testConstructorTwo.getName() == "Test Ship");
        REQUIRE(testConstructorTwo.getSize() == 2);
        REQUIRE(testConstructorTwo.getID() == 'T');
    }
    SECTION("Ships can be assigned names, size, and ID at creation"){
        Ship testConstructorThreeShip("Test Ship", 3, 'T');
        REQUIRE(testConstructorThreeShip.getName() == "Test Ship");
        REQUIRE(testConstructorThreeShip.getSize() == 3);
        REQUIRE(testConstructorThreeShip.getID() == 'T');
    }

}

TEST_CASE("Testing all derived ship classes") {
    SECTION("Testing Patrol Boat") {
        PatrolBoat testPatrol;
        REQUIRE(testPatrol.getName() == "Patrol Boat");
        REQUIRE(testPatrol.getSize() == 2);
        REQUIRE(testPatrol.getID() == 'P');
    }
    SECTION("Testing Submarine"){
        Submarine testSub;
        REQUIRE(testSub.getName() == "Submarine");
        REQUIRE(testSub.getSize() == 3);
        REQUIRE(testSub.getID() == 'S');
    }
    SECTION("Testing Destroyer"){
        Destroyer testDestroyer;
        REQUIRE(testDestroyer.getName() == "Destroyer");
        REQUIRE(testDestroyer.getSize() == 3);
        REQUIRE(testDestroyer.getID() == 'D');
    }
    SECTION("Testing Battleship") {
        Battleship testBattle;
        REQUIRE(testBattle.getName() == "Battleship");
        REQUIRE(testBattle.getSize() == 4);
        REQUIRE(testBattle.getID() == 'B');
    }
    SECTION("Testing Carrier") {
        Carrier testCarrier;
        REQUIRE(testCarrier.getName() == "Carrier");
        REQUIRE(testCarrier.getSize() == 5);
        REQUIRE(testCarrier.getID() == 'C');
    }
}
