#pragma once
#include "list.hpp"

#include <catch2/catch_test_macros.hpp>
#include <catch2/catch_session.hpp>


TEST_CASE("Testing Empty", "[empty]") {
    List list;

    SECTION("Empty list") {
        REQUIRE(list.Empty() == true);

        list.PushBack(89);
        list.PushBack(6);
        list.Clear();

        REQUIRE(list.Empty() == true);
    }

    SECTION("Not empty list") {
        list.PushFront(5);

        REQUIRE(list.Empty() == false);
    }
}

TEST_CASE("Testing Size", "[size]") {
    List list;
    REQUIRE(list.Size() == 0);

    list.PushBack(2);
    list.PushBack(4);

    REQUIRE(list.Size() == 2);
}

TEST_CASE("Testing Clear", "[clear]") {
    List list;
    list.PushBack(4);
    list.PushBack(87);
    list.Clear();

    REQUIRE(list.Size() == 0);
}

int main(int argc, char** argv) {
    return Catch::Session().run(argc, argv);
}