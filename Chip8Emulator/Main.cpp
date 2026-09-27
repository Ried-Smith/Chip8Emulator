//main game loop

#include "Chip8.h"
#include "Platform.h"
#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h>

int main(int argc, char** argv) {

	Platform platform("Chip8 Emulator", 640, 320, 64, 32);

	Chip8 chip8;
	chip8.LoadROM("");

	bool quit = false;

	while (!quit){
		SDL_Event event;
		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_EVENT_QUIT) {
				quit = true;
			}
		}
	}

	return 0;
}