#include "Header.h"

int MapTemplate[BLOCKS_VERTICALLY - 1][BLOCKS_HORIZONTALLY] = {
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
int Map2[BLOCKS_VERTICALLY - 1][BLOCKS_HORIZONTALLY] = {
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
int turns[4][BLOCKS_HORIZONTALLY] = {
		{ 2, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 2 },
		{ 2, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 2 },
		{ 2, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 2 },
		{ 2, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 2 }
};
char text[128];

Object* car;
Map* map;
Interface* menuTop, *menuBottom, *pauseAlert, *overAlert;
SDL_Renderer* Game::renderer = nullptr;

Game::Game() {}
Game::~Game() {}

void Game::init(const char* title, int xpos, int ypos, int width, int height) {

	Variables();

	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {
		window = SDL_CreateWindow(title, xpos, ypos, width, height, 0);
		renderer = SDL_CreateRenderer(window, -1, 0);
		if (renderer) {
			SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
		}
		isRunning = true;
	}

	car = new Object("assets/car.png", (SCREEN_WIDTH - BLOCK_SIZE)/2, (SCREEN_HEIGHT - BLOCK_SIZE)/2);
	map = new Map();
	menuTop = new Interface(0, 0, 640, 40);
	menuBottom = new Interface(0, 448, 640, 32);
	pauseAlert = new Interface(224, 192, 192, 32);
	overAlert = new Interface(0, 0, 640, 40);
}

void Game::handleEvents() {

	Controlls();
	MapShift();
	map->DrawMap();
	
}

void Game::update() {

	car->Update(map->street);
	Printing();
	Collision();
}

void Game::render() {

	SDL_RenderClear(renderer);
	map->DrawMap();
	car->Render();

	menuTop->Display();
	menuBottom->Display();
	if (pause) 
		pauseAlert->Display();
	if (over && pause)
		overAlert->Display();

	SDL_RenderPresent(renderer);
}

void Game::clean() {
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();
}

void Game::newGame() {
	car = new Object("assets/car.png", (SCREEN_WIDTH - BLOCK_SIZE) / 2, (SCREEN_HEIGHT - BLOCK_SIZE) / 2);
	map = new Map();
	time = 0;
	score = 0;
	timeCounter = 80;
	checkpoint = timeCounter - 1;
	lifes = -1;
	morBool = false;
	additionalLife = false;

	for (int i = 0; i < BLOCKS_VERTICALLY - 1; i++) {
		for (int j = 0; j < BLOCKS_HORIZONTALLY; j++) {
			Map2[i][j] = MapTemplate[i][j];
		}
	}
}

void Game::Variables() {
	score = 0;
	time = 0;
	overScore = 0;
	overTime = 0;
	timeCounter = 80;
	checkpoint = timeCounter - 1;
	pause = false;
	over = false;
	lifes = -1;
	morTimer = 60;
	additionalLife = false;
	morBool = false;
}

void Game::Controlls() {
	SDL_Event event;
	SDL_PollEvent(&event);
	switch (event.type) {
	case SDL_KEYDOWN:
		if (event.key.keysym.sym == SDLK_RIGHT)
			car->xpos += 8;
		else if (event.key.keysym.sym == SDLK_LEFT)
			car->xpos -= 8;
		else if (event.key.keysym.sym == SDLK_UP) {
			map->speed = 8;
			map->DrawMap();
		}
		else if (event.key.keysym.sym == SDLK_DOWN) {
			map->speed = 4;
			map->DrawMap();
		}
		else if (event.key.keysym.sym == SDLK_ESCAPE) {
			isRunning = false;
			pause = true;
		}
		else if (event.key.keysym.sym == SDLK_n) {
			pause = true;
			overTime = 80 - timeCounter;
			overScore = score;
			over = true;
			newGame();
		}
		else if (event.key.keysym.sym == SDLK_p) {
			pause = true;
		}
		break;
	}
}

void Game::MapShift() {

	map->shift += map->speed;

	if (timeCounter <= morTimer && morBool == false) {
		lifes = 3;
		morBool = true;
	}
	if (timeCounter <= checkpoint) {
		score += (map->speed * 10);
		checkpoint--;
	}
	if (score >= 4000 && additionalLife == false) {
		lifes++;
		additionalLife = true;
	}


	if (map->shift >= 32) {
		map->shift = 0;

		for (int i = BLOCKS_VERTICALLY - 3; i >= 0; i--) {
			for (int j = 0; j < BLOCKS_HORIZONTALLY; j++) {
				Map2[i + 1][j] = Map2[i][j];
			}
		}
		for (int j = 0; j < BLOCKS_HORIZONTALLY; j++) {
			Map2[0][j] = turns[map->turn][j];

		}

		map->LoadMap(Map2);

		if (map->layers == 30) {
			map->layers = 1;
			if (map->turn == 3) {
				map->turn = 0;
			}
			else {
				map->turn++;
			}
		}
		else {
			map->layers++;
		}
	}
}

void Game::Printing() {
	if (lifes > 0) {
		sprintf(text, "Szymon Budziak 193234       Czas: %lf       Wynik: %i       Zycia: %i", timeCounter, score, lifes);
	}
	else {
		sprintf(text, "Szymon Budziak 193234       Czas: %lf       Wynik: %i", timeCounter, score);
	}
	menuTop->Update(text);

	sprintf(text, "                                Zaimplementowane elementy: a b c d e f h i m");
	menuBottom->Update(text);

	sprintf(text, "p - wznow rozgrywke");
	pauseAlert->Update(text);

	sprintf(text, "Koniec gry.                   Wynik: %i             Czas: %lf", overScore, overTime);
	overAlert->Update(text);
}

void Game::Collision() {
	if (car->collision == true) {
		lifes--;
		if (lifes == 0) {
			pause = true;
			overTime = 80 - timeCounter;
			overScore = score;
			over = true;
			newGame();
			sprintf(text, "Koniec gry.                   Wynik: %i             Czas: %lf", overScore, overTime);
			overAlert->Update(text);
		}
		map->speed = 4;
		car->collision = false;
	}
}