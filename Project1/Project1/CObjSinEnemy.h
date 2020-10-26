#pragma once
//使用するヘッダー
#include"GameL\SceneObjManager.h"
//使用するネームスペース
using namespace GameL;
//オブジェクト:シン機
class CObjSinEnemy :public CObj
{
public:
	CObjSinEnemy(float x, float y);//コンストラクタ
	~CObjSinEnemy() {};
	void Init();//イニシャライズ
	void Action();//アクション
	void Draw();//ドロー
private:
	float m_x;//オブジェクトの位置X
	float m_y;//オブジェクトの位置Y
	float m_vx;//オブジェクトの移動用ベクトルX
	float m_vy;//オブジェクトの移動用ベクトルY
	float m_r;//サインカーブの角度
};
