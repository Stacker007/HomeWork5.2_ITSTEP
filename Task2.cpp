/*
1.	Элементы двумерного массива размерностью 3 на 4
инициализировать случайными числами от 10 до 30.
Вывести исходный массив. Затем обнулить вторую
строку и вывести измененный массив.
srand(time(0));
int my=rand() % 500 +1;
*/

#include <iostream>
#include <ctime>
#define ROW 4
#define COLUMN 3
using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int ourArr[COLUMN][ROW];
	for (int i = 0; i < COLUMN; i++)
		for (int j = 0; j < ROW; j++)
			ourArr[i][j] = rand() % 20 + 10;
	for (int i = 0; i < COLUMN; i++) {
		for (int j = 0; j < ROW; j++)
			cout << ourArr[i][j] << " ";
		cout << endl;
	}
	cout << endl;
	for (int j = 0; j < ROW; j++)
		ourArr[1][j]=0;

	for (int i = 0; i < COLUMN; i++) {
		for (int j = 0; j < ROW; j++)
			printf("%2d ", ourArr[i][j]) ;
		cout << endl;
	}

	system("pause");
}
