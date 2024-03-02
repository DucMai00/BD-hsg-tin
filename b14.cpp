#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n ,x ,i ,T=1,bombom;
    float total=0  ;
    cout<<"Nhap 1 so nguyen n :";cin>>n;
    cout<<"Nhap so nguyen x : ";cin>>x;
	for (i=1; i<=n; ++i) 
    if (i%2 == 0) {

    }else{
        total += pow(x,i = ((i*2)+1));
    }
    // total += pow(x,i = ((i*2)+1));
    cout<<"Tong T(n) = "<<total;
}
// dang fix ---------