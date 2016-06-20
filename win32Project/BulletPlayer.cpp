#include "BulletPlayer.h"
#include "mainProc.h"
#include "GWindow.h"

BulletPlayer::BulletPlayer()
{

}

BulletPlayer::~BulletPlayer()
{

}

void BulletPlayer::Initialize() {

}

void BulletPlayer::Update() {

}

void BulletPlayer::Draw() {

}

void BulletPlayer::SetX(float x) {
	this->m_xPos = x;
}

void BulletPlayer::SetY(float y) {
	this->m_yPos = y;
}

float BulletPlayer::GetX() {
	return m_xPos;
}

float BulletPlayer::GetY() {
	return m_yPos;
}

/**
#1	->	�÷��̾��� �̵� ����

( ĳ���͸� ȭ�鿡 �����Ѵ� )
( Ű���� Ű�� �ԷµǾ����� Ȯ�� )
( �Է¹��� Ű�� �������� �÷��̾� �̵� )

*/
void BulletPlayer::Move() {
	if (IsKeyDown(VK_LEFT)) {
		this->SetX(GetX() - this->speed);
	}
	if (IsKeyDown(VK_RIGHT)) {
		this->SetX(GetX() + this->speed);
	}
	if (IsKeyDown(VK_UP)) {
		this->SetY(GetY() - this->speed);
	}
	if (IsKeyDown(VK_DOWN)) {
		this->SetY(GetY() + this->speed);
	}
}

/**
#2	-> źȯ �߻�

( ĳ���͸� ȭ�鿡 �����Ѵ� )
( ĳ������ ��ǥ�� źȯ�� �����Ѵ� )
( ������ źȯ�� �߻��Ѵ� )

*/
void BulletPlayer::CreateBullet() {

}

/**
#5	->	���� �������� ���ÿ� ź �߻��ϱ�

( ĳ���͸� ȭ�鿡 �����Ѵ� )
( �߻��ϴ� ź ���� �������� ��� ������ ������ ���� �߻��ؾ� �ϴ� źȯ ����ŭ źȯ�� �߻��Ѵ�)

*/
void BulletPlayer::CreateNWayBullet() {

}

/**
#9	->	�浹����(ź��)

( ĳ���Ϳ� ������ źȯ�� ���� �浹������ ���´� )
( ĳ������ �浹������ źȯ�� �浹������ ��ģ�� )
( �÷��̾ HP�� �����Ѵ� )
( ź���� �����Ѵ� )

*/
void BulletPlayer::CollisionWithBullet() {

}

/**
#10	->	�浹����(����� �÷��̾�)

( �� ĳ���ʹ� �������� �浹������ ���´� )
( ĳ������ �浹������ ������ �浹������ ��ģ�� )
( �÷��̾��� HP�� ������ HP�� �����Ѵ� )

*/
void BulletPlayer::CollisionWithEnemy() {

}
