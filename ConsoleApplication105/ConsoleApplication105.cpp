// ConsoleApplication105.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <iomanip>
#include "Header.h"
int main()
{
    int n, m;
    n = sizeOfArray();
    m = sizeOfArray();
    int** arr = new int* [n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[m];
    }
    inputArray(arr, n, m);
    printArr(arr, n, m);


    delete[]arr;






   /* int SIZE, k = 0;
    std::cout << "Enter size of array: " << std::endl;
    int* arr = new int[SIZE];
    float s = 0;
    std::cout << "Enter rating: " << std::endl;
    for (int i = 0; i < SIZE; i++)
    {
        std::cin >> arr[i];
    }
    for (int i = 0; i < SIZE; i++)
    {
        s += arr[i];
        if (arr[i]==5)
        {
            k++;
        }
    }
    std::cout << std::endl;
    std::cout << "Average rating: " << s / SIZE << std::endl;
    std::cout << "Vidminnyky: " << k << std::endl;*/
 }

