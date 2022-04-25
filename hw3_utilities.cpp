/////////////////////////////////////////////////////////////
//  ECE 2574, Homework 3, starter code

/** Implementation file for recursive functions.
 @file hw3_utilities.cpp */

#include "hw3_utilities.h"

//used to find max element of array
template<class T>
const T& MAX(const T& a, const T& b){
	return (a < b) ? b : a;
}


 // TO-DO: Implement the following function
unsigned int pow_recursive(unsigned int m, unsigned int n)
{
	//m is the base
	//n is the exponent

	if (n == 0){
		return 1; //return one
	}//end if

	else{
		return m * pow_recursive(m, n - 1);
	}//end else
}


// TO-DO: Implement the following function
std::string reverse_string_recursive(std::string s)
{
	if (s.length() <= 1){
	return s;
	}//end if

	else{
	return reverse_string_recursive(s.substr(1, s.length()))+s.at(0);
	}//end else
}


// TO-DO: Implement the following function
template<typename T>
int binary_search_recursive(const T anArray[], int first, int last, const T& target)
{
	int mid; //middle of array

	if (last >= first){
		mid = first + (last - first)/2;

		if (anArray[mid] == target) {
			return mid;
		}//end if

		if (anArray[mid] > target) {
			return binary_search_recursive(anArray, first, mid - 1, target);
		}//end else if

		return binary_search_recursive(anArray, mid + 1, last, target);
	}//end if

	else {
		return -1;
	}//end else


}


// TO-DO: Implement the following function
template<typename T>
int sequential_search_recursive(const T anArray[], int first, int last, const T& target)
{
if (anArray[first] == target){
return first;
}//end if

else if (last < 1){
return last;
}//end else if

return sequential_search_recursive(anArray, first + 1, last, target);
}


// TO-DO: Implement the following function
template<typename T>
T find_max_recursive(const T anArray[], int first, int last)
{
if (first == last){
return anArray[first];
}//end if
return MAX(anArray[first], find_max_recursive(anArray, first + 1, last));
}
