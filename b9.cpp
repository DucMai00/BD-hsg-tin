#include <iostream>
using namespace std;

int main() {
    int n;
    float total=1 ,i;
    cout<<"Nhap 1 so nguyen n :";cin>>n;
	for (i=1; i<=n; ++i) total *= i ;
    cout<<"Tong T(n) = "<<total;
	
}