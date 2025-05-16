#include<iostream>
using namespace std;

void ss(int arr[], int size){
    for (int i = 0; i < size -1; i++){
        int minIndex = i;
        for (int j = i + 1; j < size; j++){
            if (arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        if (minIndex != i){
            swap(arr[i], arr[minIndex]);
        }
    }
}

void bubblesort(int arr[], int size){
    for (int i = 0; i < size -1; i++){
        for(int j = 0; j < size - 1 - i; j++){
            if (arr[j] > arr[j + 1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int data[] ={1,3,7,5};
    int size = sizeof(data) / sizeof(data[0]);
    cout << "data : ";
    printArray(data, size);
    ss(data, size);
    
    cout << "selection sort : ";
    printArray(data, size);
    

    int bubbleSorted[size];
    copy(data, data + size, bubbleSorted);
    bubblesort(bubbleSorted, size);
    cout << "Bubble Sort : ";
    printArray(bubbleSorted, size);

    return 0;
}