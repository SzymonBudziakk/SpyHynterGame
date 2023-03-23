#include "Header.h"

Object::Object(const char* textureSheet, int x, int y) {
	
	objectTexture = Texture::LoadTexture(textureSheet);
	xpos = x;
	ypos = y;
	collision = false;
}

void Object::Update(int street) {

	if (street == 3 && (xpos < 224 || xpos > 384)) {
		xpos = (SCREEN_WIDTH - BLOCK_SIZE) / 2;
		collision = true;
	}
	else if (street == 4 && (xpos < 192 || xpos > 416)) {
		xpos = (SCREEN_WIDTH - BLOCK_SIZE) / 2;
		collision = true;
	}
	else if (street == 5 && (xpos < 160 || xpos > 448)) {
		xpos = (SCREEN_WIDTH - BLOCK_SIZE) / 2;
		collision = true;
	}

	srcRect.w = 32;
	srcRect.h = 32;
	srcRect.x = 0;
	srcRect.y = 0;
	
	destRect.w = srcRect.w;
	destRect.h = srcRect.h;
	destRect.x = xpos;
	destRect.y = ypos;
}

void Object::Render() {
	SDL_RenderCopy(Game::renderer, objectTexture, &srcRect, &destRect);
}