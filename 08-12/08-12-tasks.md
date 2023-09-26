1. Создать функцию, которая вернёт любым способом 2 числа
   [практика кортежей]
2. Повторить задание с обращением порядка абзацев, но уже используя пользовательский ввод
   [string, getline]
3. Создать функцию, которая поменяет своё поведение в зависимости от указателя на функцию. Например. Пусть в функцию передаётся массив, на обоих концах которых стоит ноль, начальная позиция и функция выполнения шага `void(*)(int *i)`. Нужно найти количество элементов от начальной позиции до нуля, в зависимости от функции шага.
   [указатели на функции]
4. Разбивка арифметического выражения на токены. Пользователь печатает выражение вроде `1 *2    /100+(2.5 - 1)*2`, нужно понятно(!) разбить на массив токенов в виде массива строк `["1", "*", "2", "/", "100", "+", "(", "2.5", "-", "1", ")", "*", "2"]`. Это не так сложно, но очень легко превратить код в нечитаемую лапшу. Нужно начать с простых функций и комбинировать их по мере усложнения. Например `bool is_printable(char c)`, `bool is_numchar(char c)`, `bool is_bracket(char c)`, `bool is_operation(char c)`, `const char* get_token_end(const char *start, bool(*is_same_token)(char c))`. Пригодится конструктор `std::string(const char *first_symbol_inclusive, const char *second symbol_exclusive)`


