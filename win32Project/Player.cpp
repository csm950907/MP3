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


void Player::Initialize()
{
	//�̹��� �ε�
	this->img = new GImage(Renderer(), "/ Resource / player.png");

	//��ǥ �ʱ�ȭ
	x = 100;
	y = 100;

}