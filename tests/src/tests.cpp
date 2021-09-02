#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

extern "C"
{
#include "fib.h"
//#include "lcrng.h"
//#include "sqrt.h"
//#include "cubes.h" nothing to check, excercise needs a change
// same for 2.5 
// Continue with 2.6
}

// See Catch2's documentation: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

TEST_CASE("fib")
{
    REQUIRE(fib(7) == {0,1,1,2,3,5,8});
}

//TEST_CASE("lcrng")
//{
//   int a = 1;
//    int b = 2;
//    lcrng(&a, &m, &c, &x0);
    // not sure how to test 

//}

//TEST_CASE("sqrt")
//{
//    REQUIRE(sqrt(17) == 4);
//    REQUIRE(sqrt(0) == 0);
    // Is this a valid case? 
    //REQUIRE(sqrt(2) == 1.4142); 

//}
