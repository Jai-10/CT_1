// Name: Jai Vaidya
// Roll: 2010990758
// Set No: 03
// Q2: Find a pair with the given sum in an array. Given an unsorted integer array, find a pair with the given sum in it.

#include<bits/stdc++.h>
using namespace std;

int main() {

    // input length
    int length;
    cout << "Enter length: ";
    cin >> length;

    // input target
    int target;
    cout << "Enter target: ";
    cin >> target;

    // create arr
    int arr[length];

    // input array
    cout << "Input array: ";
    for (int i=0; i<length; i++) {
        cin >> arr[i];
    }

    // creating a flag to check if pair is found or not
    bool pairFound = false;

    // checking pair sum
    for (int i=0; i<length; i++) {
        for (int j=i+1; j<length; j++) {
            if (arr[i] + arr[j] == target) {
                pairFound = true;
                cout << "Pair found (" << arr[i] << ", " << arr[j] << ")" << endl;
                break;
            }
        }
    }

    if (!pairFound) {
        cout << "Pair not found" << endl;
    }


    // In this code, time complexity = O(N^2)


    return 0;
}