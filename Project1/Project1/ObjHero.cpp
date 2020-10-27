//使用するヘ5ッダーファイルINput
#include "GameL\DrawTexture.h"
#include "GameL\WinInputs.h"
#include "GameHead.h"
#include "ObjHero.h"
#include"GameL\HitBoxManager.h"


//イニシャライズ
void CObjHero::Init()
{
	m_x = 6;
	//当たり判定用hitboxを作成
	Hits::SetHitBox(this, m_x, m_y, 32, 32, ELEMENT_PLAYER, OBJ_HERO, 100);
}

//アクション
void CObjHero::Action()
{
//主人公機の弾丸発射
	if (Input::GetVKey('Z') == true)
	{
		if (m_f == true)
		{

			//弾丸オブジェクト作成
			CObjBullet* obj_b = new CObjBullet(m_x + 30.0f, m_y + 3.0f);//弾丸オブジェクト
			Objs::InsertObj(obj_b, OBJ_BULLET, 100);//作った弾丸オブジェクト
			m_f = false;
		}
	}
	else
	{
		m_f = true;
	}

	//主人公機の移動
	if (Input::GetVKey(VK_RIGHT) == true)
	{
		m_x += 6.0f;
		
	}
	if (Input::GetVKey(VK_LEFT) == true)
	{
		m_x -= 6.0f;
		
	}
	if (Input::GetVKey(VK_UP) == true)

	{
		m_y -= 6.0f;
	}
	if (Input::GetVKey(VK_DOWN) == true)

	{
		m_y += 6.0f;
	}
	//主人公が領域外に行かない処理
	if (m_x + 32.0 > 800.0f)
	{
		m_x = 800.0f - 32.0f;//原点に移動
	}
	if (m_y + 32.0 > 600.0f)
	{
		m_y = 600.0f - 32.0f;
	}
	if (m_y < 0.0f)
	{
		m_y = 0.0f;
	}
	if (m_x < 0.0f)
	{
		m_x = 0.0f;
	}


	//HITboxの内容を更新
	CHitBox* hit = Hits::GetHitBox(this); //作成したhitBox更新用の入り口を取り出す
	hit->SetPos(m_x, m_y);				  //入り口から新しい位置（主人公機の位置）情報に置き換える


	//ELEMENT_ENEMYを持つオブジェクトと接触したら主人公機削除
	if (hit->CheckElementHit(ELEMENT_ENEMY) == true)
	{
		this->SetStatus(false);//自身に削除命令を出す
		Hits::DeleteHitBox(this);//主人公が所有するHitBoxに代入する

		//主人公機消滅でシーンをゲームオーバーに移行する
		Scene::SetScene(new CSceneGameOver());
	}
}
//ドロー
void CObjHero::Draw()
{
	float c[4] = { 1.0f,1.0f, 1.0f, 1.0f, };
	RECT_F src;//描画元切り取り位置
	RECT_F dst;//描画先表示位置
	//切り取り位置の設定
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 32.0f;
	src.m_bottom = 32.0f;
	//表示位置の設定
	dst.m_top = 0.0f +m_y;
	dst.m_left = 0.0f+m_x;
	dst.m_right = 32.0f+ m_x;
	dst.m_bottom = 32.0f +m_y;

	Draw::Draw(0, &src, &dst, c, 0.0f);
}