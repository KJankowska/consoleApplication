// ConsoleApplication1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <memory> // unique_ptr
#include <string>
#include "ConsoleApplication1.h"
#include <fstream>
#include <cstdlib>
#include <rapidxml.hpp>

using namespace rapidxml;

using namespace std;

int main()
{ //dodanie nowego tekstu w txt
	string linia;
	fstream plik;

	plik.open("dane.txt", ios::out | ios::trunc);
	if (plik.good() == true)
	{
		plik << "nowe dane w pliku";
		plik.close();
	}

	system("PAUSE");
	return(0);

	ofstream mojStrumien("/dane.txt");

	return 0;

	ofstream mojStrumien("/dane.txt");

	if (mojStrumien)
	{
	}
	else
	{
		cout << "BŁĄD: nie można otworzyć pliku." << endl;
	}
}

int parseXML

{
	const char * xmlDocument = "dane.xml";

	xml_document <> document;
	try
	{
		document.parse < 0 >(text);
		catch (const parse_error & e)
		{
			std::cerr << e.what() << " here: " << e.where < char >() << std::endl;
			return -1;
		}
	}

	void openClose() {

		ofstream myfileTxt;
		myfileTxt.open("example.txt");
		myfileTxt << "Writing this to a file.\n";
		myfileTxt.close();
		return 0;

		ofstream myfileXML;
		myfileXML.open("example.xml");
		myfileXML << "Writing this to a file.\n";
		myfileXML.close();
		return 0; 
	
			}
	}
	
	// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
	// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

	// Porady dotyczące rozpoczynania pracy:
	//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
	//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
	//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
	//   4. Użyj okna Lista błędów, aby zobaczyć błędy
	//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
	//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln


// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln