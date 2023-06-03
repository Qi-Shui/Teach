#include <iostream>
using namespace std;

typedef struct LNode{
    int data;
    struct LNode * next;
}LNode,* LinkList;

//int InitList(LinkList * L){
//    * L = new LNode;
//    (* L)->data = 1;
//    (* L)->next = NULL;
//}

int InitList(LinkList &L){
    L = new LNode;
    L->data = 1;
    L->next = NULL;
}

int main() {
    LinkList L;
    InitList(L);
    cout<<L->data;
    return 0;
}
