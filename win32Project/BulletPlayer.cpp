#include "BulletPlayer.h"
#include "mainProc.h"

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

void BulletPlayer::SetX() {

}

void BulletPlayer::SetY() {

}

float BulletPlayer::GetX() {
	return -1;
}

float BulletPlayer::GetY() {
	return -1;
}

/**
#1	->	�÷��̾��� �̵� ����

( ĳ���͸� ȭ�鿡 �����Ѵ� )
( Ű���� Ű�� �ԷµǾ����� Ȯ�� )
( �Է¹��� Ű�� �������� �÷��̾� �̵� )

*/
void BulletPlayer::Move() {

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
