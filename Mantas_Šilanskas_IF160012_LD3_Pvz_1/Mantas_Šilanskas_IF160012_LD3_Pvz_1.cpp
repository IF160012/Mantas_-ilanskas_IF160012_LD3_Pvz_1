// Mantas_�ilanskas_IF160012_LD3_Pvz_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> 

using namespace std;

int main()
{
	int a = 10; // Priskiriama reik�m� ne�inomajam a, kuris yra lygus 10.

	cout << "Kintamojo a reiksme: " << a << endl; // Programa atspaudina priskirta ne�inamojo reik�m�.
	cout << "Kintamojo a adresas: " << &a << endl; // Programa atspaudina ne�inomojo reik�m�s adresa RAM atmintyje.

	system("pause"); // Programa sustabdoma.
	return 0; // Programa baige darb�.
}

