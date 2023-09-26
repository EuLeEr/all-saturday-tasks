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
    const int size = 5;
    std::string paragraphs[size] = {
        "Paragraph 1",
        "Paragraph 2",
        "",
        "",
        "Paragraph 3"
    };

    reverseParagraphs(paragraphs, size);

    for (int i = 0; i < size; i++) {
        std::cout << paragraphs[i] << std::endl;
    }

    return 0;
}
