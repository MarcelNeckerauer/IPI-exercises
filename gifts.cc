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

/* Dieses Programm erfüllt seinen eigentlichen Zweck leider nicht.
 * Zudem wird das Starten des fertigen Programmes in einer 
 * Endlosschleife resultieren, weil noch keine Mglichkeit vorhanden
 * ist, proceed auf false zu stellen.
*/
int main() {
  std::vector<Rectangle> to_be_placed = gifts;
  std::vector<Rectangle> already_placed = {};
  std::vector<Rectangle> free_rectangles = {table};
  bool proceed = true;

  while(proceed) {
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

    double best_score = scores.at(0);
    unsigned int position = 0;

    if(best_score == BIG_NUMBER) {
      proceed = false;
      break;
    }
    else{
      for (unsigned int i = 1; i < scores.size(); i++) {
        if (scores.at(i) < best_score) {
          best_score = scores.at(i);
          position = i;
        }
    }

    Rectangle best_rectangle
    if(bssf_score(table, best_rectangle) < best_score) {
      best_rectangle.transpose();
      already_placed.push_back(best_rectangle);

    }
    else {
      already_placed.push_back(best_rectangle);

    }

  }

  return 0;
}
