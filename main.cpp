#include "Header.h"

Game* game = nullptr;

int main(int argc, char* argv[]) {

	SDL_ShowCursor(SDL_DISABLE);
	Uint32 frameStart;
	int frameTime, t1, t2;

	game = new Game();
	game->init("Szymon Budziak 193234", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT);

	while (game->running()) {
		while (game->pause == false) {
			frameStart = SDL_GetTicks();
			t1 = SDL_GetTicks();

			game->handleEvents();
			game->update();
			game->render();

			frameTime = SDL_GetTicks() - frameStart;
			t2 = SDL_GetTicks();

			game->time = (t2 - t1) * 0.01;
			game->timeCounter -= game->time;

			if (game->timeCounter <= 0) {
				game->pause = true;
				game->overTime = 80 - game->timeCounter;
				game->overScore = game->score;
				game->over = true;
				game->newGame();
				game->update();
				game->render();
			}

			if (FRAME_DELAY > frameTime) {
				SDL_Delay(FRAME_DELAY - frameTime);
			}
		}

		SDL_Event event;
		while (SDL_PollEvent(&event)) {
			switch (event.type) {
				case SDL_KEYDOWN:
					if (event.key.keysym.sym == SDLK_p) {
						game->pause = false;
						break;
					}
					else if (event.key.keysym.sym == SDLK_ESCAPE) {
						game->isRunning = false;
					}
				}
			}
		}

	game->clean();

	return 0;
}