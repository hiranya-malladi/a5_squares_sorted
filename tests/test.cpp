#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"
#include "squares.hpp"

TEST_CASE("Mixed positive and negative values", "[sorted_squares]") {
    int nums[]{-5, -3, -1, 3, 5};
    int expected[]{1, 9, 9, 25, 25};

    sorted_squares(nums, 5);

    REQUIRE(equal_arr(nums, expected, 5));
}

TEST_CASE("All positive values", "[sorted_squares]") {
    int nums[]{1, 2, 3, 4};
    int expected[]{1, 4, 9, 16};

    sorted_squares(nums, 4);

    REQUIRE(equal_arr(nums, expected, 4));
}

TEST_CASE("All negative values", "[sorted_squares]") {
    int nums[]{-4, -3, -2, -1};
    int expected[]{1, 4, 9, 16};

    sorted_squares(nums, 4);

    REQUIRE(equal_arr(nums, expected, 4));
}

TEST_CASE("Contains zero", "[sorted_squares]") {
    int nums[]{-3, -1, 0, 2};
    int expected[]{0, 1, 4, 9};

    sorted_squares(nums, 4);

    REQUIRE(equal_arr(nums, expected, 4));
}

TEST_CASE("Duplicate values", "[sorted_squares]") {
    int nums[]{-2, -2, 2, 2};
    int expected[]{4, 4, 4, 4};

    sorted_squares(nums, 4);

    REQUIRE(equal_arr(nums, expected, 4));
}

TEST_CASE("One element", "[sorted_squares]") {
    int nums[]{-6};
    int expected[]{36};

    sorted_squares(nums, 1);

    REQUIRE(equal_arr(nums, expected, 1));
}

TEST_CASE("equal_arr true", "[equal_arr]") {
    int a[]{1, 2, 3};
    int b[]{1, 2, 3};

    REQUIRE(equal_arr(a, b, 3));
}

TEST_CASE("equal_arr false", "[equal_arr]") {
    int a[]{1, 2, 3};
    int b[]{1, 4, 3};

    REQUIRE(equal_arr(a, b, 3) == false);
}