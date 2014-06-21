OpenGL-Test
===========

This project exists to primarily famliarize myself with OpenGL and SDL with a specific focus formatting the code to be "clean" as described by [Clean Code: A Handbook of Agile Software Craftsmanship](http://www.amazon.com/Clean-Code-Handbook-Software-Craftsmanship/dp/0132350882)

Dependencies
------------

This project is built against SDL 2.0.3, GLEW 1.10.0, and GLM 0.9.5.3. All of these are accessible via Homebrew on OS X:

    brew install glm
    brew install glew
    brew install sdl2

Building
--------

To build the actual project, use Boost Build (BJam or B2).

    git clone https://github.com/vmrob/opengl-test.git
    cd opengl-test
    b2
