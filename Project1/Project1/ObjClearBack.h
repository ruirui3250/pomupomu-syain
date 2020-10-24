#pragma once
//使用するヘッダー
#include "GameL\SceneObjManager.h"
//使用するネームスペース
using namespace GameL;

//objectクリア画面の敵キャラ
class CObjClearback :public CObj
{
public:
	CObjClearback() {};
	~CObjClearback() {};

	void Init();//イニシャライズ
	void Action();//アクション
	void Draw();//ドロー
private:
};
