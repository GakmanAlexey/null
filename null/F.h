#pragma once
#include <vector>
#include <SFML/Graphics.hpp>

class F
/*
����� �������� ������� F.h
*/
{
public:
	/*
	���������� ������ ������, ������ ���������� � ���������� ������ �����.
	Input: string, char
	Return: vector string
	*/
	std::vector<std::string> split(std::string text, char separator);

	/*
	���������� ������ ������ ���������� ������ �����.
	Input: string 
	Return: vector string 
	*/
	std::vector<std::string> spl(std::string text);

	/*
	��������� ������ ������ � ������������ ������ ���������� ������
	���������� ������ �� ������ ����� ���������� �� ������� � ������� ����������� �������
	Input: string , int
	Return: vector string
	*/
	std::vector<std::string> textArea(std::string text, int long_line);


	sf::Sprite show_F(sf::Sprite &Sprite_def,sf::Texture &texturs,int x, int y);

	sf::Sprite show_S(sf::Sprite& Sprite_def, sf::Texture& texturs, int x, int y     ,int start_x, int start_y, int width, int height);

	sf::Text show_T(sf::Text& t_s, sf::Font& font, int x, int y, sf::String& str, int font_size, int style_text);
};

