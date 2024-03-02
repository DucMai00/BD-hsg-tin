#include <iostream>
using namespace std;

int main() {
    int n,i ;
    float total=1.0 ,x;
    cout<<"Nhap so nguyen n :";cin>>n;
    cout<<"nhap so nguyen x : ";cin>>x;
	for (i=1; i<=n; ++i) total *= x ;
    cout<<"Tong T(x,n) = "<<total;
	
}