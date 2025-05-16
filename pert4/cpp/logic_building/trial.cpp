#include <iostream>

using namespace std;

void test(){
    int x = 5;
    if (x > 3) {
        x = x + 2;
    } else {
        x = x - 2;
    }
    cout << x << endl;
}

void a(){
    int a;
    cout << "masukkan angka : " << endl;
    cin >> a;

    if (a %2 == 0 ){
        cout << "genap" << endl;
    } else {
        cout << "ganjil" << endl;
    }
}

int main(){
    return 0;
}