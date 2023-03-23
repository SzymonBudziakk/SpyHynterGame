#include "Header.h"

Interface::Interface(int x, int y, int width, int height) {
	
	destR.w = width;
	destR.h = height;
	destR.x = x;
	destR.y = y;

	tmpSurface = SDL_CreateRGBSurface(0, destR.w, destR.h, 32, 0x00FF0000, 0x0000FF00, 0x000000FF, 0xFF000000);
	czarny = SDL_MapRGB(tmpSurface->format, 0x00, 0x00, 0x00);


}
Interface::~Interface() {}

void Interface::String(int x, int y, const char* text, SDL_Surface* charset) {
	int px, py, c;
	SDL_Rect s, d;
	s.w = 8;
	s.h = 8;
	d.w = 8;
	d.h = 8;
	while (*text) {
		c = *text & 255;
		px = (c % 16) * 8;
		py = (c / 16) * 8;
		s.x = px;
		s.y = py;
		d.x = x;
		d.y = y;
		SDL_BlitSurface(charset, &s, tmpSurface, &d);
		x += 8;
		text++;
	};
};

void Interface::Update(char* text) {
	charset = SDL_LoadBMP("assets/cs8x8.bmp");
	SDL_FillRect(tmpSurface, NULL, czarny);
	String(16, 16, text, charset);
	displayTexture = SDL_CreateTextureFromSurface(Game::renderer, tmpSurface);
	SDL_FreeSurface(charset);
};

void Interface::Display() {
	SDL_RenderCopy(Game::renderer, displayTexture, NULL, &destR);
	SDL_DestroyTexture(displayTexture);
}