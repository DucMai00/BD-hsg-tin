#include <iostream>
#include <math.h>
using namespace std ;

int main () {
    int n,i ,sodu,bientam ,min;
    cout<<"Nhap 1 so nguyen duong n : ";cin>>n;
    bientam = n ;
    sodu = bientam%10;
    min = sodu ;
    while (bientam!=0) {
        sodu = bientam%10;
        bientam = bientam /10;
        if (min > sodu) min =sodu; 
    }; 
    cout<<"so du nho nhat : "<<min;
}