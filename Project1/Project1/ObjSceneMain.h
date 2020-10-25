#pragma once
//使用するヘッダー
#include "GameL\SceneObjManager.h"
//使用するネームスペース
using namespace GameL;

//object背景
class CObjSceneMain :public CObj
{
public:
	CObjSceneMain() {};
	~CObjSceneMain() {};

	void Init();//イニシャライズ
	void Action();//アクション
	void Draw();//ドロー
private:

	float m_x1;//背景１の位置情報
	float m_x2;//背景2の位置情報
};
