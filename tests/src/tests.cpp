#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <assert.h>
extern "C"
{
#include "countfib.h"
#include "sum.h"
// #include "mod.h"
//#include "cubes.h" nothing to check, excercise needs a change
// same for 2.5 
// Continue with 2.6
}

// See Catch2's documentation: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

TEST_CASE("countfib")
{
    REQUIRE(countfib(10,100) == 5);
    REQUIRE(countfib(1300,8000) == 4);
    REQUIRE(countfib(0,0) == 0);
}

TEST_CASE("sum")
{
    int n;
    n = 2;
    assert(sum(n) == (n * (n + 1) * (2 * n + 1)) / 6);
    n = 42;
    assert(sum(n) == (n * (n + 1) * (2 * n + 1)) / 6);
}

// TEST_CASE("mod")
// {   
//     int q, r, m, n;
//     // First test case
//     q, r, m, n = mod(2,3);
//     assert (q == m / n);
//     assert (r == m % n);
//     // Second test case
//     q, r, m, n = mod(3,2);
//     assert (q == m / n);
//     assert (r == m % n);
// }
