// This program demonstrates the linear search algorithm.
// It searches an array of test scores looking for a score of 100.
#include <iostream>
using namespace std;

// Function prototype
int linearSearch(const int [], int, int);

int main()
{

	const int SIZE = 5;
    int tests[SIZE];
	int result;         // Holds the search result
	int i = 0;
	for (; i<SIZE; i++){
        cout<<"Please Enter Your Scores: ";
        cin>>tests[i];
	}

	// Search the array for the value 100
	result = linearSearch(tests, SIZE, 100);

	// If linearSearch returned -1, 100 was not found
	if (result == -1)
		cout << "You did not earn 100 points on any test.\n";
	else
	{  // Otherwise result contains the subscript of
	   // the first 100 found in the array
		cout << "You earned 100 points on test ";
		cout << (result + 1) << ".\n";
	}
	return 0;
}

/************************************************************************
 *                             linearSearch                             *
 * This function performs a linear search on an integer array. The      *
 * array passed to the function, which has size elements, is searched   *
 * for the number stored in the value parameter. If the number is found,*
 * its array subscript is returned. Otherwise, -1 is returned.          *
 ************************************************************************/
int linearSearch(const int array[], int size, int value)
{
	int index = 0;               // Used as a subscript to search the array
	int position = -1;           // Used to record the position of search value
	bool found = false;          // Flag to indicate if the value was found
                                //      Initialized to false because the
                                //      value has not been found yet
	while (index < size && !found)
	{
		if (array[index] == value) // If the value is found
		{
			found = true;          // Set the flag
			position = index;      // Record the value's subscript
		}
		index++;                  // Go to the next element
	}
	return position;             // Return the position, or -1
}
