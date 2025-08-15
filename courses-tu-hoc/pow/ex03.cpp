#include <iostream>
#include <cmath>

#define M_PI 3.14159265358979323846  // Định nghĩa lại M_PI nếu chưa có sẵn

using namespace std;

int main() {
    double radius = 5;
    double area = M_PI * pow(radius, 2);
    
    cout << area;

    return 0;
}
