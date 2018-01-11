#ifndef FUNTIONS_H
#define FUNTIONS_H

#include "rectangle.h"

const double BIG_NUMBER = 1e300;

double bssf_score(Rectangle const& free, Rectangle const& obj);

std::vector<Rectangle> sas_rule(Rectangle const& free, Rectangle const& best);

#endif                                                                                                                               
