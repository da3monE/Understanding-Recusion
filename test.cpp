// File name: test.cpp
// Description: Test cases used to check the recursive functions created in hw3_utilities.cpp.


#define CATCH_CONFIG_MAIN			// this line tells Catch to provide a main() function
#define CATCH_CONFIG_COLOUR_NONE	// this line avoids problems due to color-coding the output


#include "catch.hpp"
#include "utilities.h"


// TO-DO:  create a good set of tests of your code
TEST_CASE("Testing exponentiation (by recursive multiplication)", "[regular functions]")
{
	int m, n;

	m = 5;//base
	n = 2;//exponent
	REQUIRE(pow_recursive(m, n) == 25);//fice to the power of two is equal to twenty five
}


TEST_CASE("Testing reverse string recursive", "[regular functions]")
{
std::string s = "sybreed";//string to be reversed (sybreed)

REQUIRE(reverse_string_recursive(s) == "deerbys");//reversed string (deerbys)
}


TEST_CASE("Testing binary search recursive", "[template typename function]")
{
	std::string anArray[] = { "Sofia", "Isabella", "Quinne" };//Three sisters in array
	REQUIRE(binary_search_recursive<std::string>(anArray, 0, 3, "Isabella") == 1);//Middle sister located in index 1
	REQUIRE(binary_search_recursive<std::string>(anArray, 0, 3, "Quinne") == 2);//Last sister located in index 2
}


TEST_CASE("Testing sequential search recursive", "[template typename function]")
{
std::string anArray[] = { "Joseph", "Antonio", "Leonel" };//Three brothers in array
REQUIRE(sequential_search_recursive<std::string>(anArray, 0, 3, "Antonio") == 1);//Middle brother located in index 1
REQUIRE(sequential_search_recursive<std::string>(anArray, 0, 3, "Leonel") == 2);//Last brother located in index 2
}


TEST_CASE("Testing find max recursive", "[template typename function]")
{
int anArray[] = { 0, 1, 2 };//array filled with 0, 1, and 2
REQUIRE(find_max_recursive<int>(anArray, 0, 3) == 2);//max element is 2
}