#include <iostream>
#include <iomanip>
void printArr(int** A, int N, int M) {
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			std::cout << std::setw(4) << A[i][j];
		}
		std::cout << std::endl;
	}
}