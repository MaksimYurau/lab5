#ifndef CYLINDER_H
#define CYLINDER_H

#include "Body.h"

class Cylinder : public Body {
    Cylinder(double r, double h, Material material);

    virtual void calculateAreas() override;
    virtual void modelCompressionOrStretching() override;
    virtual void displayFigure() override;
    virtual void simulateMovement() override;
};

#endif // CYLINDER_H
