#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n ,x ,i ,T=1;
    float total=0  ;
    cout<<"Nhap 1 so nguyen n :";cin>>n;
    cout<<"Nhap so nguyen x : ";cin>>x;
	for (i=1; i<=n; ++i)  total += pow(x,(i*2));
    cout<<"Tong T(n) = "<<total;
}