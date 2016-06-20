#pragma once
#define STATE_NUM 4 //STATE�� �ִ� ������ ���⼭ ����
#define NOT_SET_STATE -1
#define LOGO_STATE 0	//set LogoState
#define GENRE_SCENE 1
#define STAGE_STATE 2	//�׼� ���������� �������� ��
#define PROBLEM_STATE 3	//set ProblemState

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
	void SetState(GState * state, int stateNum);

private:
	GState * m_states[STATE_NUM];
	int currentState;
};

