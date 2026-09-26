#pragma once
#include <SDL3/SDL.h>

class Platform {

	friend class Imgui; // what is friend class?

public:
	Platform(char const* title, int windowWidth, int windowHeight,
		int textureWidth, int textureHeight);

	~Platform();

	void Update(void const* buffer, int pitch);

	bool ProcessInput(uint8_t* keys);

private:
	SDL_Window* window;
	SDL_GLContext glContext{};
	SDL_Renderer* renderer;
	SDL_Texture* texture;
};