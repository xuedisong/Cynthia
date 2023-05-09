//
// Created by lixin on 2023/5/9.
//
#include <iostream>
#include <cmath>

using namespace std;

/**
 * 计算特征IV值
 *
 * @param head 特征正负例频数列联表
 * @param n 特征取值数
 * @return IV值
 */
double calIVbyMatrix(int **head, int n) {
    for (int **i = head; i < head + n; i++) {
        for (int *j = *i; j < *i + 2; j++) {
            cout << *j << ",";
        }
        cout << endl;
    }

    int pSum = 0;
    int nSum = 0;
    for (int **i = head; i < head + n; i++) {
        pSum += (*i)[0];
        nSum += (*i)[1];
    }
    int sum = pSum + nSum;
    double IV = 0;
    for (int **i = head; i < head + n; i++) {
        double TGIi = (double((*i)[0]) / ((*i)[0] + (*i)[1])) / (double(pSum) / sum);
        double yip = double((*i)[0]) / pSum;
        double yin = double((*i)[1]) / nSum;
        double WOEi = log(yip) - log(yin);
        double IVi = (yip - yin) * WOEi;
        IV += IVi;
    }

    for (int **i = head; i < head + n; i++) {
        delete[] *i;
        *i = nullptr;
    }
    delete[] head;
    head = nullptr;

    return IV;
}

int main() {
    int n = 10;
    //初始化二维动态数组
    int **head = new int *[n];
    int num = 1;
    for (int **i = head; i < head + n; i++) {
        *i = new int[2];
        for (int *j = *i; j < *i + 2; j++) {
            *j = num++;
        }
    }
    double IV = calIVbyMatrix(head,n);
    cout << "IV:" << IV << ",bin num:" << n << endl;
}