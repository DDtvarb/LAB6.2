#include "Header.h"
int main() {
	setlocale(LC_ALL, "Ru");
	int k;
	string filename;

	do {
		cout << "¬ведите положительное число k: ";
		cin >> k;
	} while (!pro(k));

	cout << "¬ведите название файла: ";
	cin >> filename;

	del(k, filename);

	return 0;
}