#include "Player.h"
#include "mainProc.h"


Player::Player()
{
}


Player::~Player()
{
}

void Player::setX(float givenX)
{
	x = givenX;
}
void Player::setY(float givenY)
{
	y = givenY;
}

float Player::getX(float)
{	
	return x;
}

float Player::getY(float)
{
	return y;
}


void Player::Initialize()
{
	//�̹��� �ε�
	this->img = new GImage(Renderer(), "/ Resource / player.png");

	//��ǥ �ʱ�ȭ
	x = 100;
	y = 100;

}

void Player::Destroy()
{

}

void Player::Update()
{
	if (IsKeyDown(VK_LEFT))
	{
		SetX()
	}
}
