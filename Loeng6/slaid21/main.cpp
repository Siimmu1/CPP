#include <vector>

#include "tudeng.h"

int main() {
	std::vector<tudeng> tudengid;

	tudengid.push_back({"Mati", "mati@taltech.ee", 60});
	tudengid.push_back({"Kati", "kati@taltech.ee", 80});

	for (const auto & t : tudengid) {
		t.print();
	}
}
