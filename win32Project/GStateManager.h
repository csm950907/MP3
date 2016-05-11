#pragma once
#define STATE_NUM 5 //STATE�� �ִ� ������ ���⼭ ����
#define NOT_SET_STATE -1
#define LOGO_STATE 0	//set LogoState
#define GENRE_SCENE 1
#define ACTION_STAGE 2	//�׼� ���������� �������� ��
#define BARRAGEACTION_STAGE 3	//ź�� ���������� �������� ��
#define STAGE_STATE 4 //set StageStage


class GState;

class GStateManager
{
public:
	GStateManager();
	~GStateManager();

public:
	void Initialize();
	void Destroy();
	void Update(float dt);
	void Draw();
	void ChangeState(int changeStateKey);

private:
	GState * m_states[STATE_NUM];
	int currentState;
};

