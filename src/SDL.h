#pragma once

namespace gltest {

class SDL {
public:
	SDL();
	~SDL();

private:
	void _initSDL();
	void _setSDLAttributes();
};

} // namespace gltest