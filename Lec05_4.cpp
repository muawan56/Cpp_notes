#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
	srand(time(0));
	int *ptr, *fazool, i, j;
	int size;
	for (j = 0 ; j < 30 ; j++){
		int size = rand() % 50000;
		cout << "Size: " << size << '\t';
		ptr = new int[size];
		cout << "Memory Address 1: " << ptr << '\t';
		fazool = new int[1];
		cout << "Memory Address 2: " << fazool << '\n';
		delete fazool; /* fazool is allocated with new int[1], which
		allocates a single integer. To deallocate this memory correctly, you
		 use delete fazool without the [] because it's not an array.*/

		 
		delete []ptr; /*ptr is allocated with new int[size], which allocates
		an array of integers. To deallocate this memory correctly, you
		use delete []ptr. The [] is used to indicate that you are
		deallocating an array, and C++ requires this syntax to ensure proper cleanup of array memory.*/
	}
	return 0;
}
