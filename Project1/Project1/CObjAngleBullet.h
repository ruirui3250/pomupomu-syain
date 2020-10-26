#pragma once
//使用するヘッダー
#include "GameL\DrawTexture.h"
#include "GameL\SceneObjManager.h"
//使用するネームスペース
using namespace GameL;

//オブジェクト：敵機角度弾丸
class CObjAngleBullet : public CObj
{
public:
	CObjAngleBullet(float x, float y, float r, float speed);//コンストラクタ位置情報をもらう
	~CObjAngleBullet() {};
	void Init();  //イニシャライズ
	void Action();//アクション
	void Draw();//ドロー
private:
	float m_x; //敵機のx方向の位置
	float m_y; //敵機のy方向の位置
	float m_vx; //敵機移動ベクトルX
	float m_vy; //敵機移動ベクトルY
	float m_r;  //移動する角度
	float m_speed; //速度

	int  m_ani;
	int  m_ani_time;
	bool m_del;
	RECT_F m_eff;
};