#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	srand(time(0));
	int *ptr, i, j;
	int size;
	for (j = 0; j < 3; j++)
	{
		size = rand() % 50;
		cout << "Size: " << size << '\n';
		ptr = new int[size];
		for (i = 0; i < size; i++)
		{
			ptr[i] = rand() % 90 + 10;
			cout << ptr[i] << '\t';
		}
		cout << '\n';
		delete[] ptr;
	}
	return 0;
}
