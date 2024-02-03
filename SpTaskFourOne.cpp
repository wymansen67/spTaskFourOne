#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
using namespace std;

int main(){ 
	setlocale(LC_ALL, "ru");

	char date[11], startTime[9], endTime[9];

	cout << "Введите дату работы прибора в формате дд.мм.гггг: ";
	cin >> date;

	cout << "\nВведите время начала работы прибора в формате Час:Минута:Секунда: ";
	cin >> startTime;

	cout << "\nВведите время конца работы прибора в формате Час:Минута:Секунда: ";
	cin >> endTime;

	FILE *file;
	if ((file = fopen("data.txt", "w")) == NULL) {
		cout << "Невозможно открыть или создать файл\n";
	}
	else { 
		fputs("-------------------------------------------------------------------------------------------------------------------------\n", file);
		fputs("|\t\tДень\t\t\t|\t\tВремя начала\t\t|\t\tВремя конца\t\t|\n", file);
		fputs("-------------------------------------------------------------------------------------------------------------------------\n", file);
		fputs("|\t\t", file);
		fputs(date, file);
		fputs("\t\t", file);
		fputs("|\t\t", file);
		fputs(startTime, file);
		fputs("\t\t", file);
		fputs("|\t\t", file);
		fputs(endTime, file);
		fputs("\t\t|", file);
		fclose(file);
	}
}