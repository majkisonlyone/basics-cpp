#include <iostream>

using namespace std;
// input *23 output prostokąt gwiazdek szer. 2 wys. 3

void wprowadzanie(int &a, char &zn, int &h)
{
    cout << "wprowadz szerokosc, znak i wysokosc prostokata...\n";
    cin >> a >> zn >> h;
}

void figura()
{
    cout << "twoj prostokat: \n";
}

void drukuj_linie(char znak, int dlugosc)
{
    for (int powtorzenia = 0; powtorzenia < dlugosc; powtorzenia++)
    {
        cout << znak;
    }
    cout << "\n";
}

void konstrukcja(int szerokosc, char znak, int wysokosc)
{
    for (int powtorzenia = 0; powtorzenia < wysokosc; powtorzenia++)
    {
        for (int powtorzenia = 0; powtorzenia < szerokosc; powtorzenia++)
        {
            cout << znak;
        }
        cout << "\n";
    }
    cout << "\n";
}
// input - szerokosc dolnej podstawy, output -trojkat prostokatny

void trojkat()
{
    int szerokosc;
    char znak;
    cout << "Wprowac szerokosc podstawy trojkata oraz znak...\n";
    cin >> szerokosc >> znak;
    for (int i = 0; i < szerokosc; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << znak;
        }
        cout << "\n";
    }
}

void choinka()
{
    char znak;
    int h;
    int wysPnia, szerPnia;
    cout << "Wprowadz wysokosc choinki oraz znak...\n";
    cin >> h >> znak;
    cout << "podaj wysokosc i szerokosc pnia...\n ";
    cin >> wysPnia;
    cin >> szerPnia;
    for (int i = 0; i < h; i++) // warunek na wysokosc
    {
        for (int k = 0; k < -i + (h - 1); k++)
        {
            cout << " ";
        }

        for (int j = 0; j < i * 2 + 1; j++) // warunek na szerokosc
        {
            cout << znak;
        }

        cout << "\n";
    }
    for (int n = 0; n < wysPnia; n++)
    {
        for (int p = 0; p < h - 1 - szerPnia / 2; p++)
        {
            cout << " ";
        }
        drukuj_linie('#', szerPnia);
    }
}

void pusty_prostokat()
{
    int wys = 6, szer = 8;

    for (int n = 0; n < szer; n++)
    {
        cout << "*";
    }
    cout << "\n";
    for (int h = 0; h < wys - 2; h++)
    {
        cout << "*";
        for (int i = 0; i < szer - 2; i++)
        {
            cout << " ";
        }
        cout << "*\n";
    }

    for (int n = 0; n < szer; n++)
    {
        cout << "*";
    }
    cout << "\n";
}

void szachownica()
{
    int szer = 8, wys = 8;

    for (int h = 0; h < wys / 2; h++)
    {
        for (int a = 0; a < szer / 2; a++)
        {
            cout << "# ";
        }
        cout << "\n";
        for (int b = 0; b < szer / 2; b++)
        {
            cout << " #";
        }
        cout << "\n";
    }
}

void is_even()




{
 int liczba;

 cout<<"wprowadz liczbe calkowita...\n"  ;
 cin>>liczba;


//  if (liczba%2 ==0)
//  {
//     cout<<"twoja liczba jest parzysta\n";
//  }
//  else 
//  {
//     cout<<"Twoja liczba jest nieparzysta\n";
//  }

 liczba%2==0 ? cout<<"parzysta\n" : cout<<"nieparzysta\n"; //ternary (conditional) operator

}

void czy_trojkat(int a, int b, int c)
{
if (a<b+c && b<a+c && c<b+a)
cout<<"mozna zbudowac trojkat\n";
else 
cout<<"nie mozna zbudowac trojkata\n";
}


void iloczyn_n()
{

int n, iloczyn = 1, zastepcza;
cout<<"wprowadz liczbe liczb..\n";
cin>>n;

for (int i =0; i<n; i++)
{
cout<<"podaj liczby: "<<n-i<<"...\n";
cin>>zastepcza;
iloczyn = iloczyn*zastepcza;
} 
cout<<iloczyn<<"\n";

}


int suma_kwadratow(int a , int b)
{
int wynik;
wynik = a*a + b*b;              //return a*a + b*b;
return wynik;
}

int main()
{
    // char znak;
    // int szerokosc, wysokosc;
    // wprowadzanie(szerokosc, znak, wysokosc);
    // figura();
    // konstrukcja(szerokosc, znak, wysokosc);

    // trojkat();
    // choinka();
    // pusty_prostokat();
    //szachownica();
    //is_even();
    //czy_trojkat(1,7,9);
    //iloczyn_n();

    cout<<suma_kwadratow(2,3);
    




    return 0;
}