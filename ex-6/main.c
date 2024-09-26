#include <stdlib.h>
#include <stdio.h>

int main ()
{
	char first_name[50];
	int age;
	int year;
	int old_year;
	printf("Bonjoue, quel est votre prenom ?\n");
	scanf("%50s",first_name);
	printf("bonjour %s, quel est votre age?\n", first_name);
	scanf("%d",&age);

	year = 2024 - age;
	old_year = year-1;
	printf ("%s, si vous etes de la fin d'année votre année de naissace est %d sinon c'est %d\n", first_name, year, old_year);
	exit(0);
}