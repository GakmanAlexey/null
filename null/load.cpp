#include "load.h"
#include <SFML/Graphics.hpp>
#include <vector>

#include "CFG.h"

void load::font() {
};
void load::img() {
	Img_fonL.loadFromFile(cfg.direct_root + cfg.direct_img + "fonL.png");
	//Textures.push_back(texture);
};
void load::texturs() {
	Texturs_fonL.loadFromImage(Img_fonL);
};