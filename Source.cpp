#include "Header.h"
int main() {
	setlocale(LC_ALL, "Ru");
	int k;
	string filename;

	do {
		cout << "������� ������������� ����� k: ";
		cin >> k;
	} while (!pro(k));

	cout << "������� �������� �����: ";
	cin >> filename;

	del(k, filename);

	return 0;
}