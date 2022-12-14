#include <iostream>
using namespace std;
int factorialn(int n){
    if (n > 1) {
        return n * factorialn(n - 1);
    }else
    {
        return n;
    }
}
 
int main() {
    int n, sum = 0;
    while (cin >> n) {
        for (int i = 1; i <= n; i++) {
            sum += factorialn(i);
        }
        // 如果你只想打印n的阶乘
        //sum += factorialn(n);
        cout << sum << endl;
    }
}
