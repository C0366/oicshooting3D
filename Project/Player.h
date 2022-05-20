#pragma once

#include "GameDefine.h"
#include "PlayerShot.h"

// ˆÚ“®‘¬“x
#define PLAYER_SPEED		(0.1f)

//’e‚Ì”­ŽËŒÀŠE
#define PLAYERSHOT_COUNT	(40)
//’e‚Ì”­ŽËŠÔŠu
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

public:
	CPlayer();
	~CPlayer();
	bool Load();
	void Initialize();
	void Update();
	void Render();
	void RenderDebugText();
	const CVector3 GetPosition(){ return m_Pos; }
	void Release();
};