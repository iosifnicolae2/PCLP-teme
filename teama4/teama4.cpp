// teama4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <conio.h>
#include <math.h>
/*
S� se scrie un program �n care se declar� o variabil� de tip int. Se cite�te valoarea variabilei de la tastatur�. S� se afi�eze rezultatele operatiilor unare care pot fi efectuate cu aceast� variabil�, ca �n exemplul prezentat.   
*/

void problema1() {
	int i;
	printf("Introduceti o valoare intreaga:");
	scanf_s("%d", &i);
	printf("\n &var:%p", i);
	printf("\n sizeof(var):%d", sizeof(i));
	printf("\n +var:%d", +i);
	printf("\n -var:%d", -i);
	printf("\n !var:%d", !i);
	printf("\n ~var:%d", ~i);
}

/*
S� se scrie un program �n care se declar� o variabil� de tip float. Se cite�te valoarea variabilei de la tastatur�. S� se afi�eze rezultatele operatiilor unare care pot fi efectuate cu aceast� variabil� (vezi problema nr.2).   
*/

void problema2() {
	int f;
	printf("Introduceti o valoare float:");
	scanf_s("%f", &f);
	printf("\n &var:%f", &f);
	printf("\n sizeof(var):%d", sizeof(f));
	printf("\n +var:%d", +f);
	printf("\n -var:%d", -f);
	printf("\n !var:%d", !f);
	printf("\n ~var:%d", ~f);
}

/*
S� se scrie un program �n care se declar� dou� variabile de tip int. Se citesc valori de la tastatur�. S� se afi�eze rezultatele tuturor opera�iilor binare care pot fi efectuate cu aceste variabile, ca �n exemplul prezentat. 
*/
void problema3() {
	int a,b;
	printf("Introduceti doua valori intregi:");
	scanf_s("%d%d", &a,&b);

	printf("%6d + %6d = %6d\n", a, b, a + b);
	printf("%6d - %6d = %6d\n", a, b, a - b);
	printf("%6d * %6d = %6d\n", a, b, a * b);
	printf("%6d / %6d = %6d\n", a, b, a / b);
	printf("%6d & %6d = %6d\n", a, b, a & b);
	printf("%6d | %6d = %6d\n", a, b, a | b);
	printf("%6d ^ %6d = %6d\n", a, b, a ^ b);
	printf("%6d >> %6d = %6d\n", a, b, a >> b);
	printf("%6d << %6d = %6d\n", a, b, a << b);
	printf("%6d && %6d = %6d\n", a, b, a && b);
	printf("%6d || %6d = %6d\n", a, b, a || b);
	printf("%6d > %6d = %6d\n", a, b, a > b);
	printf("%6d < %6d = %6d\n", a, b, a < b);

}


void problema4() {
	float a, b;
	printf("Introduceti doua valori intregi:");
	scanf_s("%f%f", &a, &b);

	printf("%6f + %6f = %6f\n", a, b, a + b);
	printf("%6f - %6f = %6f\n", a, b, a - b);
	printf("%6f * %6f = %6f\n", a, b, a * b);
	printf("%6f / %6f = %6f\n", a, b, a / b);
	printf("%6f && %6f = %6f\n", a, b, a && b);
	printf("%6f || %6f = %6f\n", a, b, a || b);
	printf("%6f > %6f = %6f\n", a, b, a > b);
	printf("%6f < %6f = %6f\n", a, b, a < b);

}
/*
S� se scrie un program �n care se cite�te de la tastatur� un �ntreg. S� se afi�eze un mesaj care s� arate dac� valoarea este par� sau impar�. 
*/
void problema5() {
	int a;
	printf("Introduceti o valoare intrega:");
	scanf_s("%d", &a);
	if (a % 2 == 0) 
		printf("%d este par", a);
	else
		printf("%d este impar", a);
}

/*
Se consider� variabilele reale a, b, c care se citesc de la tastatur�. S� se afi�eze dac� c se afl� �n intervalul [a, b]. Se va folosi operatorul condi�ional (? :). 
*/
void problema6() {
	int a,b,c;
	printf("Introduceti 3 valori intregi:");
	scanf_s("%d%d%d", &a, &b, &c);
	// a<c<b
	a < c && c < b ?
		printf("%d este in intervalul [%d,%d]", c, a, b) : printf("c nu este in intervalul [a,b]");
}

/*
Se consider� variabilele reale a, b, c, d care se citesc de la tastatur�. S� se afi�eze intersec�ia, respectiv reuniunea intervalelor [a, b] �i [c, d]. Se va folosi operatorul condi�ional (? :).   
*/
void problema7() {
	int a, b, c,d;
	printf("Introduceti 4 valori intregi:");
	scanf_s("%d%d%d%d", &a, &b, &c, &d);

	/*
	7 - 9
		6 - 15

		r: 6 - 15
		i: 7 - 9
		*/

	int r_a = a<c?a:c;
	int r_b = b<d ? d : b;
	printf("Reuniunea intervalelor: [%d,%d]", r_a, r_b);


	int i_a = a<c ? c : a;
	int i_b = b<d ? b : d;
	printf("\nIntersectia intervalelor: [%d,%d]", i_a, i_b);

}

/*
S� se scrie un program �n care se cite�te de la tastatur� un caracter. S� se afi�eze un mesaj care s� arate dac� s-a tastat majuscul� (liter� mare), liter� mic� sau un alt caracter. 
*/

void problema8() {
	printf("Introduceti un caracter:");
	char c = getchar();
	if ('a' <= c && c <= 'z') printf("ati introdus o litera mica");
	else if('A' <= c && c <= 'Z') printf("ati introdus o litera mare"); else
		printf("nu ati introdus un caracter");

}

/*
S� se scrie un program �n care se cite�te de la tastatur� un �ntreg reprezentat pe un octet. S� se afi�eze valoarea bitului de pe pozi�ia 3.  

*/
void problema9() {
	int a;
	printf("Introduceti un numar intreg");
	scanf_s("%d", &a);
	printf("Bitul de pe pozitia 4 este %d", (a>>3)&1);
		// 8 = 1000
		// 1010101111


}

void problema10() {
	 int a;
	printf("Introduceti un numar intreg");
	scanf_s("%d", &a);
	printf("Rezultat %d",(a&127)+(a>>7));
	
	//+(a>>7)

	// 8 = 1000
	// 1010101111


}

void problema11() {
	int a;
	printf("Introduceti un numar intreg");
	scanf_s("%i", &a);
	printf("sin(a) = %f\n", sin(a));
	printf("cos(a) = %f\n", cos(a));
	printf("tan(a) = %f\n", tan(a));

	//+(a>>7)

	// 8 = 1000
	// 1010101111


}
int main()
{
	problema11();


	_getch();
    return 0;
}

