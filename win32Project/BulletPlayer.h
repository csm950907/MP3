#pragma once
class GImage;

class BulletPlayer
{
private:
	GImage * m_playerImage;
	float m_xPos, m_yPos;
	float speed;

public:
	BulletPlayer();
	~BulletPlayer();

	void SetX();
	void SetY();
	float GetX();
	float GetY();

	void Initialize();
	void Update();
	void Draw();
	
	void Move();
	/**
	#1	->	�÷��̾��� �̵� ����

	( ĳ���͸� ȭ�鿡 �����Ѵ� )
	( Ű���� Ű�� �ԷµǾ����� Ȯ�� )
	( �Է¹��� Ű�� �������� �÷��̾� �̵� )
	
	*/

	void CreateBullet();
	/**
	#2	-> źȯ �߻�

	( ĳ���͸� ȭ�鿡 �����Ѵ� ) 
	( ĳ������ ��ǥ�� źȯ�� �����Ѵ� )
	( ������ źȯ�� �߻��Ѵ� )
	
	*/

	void CreateNWayBullet();
	/**
	#5	->	���� �������� ���ÿ� ź �߻��ϱ�
	
	( ĳ���͸� ȭ�鿡 �����Ѵ� )
	( �߻��ϴ� ź ���� �������� ��� ������ ������ ���� �߻��ؾ� �ϴ� źȯ ����ŭ źȯ�� �߻��Ѵ�)

	*/

	void CollisionWithBullet();
	/**
	#9	->	�浹����(ź��)

	( ĳ���Ϳ� ������ źȯ�� ���� �浹������ ���´� )
	( ĳ������ �浹������ źȯ�� �浹������ ��ģ�� )
	( �÷��̾ HP�� �����Ѵ� )
	( ź���� �����Ѵ� )

	*/

	void CollisionWithEnemy();
	/**
	#10	->	�浹����(����� �÷��̾�)

	( �� ĳ���ʹ� �������� �浹������ ���´� )
	( ĳ������ �浹������ ������ �浹������ ��ģ�� )
	( �÷��̾��� HP�� ������ HP�� �����Ѵ� )

	*/
};

