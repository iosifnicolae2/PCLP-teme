#include "stdafx.h"
#include <stdio.h>
#include <conio.h>
#include <string.h>


void problema1() {

}

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
}

void problema3() {
}

int main()
{
	printf("Test ");
	// problema1();
	//problema2();
	//problema3();

	_getch();
	return 0;
}

