#include <iostream>
#include <math.h>
using namespace std ;

int main () {
    int n,i ,sodu,bientam ,max;
    cout<<"Nhap 1 so nguyen duong n : ";cin>>n;
    bientam = n ;
    sodu = bientam%10;
    max = sodu ;
    while (bientam!=0) {
        sodu = bientam%10;
        bientam = bientam /10;
        if (max < sodu) max =sodu; 
    }; 
    cout<<"so du lon nhat"<<max;
}
