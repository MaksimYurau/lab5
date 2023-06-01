#include <iostream>
#include <cmath>

enum shape { shar, prisma, parallelepiped, cub, piramida, conus, cylinder };
enum material { metal, wood, plastic, cardboard };

class Body {
protected:
    shape objShape;
    double r;
    double h;
    double a;
    double b;
    double s_osn;
    double s_bok;
    double s_full;
    double v;
    double p;
    material objMaterial;

public:
    Body(shape objShape, double r, double h, double a, double b, material objMaterial)
        : objShape(objShape), r(r), h(h), a(a), b(b), objMaterial(objMaterial) {}

    virtual double calculateBaseArea() = 0;
    virtual double calculateSideArea() = 0;
    virtual double calculateTotalArea() = 0;
    virtual double calculateVolume() = 0;
    virtual void compress() = 0;
    virtual void display() = 0;
    virtual void move() = 0;
};

class Shar : public Body {
public:
    Shar(double r, material objMaterial)
        : Body(shape::shar, r, 0.0, 0.0, 0.0, objMaterial) {}

    double calculateBaseArea() override {
        return 3.14 * r * r;
    }

    double calculateSideArea() override {
        return 0.0;
    }

    double calculateTotalArea() override {
        return 4 * calculateBaseArea();
    }

    double calculateVolume() override {
        return (4.0 / 3) * 3.14 * r * r * r;
    }

    void compress() override {
        r--;
    }

    void display() override {
        std::cout << "Рисую шар." << std::endl;
    }

    void move() override {
        std::cout << "Перемещаю шар." << std::endl;
    }
};

class Cub : public Body {
public:
    Cub(double a, material objMaterial)
        : Body(shape::cub, 0.0, 0.0, a, 0.0, objMaterial) {}

    double calculateBaseArea() override {
        return a * a;
    }

    double calculateSideArea() override {
        return 4 * calculateBaseArea();
    }

    double calculateTotalArea() override {
        return calculateSideArea();
    }

    double calculateVolume() override {
        return a * a * a;
    }

    void compress() override {
        a--;
    }

    void display() override {
        std::cout << "Рисую куб." << std::endl;
    }

    void move() override {
        std::cout << "Перемещаю куб." << std::endl;
    }
};

void algorithm(Body* body) {
    body->display();
    std::cout << "Площадь основания: " << body->calculateBaseArea() << std::endl;
    std::cout << "Площадь боковой поверхности: " << body->calculateSideArea() << std::endl;
    std::cout << "Площадь полной поверхности: " << body->calculateTotalArea() << std::endl;
    std::cout << "Объём: " << body->calculateVolume() << std::endl;
    std::cout <<

        "Моделирование сжатия/растяжения." << std::endl;
    body->compress();
    std::cout << "Моделирование перемещения." << std::endl;
    body->move();
    std::cout << "-----------------------" << std::endl;
}

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
    std::cout << std::endl;

    Shar shar(5.0, material::metal);
    Cub cube(10.0, material::wood);

    algorithm(&shar);
    algorithm(&cube);

	return 0;
}