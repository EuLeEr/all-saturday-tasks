#include <iostream>

void reverseParagraphs(std::string* paragraphs, int size) {
    std::string* start = paragraphs;
    std::string* end = paragraphs + size - 1;

    while (start < end) {
        std::swap(*start, *end);
        start++;
        end--;
    }
}

int main() {
    setlocale(LC_ALL, "Russian");
    // при вводе кириллицы - не работает
    const int size = 3;
   std::string paragraphs[size];

    for (int i = 0; i < size; i++) {
        std::cout << "Enter paragraph " << i + 1 << ": ";
        std::getline(std::cin, paragraphs[i]);
    }

    reverseParagraphs(paragraphs, size);

    std::cout << "Reversed paragraphs:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << paragraphs[i] << std::endl;
    }

    return 0;
}
