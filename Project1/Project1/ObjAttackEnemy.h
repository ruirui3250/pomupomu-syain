#pragma once
//使用するヘッダー
#include "GameL\SceneManager.h"
//使用するネームスペース
using namespace GameL;

//オブジェクト：攻撃敵機
class CObjAttackEnemy :public CObj
{
public:
    CObjAttackEnemy(float x, float y);
    ~CObjAttackEnemy() {};
    void Init();  //イニシャライズ
    void Action(); //アクション
    void Draw();  //ドロー
private:
    float m_x; //攻撃敵機のx方向の位置
    float m_y; //攻撃敵機のy方向の位置
    float m_vx; //攻撃敵機移動ベクトルX
    float m_vy; //攻撃敵機移動ベクトルY

    int m_time;//攻撃敵機用弾丸発射タイミング用
};