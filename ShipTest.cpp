// ShipTest.cpp for testing the ship class
// Created by Michael Bilan & Bryant Klug on 2/12/2019.
// Last Updated: 2/12/2019

#include "catch.hpp"
#include "Ship.h"

TEST_CASE("We can make a ship."){
    REQUIRE_NOTHROW(Ship testShip);
}