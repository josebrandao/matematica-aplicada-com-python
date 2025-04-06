#include <iostream>

int main() {
    // Sistema: a1*x + b1*y = c1
    //          a2*x + b2*y = c2

    float a1 = 2, b1 = 3, c1 = 8;
    float a2 = 1, b2 = -1, c2 = 2;

    float det = a1 * b2 - a2 * b1;

    if (det == 0) {
        std::cout << "Sistema sem solução única.\n";
        return 1;
    }

    float x = (c1 * b2 - c2 * b1) / det;
    float y = (a1 * c2 - a2 * c1) / det;

    std::cout << "Solução: x = " << x << ", y = " << y << '\n';

    return 0;
}
