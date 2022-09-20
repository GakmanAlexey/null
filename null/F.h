#pragma once
#include <vector>
#include <SFML/Graphics.hpp>

class F
/*
Класс полезных функций F.h
*/
{
public:
	/*
	Приминамет строку стринг, символ сепоратора и возвращает вектор строк.
	Input: string, char
	Return: vector string
	*/
	std::vector<std::string> split(std::string text, char separator);

	/*
	Приминамет строку стринг возвращает вектор строк.
	Input: string 
	Return: vector string 
	*/
	std::vector<std::string> spl(std::string text);

	/*
	Принимает Строку стринг и максимальный размер допустимой строки
	Возвращает вектор из набора строк подогнаных по размеру с помощью разделителя пробела
	Input: string , int
	Return: vector string
	*/
	std::vector<std::string> textArea(std::string text, int long_line);

	/*
	Функция отрисовки картинки полностью
	Принимает спрайт по умолчанию, текстурку и положение по х и у
	Input: Strite, Texture, int , int
	Return: Sprite
	*/
	sf::Sprite show_F(sf::Sprite &Sprite_def,sf::Texture &texturs,int x, int y);

	/*
	Функция отрисовки части кортинки
	Принимает спрайт по умолчанию, текстурку и положение по х и у   , положение отрисовываемой картинке в спрайте по х,у вширене и высоте
	Input: Strite, Texture, int , int     , int , int, int , int
	Return: Sprite
	*/
	sf::Sprite show_S(sf::Sprite& Sprite_def, sf::Texture& texturs, int x, int y     ,int start_x, int start_y, int width, int height);

	/*
	Функция отрисовки текста
	-------
	style_text 0-Bold,
	Принимает спрайт текста, шрифт, положение по х и у, сам текст, размер шрифта и тип шрифта
	Input: Text, Font, int , int, String , int , int
	Return: Text
	*/
	sf::Text show_T(sf::Text& t_s, sf::Font& font, int x, int y, sf::String& str, int font_size, int style_text);
};

