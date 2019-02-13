// ShipTest.cpp for testing the ship class
// Created by Michael Bilan & Bryant Klug on 2/12/2019.
// Last Updated: 2/12/2019

#include "catch.hpp"
#include "Ship.h"

TEST_CASE("Testing the ship class."){
    Ship testShip;

    SECTION("Ships have names"){
        INFO("Check default name is empty-string");
        REQUIRE(testShip.getName().empty());
    }

    SECTION("Ships can change names."){
        INFO("Change default name to Frank.");
        testShip.setName("Frank");
        REQUIRE(testShip.getName() == "Frank");
    }

    SECTION("Ships should have a size greater than 0."){
        INFO("Check defalt ship size is 1.");
        REQUIRE(testShip.getSize() == 1);
    }
}