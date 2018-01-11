/*
5.	Дана квадратная матрица порядка n (n строк и n 
стобцов). Найти наибольшее из значений элементов, 
расположенных в темно-синих частях матрицы:
1 1 1 1 1
0 1 1 1 0
0 0 1 0 0
0 0 0 0 0
0 0 0 0 0
*/
#include <iostream>
#include <ctime>
#define SIZE 20

using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int ourArr[SIZE][SIZE];
	int max;

	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < SIZE; j++)
			ourArr[i][j] = rand() % 10;

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++)
			cout << ourArr[i][j] << " ";
		cout << endl;
	}
	max = ourArr[0][0];
	cout << endl;

	for (int i = 0; i < SIZE; i++) {
		for (int j = i; j < SIZE-i; j++)
			if (ourArr[i][j] > max) max = ourArr[i][j];		
	}
	cout << "\n\nМаксимальный элемент " << max << endl;
	system("pause");
}
