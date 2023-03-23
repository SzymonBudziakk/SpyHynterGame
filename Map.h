#pragma once
#include "Header.h"

class Map {
public:

	Map();
	~Map();

	void LoadMap(int tab[BLOCKS_VERTICALLY - 1][BLOCKS_HORIZONTALLY]);
	void DrawMap();
	void SlideMap();
	void AddRow();

	int speed;
	int shift;
	int turn;
	int layers;
	int street;

	int map[BLOCKS_VERTICALLY - 1][BLOCKS_HORIZONTALLY];
	int startingMap[BLOCKS_VERTICALLY - 1][BLOCKS_HORIZONTALLY];


private:
	SDL_Rect src, dest;
	SDL_Texture* road;
	SDL_Texture* grass;
	SDL_Texture* tree;

};