#include "test.h"

#include <iostream>

// meetodite definitsioonid
test::test() {
	std::cout << "constructed" << std::endl;
}

test::~test() {
	std::cout << "destructed" << std::endl;
}
