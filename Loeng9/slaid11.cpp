#include <fstream>
#include <sstream>
#include <string>
#include <algorithm>

int count_words(const std::string & line) {
	int res = 0;
	std::istringstream line_stream{line};
	for (std::string word; line_stream >> word; ) {
		++res;
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
