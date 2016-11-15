// tema5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <string.h>


/*
Se considerã variabilele reale a, b, c care se citesc de la tastaturã. Sã se afiºeze dacã c se aflã în intervalul [a, b]. Se vor scrie doua variante, una va folosi operatorul condiþional (? :), cealalta instructiunea if.   
*/

void problema1() {
	int a, b, c;
	scanf_s("%d%d%d", &a, &b, &c);
	bool ok = false;

	ok = a <= c&&c <= b ? true : false;
	if (a <= c&&c <= b) ok = true;
	else
	ok = false;

	if (ok) printf("C se afla in intervalul [a,b]");
	else  printf("C nu se afla in intervalul [a,b]");

}


/*
Se considerã variabilele reale a, b, c, d care se citesc de la tastaturã. Sã se afiºeze intersecþia, respectiv reuniunea intervalelor [a, b] ºi [c, d].   
*/
void problema2() {
	int a, b, c,d;
	scanf_s("%d%d%d%d", &a, &b, &c,&d);

	int i_a = a < c ? c : a;
	int i_b = b < d ? b : d;


	int r_a = !(a < c) ? c : a;
	int r_b = !(b < d) ? b : d;

	printf("Intersectia este: [%d,%d]\n", i_a, i_b);
	printf("Reuniunea este: [%d,%d]", r_a, r_b);
}


/*
Sa se scrie un program in care se citeste de la tastatura o data calendaristica (zi, luna, an -  citite ca valori intregi).  Daca data este corecta ( zi =1...31, luna=1...12, an >1900), sa se afiseze data, pentru luna fiind afisata denumirea. De exemplu, data 15.10.2009 va fi afisata 15 octombrie 2009. In secventa de afisare se va folosi instructiunea switch. Sa se afiseze daca anul este bisect. (Un an bisect este un an care este divizibil cu 4 dar nu cu 100, exceptie facand anii divizibili cu 400 care sunt bisecti). 
*/

void problema3() {
	int zi, luna, an;
	scanf_s("%d%d%d", &zi, &luna, &an);

	if (!(zi > 0 && zi < 32)) {
		printf("Ziua nu este corecta.");
		return;
	}
	if (!(luna > 0 && luna < 13)) {
		printf("Luna nu este corecta.");
		return;
	}
	if (!(an > 1900)) {
		printf("Anul nu este corect.");
		return;
	}
	
	char luna_s[20];
	switch (luna) {
	case 1:
		strcpy_s(luna_s, "Ianuarie");
		break;
	case 2:
		strcpy_s(luna_s, "Februarie");
		break;
	case 3:
		strcpy_s(luna_s, "Martie");
		break;
	case 4:
		strcpy_s(luna_s, "Aprilie");
		break;
	case 5:
		strcpy_s(luna_s, "Mai");
		break;
	case 6:
		strcpy_s(luna_s, "Iunie");
		break;
	case 7:
		strcpy_s(luna_s, "Iulie");
		break;
	case 8:
		strcpy_s(luna_s, "August");
		break;
	case 9:
		strcpy_s(luna_s, "Septembrie");
		break;
	case 10:
		strcpy_s(luna_s, "Octombrie");
		break;
	case 11:
		strcpy_s(luna_s, "Noiembrie");
		break;
	case 12:
		strcpy_s(luna_s, "Decembrie");
		break;
	}
	printf("%d %s %d\n", zi, luna_s, an);

	bool bisect = false;
	if (an % 4 == 0 && an % 100 != 0 || an % 400 == 0)
		bisect = true;
		
	if (bisect)
		printf("Anul este bisect");
	else
		printf("Anul nu este bisect");
}

/*
Sa se scrie un program in care se citeste de la tastatura o valoare care reprezinta o temperatura reprezentata in grade Celsius. Sa se afiseze , la alegerea utilizatorului, temperatura in grade Celsius sau in grade Fahrenheit.
Obs.
grd°F = 9/5 * grd°C +32;
*/
void problema4() {
	int a;
	printf("Introduceti temperatura:");
	scanf_s("%d", &a);
	printf("Introduceti f/c pentru a afisa rezutatul dorit.");
	char c = getchar();
	switch (c) {
	case 'f':
		printf("Temperatura in grade Fahrenheit: %d", 9 / 5 * a + 32);
		break;
	case 'c':
		printf("Temperatura in grade Celsius: %d", (a-32)*5/9);

		break;
	}
}
/*
Sa se scrie un program in care se citeste de la tastatura un caracter. Sa se afiseze daca acel caracter este: - litera mare - litera mica - cifra - alt caracter 
*/
void problema5() {
	char c = getchar();
	if (c >= 'a'&&c <= 'z')
		printf("litera mica"); else
		if (c >= 'A'&&c <= 'Z')
			printf("litera mare"); else
			if (c >= '0'&&c <= '9')
				printf("cifra"); else
	printf("alt caracter");
}

/*
Sa se scrie un program in care se citeste de la tastatura un caracter. Daca este litera mica, sa se afiseze majuscula corespunzatoare (daca este ’a’ se va afisa ’A’), iar daca este litera mare sa se afiseze litera mica corespunzatoare (daca este ’A’ se va afisa’a’).  
*/
void problema6() {
	char c = getchar();
	if (c >= 'a'&&c <= 'z')
		printf("Litera mare:%c", c + 'A' - 'a'); else
		if (c >= 'A'&&c <= 'Z')
			printf("Litera mica:%c", c  + 'a' - 'A');
}

/*
Scrieti o functie care evalueaza semnul unui intreg dat. Functia returneaza 1 daca intregul este > 0, 0 daca intregul este egal cu 0 si –1 daca intregul este  < 0. Includeti functia intr-un program si testati-o
*/

int testare(int x) {
	if (x < 0) return -1;
	if (x > 0) return 1;
	return 0;

}
void problema7() {
	int a;
	scanf_s("%d", &a);
	printf("Rezultatul functiei este: %d", testare(a));
}

/*
Sa se scrie un program care citeste coordonatele (x,y) ale unui punct din plan si afiseaza numarul cadranului in care se afla (1,2,3,4). Se vor verifica succesiv semnele valorilor x si y. S-ar putea folosi instructiunea "switch"?   
*/
void problema8() {
	int x,y;
	scanf_s("%d%d", &x,&y);
	int c;
	if (x > 0) {
		if (y < 0) {
			c = 4;
		}
		else {

			c = 1;
		}
	}
	else {

		if (y < 0) {
			c = 3;
		}
		else {
			c = 2;

		}

	}
	printf("Cadranul cerute este:%d", c);
}

int main()
{
	problema8();
	_getch();
    return 0;
}

