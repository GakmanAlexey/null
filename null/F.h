#pragma once
#include <vector>

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
};

