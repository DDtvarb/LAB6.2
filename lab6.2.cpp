#include "Header.h"

// Функция для проверки, что введенное число > 0 и не является вещественным
bool pro(int num) {
	if (num <= 0 || num % 1 != 0) {
		return false;
	}
	return true;
}

// Функция для удаления первых k символов из каждой строки файла
void del(int k, string filename) {
	ifstream fileIn(filename);
	ofstream fileOut("output.txt");
	setlocale(LC_ALL, "Ru");

	if (fileIn.is_open()) {
		string line;
		while (getline(fileIn, line)) {
			if (line.length() >= k) {
				fileOut << line.substr(k) << endl;
			}
		}
		fileIn.close();
		fileOut.close();
		cout << "Изменение выполнено!" << endl;
	}
	else {
		cout << "Не удалось найти файл" << endl;
	}
}

