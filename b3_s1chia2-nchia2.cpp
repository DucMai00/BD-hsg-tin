#include <iostream>
using namespace std;

int main() {
    int n;
    float total=0 ,i;
    cout<<"Nhap 1 so nguyen n :";cin>>n;
	for (i=1; i<=n; ++i) total += (1/i) ;
    cout<<"Tong S(n) =" <<total;
	
}