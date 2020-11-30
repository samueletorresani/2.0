#include <iostream>
#include <cmath>
#include "boolIsPerfect.hpp"

using namespace std;

#define N 1000

int main(){
    cout<< "perfect number from 1 to "<< N << " are: "<<endl;
    for(int i= 1; i < N; i++){
        if(isPerfect(i)) cout << i<< endl;
    }
}