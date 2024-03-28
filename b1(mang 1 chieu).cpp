#include <iostream> 
using namespace std ; 

// int main () { 
//     int a[100];
//     int n ,k , uoc=0 , boi=0 ;
//     cout<<"Nhap so n : ";cin>>n ;
//     // for (int i=1;i<=n;i++) {
//     //     cout<<"nhap phan tu thu "<<i <<" : "; cin>>a[i]; }
//     // cout<<"mang da nhap : "<<endl;
//     // for (int i=1;i<=n;i++) 
//     // {
//     //     cout<<a[i]<<" "; 
//     // }
//     for (int i = 1;i<=n;i++) a[i] = i;
//     cout<<"Nhap so nguyen duong k: " ;cin>>k ;
//     for (int i=1;i<=n;i++) {
//         if (a[i]%k == 0) boi+=a[i] ;
//         if (k%a[i] == 0) uoc+=a[i] ;   
//     }
//     cout<<"tong boi cua k la : "<<boi<<endl;
//     cout<<"tong uoc cua k la : "<<uoc;
// };

// // bai 2 
// int main () { 
//     int a[100] ,k , n , i,cs ;
//     bool kt=false;
//     cout<<"Nhap 1 so k bat ki : " ;cin>>k;
//     cout<<"Nhap so nguyen duong n : ";cin>>n ;
//     for (int i=1;i<=n;i++) {
//         cout<<"nhap phan tu thu "<<i <<" : "; cin>>a[i];
//         }
//     cout<<"mang da nhap : "<<endl;
//     for (int i=1;i<=n;i++) cout<<a[i]<<" ";    
//     for (i=1;i<=n;i++) {
//         if(a[i]==k) 
//         {
//             kt=true ;
//             cs=i; 
//             break ;
//         }
//     }
//     if(kt == true ) 
//         cout<<"So nguyen duong k = "<<k<<"co trong day so "<<" o vi tri " <<cs;
//     else 
//     {
//         cout<<"Khog tim thay phan tu k trong a ";
//     }
// }

//bai 3
int main () {
    int a[100];
    int i , n ;
    int NN=a[2] , LN=a[1]   ;
    cout<<"Nhap so nguyen duong n : ";cin>>n ;
    
    for (int i=1;i<=n;i++) 
    {
        cout<<"nhap phan tu thu "<<i <<" : "; cin>>a[i];
    }     
    cout<<"mang da nhap : "<<endl;
    for (int i=1;i<=n;i++) cout<<a[i]<<" "; 
   
    for (i=1;i<=n;i++) if (a[i] > LN ) LN = a[i];
    for (i=1;i<=n;i++) if (a[i] < NN ) NN = a[i];
    cout<<"so lon nhat trong mang a la : "<<LN<<endl ;
    cout<<"so nho nhat trong mang a la : "<<NN ;
}
