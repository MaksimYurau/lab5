#ifndef PRISMA_H
#define PRISMA_H

#include "Body.h"

class Prisma : public Body {
    Prisma(double h, Material material);

    virtual void calculateAreas() override;
    virtual void modelCompressionOrStretching() override;
    virtual void displayFigure() override;
    virtual void simulateMovement() override;
};

#endif // PRISMA_H
