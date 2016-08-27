#include <SDL.h>
#include "Core\GameState.h"
#include "Core\FileUtils.h"


//todo: open window.
//create sprite factory
//asset manager
//
int main(int argc, char** argv)
{
	isRunning = true;
	SDL_Init(SDL_INIT_VIDEO);
	SDL_Window* wnd = SDL_CreateWindow("A.T.", 100, 100, viewWidth, viewHeight, SDL_WINDOW_SHOWN);
	SDL_Renderer* rend = SDL_CreateRenderer(wnd, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	while (isRunning) {}
	return 0;
}