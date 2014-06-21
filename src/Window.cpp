#include "pch.h"
#include "Window.h"

namespace gltest {
	
Window::Window(const std::string& name, int pixelWidth, int pixelHeight) {
	_createWindow(name, pixelWidth, pixelHeight);
	_createContext();
}

void Window::_createContext() {
	_sdlContext = SDL_GL_CreateContext(_sdlWindow.get());
}

void Window::_createWindow(const std::string& name, int pixelWidth, int pixelHeight) {
	_sdlWindow.reset(
		SDL_CreateWindow(
			name.c_str(),
			SDL_WINDOWPOS_CENTERED,
			SDL_WINDOWPOS_CENTERED,
			pixelWidth,
			pixelHeight,
			SDL_WINDOW_OPENGL
		));
}

Window::~Window() {
	SDL_GL_DeleteContext(_sdlContext);
}

void Window::startEventLoop() {
	while (true) {
		_pollEvents();
		if (_shouldClose) {
			break;
		}

		_draw();
	}
}

void Window::_pollEvents() {
	if (SDL_PollEvent(&_windowEvent)) {
		_handleEvent();
	}
}

void Window::_handleEvent() {
	if (_windowEvent.type == SDL_QUIT) {
		_shouldClose = true;
	}
}

void Window::_draw() {
	// TODO: draw stuff
	
	_swapFrameBuffers();
}

void Window::_swapFrameBuffers() {
	SDL_GL_SwapWindow(_sdlWindow.get());
}

} // namespace gltest