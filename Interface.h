#pragma once
#include "Header.h"

class Interface {
public:

	Interface(int x, int y, int width, int height);
	~Interface();

	void String(int x, int y, const char* text, SDL_Surface* charset);
	void Update(char* text);
	void Display();
	int czarny;

	SDL_Rect destR;
	SDL_Surface* tmpSurface, * charset;
	SDL_Texture *displayTexture;

};