#pragma once
//使用するヘッダー
#include "GameL\SceneObjManager.h"
//使用するネームスペース
using namespace GameL;

//オブジェクト：ボス機
class CObjBoss : public CObj
{
public:
    CObjBoss(float x, float y);//コンストラクタ位置情報をもらう
    ~CObjBoss() {};
    void Init();  //イニシャライズ
    void Action();//アクション
    void Draw();  //ドロー
private:
    float m_x;  //ボス機のx方向の位置
    float m_y;  //ボス機のy方向の位置
    float m_vx; //ボス機移動ベクトルX
    float m_vy; //ボス機移動ベクトルY
    float m_r;  //サインカーブ用の角度
    int   m_time;//弾丸間隔用
    int   m_hp;//ボスのヒットポイント
};