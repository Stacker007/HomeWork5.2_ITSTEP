/*
3.Элементы квадратной матрицы  5 на 5 
инициализировать случайными числами 
от 0 до 10. Найти сумму максимальных 
элементов всех столбцов.
*/

#include <iostream>
#include <ctime>
#define SIZE 5

using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int ourArr[SIZE][SIZE];
	int sum = 0;

	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < SIZE; j++)
			ourArr[i][j] = rand() % 10;

	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++)
			cout << ourArr[i][j]<< " ";
		cout << endl;
	}
	cout << "\nМаксимальные элементы столбцов:\n";
	for (int i = 0; i < SIZE; i++) {
		int max = ourArr[0][i];
		for (int j = 1; j < SIZE; j++)
			if (ourArr[j][i] > max) max = ourArr[j][i];
		cout << max << " ";
		sum += max;		
	}
	cout << "\n\nСумма максимальных элементов всех столбцов " << sum << endl;	
	system("pause");
}
