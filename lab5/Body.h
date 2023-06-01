#ifndef BODY_H
#define BODY_H

enum Shape {
	shar, prisma, parallelepiped, cub, piramida, conus, cylinder
};

enum Material {
	metal, wood, plastic, cardboard
};

class Body {
protected:
	Shape shape;
	double r, h, a, b;
	double s_osn, s_bok, s_full, v, p;
	Material material;

public:
    Body();
    Body(Shape shape, Material material);
    Body(Shape shape, double r, Material material);
    Body(Shape shape, double h, Material material);
    Body(Shape shape, double a, Material material);
    Body(Shape shape, double r, double h, Material material);
    Body(Shape shape, double h, double a, double b, Material material);
    Body(Shape shape, double r, double h, double a, double b, Material material);
    Body(Shape shape, double r, double h, double a, double b, double s_osn, double s_bok,
        double s_full, double v, double p, Material material);

    virtual ~Body() = default;

    virtual void calculateAreas() = 0;
    virtual void modelCompressionOrStretching() = 0;
    virtual void displayFigure() = 0;
    virtual void simulateMovement() = 0;
};

#endif // BODY_H