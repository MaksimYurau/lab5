#ifndef PIRAMIDA_H
#define PIRAMIDA_H

#include "Body.h"

class Piramida : public Body {
    Piramida(Material material);

    virtual void calculateAreas() override;
    virtual void modelCompressionOrStretching() override;
    virtual void displayFigure() override;
    virtual void simulateMovement() override;
};

#endif // PIRAMIDA_H