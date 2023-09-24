#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
	srand(time(0));
	int *ptr, i, j;
	int size;
	for (j = 0 ; j < 30 ; j++){
		size = rand() % 50000;
		cout << "Size: " << size << '\t';
		ptr = new int[size];
		cout << "Memory Address: " << ptr << '\n';
		for (i = 0; i < size ; i++){
			ptr[i] = rand() % 90 + 10;
			cout << ptr [i] << '\t';
		}
		cout << '\n';
		delete []ptr;
	}
	return 0;
}
