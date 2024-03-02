#include <iostream>
using namespace std;

int main() {
    int n;
    float total=0 ,i ,giaithua=1;
    cout<<"Nhap 1 so nguyen n :";cin>>n;
	for (i=1; i<=n; ++i) 
    {
        giaithua *= i ;
        total += giaithua;
        } ;
    cout<<"Tong T(n) = "<<total;
	
}