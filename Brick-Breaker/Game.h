#pragma once

#include <string>
#include <raylib.h>
#include <vector>

using std::string;
using std::vector;

class Actor;

class Game
{
public:
	Game(int w, int h, string title, Color clrColor);
	~Game();

public:
	int Run();

	int GetWidth() const;
	int GetHeight() const;

private:
	int m_width;
	int m_height;
	string m_title;
	Color m_clrColor;

	vector<Actor*> m_actors;

private:
	/*the functiion is called when the game is run for the first time*/
	void BeginPlay();

	/*used for game logic*/
	void Tick(float dt);

	void Render();

	void EndPlay();



};

