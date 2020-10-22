#pragma once
//使用するヘッダー
#include "GameL\SceneObjManager.h"
//使用するネームスペース
using namespace GameL;

//オブジェクトブロック＆背景
class CObjBlockfeblin :public CObj
{
public:
	CObjBlockfeblin() {};
	~CObjBlockfeblin() {};
	void Init();
	void Action();
	void Draw();//ドロー
private:
	//マップ情報
	int m_map[10][10];
};
