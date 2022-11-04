// zadanie 2.1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
int main()
{
	int i, n, suma;
	suma = 0;
	cout << "Podaj liczbe n by policzyc ciag n ";
		cin >> n;
	for (i=1;i<=n;i++)  ////n tak jakby to kazda kolejna linia ciagu 
		                  //dla n1= to bedzie np 
		                  //dla n2 to bedzie juz n1+n2 = to bedzie juz np 8
		                   //n3 =n1+n2+n3=
		                     //n4
		                     //n5

	{
		suma = suma + i; 
	}
	cout << "Nasz ciag n bedzie wynosil: " << suma;
	return 0;
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
