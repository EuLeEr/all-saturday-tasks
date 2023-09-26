#include <iostream>

/* void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
} */
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int variable_1 = 42;
    int variable_2 = 69;

 //   swap(&variable_1, &variable_2);
   swap(variable_1, variable_2);

    // Теперь variable_1 содержит значение, которое раньше было в variable_2,
    // а variable_2 содержит значение, которое раньше было в variable_1.
    std::cout << variable_1 << std::endl;
    std::cout << variable_2 << std::endl;
    return 0;
}
