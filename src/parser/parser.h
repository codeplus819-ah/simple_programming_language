#ifndef PARSER_H
#define PARSER_H

#include <vector>
#include <string>
#include <any>
#include "../syntax/syntax.h"

std::vector<std::any> parse(std::vector<std::string> tokens);

#endif