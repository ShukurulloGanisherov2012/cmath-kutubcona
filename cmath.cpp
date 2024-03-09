#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x,y;
    cin >> x >> y;
    int A = pow(x,5) + (pow(x+y,2)/(2*x)) + 12*y;
    int B = 3*pow(y,4) + abs(12-(x*A*y)) - x*y/(x*x) + 7*y;
    cout << A << " " << B;
}

