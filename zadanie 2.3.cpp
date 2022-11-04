// zadanie 2.1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
int main()
{
    int miesiac;
    int rok;
    bool przestepny;
    int nieprzestepny;
    
      
   cout << "Podaj liczbe z przedzialu od 1 do 12 "; //musze okreslic sie jasno by program wiedzial ile dokladnie jest miesiecy
   cin >> miesiac;
   if (miesiac < 1 || miesiac > 12) {
       cout << "Ta liczba nie reprezentuje zadnego miesiaca"; cout << endl; return 0;
   }
    
    cout << "Podaj rok ";  
    cin >> rok;
    if (rok < 1) {
        cout << "Podales rok ktory jest 0, albo przed nasza era a takiego programu nie umiem napisac hah lub po prostu rok jest minusowy co jest juz absurdem"; cout << endl; return 0;
    }
     
    nieprzestepny = rok % 4; //rok przestepny jest co cztery lata wiec hmmm
    if (nieprzestepny == 0) { przestepny = true; }
    else { przestepny = false; }


          
    cout << endl;



       switch (miesiac)
    {
    case 1:
        cout << "Styczen. Trwa 31 dni"; 
        break;
    case 2:
        cout << "Luty. ";
        if (przestepny) { cout << "W roku przestepnym trwa 29 dni"; }
        else { cout << "W roku nieprzestepnym trwa 28 dni"; }
        break;
    case 3:
        cout << "Marzec. Trwa 31 dni";
        break;
    case 4:
        cout << "Kwiecien. Trwa 30 dni";
        break;
    case 5:
        cout << "Maj. Trwa 31 dni";
        break;
    case 6:
        cout << "Czerwiec. Trwa 30 dni";
        break;
    case 7:
        cout << "Lipiec. Trwa 31 dni";
        break;
    case 8:
        cout << "Sierpien. Trwa 30 dni";
        break;
    case 9:
        cout << "Wrzesien. Trwa 31 dni";
        break;
    case 10:
        cout << "Pazdziernik. Trwa 30 dni";
        break;
    case 11:
        cout << "Listopad. Trwa 31 dni";
        break;
    case 12:
        cout << "Grudzien. Trwa 30 dni" ;
        break;
    default:
        cout << "Wybrales liczbe spoza zakresu";
        

        

    }
    cout << endl << endl;
    if (miesiac < 4 || miesiac > 9) { cout << " W tym miesiacu jest pochmurno " << endl; } //jesli miesiac jest mniejszy od 4 czyli kwietnia i wiekszy od wrzesnia czyli 9 to pochmurnoooo
    else { cout << "W tym miesiacu jest slonecznie " << endl; }


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
