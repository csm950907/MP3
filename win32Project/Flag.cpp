#include "Flag.h"
#include "mainProc.h"

Flag::Flag()
{
}


Flag::~Flag()
{
}

float Flag::getX()
{
	return x;
}

float Flag::getY()
{
	return y;
}

void Flag::Initialize()
{
	//�̹��� �ʱ�ȭ
	this->img = new GImage(Renderer(), "./Resource/Action_img/Action_FLAG_Body.bmp");

	//��ǥ �ʱ�ȭ
	x = 800;
	y = 128;
}

void Flag::Update()
{

}

void Flag::Draw()
{
	Renderer()->Draw(img, getX(), getY());
}
