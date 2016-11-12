// tema1.cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
#include <string.h>

/*
Sa se scrie un program in care se citeste de la tastatura un caracter si se afiseaza valoarea din codul ASCII corespunzatoare acelui caracter.
*/
void problema1() {
	printf("Introduceti un caracter:");
	char c;
	c = getchar();
	printf("Codul ASCI asociat caracterului %c, este: %d.", c, (int)c);

}

/*
Sa se scrie un program in care se citesc de la tastatura date despre un student: nume, prenume, grupa, data nasterii(zi, luna, an).
*/
void citeste(char camp[], char unde[]) {
	fflush(stdin);
	printf("Introduceti %s:", camp);
	scanf_s("%s", unde, 50);
}
void citeste(char camp[], int &unde) {
	fflush(stdin);
	printf("Introduceti %s:", camp);
	scanf_s("%d", &unde);
}


void problema2() {
	char nume[50], prenume[50], grupa[50];
	int zi, luna, an;
	citeste("numele", nume);
	citeste("prenumele", prenume);
	citeste("grupa", grupa);
	citeste("ziua", zi);
	citeste("luna", luna);
	citeste("anul", an);

	//afisare tabel
	printf("\n");
	printf("---------------------------------\n");

	printf("Student:%s %s\n", nume, prenume);
	printf("Grupa:%s\n", grupa);
	printf("Data nasterii: %d.%d.%d\n", zi, luna, an);
	printf("---------------------------------\n");
}

void citeste_student(int id, char nume[], char prenume[], char grupa[], char data_nasterii[]) {
	printf("Introduceti datele studentului %d\n", id);
	citeste("numele", nume);
	citeste("prenumele", prenume);
	citeste("grupa", grupa);
	citeste("data nasterii", data_nasterii);
}

void afisare_student(int id, char nume[], char prenume[], char grupa[], char data_nasterii[]) {
	printf("%-15s %-15s %-8s %-20s\n", nume, prenume, grupa, data_nasterii);
}

void problema3() {
	char nume[50][50], prenume[50][50], grupa[50][50], data_nasterii[50][50];
	for (int i = 1; i <= 3; i++)
		citeste_student(i, nume[i], prenume[i], grupa[i], data_nasterii[i]);

	printf("\n--------------------------------------------------------------------\n");
	printf("%-15s %-15s %-8s %-20s", "Nume", "Prenume", "Grupa", "Data nasterii");
	printf("\n");
	for (int i = 1; i <= 3; i++)
		afisare_student(i, nume[i], prenume[i], grupa[i], data_nasterii[i]);
	printf("--------------------------------------------------------------------\n");
}

int main()
{

	// problema1();
	//problema2();
	problema3();

	_getch();
	return 0;
}

