#include <bits/stdc++.h>
#include <cstdlib>
#include <vector>
#include <ctime>
#include <iostream>
using namespace std;
int main(){
    freopen("test10.inp","w",stdout);
    const int sizeArr = 1000000;
    vector<int> arr1(sizeArr), arr2(sizeArr), arr3(sizeArr);
    vector<int> arr4(sizeArr), arr5(sizeArr), arr6(sizeArr);
    vector<int> arr7(sizeArr), arr8(sizeArr), arr9(sizeArr), arr10(sizeArr);
    srand(time(0));
    // Generate random Arrays
    for (int i = 0; i < sizeArr; i++)
    {
        arr1[i] = rand();
        arr2[i] = rand();
        arr3[i] = rand();
        arr4[i] = rand();
        arr5[i] = rand();
        arr6[i] = rand();
        arr7[i] = rand();
        arr8[i] = rand();
        arr9[i] = rand();
        arr10[i] = rand();
    }
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end(), greater<int>());
    for (int i = 0; i < sizeArr; i++)
    {
        cout << arr1[i] <<" ";
    }
        cout << endl;
    for (int i = 0; i < sizeArr; i++)
    {
        cout << arr2[i] <<" ";
    }
        cout << endl;
    for (int i = 0; i < sizeArr; i++)
    {
        cout << arr3[i] <<" ";
    }
        cout << endl;
    for (int i = 0; i < sizeArr; i++)
    {
        cout << arr4[i] <<" ";
    }
        cout << endl;
    for (int i = 0; i < sizeArr; i++)
    {
        cout << arr5[i] <<" ";
    }
        cout << endl;
    for (int i = 0; i < sizeArr; i++)
    {
        cout << arr6[i] <<" ";
    }
        cout << endl;
    for (int i = 0; i < sizeArr; i++)
    {
        cout << arr1[i] <<" ";
    }
        cout << endl;
    for (int i = 0; i < sizeArr; i++)
    {
        cout << arr7[i] <<" ";
    }
        cout << endl;
    for (int i = 0; i < sizeArr; i++)
    {
        cout << arr8[i] <<" ";
    }
        cout << endl;
    for (int i = 0; i < sizeArr; i++)
    {
        cout << arr9[i] <<" ";
    }
        cout << endl;
    for (int i = 0; i < sizeArr; i++)
    {
        cout << arr10[i] <<" ";
    }
        cout << endl;
}
