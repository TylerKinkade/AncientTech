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
	SDL_Window* wnd = SDL_CreateWindow("A.T.", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, viewWidth, viewHeight, SDL_WINDOW_SHOWN);
	SDL_Renderer* rend = SDL_CreateRenderer(wnd, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	SDL_Surface* wndSurface = SDL_LoadBMP("Textures/Circuit.bmp");
	SDL_Texture* Txt = SDL_CreateTextureFromSurface(rend, wndSurface);

	SDL_Rect drawingRect;
	drawingRect.x = viewWidth/2;
	drawingRect.y = viewHeight/2;
	drawingRect.w = 100;
	drawingRect.h = 200;

	SDL_Event close;
	while (isRunning) {
		while (SDL_PollEvent(&close) != 0){
			if (close.type == SDL_QUIT)
				isRunning = false;
		}
		SDL_RenderClear(rend);
		SDL_RenderCopy(rend, Txt, NULL, &drawingRect);
		SDL_RenderPresent(rend);
		SDL_UpdateWindowSurface(wnd);
	}
	return 0;
}