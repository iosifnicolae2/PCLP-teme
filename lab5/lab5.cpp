// lab5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <math.h>


int max(int a, int b){
	if (a < b) return b;
	return a;
}

void max(int a, int b, int c) {
	printf("Maximul este: %d", max(a, max(b, c)));
}
//3 valori, pot fi laturi triunhhi + aria

int verif_triunghi(int a, int b, int c) {
	if ((a + b) > c && (b + c) > a && (a + c) > b) return 1;
	return 0;
}

int modul(int x) {
	return x < 0 ? -x : x;
}

double aria_triunghi(int a, int b, int c) {
	double p = (a + b + c) / 2.;
	double aria = sqrt(modul(p*(p - a)*(p - b)*(p - c)))*1.0;

	return aria;
}

void eroare() {
	printf("Nu pot rezolva ecuatia.");
}
void rezolv_ecuatia(int a, int b, int c) {
	if (a == 0) {
		if (b == 0) {
			if(c==0)
				printf("Ecuatie nedeterminata.");
			else
				printf("Nu pot rezolva ecuatia.");
			return;
		}
		printf("Solutia ecuatiei este: %.2f", -c / b*1.0);
	}
	else {
		int d = b*b - 4 * a*c;
		if (d == 0) {
			printf("x1=x2=%.2f", -b / 2. * a);

			return;
		}

		if (d < 0) {

			printf("x1= %.2f + %.2fi", -b / 2. * a, sqrt(-d) / (2. * a));
			printf("x1= %.2f - %.2fi", -b / 2. * a, sqrt(-d) /( 2. * a));
		}
		else {
			printf("sqrt: %d", sqrt(d));
			printf("x1=%.2f", (-b + sqrt(d)) / (2. * a));
			printf("\nx2=%.2f", (-b - sqrt(d)) / (2. * a));
		}


	}
}

void afis_ziua(int x) {
	printf("Ziua cu nr. %d este: ", x);
	switch (x) {
	case 1:
		printf("Luni");
		break;
	case 2:
		printf("Marti");
		break;
	case 3:
		printf("Miercuri");
		break;
	case 4:
		printf("Joi");
		break;
	case 5:
		printf("Vineri");
		break;
	case 6:
		printf("Sambata");
		break;
	case 7:
		printf("Duminica");
		break;
	}
}


int main()
{
	//int a, b, c;
	//scanf_s("%d%d%d", &a, &b, &c);


	//clrscr() - sterge ecranul 

	// max(a, b, c);
	/*
	if (verif_triunghi(a, b, c))
		printf("Aria triunghiului este: %f", aria_triunghi(a, b, c));
	else printf("Cele 3 laturi nu formeaza un triunghi.");
	*/
	//rezolv_ecuatia(a, b, c);

	/*int a;
	scanf_s("%d", &a);
	afis_ziua(a);*/
	/*
	int a, b;
	char c;
	scanf_s("%d %d %c", &a, &b, &c);

	switch (c) {
	case '+':
		printf("%d+%d=%d", a, b, a + b);
		break;
	case '-':
		printf("%d-%d=%d", a, b, a - b);
		break;
	case '*':
		printf("%d*%d=%f", a, b, a * b*1.0);
		break;
	case '/':
		printf("%d/%d=%f", a, b, a*1.0 / b);
		break;
	case '%':
		printf("%d \\% %d=%f", a, b, a % b);
		break;
	}
	*/
	for (int i = 1; i <= 10; i++)
		printf("%d ", i);


	printf("\n");
	int i = 1;
	while(i<=10)
		printf("%d ", i++);


	printf("\n");
	i = 1;
	do {
		printf("%d ", i++);
	} while (i <= 10);


	_getch();
    return 0;
}

