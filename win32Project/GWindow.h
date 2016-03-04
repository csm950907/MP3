#pragma once

#include <Windows.h>

#include "GScene.h"

bool IsKeyDown(BYTE key);
int GetMouseX();
int GetMouseY();
bool IsMouseDown(int mouseButton);

class GWindow
{
private:
	HWND hWnd;
	GScene * scene;

public:
	GWindow(GScene * scene);
	~GWindow();

public:
	void messagePump();
private:
	static LRESULT CALLBACK WndProc(HWND hwnd, UINT iMsg, WPARAM wParam, LPARAM lParam);

public:
	HWND getWindowHandle();

};