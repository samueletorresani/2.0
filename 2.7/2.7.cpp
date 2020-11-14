    /*
    SUP che calcola la media dei voti di un esame. Il programma si fa dare prima il numero totale di studenti,
    poi i voti. Supporre un limite massimo di studenti.
    */

#include <iostream>

using namespace std;

int main()
{
    int n, somma;
    float media;
    cout<< "inserire numero studenti esaminati: ";
    cin n;
    int a [n];
    for (i=0; i<n; i++){
        cout<< "inserire voto esame: "<<i<<a[i];
        somma= somma + a[i];
    }
    cout<< "somma voti di "<<n<< " studenti= "<< somma;
    media= somma / n;
    cout << "media dei voti= "<< media;
return 0;
}