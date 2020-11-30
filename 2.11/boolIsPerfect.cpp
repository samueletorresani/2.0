#include <cmath>
#include "boolIsPerfect.hpp"

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