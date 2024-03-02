#include <iostream>
using namespace std;

int main() {
    int n,i,total=0 ;
    cout<<"Nhap 1 so nguyen n :";cin>>n;
	for (i=1; i<=n; ++i) total += (i*i) ;
    cout<<"Tong S(n) = " <<total;
	
}