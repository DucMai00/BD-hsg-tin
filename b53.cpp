#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n, i, scan, temp, max;
    max = 0;
    i = 1; 
    cout << "Nhap mot so nguyen duong n: ";cin >> n;
    temp = n;
    // Dem so luong chu so lon nhat
    do {
        scan = n % 10; 
        if (scan == max)
            i++; 
        if (scan > max)
            max = scan; 
        n /= 10; 
    } while (n != 0); 
    cout << "Co " << i << " chu so " << max << endl;
    return 0;
}
