#pragma once
#include <vector>

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
};

