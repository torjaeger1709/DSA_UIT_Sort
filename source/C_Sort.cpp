#include <bits/stdc++.h>
#include <cstdlib>
#include <vector>
#include <ctime>
#include <iostream>
#include <chrono>
#include <fstream>
#include <algorithm>
using namespace std;
int main() {
    ifstream inputFile("test9.inp");  // Open the file
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
        sort(arr1.begin(), arr1.end());
     sort(arr2.begin(), arr2.end());
     sort(arr3.begin(), arr3.end());
     sort(arr4.begin(), arr4.end());
     sort(arr5.begin(), arr5.end());
     sort(arr6.begin(), arr6.end());
     sort(arr7.begin(), arr7.end());
     sort(arr8.begin(), arr8.end());
     sort(arr9.begin(), arr9.end());
     sort(arr10.begin(), arr10.end());

    auto end = chrono::high_resolution_clock::now();
    // End Measure
    chrono::duration<double> duration = end - start;
    std::cout << "MergeSort Execution time: " << duration.count() << " seconds" << endl;

    return 0;
}
