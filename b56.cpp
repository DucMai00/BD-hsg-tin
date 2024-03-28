#include <iostream>
#include <math.h>
#include <list>
using namespace std;    

int main() {
    int n, i=0, scan, temp, cloud, lmao ;
    cout << "Nhap mot day so nguyen duong n: ";cin >> n;
    temp = n;
    cloud = temp%10 ;
    
    while (cloud!=0){
        if (cloud%2 !=0){ 
            list<int>odd;
            odd.push_back(cloud);
        for (auto i : odd) 
            cout<<"Day So le la "<<i<<" ";
        }
        if (cloud%2 == 0) {
            list<int>even;
            even.push_back(cloud);
        for (auto i : even)
            cout<<"Day so chan la : "<<i<<" ";
        }
        cloud/=10;
    }; 
}
   

