/*
2.	Элементы массива размерностью  2 на 6 инициализировать 
случайными числами от 0 до 5. Для каждой 
строки распечатать индекс первого нулевого элемента (или слово “нет”).
*/

#include <iostream>
#include <ctime>
#define ROW 2
#define COLUMN 6
using namespace std;
void main() {
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int ourArr[ROW][COLUMN];

	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < COLUMN; j++)
			ourArr[i][j] = rand() % 5;
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COLUMN; j++)
			cout << ourArr[i][j]<< " ";
		cout << endl;
	}

	cout << endl;

	for (int i = 0; i < ROW; i++) {
		int columnIndex = -1;
		for (int j = 0; j < COLUMN; j++)
			if (ourArr[i][j] == 0) {
				columnIndex = j;
				break;
			}
		if (columnIndex == -1) cout << "нет";
		else cout << columnIndex; 
		cout << endl;
	}
	
	system("pause");
}
