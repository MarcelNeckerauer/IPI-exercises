#include <vector>

#include "rectangle.h"

Rectangle table(Point(100.0, 80.0));
Rectangle tree_stand(Point(30.0, 30.0));
std::vector<Rectangle> gifts = { Rectangle(Point(20.0, 10.0)),
                               Rectangle(Point(10.0, 11.0)),
                               Rectangle(Point(3.0, 46.0)),
                               Rectangle(Point(3.0, 4.0)),
                               Rectangle(Point(6.0, 16.0)),
                               Rectangle(Point(10.0, 20.0)),
                               Rectangle(Point(20.0, 8.0)),
                               Rectangle(Point(12.0, 37.0)),
                               Rectangle(Point(11.0, 15.0)),
                               Rectangle(Point(40.0, 63.0)),
                               Rectangle(Point(23.0, 6.0)),
                               Rectangle(Point(16.0, 12.0)),
                               Rectangle(Point(25.0, 20.0)),
                               Rectangle(Point(67.0, 3.0)),
                               Rectangle(Point(31.0, 29.0)),
                               Rectangle(Point(12.0, 11.0)),
                               Rectangle(Point(8.0, 9.0)),
                               Rectangle(Point(3.0, 8.0)),
                               Rectangle(Point(21.0, 13.0)),
                               Rectangle(Point(46.0, 13.0)),
                               Rectangle(Point(11.0, 75.0)),
                               Rectangle(Point(4.0, 3.0)),
                               Rectangle(Point(19.0, 7.0)),
                               Rectangle(Point(33.0, 7.0)),
                               Rectangle(Point(6.0, 16.0)),
                               Rectangle(Point(21.0, 4.0)),
                               Rectangle(Point(8.0, 8.0)),
                               Rectangle(Point(3.0, 86.0)),
                               Rectangle(Point(20.0, 6.0)),
                               Rectangle(Point(21.0, 3.0)),
                               Rectangle(Point(13.0, 59.0)),
                               Rectangle(Point(4.0, 20.0))
};

const double BIG_NUMBER = 1e300;

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

int main() {
  std::vector<Rectangle> to_be_placed = gifts;
  std::vector<Rectangle> already_placed = {};
  std::vector<Rectangle> free_rectangles = {table};
  std::vector<double> scores = {};

  for (unsigned int i = 0; i < to_be_placed.size(); i++) {
    Rectangle to_be_tested = to_be_placed.at(i);
    double score = bssf_score(table, to_be_tested);
    scores.push_back(score);
  }

  for (unsigned int i = 0; i < to_be_placed.size(); i++) {
    Rectangle temp = to_be_placed.at(i);
    Rectangle to_be_tested = temp.transpose();
    double score = bssf_score(table, to_be_tested);
    if (score < scores.at(i)) {
      scores[i] = score;
    }
  }

  return 0;
}
