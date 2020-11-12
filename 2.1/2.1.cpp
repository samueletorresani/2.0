/*
    SUP che legge 10 numeri dall'utente e ne calcola la somma. Fermarsi a leggere numeri quando l'utente
    inserisce tutti i 10 numeri oppure quando inserisce 0, stabilendo un numero massimo a priori.
    Info: Il limite massimo dipende da quanto grandi decidiamo che siano le strutture in fase di compilazione. Impareremo che è possibile scrivere programmi che non hanno questo tipo di limite.
*/

#include <iostream>
using namespace std;

#define N 10

int main(){
    int number[N];
    
    cout<< "insert " <<N<< " number "<<endl;
    for ( int i =0; i< N; i++){
        cin>> number [i];
    }
    int sum =0;
    for ( int i=0; i< N; i++){
        sum += number [i];
    }
cout<<"sum= "<<sum;
}