#include <bits/stdc++.h>
#include <unordered_map>
#include <list>
using namespace std;

class LRU {
    list<int> LL;
    unordered_map<int, list<int>::iterator> nodeMap; // Fix: Correct pointer type
    int capacity;

    LRU(int capacity, list<int> LL, unordered_map<int, list<int>::iterator> MAP) {
        this->capacity = capacity;
        this->LL = LL;
        this->nodeMap = MAP;
    }
};

int main() {
    return 0;
}

