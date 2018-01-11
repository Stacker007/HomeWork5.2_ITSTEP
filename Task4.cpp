/*
4.	Элементы  массива размерностью 4 на 3
инициализировать случайными числами от -5 до 5.
Подсчитать количество строк, не содержащих 
ни одного нулевого элемента.
*/

#include <iostream>
#include <ctime>
#define ROW 4
#define COLUMN 3
using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	srand(time(0));
	
	int ourArr[ROW][COLUMN];
	int countOfRow = 0;

	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < COLUMN; j++)
			ourArr[i][j] = rand() % 10-5;
	
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COLUMN; j++)
			printf("%2d ", ourArr[i][j]);
		cout << endl;
	}
	for (int i = 0; i < ROW; i++) {
		int tmp = 0;
		for (int j = 0; j < COLUMN; j++)
			if (ourArr[i][j] == 0) {
				tmp++;
				break;
			}
		if (tmp == 0) countOfRow++;	
	}
	cout << "\nКоличество строк, не содержащих ни одного нулевого элемента: " << countOfRow << endl;

	system("pause");
}
