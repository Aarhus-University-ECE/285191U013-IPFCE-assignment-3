#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <assert.h>
extern "C"
{
#include "countfib.h"
#include "sum.h"
#include "mod.h"
#include "gprime.h"
#include "numberofpairs.h"
}

// See Catch2's documentation: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

TEST_CASE("countfib")
{
    REQUIRE(numOfFib(10,100) == 5);
    REQUIRE(numOfFib(1300,8000) == 4);
    REQUIRE(numOfFib(0,0) == 0);
}

TEST_CASE("sum")
{
    int n;
    n = 0;
    assert(sum(n) == (n * (n + 1) * (2 * n + 1)) / 6);
    n = 45;
    assert(sum(n) == (n * (n + 1) * (2 * n + 1)) / 6);
    n = 100; // Maximum int 2**31
    assert(sum(n) == (n * (n + 1) * (2 * n + 1)) / 6);
}

TEST_CASE("mod")
{
    // Write your own test case (Challenge excercise)   
    int q, r, m, n;
    // First test case
    // ...
    // Second test case
    // ...
    // Last test case
    // ... 
}

TEST_CASE("gprime")
{
    int n ;
    // Test case 1
    n = 2;
    assert(largestPrime(n)==2);
    // Test case 2
    n = 11;
    assert(largestPrime(n)==11);
    // Test case 3
    n = 12;
    assert(largestPrime(n)==11);
}
