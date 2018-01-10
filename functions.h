#include "rectangle.h"

double bssf_score(Rectangle const& free, Rectangle const& obj) {
  double width_diff = free.width() - obj.width();
  double height_diff = free.height() - obj.height();

  double score;
  if (width_diff < 0 && height_diff < 0) {
    score = BIG_NUMBER;
  }
  else if(width_diff < 0) {
    score = height_diff;
  }
  else if(height_diff < 0) {
    score = width_diff;
  }
  else {
    if (width_diff <= height_diff) {
      score = width_diff;
    }
    else {
      score = height_diff;
    }
  }
  return score;
}

const double BIG_NUMBER = 1e300;
