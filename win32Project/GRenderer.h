#pragma once

#include <d3d9.h>
#include <d3dx9.h>

#pragma comment (lib, "d3d9.lib")
#pragma comment (lib, "d3dx9.lib")

#include "GWindow.h"

class GImage;

class GRenderer
{
private:
	IDirect3D9 * d3d9;
	IDirect3DDevice9 * d3dDevice;				//dx9 ����̽��� ����
	ID3DXSprite * d3dSprite;					//��������Ʈ�� ����ϱ� ���� ��ü

public:
	GRenderer(GWindow * window);
	~GRenderer();

public:
	void Clear();								//ȭ�� �ʱ�ȭ
	void Present();								
	void Draw(GImage * image, int x, int y);	//ȭ�� ���

public:
	void Begin();
	void End();

public:
	IDirect3DDevice9 * getDevice();				//D3DDevice ��ȯ
};

