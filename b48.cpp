#include <iostream>
#include <math.h>
using namespace std ;

int main () {
    int n,i ,sodu,bientam , tich= 1;
    cout<<"Nhap 1 so nguyen duong n : ";cin>>n;
    bientam = n ;
    while (bientam!=0) {
        sodu = bientam %10;
        if (sodu%2 !=0) {
        tich = tich * sodu ;
        }
        bientam = bientam/10 ;
    };
    cout<<"Tich n nguyen duong :"<<tich;
}