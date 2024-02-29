#include <iostream>

int main() {
    int x {5};
    int y {-1};
    int* p1 {&x};
    std::cout << "*p1 = " << *p1 << "\n";
    *p1 = 10;
    std::cout << "*p1 = " << *p1 << "\n";
    p1 = &y;
    std::cout << "*p1 = " << *p1 << "\n";

    const int* p2 {&x};
    // *p2 = 20; // error: assignment of read-only location ‘*p2’
    std::cout << "*p2 = " << *p2 << "\n";
    p2 = &y;
    std::cout << "*p2 = " << *p2 << "\n";

    int* const p3 {&x};
    std::cout << "*p3 = " << *p3 << "\n";
    *p3 = 30;
    std::cout << "*p3 = " << *p3 << "\n";
    // p3 = &y; // error: assignment of read-only variable ‘p3’

    const int* const p4 {&x};
    std::cout << "*p4 = " << *p4 << "\n";
    // *p4 = 40; // error: assignment of read-only location ‘*p4’
    // p4 = &y; // error: assignment of read-only variable ‘p4’

    return 0;
}
