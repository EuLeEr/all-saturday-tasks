/* 
#include <iostream>
#include <vector>

// Класс для представления строки
class Row {
private:
    std::vector<int>& data;
    int rowSize;

public:
    Row(std::vector<int>& array, int size) : data(array), rowSize(size) {}

    int& operator[](int index) {
        if (index < 0 || index >= rowSize) {
            throw std::out_of_range("Index out of range");
        }
        return data[index];
    }
};

// Класс для представления двумерного массива
class Matrix {
private:
    int numRows;
    int numCols;
    std::vector<int> data;

public:
    Matrix(int rows, int cols) : numRows(rows), numCols(cols), data(rows * cols) {}

    int getRows() const {
        return numRows;
    }

    int getColumns() const {
        return numCols;
    }

    // Получение строки по индексу
    Row operator[](int index) {
        if (index < 0 || index >= numRows) {
            throw std::out_of_range("Index out of range");
        }
        return Row(data, numCols);
    }
};

int main() {
    // Создаем двумерный массив 3x3
    Matrix matrix(3, 3);

    // Заполняем массив значениями
    for (int i = 0; i < matrix.getRows(); ++i) {
        for (int j = 0; j < matrix.getColumns(); ++j) {
            matrix[i][j] = i * matrix.getColumns() + j;
        }
    }

    // Выводим значения массива
    for (int i = 0; i < matrix.getRows(); ++i) {
        for (int j = 0; j < matrix.getColumns(); ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
 */
#include <iostream>
#include <vector>

// Класс для представления строки
class Row {
private:
    std::vector<int>& data;
    int rowSize;

public:
    Row(std::vector<int>& array, int size) : data(array), rowSize(size) {}

    int& operator[](int index) {
        if (index < 0 || index >= rowSize) {
            throw std::out_of_range("Index out of range");
        }
        return data[index];
    }
};

// Класс для представления двумерного массива
class Matrix {
private:
    int numRows;
    int numCols;
    std::vector<int> data;

public:
    Matrix(int rows, int cols) : numRows(rows), numCols(cols), data(rows * cols) {}

    int getRows() const {
        return numRows;
    }

    int getColumns() const {
        return numCols;
    }

    // Получение строки по индексу
    Row operator[](int index) {
        if (index < 0 || index >= numRows) {
            throw std::out_of_range("Index out of range");
        }
        return Row(data, numCols);
    }

    // Вспомогательная функция для вывода содержимого массива
    void print() const {
        for (int i = 0; i < numRows; ++i) {
            for (int j = 0; j < numCols; ++j) {
                std::cout << data[i * numCols + j] << " ";
            }
            std::cout << std::endl;
        }
    }
};

int main() {
    // Создаем двумерный массив 3x3
    Matrix matrix(3, 3);

    // Заполняем массив значениями
    for (int i = 0; i < matrix.getRows(); ++i) {
        for (int j = 0; j < matrix.getColumns(); ++j) {
            matrix[i][j] = i * matrix.getColumns() + j;
        }
    }

    // Выводим значения массива
    matrix.print();

    return 0;
}
