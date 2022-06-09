#pragma once

#include "GameDefine.h"
#include "PlayerShot.h"
#include "Enemy.h"

// �ړ����x
#define PLAYER_SPEED		(0.1f)

//�e�̔��ˌ��E
#define PLAYERSHOT_COUNT	(40)
//�e�̔��ˊԊu
#define	PLAYERSHOT_WAIT		(5)
class CPlayer{
private:
	CMeshContainer	m_Mesh;
	CVector3		m_Pos;
	float			m_RotZ;
	float			m_Spd;
	CMeshContainer	m_ShotMesh;
	CPlayerShot		m_ShotArray[PLAYERSHOT_COUNT];
	int				m_ShotWait;
	bool			m_bDead;

public:
	CPlayer();
	~CPlayer();
	bool Load();
	void Initialize();
	void Update();
	void Render();
	void RenderDebug();
	CSphere GetShere() { return CSphere(m_Pos, 0.4f); }
	void RenderDebugText();
	const CVector3 GetPosition(){ return m_Pos; }
	void CollisionEnemy(CEnemy& ene);
	bool IsDead() { return m_bDead; }
	void Release();
};