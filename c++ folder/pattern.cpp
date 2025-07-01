// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter number of rows: ";
//     cin >> n;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n - i; j++) {
//             cout << " ";
//         }

//         for (int k = 1; k <= i; k++) {
//             cout << k << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// diamond pattern

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter number of rows";
//     cin >> n;
//     for (int i=1;i<=n;i++){
//         for (int j=1;j<=(n-i);j++){
//             cout << " ";
//         }
//         for (int j=1;j<i;j++){
//             cout << "*";
//         }
//         for (int j=1;j<=i;j++){
//             cout << "*";
//         }
//         cout << "\n";
    
//     }
//      for (int i=1;i<=n-1;i++){
//         for (int j=1;j<=i;j++){
//             cout << " ";
//         }
//         for (int j=i;j<n-1;j++){
//             cout << "*";
//         }
//         for (int j=i;j<=n-1;j++){
//             cout << "*";
//         }
//         cout << "\n";
    
//     }
//     }
    


// #include <iostream>
// using namespace std;

// int fact(int n ){
//     int f=1;
//     for (int i=1;i<=n;i++){
//         f*=i;
//     }
//     return f;
// }
// int ncr(int n , int r){
//     return fact(n)/(fact(r)*fact(n-r));
    
// }

// int main(){
//     int n;
//     cout << "Enter number of rows";
//     cin >> n;

//     for (int i=0;i<n;i++){
//         for (int j=0;j<n-i-1;j++){
//             cout << " ";        
//         }
//         for (int j=0; j<=i;j++){
//             cout << ncr(i,j) << " ";
//         }
//         cout << endl;
//     }
//     return 0;

// }

// fibonacci triangle

#include <iostream>
using namespace std;


int main(){
    int n;
    cout << "Enter number of rows";
    cin >> n;

    int a=0,b=1,c;
     for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++)
            cout << " ";
        for (int j = 1; j <= i; j++) {
            cout << a << " ";
            c = a + b;
            a = b;
            b = c;
        }
        cout << endl;
    }
    return 0;
}

