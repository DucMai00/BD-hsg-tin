#include <iostream>
#include <math.h>
using namespace std;    

int main() {
    int n, i=0, scan, temp, min;
    cout << "Nhap mot day so nguyen duong n: ";cin >> n;
    temp = n;
    min = n % 10;
    if(n == 0)
        min = 0;
    // Dem so luong chu so lon nhat
     if (n <= 0) {
        cout << "nhap lai";
     }
    do {
        scan = n % 10; 
        if (scan == min)
            i++; 
        else if (scan < min)
            min = scan; 
        n /= 10; 
    } while (n != 0); 
    cout << "Co " << i << " chu so " << min << endl;
}

