#include <iostream>
#include <vector>

// Функция для подсчета площади фигуры
int findArea(std::vector<std::vector<char>>& grid, int x, int y) {
    // Проверяем, вышли ли мы за границы массива или попали в пустую клетку
    if (x < 0 || x >= grid.size() || y < 0 || y >= grid[0].size() || grid[x][y] == '.')
        return 0;

    // Метим клетку как посещенную
    grid[x][y] = '.';

    // Рекурсивно вызываем функцию для соседних клеток
    int area = 1;
    // area += findArea(grid, x + 1, y);
    // area += findArea(grid, x - 1, y);
    // area += findArea(grid, x, y + 1);
    // area += findArea(grid, x, y - 1);

    return area;
}

// Главная функция для поиска площади фигуры
int findTotalArea(std::vector<std::vector<char>>& grid) {
    int totalArea = 0;
    //создать копию массива grid
    std::vector<std::vector<char>> gridCopy(grid.size(), std::vector<char>(grid[0].size(), '.'));
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[0].size(); ++j) {
            gridCopy[i][j] = grid[i][j];
        }
    }
    for (int i = 0; i < gridCopy.size(); ++i) {
        for (int j = 0; j < gridCopy[i].size(); ++j) {
            if (gridCopy[i][j] == '#') {
                int cellArea = findArea(gridCopy, i, j);
                totalArea += cellArea;
            }
        }
    }

    return totalArea;
}

int main() {
    // Пример использования функций
    std::vector<std::vector<char>> grid = {
        {'#', '.', '.', '#', '.'},
        {'#', '.', '.', '.', '#'},
        {'.', '#', '#', '.', '.'},
    };

    int area = findTotalArea(grid);
    std::cout << "Площадь фигуры: " << area << std::endl;
    //вывести содержание массива grid
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[i].size(); ++j) {
            std::cout << grid[i][j] << " ";
        }
        std::cout << std::endl;
    }
    
 

    return 0;
}
