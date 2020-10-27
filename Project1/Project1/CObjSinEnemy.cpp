////使用するヘッダーファイル
//#include "GameL\DrawTexture.h"
//#include"GameL\HitBoxManager.h"
//
//#include"GameHead.h"
//#include"CObjSinEnemy.h"
//#include"UtilityModule.h"
////使用するネームスペース
//using namespace GameL;
//
////コンストラクタ
//CObjSinEnemy::CObjSinEnemy(float x, float y)
//{
//	m_x = x;
//	m_y = y;
//}
//
////イニシャライズ
//void CObjSinEnemy::Init()
//{
//	m_r = 0.0f;
//	m_vx = 0.0f;
//	m_vy = 0.0f;
//	//当たり判定hitboxを作成。
//	Hits::SetHitBox(this, m_x, m_y, 32, 32, ELEMENT_ENEMY, OBJ_SIN_ENEMY, 1);
//}
////アクション
//void CObjSinEnemy::Action()
//{
//	//角度計算
//	m_r += 2.0f;
//	//360°で初期値に戻す
//	if (m_r > 360.0f)
//		m_r = 0.0f;
//	//移動方向
//	m_vx = -1.0f;
//	m_vy = sin(3.14 / 180 * m_r);//sinシータを求めてm_vyに入れる。
//
//
//	//移動ベクトルの正規化
//	UnitVec(&m_vy, &m_vx);
//
//	//速度をつける
//	m_vx *= 1.5f;
//	m_vy *= 1.5f;
//
//	//移動ベクトルの正規化
//	UnitVec(&m_vy, &m_vx);
//	//移動ベクトルを座標に加算
//	m_x += m_vx;
//	m_y += m_vy;
//	//HITBOXの内容更新
//	CHitBox* hit = Hits::GetHitBox(this);
//	hit->SetPos(m_x, m_y);
//	//Sin機が完全に領域外に出たらオブジェクトを破壊する。
//	bool check = CheckWindow(m_x, m_y, -32.0f, -32.0f, 800.0f, 600.0f);
//	if (check == false)
//	{
//		this->SetStatus(false);//自身に削除命令
//		Hits::DeleteHitBox(this);//シン敵機が所有するhitboxを削除
//		return;
//	}
//	//弾丸に接触しているかどうか調べる.
//	if (hit->CheckObjNameHit(OBJ_BULLET) != nullptr)
//	{
//		this->SetStatus(false);
//		Hits::DeleteHitBox(this);
//	}
//}
//
////ドロー
//void CObjSinEnemy::Draw()
//{
//	//描画カラー情報
//	float c[4] = { 1.0f,1.0f,1.0f,1.0f };
//
//	RECT_F src;//描画切り取り位置
//	RECT_F dst;//描画先表示
//
//	//切り取り位置の設定
//	src.m_top = 0.0f;
//	src.m_left = 32.0f;
//	src.m_right = 64.0f;
//	src.m_bottom = 32.0f;
//
//	//表示位置の設定
//	dst.m_top = 0.0f + m_y;
//	dst.m_left = 32.0f + m_x;
//	dst.m_right = 0.0f + m_x;
//	dst.m_bottom = 32.0f + m_y;
//
//	//0番目に登録したグラフィックを描画。
//	Draw::Draw(2, &src, &dst, c, 0.0f);
//}