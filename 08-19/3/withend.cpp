//На ввод-вывод и сортировку. Создать программу, которая считывает из консоли строки (в том числе с пробелами) до тех пор, 
//пока не будет введена особая строка "END" - тогда программа должна распечатать считанные строки, отсортированные по-алфавиту. 
//Пустые строки игнорировать. Сортировка `std::vector<std::string> all_strings` выполняется вызовом `std::sort(all_strings.begin(), all_strings.end())`, 
//нужен `#include <algorithm>`. Все это должно работать и с русским языком.


/* #include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <clocale>

int main() {

  std::vector<std::string> all_strings;
  std::string input;

  while (std::cin >> input) {
    if (input == "END") {
      break;
    }
    all_strings.push_back(input);
  }

  std::sort(all_strings.begin(), all_strings.end());

  for (const auto &str : all_strings) {
    std::cout << str << std::endl;
  }

  return 0;
} */
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> all_strings;
    std::string input;

    while (true) {
        std::getline(std::cin, input);
        if (input == "END") {
            break;
        }
        if (!input.empty()) {
            all_strings.push_back(input);
        }
    }

    std::sort(all_strings.begin(), all_strings.end());

    for (const auto& str : all_strings) {
        std::cout << str << std::endl;
    }

    return 0;
}
