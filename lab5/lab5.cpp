#include <iostream>
#include <cmath>

class Hexagonal_Prisma {
private:
	double R;
	double H;
public:
	Hexagonal_Prisma(double R, double H) {
		this->R = R;
		this->H = H;
	}

	~Hexagonal_Prisma() {}

	double get_base_area() {
		return 3.0 * sqrt(3.0 / 2.0) * R;
	}

	double get_lateral_area() {
		return 6 * R * H;
	}

	double get_total_area() {
		return (2 * (3.0 * sqrt(3.0 / 2.0) * R)) + (6 * R * H);
	}
};

int main()
{
	setlocale(0, "Ru");

	double R, H;
	std::cout << "Введите радиус прямой призмы: ";
	std::cin >> R;
	std::cout << "Введите высоту прямой призмы: ";
	std::cin >> H;

	Hexagonal_Prisma prism(R, H);

	double base_area = prism.get_base_area();
	double lateral_area = prism.get_lateral_area();
	double total_area = prism.get_total_area();

	std::cout << "Площадь основания прямой призмы: " << base_area << std::endl;
	std::cout << "Площадь боковой поверхности прямой призмы: " << lateral_area << std::endl;
	std::cout << "Площадь полной поверхности прямой призмы: " << total_area << std::endl;

	return 0;
}