#include <iostream>

void swap(int* pointerA, int* pointerB)
{
    int c = *pointerA;
    *pointerA = *pointerB;
    *pointerB = c;
}

int main() {
    int a;
    std::cout << "Enter an integer A: ";
    std::cin >> a;

    int b;
    std::cout << "Enter an integer B: ";
    std::cin >> b;

    swap(&a,&b);
    std::cout << "A = " << a << " ; B = "<< b << std::endl;
}
