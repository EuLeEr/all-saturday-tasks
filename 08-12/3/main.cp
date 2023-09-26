#include <iostream>

void step(int *i) {
    if (*i > 0) {
        --(*i);
    } else if (*i < 0) {
        ++(*i);
    }
}

int count_elements(int *array, int start_position, void(*step_function)(int *)) {
    int count = 0;
    int i = start_position;

    while (array[i] != 0) {
        step_function(&i);
        ++count;
    }

    return count;
}

int main() {
    int array[] = {0, 1, 2, 3, 4, 8, -4, -3, -2, -1, 0};
    int start_position = 8;

    int result = count_elements(array, start_position, step);

    std::cout << "Количество элементов от начальной позиции до нуля: " << result << std::endl;

    return 0;
}
