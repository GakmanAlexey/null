#include "F.h"

std::vector<std::string> F::split(std::string text, char separator) {
	int i = 0;
	std::vector<std::string> result;
	std::string  result_str = "";
	while (i < text.size()) {
		if (text[i] == separator) {
			result.push_back(result_str);
			result_str = "";
		}
		else {
			result_str += text[i];
		}
		i++;
	}
	if (result_str != "") {
		result.push_back(result_str);
	}
	return result;
};

std::vector<std::string> F::spl(std::string text) {
	char separator = '•';
	int i = 0;
	std::vector<std::string> result;
	std::string  result_str = "";
	while (i < text.size()) {
		if (text[i] == separator) {
			result.push_back(result_str);
			result_str = "";
		}
		else {
			result_str += text[i];
		}
		i++;
	}
	if (result_str != "") {
		result.push_back(result_str);
	}
	return result;
};