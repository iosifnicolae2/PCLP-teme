// tema3.cpp : Defines the entry point for the console application.
//
#define _CRT_SECURE_NO_WARNINGS
#include "stdafx.h"
#include <conio.h>

/*
Sa se scrie un program in care se declar„ o variabil„ de tip char, una de tip int, una float, una double ∫i un ∫ir de caractere. Se citesc valori de la tastatur„ pentru cele cinci variabile. S„ se afi∫eze valoarea, adresa, numar de octeti ocupa—i pentru fiecare variabil„ Ón parte.  
*/

void flush_buffer() {
	char ch;
	while ((ch = getchar()) != '\n' && ch != EOF);
}
void problema1() {
	char c;
	int i;
	float f;
	double d;
	char sir[50];

	printf("Introduceti un caracter:");
	scanf_s("%c",&c,sizeof(c));
	flush_buffer();

	printf("Introduceti un intreg:");
	scanf_s("%d", &i, sizeof(i));
	flush_buffer();

	printf("Introduceti un float:");
	scanf_s("%f", &f, sizeof(f));
	flush_buffer();

	printf("Introduceti un double:");
	scanf_s("%d", &d, sizeof(d));
	flush_buffer();

	printf("Introduceti un sir de caractere:");
	scanf_s("%50[^\n]", &sir, sizeof(sir));
	flush_buffer();




	printf("\nValoare:%c, adresa:%p,  octeti:%d", c, c, sizeof(c));
	printf("\nValoare:%d, adresa:%p,  octeti:%d", i, i, sizeof(i));
	printf("\nValoare:%f, adresa:%p,  octeti:%d", f, f, sizeof(f));
	printf("\nValoare:%d, adresa:%p,  octeti:%d", d, d, sizeof(d));
	printf("\nValoare:%s, adresa:%p,  octeti:%d", sir, sir, sizeof(sir));

}

/*
Se declar„ dou„ variabile pentru reprezentarea de valori numerice reale a, b ∫i se citesc de la tastatur„. S„ se inverseze valorile celor dou„ variabile
*/
void problema2() {
	int a, b;
	printf("Introduceti doua valori numerice:");
	scanf_s("%d%d", &a, &b);

	a += b;
	b = a - b;
	a = a - b;

	/*
	sau 
	int c = b;
	b = a;
	a = c;
	*/

	printf("Valorile inversate sunt: %d %d", a, b);
}


void problema3() {
	float a = 1 / 2 + 1 / 3 + 1 / 4;
	float b = 3 * (4 + (6 + 7 / 8)*(5 / 3)) / ((3 + 1 / 3) / 4 + 1.5 * 8 / 7);

}


/*
S„ se afi∫eze valoarea catului ∫i a restului Ómp„r—irii a dou„ valori citite de la tastatur„.   
*/
void problema4() {

	int a, b;
	printf("Introduceti doua valori numerice:");
	scanf_s("%d%d", &a, &b);
	printf("\nCatul: %d", a / b);
	printf("\nRestul: %d", a % b);

}
//problema 5: a,b
void problema5() {
	int x, y;
	printf("Introduceti doua valori booleene:");
	scanf_s("%d%d", &x, &y);
	printf("Regula lui DeMorgan: \na:%d\nb:%d", !(x || y), !(x && y));
}

int main()
{
	problema5();
	_getch();
    return 0;
}

