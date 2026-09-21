#ifndef SYNTAX_H
#define SYNTAX_H

#include <string>

template <typename t>
struct variables_syntax {
  bool can_change;
  std::string name;
  t value;
};

struct if_syntax {
  /* data */
};

// add other and value them later

#endif