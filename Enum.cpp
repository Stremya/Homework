#include <iostream>
#include <string>
#include <cmath> 
using namespace std;


// Задание 2
/*
enum class Day {
	Monday,
	Tuesday,
	Wednesday,
	Thursday,
	Friday,
	Saturday,
	Sunday
};

// Выводит день недели на русском
string DayName(Day day) {
	switch (day) {
	case Day::Monday:    return "Понедельник";
	case Day::Tuesday:   return "Вторник";
	case Day::Wednesday: return "Среда";
	case Day::Thursday:  return "Четверг";
	case Day::Friday:    return "Пятница";
	case Day::Saturday:  return "Суббота";
	case Day::Sunday:    return "Воскресенье";
	default:             return "Неизвестный день недели";
	}
}

// Проверяет выходной ли это
bool isWeekend(Day day) {
	return (day == Day::Saturday || day == Day::Sunday);
}

int main() {
	setlocale(LC_ALL, "ru");
	Day today = Day::Saturday;

	cout << "Сегодня " << DayName(today) << "!" << endl;
	if (isWeekend(today)) {
		cout << "Это выходной" << endl;
	}
	else {
		cout << "Это не выходной" << endl;
	}

	return 0;
}
*/


// Задание 3
/*
enum class TrafficLight {
	Red,
	Green,
	Yellow
};

// Название цвета на русском
string NameLight(TrafficLight light) {
	switch (light) {
	case TrafficLight::Red:    return "Красный";
	case TrafficLight::Yellow: return "Желтый";
	case TrafficLight::Green:  return "Зеленый";
	default:                   return "Неверный свет световора";
	}
}

// Следующий свет светофора
TrafficLight nextLight(TrafficLight current) {
	int next = (static_cast<int>(current) + 1) % 3;
	return static_cast<TrafficLight>(next);
}

int main() {
    setlocale(LC_ALL, "ru");
	TrafficLight current = TrafficLight::Red;

	for (int i = 0; i < 8; i++) {
		cout << "Сейчас: " << NameLight(current) << endl;
		current = nextLight(current);
	}

	return 0;
}
*/


// Задание 4
/*
enum class DisplayFlags : int {
	None = 0,
	Borders = 1 << 0,
	Grid = 1 << 1,
	Axes = 1 << 2,
	Legend = 1 << 3
};

// Показывает включенные флаги
void showFlags(DisplayFlags flags) {
	cout << "Включены: ";

	if (DisplayFlags::None == flags) {
		cout << "Ничего" << endl;
		return;
	}

	bool first = true;

	if (static_cast<int>(flags) & static_cast<int>(DisplayFlags::Borders)) {
		if (!first) cout << ", ";
		cout << "Границы";
		first = false;
	} 
	if (static_cast<int>(flags) & static_cast<int>(DisplayFlags::Grid)) {
		if (!first) cout << ", ";
		cout << "Сетка";
		first = false;
	}
	if (static_cast<int>(flags) & static_cast<int>(DisplayFlags::Axes)) {
		if (!first) cout << ", ";
		cout << "Оси";
		first = false;
	}
	if (static_cast<int>(flags) & static_cast<int>(DisplayFlags::Legend)) {
		if (!first) cout << ", ";
		cout << "Легенда";
		first = false;
	}

	cout << endl;
}

int main() {
	setlocale(LC_ALL, "ru");

	DisplayFlags flags1 = static_cast<DisplayFlags>(
		static_cast<int>(DisplayFlags::Grid) | static_cast<int>(DisplayFlags::Axes)
		);
	DisplayFlags flags2 = static_cast<DisplayFlags>(
		static_cast<int>(DisplayFlags::Borders) | static_cast<int>(DisplayFlags::Legend)
		);
	DisplayFlags flags3 = DisplayFlags::None;

	showFlags(flags1);
	showFlags(flags2);
	showFlags(flags3);

	return 0;
}
*/

// Задание 6
/*
enum class Direction {
	Up,
	Down,
	Left,
	Right
};

// Смещает координаты
void move(int& x, int& y, Direction dir) {
	switch (dir) {
	case Direction::Up:    y++; break;
	case Direction::Down:  y--; break;
	case Direction::Left:  x--; break;
	case Direction::Right: x++; break;
	}
}

int main() {
	setlocale(LC_ALL, "ru");
	int x = 0, y = 0;
	cout << "Начальные координаты: (" << x << ", " << y << ")" << endl;

	move(x, y, Direction::Right);
	cout << "Конечные координаты: (" << x << ", " << y << ")";

	return 0;
}
*/


// Задание 9
enum class ShapeType {
	Circle,
	Rectangle,
	Triangle,
	Square
};

const double PI = 3.14159265358979323846;

// Считает площадь переданной фигуры
double calculateArea(ShapeType type, double param1 = 0, double param2 = 0) {
	switch (type) {
	case ShapeType::Circle:
		return PI * param1 * param1; // π * r²

	case ShapeType::Rectangle:
		return param1 * param2; // ширина * высота

	case ShapeType::Square:
		return param1 * param1; // сторона²

	case ShapeType::Triangle:
		return 0.5 * param1 * param2; // основание * высота / 2

	default:
		return 0.0;
	}
}

int main() {
	setlocale(LC_ALL, "ru");
	cout << "Площадь круга (r=3): " << calculateArea(ShapeType::Circle, 3) << endl;
	cout << "Площадь прямоугольника (4x5): " << calculateArea(ShapeType::Rectangle, 4, 5) << endl;
	cout << "Площадь квадрата (сторона=6): " << calculateArea(ShapeType::Square, 6) << endl;
	cout << "Площадь треугольника (основание=4, высота=3): " << calculateArea(ShapeType::Triangle, 4, 3) << endl;

	return 0;
}