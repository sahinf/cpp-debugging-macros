#include "colors-debug.hpp"
#include <iostream>
#include <string>


int main () {
	std::string x = "HOWDY GAMERS";
	DEBUG(x);
	INFO(x);
	DEBUGC(x, BLACK);
	DEBUGC(x, BOLDBLACK);
	DEBUGC(x, RED);
	DEBUGC(x, BOLDRED);
	DEBUGC(x, GREEN);
	DEBUGC(x, BOLDGREEN);
	DEBUGC(x, YELLOW);
	DEBUGC(x, BOLDYELLOW);
	DEBUGC(x, BLUE);
	DEBUGC(x, BOLDBLUE);
	DEBUGC(x, MAGENTA);
	DEBUGC(x, BOLDMAGENTA);
	DEBUGC(x, CYAN);
	DEBUGC(x, BOLDCYAN);
	DEBUGC(x, WHITE);
	DEBUGC(x, BOLDWHITE);
}
