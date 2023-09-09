#include <catch2/catch_test_macros.hpp>

extern "C" {
	#include "doubleSum.h"
	#include "largestPrime.h"
	#include "numOfFib.h"
}

TEST_CASE("doubleSum")
{
    for (int n = 0; n < 20; ++n) {
		REQUIRE(doubleSum(n) == (n * (n + 1) * (2 * n + 1)) / 6);
	}
}

TEST_CASE("numOfFib")
{
    // NOTE: range is [a,b]
	REQUIRE(numOfFib(10,100) == 5); // 13, 21, 34, 55, 89
	REQUIRE(numOfFib(20,233) == 6); // 21, 34, 55, 89, 144, 233
	REQUIRE(numOfFib(1300,8000) == 4); // 1597, 2584, 4181, 6765
	REQUIRE(numOfFib(1,2) == 2); // 1,2 (the 2 seeds)
}

// TEST_CASE("sum")
// {
	// int n;
	// n = 0;
	// assert(sum(n) == (n * (n + 1) * (2 * n + 1)) / 6);
	// n = 45;
	// assert(sum(n) == (n * (n + 1) * (2 * n + 1)) / 6);
	// n = 100; // Maximum int 2**31
	// assert(sum(n) == (n * (n + 1) * (2 * n + 1)) / 6);
// }
//
// TEST_CASE("mod")
// {
	// // Write your own test case (Challenge excercise)
	// int q, r, m, n;
	// // First test case
	// // ...
	// // Second test case
	// // ...
	// // Last test case
	// // ...
// }
//
// TEST_CASE("gprime")
// {
	// int n ;
	// // Test case 1
	// n = 2;
	// assert(largestPrime(n)==2);
	// // Test case 2
	// n = 11;
	// assert(largestPrime(n)==11);
	// // Test case 3
	// n = 12;
	// assert(largestPrime(n)==11);
// }
