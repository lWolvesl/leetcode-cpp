#include <iostream>
#include <vector>
#include "./2024/11/euclidean.c"
#include "./else/sorts.h"

using namespace std;

int main() {
    vector<int> arr = {11,40,33,22,55,34,67,89,45,32};
    cout << "before sort: ";
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    quickSort(arr);
    cout << "after  sort: ";
    for (auto i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
