#pragma once
//使用するヘッダー
#include "GameL\SceneObjManager.h"
//使用するネームスペース
using namespace GameL;

//オブジェクト：敵機
class CObjEnemy : public CObj
{
public:
	CObjEnemy(float x, float y);//コンストラクタ位置情報をもらう
	~CObjEnemy() {};
	void Init();  //イニシャライズ
	void Action();//アクション
	void Draw();//ドロー
private:
	float m_x; //敵機のx方向の位置
	float m_y; //敵機のy方向の位置
	float m_vx; //敵機移動ベクトルX
	float m_vy; //敵機移動ベクトルY
};
