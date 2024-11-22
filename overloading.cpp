
#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

float add(float a, float b) {
    return a + b;
}

int add(int a, int b, int c) {
    return a + b + c;
}

int main() {
    cout << "Sum of 5 and 3 (int): " << add(5, 3) << endl;
    cout << "Sum of 2.5 and 3.1 (float): " << add(2.5f, 3.1f) << endl;
    cout << "Sum of 1, 2, and 3 (int): " << add(1, 2, 3) << endl;

    return 0;
}
