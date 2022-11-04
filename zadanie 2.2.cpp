// ConsoleApplication3.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
int main()
{
    ///podawanie dowolnej liczby a i b 
    int a;
    int b;
    cout << " Podaj dowolna liczbe a oraz b oddzielone spacja";
    cout << endl;
    cin >> a >> b;
    cout << "Podana liczba a to == " << a;

    cout << " Podana liczba b to == "  << b;
    cout << endl;
       //problem 1 napisanie wierszu o dlugosci a 
    cout << "Wiersz o dlugosci a\n ";
    cout << endl;
    
    for (int i = 1; i <= a; i++) {
        cout << "*";
    }
    //problem drugi napisanie w kolumnie wiersza dlugosci b
    cout << endl << endl;
    cout << "Kolumna o dlugosci b\n ";
    cout << endl;
    
    for (int i = 1; i <= b; i++) {
        cout << "*" << endl; //napisanie <<endl sprawi,że wartość liczby wyswietli się w kolumnie
    }
    cout << endl;
    //obwod prostokatu o wymiarach a x b
    cout << "Wypelniony prostokat o wymiarach axb"; 
    cout << endl;

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    //obramowanie prostokata o wymiarach axb operator logiczny OR
    cout << "Obwod prostokata o wymiarach axb";
    cout << endl;
    for (int i = 1; i <= b; i++)
    {
        for (int j = 1; j <= a; j++)
        {
            if (j == 1 || j == a || i == 1 || i == b)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl << endl;
    
  
    cout << "Trojkat rownoramienny z katem prostym w lewym dolnym rogu";
    cout << endl;

    for (int i = 1; i <= a; i++) //tutaj mamy j rowne lub wieksze od i 
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;


    cout << "Trojkat rownoramienny z katem prostym w lewym dolnym rogu";
    cout << endl;
    for (int i = 1; i <= a; i++) //w tej zaleznosci j rowne lub wieksze od a
    {
        for (int j = 1; j <= a; j++)
        {
            if (j < i) { cout << " "; }
            else { cout << "*"; }
        }
        cout << endl;
    }
    cout << endl;
    
    

    }
       

        




        






