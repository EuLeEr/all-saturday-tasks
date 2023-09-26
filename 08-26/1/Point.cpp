#include <iostream>

class Point {
public:
    Point() : x(0), y(0) {
        std::cout << "Point{x: 0, y: 0} создан" << std::endl;
    }

    Point(int x, int y) : x(x), y(y) {
        std::cout << "Point{x: " << x << ", y: " << y << "} создан конструктором с параметрами" << std::endl;
    }

    ~Point() {
        std::cout << "Point{x: " << x << ", y: " << y << "} очищен" << std::endl;
    }

    Point& operator=(const Point& other) {
        x = other.x;
        y = other.y;
        std::cout << "Point{x: " << x << ", y: " << y << "} назначен" << std::endl;
        return *this;
    }

    Point operator+(const Point& other) const {
        int sumX = x + other.x;
        int sumY = y + other.y;
        std::cout << "Point{x: " << sumX << ", y: " << sumY << "} создан суммированием" << std::endl;
        return Point(sumX, sumY);
    }

    friend std::ostream& operator<<(std::ostream& os, const Point& point) {
        os << "Point{x: " << point.x << ", y: " << point.y << "}";
        return os;
    }

private:
    int x;
    int y;
};

int main() {
    Point p1; // Конструктор без параметров
    Point p2(3, 4); // Конструктор с параметрами

    Point p3 = p2; // Оператор присваивания для нового объекта
    Point p4 = p1 + p2; // Оператор суммирования
    p3 = p1; // Оператор присваивания
    std::cout << p1 << std::endl; // Вывод перегруженного оператора<<
    std::cout << p2 << std::endl;
    std::cout << p3 << std::endl;
    std::cout << p4 << std::endl;

    return 0;
}
