//soal no 1
#include <iostream>
using namespace std;
#define npm(n) ((n % 2 != 0) ? (99 - n) : (n))

int main() {
    int a, b;
    cout << "Masukkan digit ke-9 npm anda: ";
    cin >> a;
    cout << "Masukkan digit ke-10 npm anda: ";
    cin >> b;
    int npm = a * 10 + b;
    cout << "hasil: " << npm(npm) << endl;
    return 0;
}





//soal no 3
// #include <iostream>
// using namespace std;

// int main() {
//     int a, b;
//     int* ptr;

//     cout << "Masukkan digit ke-9 npm anda: ";
//     cin >> a;
//     cout << "Masukkan digit ke-10 npm anda: ";
//     cin >> b;

//     int npm = a * 10 + b;

//     ptr = &npm;

//     cout << "isi pointer mu " << *ptr << endl;
//     cout << "data disimpan di" << ptr << endl;

//     return 0;
// }


//soal no 2
// #include <iostream>
// using namespace std;

// int k(int n, int x) {
//     if (x == 0) {
//         return 1;
//     } else {
//         return n * k(n, x - 1);
//     }
// }

// int main() {
//     int a, b;

//     cout << "Masukkan digit ke-9 npm anda: ";
//     cin >> a;
//     cout << "Masukkan digit ke-10 npm anda: ";
//     cin >> b;

//     int npm = a * 10 + b;
//     int hsl = k(b, a);

//     cout << "Hasil x digit ke-10 [" << b << "] sebanyak " << a << " x adalah " << hsl << endl;

//     return 0;
// }
