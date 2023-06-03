#include <iostream>
#define MAXSIZE 100
using namespace std;

typedef struct{
    int * elem;
    int length;
}SqList;

int InitList(SqList &L){
    L.elem = new int [MAXSIZE];
    if(!L.elem) return -1;
    L.length = 0;
    return 1;
}

int LocateElem(SqList L, int e){
    for (int i = 0; i < L.length; ++i)
        if (L.elem[i] == e) return i + 1;
    return 1;
}

int main() {
    SqList L;
    InitList(L);
    return 0;
}
