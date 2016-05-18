#pragma once
#define STATE_NUM 6 //STATE�� �ִ� ������ ���⼭ ����
#define NOT_SET_STATE -1
#define LOGO_STATE 0	//set LogoState
#define GENRE_SCENE 1
#define ACTION_STAGE 2	//�׼� ���������� �������� ��
#define BARRAGEACTION_STAGE 3	//ź�� ���������� �������� ��
#define STAGE_STATE 4 //set StageStage
#define PROBLEM_STATE 5	//set ProblemState

/* 
 * ���� �� ����ο� state �߰��ϰ�, STATE_NUM ����������, StateMgr Intialize�κп��� State ��ü �ϳ��� �Ҵ��ϼ���.
 * ���� �߰��ϰ� �����ϸ� �������ϴ�.
 * �׸��� �ڲ� for�� �񱳽Ŀ� <= ���ôº� �ִµ�, ���ô°� ������µ� �����÷ο츸 ���Ͼ�� ���ּ��� ����
 * �� ����̾� ��� ������ �ݹ� ã�Ƶ�, �ٸ������ ã������ �ڵ忡 �ߴ��� ��� �ɰ� ������ �� �������մϴ�.
 */

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

