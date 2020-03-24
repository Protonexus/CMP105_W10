#pragma once
#include "Framework/TileMap.h"

class TileObject : public TileMap
{
public:
	TileObject();
	void getWindow(sf::RenderWindow* hwnd) { window = hwnd; };
	void render();

private:
	TileMap tileMap;
	sf::RenderWindow *window;
};