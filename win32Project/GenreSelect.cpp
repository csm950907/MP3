#include "GenreSelect.h"
#include "mainProc.h"

GenreSelect::GenreSelect()
{
	this->bgImage = new GImage(Renderer(), "LogoState.bmp");	//�帣 ���þ� ���ȭ��
	
	RECT r[4];
	for (int i = 0; i < 4; i++) {
		if (i >= 0 && i < 2) {
			r[i].top = 100 + (i * 0);
			r[i].bottom = 200 + (i * 0);
			r[i].left = 100 + (i * 250);
			r[i].right = 200 + (i * 250);

		}
		else{
			r[i].top = 275 + (i * 0);
			r[i].bottom = 375 + (i * 0);
			r[i].left = 100 + ((i - 2) * 250);
			r[i].right = 200 + ((i - 2) * 250);
		}
	}
	this->stageButtons[0] = new GButton(new GImage(Renderer(), "actionStageButton.bmp"), r[0]);
	this->stageButtons[1] = new GButton(new GImage(Renderer(), "barrageStageButton.bmp"), r[1]);
	this->stageButtons[2] = new GButton(new GImage(Renderer(), "puzzleStageButton.bmp"), r[2]);
	this->stageButtons[3] = new GButton(new GImage(Renderer(), "shootingStageButton.bmp"), r[3]);
}


GenreSelect::~GenreSelect()
{
}

void GenreSelect::OnUpdate(float dt)
{
	if (stageButtons[0]->getOn() || stageButtons[1]->getOn() || stageButtons[2]->getOn() || stageButtons[3])
		SetCursor(LoadCursor(NULL, IDC_HAND));
	else
		SetCursor(LoadCursor(NULL, IDC_ARROW));
	if (IsMouseDown(0)) {
		if (stageButtons[0]->getClick()) {
			StateMgr()->ChangeState(4);	//�������� ���� ���� �ϼ��Ǹ� 2��
		}
		if (stageButtons[1]->getClick()) {
			StateMgr()->ChangeState(4);	//�������� ���� ���� �ϼ��Ǹ� 3����
		}
	}
}
void GenreSelect::OnDraw()
{
	for (int i = 0; i < 4; i++) {
		Renderer()->Draw(stageButtons[i]->getImage(), stageButtons[i]->getR('L'), stageButtons[i]->getR('T'));
		
	}
}
void GenreSelect::OnDestroy()
{
	for (int i = 0; i < 4; i++) {
		if (this->stageButtons[i] != nullptr) delete stageButtons[i];
	}
}
void GenreSelect::OnInitialize()
{

}