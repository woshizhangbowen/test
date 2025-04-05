#include "iostream"
using namespace std;
int func( int x) {
    return x+1;
    }
int main() {
    int a = 1;
    int b=func(a);
    cout<<b<<endl;
    return 0;
}