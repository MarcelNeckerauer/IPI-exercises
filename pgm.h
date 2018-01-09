#ifndef PGM_H
#define  PGM_H

#include <vector>
#include <string>

std::vector<std::vector<int> > read_pgm(const std::string&);

void write_pgm(const std::vector<std::vector<int> >&, std::string&);

#endif
