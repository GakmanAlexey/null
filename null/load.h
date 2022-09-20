#pragma once
#include <SFML/Graphics.hpp>
#include <vector>

#include "CFG.h"

using namespace sf;
class load
{
public:
	CFG cfg;
	/// <summary>
	Image Img_fonL;
	Texture Texturs_fonL;
	/// </summary>
	void font();
	void img();
	void texturs();
};

