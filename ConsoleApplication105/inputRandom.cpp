#include <iostream>

void inputArray(int** A, int N, int M) {
	srand(time(NULL));
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			A[i][j] = 1 + rand() % 50;
		}
	}
}