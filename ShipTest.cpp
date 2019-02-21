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
}
