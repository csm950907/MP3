#pragma once

#include <d3d9.h>
#include <d3dx9.h>

class GRenderer;

class GImage
{
private:
	IDirect3DTexture9 * texture;				//�ؽ��ĸ� ����ϱ� ���� ��ü
	int width, height;							//�̹����� ����, ���� ����

public:
	GImage(GRenderer * renderer, const char * filename);
	~GImage();

public:
	IDirect3DTexture9 * getTexture(){
		return texture;
	}
	int getWidth() { return width; }
	int getHeight() { return height; }
};

