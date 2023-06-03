#include <iostream>
using namespace std;

int num1 = 6,num2 = 1;

int max_num() {
    int result;
    if (num1 > num2){
        result = num1;
    }
    else {
        result = num2;
    }
    return result;

}


int main() {
    cout << max_num() * 2 << endl;
    return 0;
}
