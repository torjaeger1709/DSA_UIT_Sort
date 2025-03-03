#include <bits/stdc++.h>
#include <cstdlib>
#include <vector>
#include <ctime>
#include <iostream>
#include <chrono>
#include <fstream>
using namespace std;

int partition(vector<int>& arr, int low, int high) {
    int pivotIndex = low + rand() % (high - low + 1); //randomize the pivot
    swap(arr[pivotIndex], arr[high]); // Move pivot to end
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
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

    quickSort(arr1, 0, sizeArr - 1);
    quickSort(arr2, 0, sizeArr - 1);
    quickSort(arr3, 0, sizeArr - 1);
    quickSort(arr4, 0, sizeArr - 1);
    quickSort(arr5, 0, sizeArr - 1);
    quickSort(arr6, 0, sizeArr - 1);
    quickSort(arr7, 0, sizeArr - 1);
    quickSort(arr8, 0, sizeArr - 1);
    quickSort(arr9, 0, sizeArr - 1);
    quickSort(arr10, 0, sizeArr - 1);

    auto end = chrono::high_resolution_clock::now();
    // End Measure
    chrono::duration<double> duration = end - start;
    std::cout << "QSort Execution time: " << duration.count() << " seconds" << endl;

    return 0;
}
