//
// Created by 李洋 on 2024/6/21.
// https://leetcode.cn/problems/6CE719
//

#ifndef LEECODE_C_LCP61_H
#define LEECODE_C_LCP61_H

#include <vector>

using namespace std;


int getStatus(vector<int> temper, int i) {
    int status = 0;
    if (temper[i + 1] - temper[i] < 0) {
        status = -1;
    } else if (temper[i + 1] - temper[i] > 0) {
        status = 1;
    }
    return status;
}

int temperatureTrend(vector<int> &temperatureA, vector<int> &temperatureB) {
    int count = 0;
    int max = 0;
    int statusA, statusB;
    for (int i = 0; i + 1 < temperatureA.size(); ++i) {
        statusA = getStatus(temperatureA, i);
        statusB = getStatus(temperatureB, i);
        if (statusA == statusB){
            count++;
            max = std::max(count, max);
        } else{
            count = 0;
        }

    }
    return max;
}

// 完全使用c++语法
int temperatureTrendX(vector<int>& temperatureA, vector<int>& temperatureB) {
    int ans = 0, temp = 0;;
    for(int i = 0; i +1< temperatureA.size(); i++){
        auto a = temperatureA[i] <=> temperatureA[i + 1];
        auto b = temperatureB[i] <=> temperatureB[i + 1];
        if (a == b) {
            temp += 1;
            ans = max(ans,temp);
        }else temp = 0;
    }
    return ans;
}

int run() {
    vector<int> A = {21,18,18,18,31};
    vector<int> B = {34,32,16,16,17};

    vector<int> C = {1,-15,3,14,-1,4,35,36};
    vector<int> D = {-15,32,20,9,33,4,-1,-5};
    return temperatureTrend(A, B);
}

#endif //LEECODE_C_LCP61_H
