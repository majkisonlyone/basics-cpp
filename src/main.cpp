#include <iostream>

using namespace std;
//input *23 output prostokąt gwiazdek szer. 2 wys. 3

void wprowadzanie( int& a, char& zn, int& h)
{
    cout<<"wprowadz szerokosc, znak i wysokosc prostokata...\n";
    cin>>a>>zn>>h;
}
void figura()
{
    cout<<"twoj prostokat: \n";
}
void konstrukcja(int szerokosc, char znak, int wysokosc)
{
    for(int powtorzenia = 0; powtorzenia<wysokosc; powtorzenia++)
    {
        for(int powtorzenia = 0; powtorzenia<szerokosc; powtorzenia++)
        {
        cout<<znak;
        }
        cout<<"\n";
    }
    cout<<"\n";
}
int main ()
{
    char znak;
    int szerokosc, wysokosc;
    wprowadzanie(szerokosc, znak, wysokosc);
    figura();
    konstrukcja(szerokosc, znak, wysokosc);

    return 0;
}