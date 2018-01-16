#include <fstream>
#include <cmath>

#include "pgm.h"

std::vector<std::vector<int> > read_pgm(const std::string& filename) {
  std::ifstream file(filename);

  std::string token;
  file >> token;
  if(token != "P2") {
    throw std::runtime_error("Datei wird nicht unterstuetzt.");
  }

  int xSize, ySize, maxVal;
  file >> xSize >> ySize >> maxVal;

  std::vector<std::vector<int> > data(xSize, std::vector<ySize>);

  for (int j = 0; j < data[0].size(); j++) {
    for (int i = 0; i < data.size(); i++) {
      file >> data[i][data[0].size()-1-j];
    }
  }

  return data;
}

void write_pgm(const std::vector<std::vector<int> >& data, const std::string& filename) {
  if (data.empty() || data[0].empty()) {
    throw runtime_error("Das Array ist leer.");
  }

  for (const std::vector<int>& row : data){
    if (row.size() != data[0].size()) {
      throw std::invalid_argument("Groesse der Reihe nicht eindeutig.");
    }
  }

  std::ofstream file(filename);

  file << "P2\n" << data.size() << " " << data[0].size() << "\n";

  int maxVal;
  for(const std::vector<int>& row : data){
    for (const int& entry : row) {
      maxVal = std::max(entry, maxVal);
    }
  }

  if(maxVal > 65535) {
    file << 65535 << "\n";
    for (unsigned int j = 0; j < data[0].size(); j++) {
      for (unsigned int i = 0; i < data.size(); i++) {
        if (data[i][j] < 0) {
          throw std::range_error("Negativer Wert an Stelle ("
        + std::to_string(i) + ", " + std::to_string(j) + ")");
        }
        file << std::floor(data[i][j] * (65535./maxVal)) << " ";
      }
      file << "\n";
    }
  }

  else {
    file << maxVal << "\n";
    for (unsigned int j = 0; j < data[0].size(); j++) {
      for (unsigned int i = 0; i < data.size(); i++) {
        if (data[i][j] < 0) {
          throw std::range_error("Negativer Wert an Stelle ("
        + std::to_string(i) + ", " + std::to_string(j) + ")");
        }
        file << data[i][data[0].size()-1-j] << " ";
      }
      file << "\n";
    }
  }

}
