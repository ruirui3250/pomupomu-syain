#pragma once
//使用するヘッダー
#include "GameL\SceneObjManager.h"
//使用するネームスペース
using namespace GameL;

//オブジェクト：Sin敵機
class CObjSinEnemy : public CObj
{
public:
    CObjSinEnemy(float x, float y);//コンストラクタ
    ~CObjSinEnemy() {};
    void Init(); //イニシャライズ
    void Action(); //アクション
    void Draw(); //ドロー
private:
    float m_x; //敵機のX方向の位置
    float m_y; //敵機のY方向の位置
    float m_vx; //敵機移動ベクトルX
    float m_vy; //敵機移動ベクトルY
    float m_r;//サインカーブ用の角度
};