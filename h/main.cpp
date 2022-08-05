////////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Contest X Problem Y
/// \author     Student's Name
/// \version    0.1.0
/// \date       25.01.2021
///
/// Copy the task description here.
///
////////////////////////////////////////////////////////////////////////////////
#include <iostream>
using std::cin;
using std::cout;
int main()
{
    int *arr1;
    int n;
    cin >> n;
    arr1 = new int[n];
    int arr2[n];
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
        arr2[i] = i+1;
    }
    int t;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr1[j] > arr1[j + 1]) {
                t = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = t;
                t = arr2[j];
                arr2[j] = arr2[j + 1];
                arr2[j + 1] = t;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }
    return 0;
}