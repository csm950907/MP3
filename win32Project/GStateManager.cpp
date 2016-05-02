#include "mainProc.h"
#include "GRenderer.h"
#include "GState.h"
#include "GStateManager.h"
#include "LogoState.h"



GStateManager::GStateManager()
{
	ZeroMemory(m_states, sizeof(m_states));
}


GStateManager::~GStateManager()
{

}

void GStateManager::Initialize() {
	m_states[LOGO_STATE] = new LogoState();
	
	currentState = LOGO_STATE;
}

void GStateManager::Destroy() {
	for (int i = 0; i < STATE_NUM; i++) {
		if (m_states[i] != nullptr) {
			m_states[i]->OnDestroy();
			delete m_states[i];
		}
	}
}

void GStateManager::Draw() {
	Renderer()->Clear();
	Renderer()->Begin();
	//TODO: 여기에서 Scene Draw 처리
	if (currentState != NOT_SET_STATE)
		m_states[currentState]->OnDraw();

	Renderer()->End();
	Renderer()->Present();
}

void GStateManager::Update(float dt) {
	//TODO: 여기에서 Scene Update 처리
	if (currentState != NOT_SET_STATE)
		m_states[currentState]->OnUpdate(dt);

}