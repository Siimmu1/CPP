#include <fstream>
#include <sstream>
#include <string>

int main() {
	std::ifstream sis{"input.txt"};
	std::ofstream val{"output.txt"};
	int lines = 0, total_words = 0, max_words = 0;
	for (std::string line; std::getline(sis, line); ) {
		++lines;
		int line_words = 0;
		std::istringstream line_stream{line};
		for (std::string word; line_stream >> word; ) {
			++total_words;
			++line_words;
		}
		if (max_words < line_words) {
			max_words = line_words;
		}
	}
	val << lines << std::endl;
	val << total_words << std::endl;
	val << max_words << std::endl;
}
