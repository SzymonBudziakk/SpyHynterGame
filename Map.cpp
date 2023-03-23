#include "Header.h"


Map::Map() {
	road = Texture::LoadTexture("assets/road.png");
	grass = Texture::LoadTexture("assets/grass.png");
	tree = Texture::LoadTexture("assets/tree.png");

	speed = 4;
	shift = 0;
	turn = 0;
	layers = 16;
	street = 3;

	src.x = 0;
	src.y = 0;
	src.w = 32;
	src.h = 32;

	dest.w = 32;
	dest.h = 32;
	dest.x = 0;
	dest.y = 0;

	int startingMap[BLOCKS_VERTICALLY - 1][BLOCKS_HORIZONTALLY] = {
		{ 2, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 2 },
		{ 2, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 2 },
		{ 2, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 2 },
		{ 2, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 2 },
		{ 2, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 2 },
		{ 2, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 2 },
		{ 2, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 2 },
		{ 2, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 2 },
		{ 2, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 2 },
		{ 2, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 2 },
		{ 2, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 2 },
		{ 2, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 2 },
		{ 2, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 2 },
		{ 2, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 2 }
	};

	LoadMap(startingMap);
	
}

void Map::LoadMap(int tab[BLOCKS_VERTICALLY - 1][BLOCKS_HORIZONTALLY]) {
	for (int i = 0; i < BLOCKS_VERTICALLY - 1; i++) {
		for (int j = 0; j < BLOCKS_HORIZONTALLY; j++) {
			map[i][j] = tab[i][j];
		}
	}
}

void Map::DrawMap() {

	if (map[6][5] == 0 && map[6][6] == 0) street = 3;
	else if (map[6][5] == 0 && map[6][6] == 1) street = 4;
	else if (map[6][5] == 1 && map[6][6] == 1) street = 5;

	int type = 0;

	for (int i = 0; i < BLOCKS_VERTICALLY - 1; i++) {
		for (int j = 0; j < BLOCKS_HORIZONTALLY; j++) {
			type = map[i][j];

			dest.x = j * 32;
			dest.y = (i * 32) + shift;

			if (type == 0) {
				Texture::Draw(grass, src, dest);
			}
			else if (type == 1) {
				Texture::Draw(road, src, dest);
			}
			else if (type == 2) {
				Texture::Draw(tree, src, dest);
			}
		}
	}
}