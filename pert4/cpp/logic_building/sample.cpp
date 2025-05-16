#include <iostream>

using namespace std;

void tambah(int a, int b){
    cout << "Hasil Tambah = "<< a + b << endl;
}
void kurang(int a, int b){  
    cout << "Hasil Kurang = " << a - b << endl;
}
void kali(int a, int b){
    cout << "Hasil Kali = " << a * b << endl;
}
void bagi(int a, int b){
    cout << "Hasil Bagi = " << a / b << endl;
}

int main(){
    int x, y;
    cout << "Masukkan Angka : " << endl;
    cin >> x >> y;

    tambah(x,y);
    kurang(x,y);
    kali(x,y);
    bagi(x,y);

    return 0;
}