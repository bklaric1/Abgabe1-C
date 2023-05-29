
//Aufgabe 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void PrintTiger(void)
{
	printf("   (\"`-''-/\").___..--''\"`-._\n");
	printf("    `6_ 6 )      `-. (    ). `-.__.`)\n");
	printf("    (_Y_.)'   ._   ) `._ `. ``-..-'\n");
	printf("   _..`--'_..-_/  /--'_.' ,'\n");
	printf("  (il),-''  (li),'  ((!.-'");
}

//Aufgabe 2


void QuersummmeBerechnen(void)
{
	int Nummer;
	printf("Geben Sie ein vierstelligen Nummer ein: ");
	scanf("%d", &Nummer);

	if (Nummer<10000 && Nummer>=1000)
	{
		int ErsteStelle = Nummer / 1000;
		int ZweiteStelle = Nummer / 100 - ErsteStelle * 10;
		int DritteStelle = Nummer / 10 - ErsteStelle * 100 - ZweiteStelle * 10;
		int VierteStelle = Nummer - ErsteStelle * 1000 - ZweiteStelle * 100 - DritteStelle * 10;

		int Quersumme = ErsteStelle + ZweiteStelle + DritteStelle + VierteStelle;
		printf("\n");
		printf("Die Quersumme ist: %d", Quersumme);
	} else
		printf("Das ist nicht ein vierstelligen Nummer...");

}


//Aufgabe 3
//a)

void Uhrzeit1(void)
{
	int stunden = 12;
	int minuten = 20;
	int sekunden = 43;

	printf("Aktuelle Uhrzeit:    %d:%d:%d Uhr", stunden, minuten, sekunden);
}
//b)

void Uhrzeit2(void)
{
	int stunden = 12;
	int minuten = 20;
	int sekunden = 34;

	printf("Aktuelle Uhrzeit:    %02d:%02d:%02d Uhr", stunden, minuten, sekunden);
}


//Aufgabe 4
//a)

void Uhrzeit3 (void)
{
	int x  = 24060;
	int stunden = x / 3600;
	int minuten = x / 60 - stunden * 60;
	int sekunden = x - minuten * 60 - stunden * 3600;

	printf("Prof. von Bodisco steht um  %2d:%02d:%02d Uhr auf.", stunden, minuten, sekunden);
}


//b)

void Uhrzeit4 (void)
{
	int x  = 24060;

	printf("Prof. von Bodisco steht um  %2d:%02d:%02d Uhr auf.", x / 3600, x / 60 - x / 3600 * 60, x - (x / 60 - x / 3600 * 60) * 60 - x / 3600 * 3600);

}


//Aufgabe 5

void Pinnummer (void)
{
	int Nummer = 0;
	while (Nummer < 9999)
	{
		Nummer++;
		printf("%0004d\n", Nummer);
	}
}

//Aufgabe 6

void Palindrom (void)
{
	int Nummer;
		printf("Geben Sie ein funfstelligen Nummer ein: ");
		scanf("%d", &Nummer);

		if (Nummer>9999 && Nummer<100000)
		{
			int ErsteStelle = Nummer / 10000;
			int ZweiteStelle = Nummer / 1000 - ErsteStelle * 10;
			int DritteStelle = Nummer / 100 - ErsteStelle * 100 - ZweiteStelle * 10;
			int VierteStelle = Nummer / 10 - ErsteStelle * 1000 - ZweiteStelle * 100 - DritteStelle * 10;
			int FunfteStelle = Nummer - ErsteStelle * 10000 - ZweiteStelle * 1000 - DritteStelle * 100 - VierteStelle *10;

			if (ErsteStelle == FunfteStelle && ZweiteStelle == VierteStelle)
			{
			printf("\n");
			printf("Nummer %d ist ein Palindrom", Nummer);
			}
			else
			printf("Nummer %d ist kein Palindrom", Nummer);

		}
		else
		printf("Das ist nicht ein funfstelligen Nummer...");
}

//Aufgabe 7

void Rechteck ()
{
	unsigned int Breite;
	unsigned int Hoehe;
	char c;
	printf("Geben Sie Breite ein: ");
	scanf("%d", &Breite);
	printf("Geben Sie Hoehe ein: ");
	scanf("%d", &Hoehe);
	printf("Geben Sie ein Zeichen: ");
	scanf(" %c", &c);

	for (int i = 0; i < Breite; i++)
	{
		printf("%c", c);
	}

	printf("\n");

	for (int i = 2; i < Hoehe; i++)
	{
		printf("%c", c);

		for(int j = 2; j < Breite; j++)
		{
			printf(" ");
		}
		printf("%c\n", c);
	}

	for (int i = 0; i < Breite; i++)
	{
		printf("%c", c);
	}
}

//Aufgabe 8

void Sanduhr (void)
{

}


int main (void)
{
//	PrintTiger();
//	QuersummmeBerechnen();
//	Uhrzeit1();
//	Uhrzeit2();
//	Uhrzeit3();
//	Uhrzeit4();
//	Pinnummer();
//	Palindrom();
//	Rechteck();
	Sanduhr();

	return EXIT_SUCCESS;
}


