#include "F.h"
#include <SFML/Graphics.hpp>

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

std::vector<std::string> F::textArea(std::string text, int long_line) {
	int i = 0;
	int j = 0;
	std::vector<std::string> result;
	std::vector<std::string> timed_str;
	std::string  old_str = "";
	std::string  new_str = "";
	std::string  timed_strs = "";
	timed_str = F::split(text, ' ');
	while (i < timed_str.size() && i < text.size()) {
		new_str += (timed_str[i] + ' ');
		if (new_str.size() < long_line) {
			old_str = new_str;
		}
		if(timed_str.size() > i + 1){
		timed_strs = old_str + ' ' + timed_str[i + 1];
		}
		if (timed_strs.size() >= long_line) {
			result.push_back(old_str);
			new_str = "";
		}

		i++;
	}
	if (result[result.size()-1] != old_str) {
		result.push_back(old_str);
	}
	
	return result;

};

sf::Sprite F::show_F(sf::Sprite &Sprite_def,sf::Texture &texturs, int x, int y) {
	
	Sprite_def.setTexture(texturs);
	Sprite_def.setPosition(x, y);
	return Sprite_def;
};