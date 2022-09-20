#pragma once
#include <SFML/Graphics.hpp>
#include <vector>

#include "CFG.h"

using namespace sf;
class load
{
public:

	Font base_font;
	CFG cfg;
	/// <summary>
	Image Img_fonL;
	Texture Texturs_fonL;

	Image Img_ico16;
	Texture Texturs_ico16;
	/// </summary>
	void font();
	void img();
	void texturs();
};

