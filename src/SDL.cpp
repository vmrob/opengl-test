#include "pch.h"
#include "SDL.h"

namespace gltest {

SDL::SDL() {
	_initSDL();
	_setSDLAttributes();
}

void SDL::_initSDL() {
	SDL_Init(SDL_INIT_VIDEO);
}

void SDL::_setSDLAttributes() {
	SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_CORE);
	SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3);
	SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 2);
}

SDL::~SDL() {
	SDL_Quit();
}

} // namespace gltest