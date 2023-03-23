#pragma once
#include "Header.h"

class Game {

public:
	Game();
	~Game();

	void init(const char* title, int xpos, int ypos, int width, int height);
	void handleEvents();
	void update();
	void render();
	void clean();
	void newGame();
	void Variables();
	void Controlls();
	void MapShift();
	void Printing();
	void Collision();

	bool running() { return isRunning; }
	int Map3[BLOCKS_VERTICALLY - 1][BLOCKS_HORIZONTALLY];

	int score;
	int overScore;
	double time;
	double overTime;
	double timeCounter;
	double checkpoint;
	int lifes;
	double morTimer;
	bool pause;
	bool over;
	bool isRunning;
	bool additionalLife;
	bool morBool;

	SDL_Rect src, dest;
	static SDL_Renderer* renderer;

private:
	SDL_Window* window;

};