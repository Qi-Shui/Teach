#include <iostream>

#define OK 1
using namespace std;
typedef int Status;
typedef struct LNode {
    int data;
    struct LNode *next;
} LNode, *LinkList;

Status InitList(LinkList &L) {
    L = new LNode;
    L->next = NULL;
    return OK;
}

Status ListInsert(LinkList &L, int *a) {
    LinkList r = L;
    while (r->next) {
        r = r->next;
    }
    for (int i = 0; i < 10; ++i) {
        LinkList s = new LNode;
        s->data = a[i];
        r->next = s;
        r = s;
    }
}

Status PrintList(LinkList L) {
    LinkList p = L->next;
    while (p) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

Status Inter(LinkList &A, LinkList &B) {
    LinkList p = A->next;
    LinkList p_pre = A;
    while (p) {
        LinkList q = B->next;
        while (q) {
            if (q->data == p->data) {
                break;
            }
            q = q->next;
        }
        if (!q) {
            LinkList s = p;
            p_pre->next = p->next;
            p = p->next;
            delete s;
        } else {
            p_pre = p;
            p = p->next;
        }
    }
    return OK;
}

int main() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[10] = {1, 2, 3, 4, 5, 16, 17, 18, 19, 10};
    LinkList A, B;
    InitList(A);
    InitList(B);
    ListInsert(A, a);
    ListInsert(B, b);
    PrintList(A);
    PrintList(B);
    Inter(A, B);
    PrintList(A);
    return 0;
}
