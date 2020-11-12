    // SUP che calcola l'ipotenusa dati i due cateti.
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float cat1, cat2, ipotParz, ipot;
    cout<< "inserire primo cateto in mm: ";
    cin>> cat1;
    cout<< "inserire secondo cateto in mm: ";
    cin>> cat2;

    ipotParz= cat1*cat1 + cat2*cat2;
    ipot= sqrt (ipotParz);

    cout<< "ipotenusa= "<<ipot<<" mm";
    
return 0;
}
