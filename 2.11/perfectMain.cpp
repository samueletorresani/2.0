#include <iostream>
#include <cmath>

using namespace std;

#define N 1000
bool isPerfect (int number);
int main(){
    cout<< "perfect number from 1 to "<< N << " are: "<<endl;
    for(int i= 1; i < N; i++){
        if(isPerfect(i)) cout << i<< endl;
    }
}

bool isPerfect (int number){
    int sum= 0, i= 1;
    do{
        if (number% i == 0){
            sum += i;
            i++;
        }
        else ++i;
    }while (i<number); 
    if (sum == number) return true;
    else return false;
}