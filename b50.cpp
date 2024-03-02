#include <iostream>
#include <math.h>
using namespace std ;

int main () {
    int n,i ,sodu,bientam , tich= 1;
    cout<<"Nhap 1 so nguyen duong n : ";cin>>n;
    bientam = n ;
    cout<<"chu so dao nguoc :";
    while (bientam!=0) {
        sodu = bientam %10;
        cout<<sodu;
        bientam = bientam/10 ;
    };
    
}