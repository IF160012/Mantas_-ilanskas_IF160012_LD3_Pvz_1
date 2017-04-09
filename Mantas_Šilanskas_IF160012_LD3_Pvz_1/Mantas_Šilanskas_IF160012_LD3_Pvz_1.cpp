// Mantas_Ðilanskas_IF160012_LD3_Pvz_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 

using namespace std;

int main()
{
	int a = 10; // Priskiriama reikðmë neþinomajam a, kuris yra lygus 10.

	cout << "Kintamojo a reiksme: " << a << endl; // Programa atspaudina priskirta neþinamojo reikðmë.
	cout << "Kintamojo a adresas: " << &a << endl; // Programa atspaudina neþinomojo reikðmës adresa RAM atmintyje.

	system("pause"); // Programa sustabdoma.
	return 0; // Programa baige darbà.
}

