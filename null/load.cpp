#include "load.h"
#include <SFML/Graphics.hpp>
#include <vector>

#include "CFG.h"

void load::font() {
	base_font.loadFromFile(cfg.direct_root + cfg.direct_font + "f.otf");
};
void load::img() {
	Img_fonL.loadFromFile(cfg.direct_root + cfg.direct_img + "fonL.png");
	Img_ico16.loadFromFile(cfg.direct_root + cfg.direct_img + "ico16.png");
	//Textures.push_back(texture);
};
void load::texturs() {
	Texturs_fonL.loadFromImage(Img_fonL);
	Texturs_ico16.loadFromImage(Img_ico16);
};