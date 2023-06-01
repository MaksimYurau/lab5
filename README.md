# lab5
Лабораторная работа №5.

Задание.

Вариант № 10. 

Класс «Прямая призма» (Hexagonal_Prisma — прямая призма, основание которой — 
правильный шестиугольник). Создать объект класса с параметрами: R — радиус 
описанной окружности, H — высота призмы. Вычислить площадь основания, боковую
и полную поверхности нового объекта-призмы, полученного умножением радиуса
основания на некоторую константу.
S осн. = 3√3/2 * R ^ 2, S бок. = 6R * H, S полн. = 2S осн. + S бок.

Алгоритм решения задания:
1. Создать новый проект (консольное приложение) в Visual Studio.
2. В .cpp файле убрать всё лишнее.
3. Добавить заголовочные файлы (iostream, cmath).
4. В этом же .cpp файле создать класс Hexagonal_Prisma (Прямая призма). Класс Hexagonal_Prisma будет содержать 2 private поля класса типа double( R — радиус 
описанной окружности и H — высота призмы), конструктор и 3 метода класса (get_base_area, get_lateral_area и get_total_area). Метод get_base_area нужен для вычисления площади основания прямой призмы. Метод get_lateral_area нужен для вычисления площади боковой поверхности прямой призмы. Метод get_total_area нужен для вычисления полной поверхности прямой призмы.
5. Добавляем в .cpp файл функцию main(). Добавляем поддержку кириллицы с помощью setlocale(0, "Ru"). R — радиус описанной окружности, H — высота призмы. С помощью операторов ввода-вывода обеспечиваем консольный пользовательский ввод для получения необходимых данных. Создаём объект prism класса Hexagonal_Prisma. Объявляем и инициализируем 3 переменных типа double (base_area, lateral_area, total_area), которые и будем выводить на консоль, как значения площади основания прямой призмы, площади боковой поверхности прямой призмы, площади полной поверхности прямой призмы. Успешно завершаем выполнение функции int main().