#include<iostream>
using namespace std;

//int a = 10;
//int b = 30;

//void swap(int q,int w)
//{
//    int temp = q;
//    q = w;
//    w = temp;
//}

void swap(int & a,int & b)
{
    cout<<a;
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10;
    int b = 30;
    cout<<"交换前:a = "<<a<<",b ="<<b<<endl;
//    swap(a,b);
    swap(a,b);
    cout<<"交换后:a = "<<a<<",b ="<<b<<endl;

}