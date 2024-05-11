#include <fstream>
#include <string>
#include <cctype>
#include <algorithm>

int count_words(const std::string & line) {
	int res = 0;
	for (unsigned i = 0; i < line.length(); ++i) {
		if ((i == 0 or isspace(line[i - 1])) and !isspace(line[i])) {
			++res;
		}
	}
	return res;
}

int main() {
	std::ifstream sis{"input.txt"};
	std::ofstream val{"output.txt"};
	int lines = 0, total_words = 0, max_words = 0;
	for (std::string line; std::getline(sis, line); ) {
		const int line_words = count_words(line);
		++lines;
		total_words += line_words;
		max_words = std::max(max_words, line_words);
	}
	val << lines << std::endl;
	val << total_words << std::endl;
	val << max_words << std::endl;
}
