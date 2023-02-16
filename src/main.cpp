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


void drukuj_linie(char znak, int dlugosc)
{
    for(int powtorzenia = 0; powtorzenia<dlugosc; powtorzenia++)
    {
    cout<<znak;
    }
    cout<<"\n";
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
//input - szerokosc dolnej podstawy, output -trojkat prostokatny

void trojkat()
{
    int szerokosc;
    char znak;
    cout<<"Wprowac szerokosc podstawy trojkata oraz znak...\n";
    cin>>szerokosc>>znak;
    for (int i = 0;i<szerokosc; i++)
    {
        for (int j = 0; j<i+1; j++)
            {
            cout<<znak;
            }  
            cout<<"\n"; 
    }
}


void choinka()
{
    char znak;
    int h;
    int wysPnia, szerPnia;
    cout<<"Wprowadz wysokosc choinki oraz znak...\n";
    cin>>h>>znak;
    cout<<"podaj wysokosc i szerokosc pnia...\n ";
    cin>>wysPnia;
    cin>>szerPnia;
    for (int i = 0; i<h; i++)//warunek na wysokosc
    {
        for (int k = 0; k<-i+(h-1); k++)
        {
        cout<<" ";
        }

        for (int j = 0; j<i*2+1; j++)//warunek na szerokosc
        {
            cout<<znak;
        }
        
        cout<<"\n";
    }
    for(int n =0; n<wysPnia;n++)
    {
        for (int p = 0; p<h-1-szerPnia/2; p++)
        {
        cout<<" ";
        }
        drukuj_linie('#',szerPnia);
    }
}


void pusty_prostokat()
 {

 }


 void szachownica()
 {
    
 }

int main ()
{
    //char znak;
    //int szerokosc, wysokosc;
    //wprowadzanie(szerokosc, znak, wysokosc);
   // figura();
    //konstrukcja(szerokosc, znak, wysokosc);

    //trojkat();
    choinka();

    return 0;
}