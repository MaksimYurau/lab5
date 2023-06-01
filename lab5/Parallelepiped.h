#ifndef PARALLELEPIPED_H
#define PARALLELEPIPED_H

#include "Body.h"

class Parallelepiped : public Body {
    Parallelepiped(double h, double a, double b, Material material);

    virtual void calculateAreas() override;
    virtual void modelCompressionOrStretching() override;
    virtual void displayFigure() override;
    virtual void simulateMovement() override;
};

#endif // PARALLELEPIPED_H
