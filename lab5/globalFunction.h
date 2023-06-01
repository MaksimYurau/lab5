#include "Body.h"

void globalFunction(Body* obj) {
    obj->calculateAreas();
    obj->modelCompressionOrStretching();
    obj->displayFigure();
    obj->simulateMovement();
}
