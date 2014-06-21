#include "pch.h"

#include "SDL.h"
#include "Window.h"

#define WINDOW_HEIGHT 600
#define WINDOW_WIDTH 800

void InitGLEW() {
	glewExperimental = GL_TRUE;
	glewInit();
}

int main() {

	gltest::SDL sdl;
	gltest::Window window("OpenGl", 800, 600);

	InitGLEW();

	window.startEventLoop();
}