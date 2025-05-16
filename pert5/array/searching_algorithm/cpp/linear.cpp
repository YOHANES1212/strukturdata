#include<iostream>

using namespace std;

int ls(int arr[], int size, int target){
    for (int i = 0; i < size; i++){
        if (arr[i] == target){
            return i;
        }
    }
    return -1;
}


int main(){
    int data[] = {1,7,3,5};
    int size = sizeof(data) / sizeof(data[0]);
    int target = 5;
    int result = ls(data, size, target);
    if(result == -1){
        cout << "not found" << endl;
    } else {
        cout << "found di index ke - " << result << endl;
    }
    return 0;
}