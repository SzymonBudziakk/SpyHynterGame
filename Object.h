#pragma once
#include "Header.h"

class Object {
public:

	Object(const char* textureSheet, int x, int y);
	~Object();

	int xpos;
	int ypos;
	bool collision;

	void Update(int street);
	void Render();

private:

	SDL_Texture* objectTexture;
	SDL_Rect srcRect, destRect;
};