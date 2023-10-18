#include <iostream>
#include "./else/main.h"
#include "./2023/10/Q2530.h"

using namespace std;

int main() {
    vector<int> nums;
    nums.push_back(1);
    nums.push_back(10);
    nums.push_back(3);
    nums.push_back(3);
    nums.push_back(3);
    cout << maxKelements(nums, 3) << endl;
}
