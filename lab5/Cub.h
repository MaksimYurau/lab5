#ifndef CUB_H
#define CUB_H

#include "Body.h"

class Cub : public Body {
    Cub(double a, Material material);

    virtual void calculateAreas() override;
    virtual void modelCompressionOrStretching() override;
    virtual void displayFigure() override;
    virtual void simulateMovement() override;
};

#endif // CUB_H
