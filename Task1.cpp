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
#define COL 3
using namespace std;

}
void main() {
	setlocale(LC_ALL, "rus");
	srand(time(0));
	int ourArr[ROW][COL];
	for (int i = 0; i < ROW; i++)
		for (int j = 0; j < COL; j++)
			ourArr[i][j] = rand() % 21 + 10;
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++)
			cout << ourArr[i][j] << " ";
		cout << endl;
	}
	cout << endl;
	
	for (int j = 0; j < COL; j++)
		ourArr[2][j] = 0;
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++)
			cout << ourArr[i][j] << " ";
		cout << endl;
	}
	system("pause");
}
