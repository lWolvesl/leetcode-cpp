//
// Created by 李洋 on 2024/6/23.
//

#ifndef LEECODE_CPP_520_H
#define LEECODE_CPP_520_H

#include <string>

using namespace std;

bool detectCapitalUse(string word) {
    int status = 0;
    for (int i = 0; i < word.size(); i++) {
        if (i == 0) {
            if (word[i] >= 'A' && word[i] <= 'Z') {
                status = 0;
            }
            if (word[i] >= 'a' && word[i] <= 'z') {
                status = 1;
            }
            continue;
        }
        if (status == 0) {
            if (i == 1 && word[i] >= 'A' && word[i] <= 'Z') {
                status = -1;
                continue;
            }
            if (word[i] >= 'A' && word[i] <= 'Z') {
                return false;
            }
        }
        if (status == 1) {
            if (word[i] >= 'A' && word[i] <= 'Z') {
                return false;
            }
        }
        if (status == -1) {
            if (word[i] >= 'a' && word[i] <= 'z') {
                return false;
            }
        }
    }
    return true;
}


bool detectCapitalUse1(string word) {
    // 若第 1 个字母为小写，则需额外判断第 2 个字母是否为小写
    if (word.size() >= 2 && islower(word[0]) && isupper(word[1])) {
        return false;
    }

    // 无论第 1 个字母是否大写，其他字母必须与第 2 个字母的大小写相同
    for (int i = 2; i < word.size(); ++i) {
        if (islower(word[i]) ^ islower(word[1])) {
            return false;
        }
    }
    return true;
}

#include <cctype>

string toLowerCase(const string &str) {
    string result;
    for (char ch: str) {
        result += tolower(ch);
    }
    return result;
}

// 通过数值判断
bool detectCapitalUse2(string word) {
    string lower = toLowerCase(word);
    int count = 0;
    for (int i = 0; i < word.size(); ++i) {
        count += lower[i] - word[i];
    }
    int interval = 'a' - 'A';
    if ((count == interval && word[0] >= 'A' && word[0] <= 'Z') || count == interval * word.size() || count == 0) {
        return true;
    }
    return false;
}

bool run() {
    return detectCapitalUse2("Leetcode");
}

#endif //LEECODE_CPP_520_H
