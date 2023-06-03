#include <iostream>
#define NUM 66
using namespace std;

int main() {
    int a[NUM];
    for (int i = 0; i < NUM; i++) {
        a[i]=i;
    }
    for (int i = 0; i < NUM; i++) {
        cout<<a[i]<<" ";
    }
    return 0;
}
