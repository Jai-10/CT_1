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


    // reversing with alternate high and low elements
    for (int i=1; i<=length-1; i++) {
        if (arr[i]>arr[i-1] && arr[i]>arr[i+1]) {
            i += 2;
        }
        else {
            if (arr[i] < arr[i-1]) {
                int temp = arr[i];
                arr[i] = arr[i-1];
                arr[i-1] = arr[i];
            }
            else if (arr[i] < arr[i+1]) {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = arr[i];
            }
            i += 2;
        }
    }


    // printing the array
    for (int i=0; i<length; i++) {
        cout << arr[i] << " ";
    } cout << endl;



    return 0;
}