#include <iostream>
using namespace std;

int main() {
    int n;
    float total=0 ,i;
    cout<<"Nhap 1 so nguyen n :";cin>>n;
	for (i=1/2; i<=n; ++i) total += (((2*i)+1)/((2*i)+2)) ;
    cout<<"Tong S(n) =" <<total;
}