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
    cout<<"Wprowadz wysokosc trojkata oraz znak...\n";
    cin>>h>>znak;
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
    for (int p = 0; p<h-1; p++)
    {
        cout<<" ";
    }
    cout<<"#"<<"\n";

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