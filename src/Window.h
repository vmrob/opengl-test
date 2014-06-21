#pragma once

namespace gltest {
	
struct SDLWindowDeleter {
	void operator()(SDL_Window* window) {
		SDL_DestroyWindow(window);
	}
};

class Window {
public:
	Window(const std::string& name, int pixelWidth, int pixelHeight);
	~Window();

	// blocks until window is closed
	void startEventLoop();

private:
	std::unique_ptr<SDL_Window, SDLWindowDeleter> _sdlWindow;
	SDL_GLContext _sdlContext;
	
	SDL_Event _windowEvent;
	bool _shouldClose = false;

	void _createWindow(const std::string& name, int pixelWidth, int pixelHeight);
	void _createContext();

	void _pollEvents();
	void _handleEvent();

	void _draw();
	void _swapFrameBuffers();

};

} // namespace gltest