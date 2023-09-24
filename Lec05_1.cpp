#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


int main(){
	srand(time(0));
	int *ptr, i;
	int size = rand() % 50;
	ptr = new int[size];
	for (i = 0; i < size ; i++){
		ptr[i] = rand() % 90 + 10;
		cout << ptr [i] << '\t';
	}
	cout << '\n';
	delete []ptr;
	return 0;
}


/* #include <iostream>                   //code by myself
#include <ctime>
#include <cstdlib>

int main(){
	srand(time(NULL));
	int* dynamicArray;
	int size = rand()% 50;
	dynamicArray = new int[size];
	for(int i=0; i<size; i++){
		dynamicArray[i]= rand()% 90 + 10;
		std::cout<< dynamicArray[i]<<"\t\t";
	}
	std::cout<<"\n\nArray has "<<size<<" index";
	delete[] dynamicArray;
	return 0;
} */