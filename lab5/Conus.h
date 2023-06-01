#ifndef CONUS_H
#define CONUS_H

#include "Body.h"

class Conus : public Body {
    Conus(double r, double h, Material material);

    virtual void calculateAreas() override;
    virtual void modelCompressionOrStretching() override;
    virtual void displayFigure() override;
    virtual void simulateMovement() override;
};

#endif // CONUS_H
