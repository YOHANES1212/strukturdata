#include<iostream>
#include<algorithm>

using namespace std;

int bs(int arr[], int size, int target){
    int left = 0, right = size - 1;
    while (left <= right)
    {
        int mid = left + (right-left)/2;
        if (arr[mid]==target){
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid -1;
        }
    }
    return -1;
}


int main(){
    int data[] = {1,3,7,5};
    int size = sizeof(data)/sizeof(data[0]);
    int target = 3;

    int result = bs(data, size, target);
    if (result == -1){
        cout << "not found" << endl;
    } else {
        cout << "found di index ke - " << result << endl;
    }
    return 0;
}