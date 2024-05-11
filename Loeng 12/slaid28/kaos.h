#ifndef KAOS_H_INCLUDED
#define KAOS_H_INCLUDED

#include <string>
#include <variant>

std::variant<int, double, std::string> f(int n);

#endif
