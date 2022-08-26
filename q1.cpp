// Name: Jai Vaidya
// Roll: 2010990758
// Set No: 03
// Q1: Rearrange an array with alternate high and low elements

#include<bits/stdc++.h>
using namespace std;

int main() {

    // input length
    int length;
    cout << "Enter length: ";
    cin >> length;

    // create arr
    int arr[length];

    // input array
    cout << "Input array: ";
    for (int i=0; i<length; i++) {
        cin >> arr[i];
    }


    // rearranging with alternate high and low elements
    for (int i=1; i<length; i+=2) {
        if (arr[i - 1] > arr[i]) {
            int temp = arr[i];
            arr[i] = arr[i-1];
            arr[i-1] = temp;
        } 
        else if ((i+1 < length) && (arr[i + 1] > arr[i])) {
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }


    // printing the array
    for (int i=0; i<length; i++) {
        cout << arr[i] << " ";
    } cout << endl;



    return 0;
}