#include <bits/stdc++.h>
#include <cstdlib>
#include <vector>
#include <ctime>
#include <iostream>
#include <chrono>
#include <fstream>
using namespace std;
void heapify(vector<int>& arr, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && arr[left] > arr[largest])
        largest = left;
    if (right < n && arr[right] > arr[largest])
        largest = right;
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main() {
    ifstream inputFile("test10.inp");  // Open the file
    const int sizeArr = 1000000;
    vector<int> arr1(sizeArr), arr2(sizeArr), arr3(sizeArr);
    vector<int> arr4(sizeArr), arr5(sizeArr), arr6(sizeArr);
    vector<int> arr7(sizeArr), arr8(sizeArr), arr9(sizeArr), arr10(sizeArr);

    const int numArrays = 10;
    const int numElements = 1000000;
    std::vector<std::vector<int>> arrays(numArrays, std::vector<int>(numElements));

    for (int i = 0; i < numArrays; ++i) {
        for (int j = 0; j < numElements; ++j) {
            inputFile >> arrays[i][j];
        }
    }
    //convert matrix to array
    for (int i = 0; i < sizeArr; i++) {
        arr1[i] = arrays[0][i];
        arr2[i] = arrays[1][i];
        arr3[i] = arrays[2][i];
        arr4[i] = arrays[3][i];
        arr5[i] = arrays[4][i];
        arr6[i] = arrays[5][i];
        arr7[i] = arrays[6][i];
        arr8[i] = arrays[7][i];
        arr9[i] = arrays[8][i];
        arr10[i] = arrays[9][i];
    }

    // Start measure time
    auto start = chrono::high_resolution_clock::now();
        heapSort(arr1);
        heapSort(arr2);
        heapSort(arr3);
        heapSort(arr4);
        heapSort(arr5);
        heapSort(arr6);
        heapSort(arr7);
        heapSort(arr8);
        heapSort(arr9);
        heapSort(arr10);

    auto end = chrono::high_resolution_clock::now();
    // End Measure
    chrono::duration<double> duration = end - start;
    std::cout << "HeapSort Execution time: " << duration.count() << " seconds" << endl;

    return 0;
}
