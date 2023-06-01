#ifndef SHAR_H
#define SHAR_H

#include "Body.h"

class Shar : public Body {
    Shar(double r, Material material);

    virtual void calculateAreas() override;
    virtual void modelCompressionOrStretching() override;
    virtual void displayFigure() override;
    virtual void simulateMovement() override;
};

#endif // SHAR_H
