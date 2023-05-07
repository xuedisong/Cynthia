//
// Created by lixin on 2023/5/7.
//
#include <vector>
#include <iostream>

using namespace std;


void input(shared_ptr<vector<int> > p1) {
    int i;
    cin >> i;
    p1->push_back(i);
}

//int main() {
//    vector<int> *p = new(nothrow)vector<int>();
//    input(p);
//    cout << p->front() << ',' << p->back();
//    delete p;
//    p = nullptr;
//}

int main() {
    auto p = make_shared<vector<int> >();
    input(p);
    cout << p->front() << ',' << p->back();
}