#include <iostream>
using namespace std;


#define M 3
#define N 3

int main()
{
	
	int* A = new int[M * N];

	
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++) {
			*(A + i*N + j) = rand() % 100;
		}
	}

	
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++) {
			cout << *(A + i*N + j) << " ";		       
		}
		cout << endl;
	}

	
	delete[] A;

	return 0;
}