#pragma once

#include "list.hpp"

#include <catch2/catch_test_macros.hpp>
#include <catch2/catch_session.hpp>

TEST_CASE("Testing PushBack", "[push_back]") {
    List list;
    list.PushBack(4);

    REQUIRE(list.Size() == 1);

    list.PushBack(45);

    REQUIRE(list.Size() == 2);

    list.PushBack(56);
    list.PushBack(67);
    list.PushBack(5);

    REQUIRE(list.Size() == 5);
}

TEST_CASE("Testing PushFront", "[push_front]") {
    List list;
    list.PushFront(4);

    REQUIRE(list.Size() == 1);

    list.PushFront(45);

    REQUIRE(list.Size() == 2);

    list.PushFront(56);
    list.PushFront(67);
    list.PushFront(5);

    REQUIRE(list.Size() == 5);
}

TEST_CASE("Testing PopBack", "[pop_back]") {
    List list;

    try { list.PopBack(); }
    catch(std::exception& ex) {}
    

    REQUIRE(list.Empty() == true);

    list.PushBack(5);
    list.PushBack(9);

    list.PopBack();

    REQUIRE(list.Size() == 1);
}

TEST_CASE("Testing PopFront", "[pop_front]") {
    List list;

    try { list.PopFront(); }
    catch(std::exception& ex) {}

    REQUIRE(list.Empty() == true);

    list.PushBack(3);
    list.PushBack(5);
    list.PushFront(8);

    list.PopFront();

    REQUIRE(list.Size() == 2);

}

int main(int argc, char** argv) {
    return Catch::Session().run(argc, argv);
}