//使用するヘッダー
#include <math.h>   //数学計算ヘッダー
#include "GameL\DrawTexture.h"
//使用するネームスペース
using namespace GameL;

//---UnitVec関数
//引数1　float* vx  :ベクトルのX成分のポインタ
//引数2　float* vy  :ベクトルのY成分のポインタ
//戻り値 bool     　:true=計算成功　false=計算失敗
//内容
//引数のベクトルを正規化しその値をvx,vyに変更します
#include <math.h>

bool UnitVec(float* vx, float* vy)
{
    //ベクトルの長さを求める(三平方の定理)
    float r = 0.0f;
    r = (*vx) * (*vx) + (*vy) * (*vy);
    r = sqrt(r);//ｒをルートを求める

    //長さが0かどうか調べる
    if (r == 0.0f)
    {
        ;//0なら何もしない
    }
    else
    {
        //正当化を行う
        (*vx) = 1.0f / r * (*vx);
        (*vy) = 1.0f / r * (*vy);
    }

    return true;
}

//---CheckWindow関数
//引数1　float pos_x　　　　:領域外かどうか調べるX座標
//引数2　float pos_y        :領域外かどうか調べるY座標
//引数3　float window_x     :領域のtopの位置
//引数4　float window_y     :領域のleftの位置
//引数5　float window_w     :領域のrightの位置
//引数6　float window_h     :領域のbottomの位置
//戻り値　bool     :true=領域内　false=領域外
//内容
//領域内かどうか調べる位置pos_(x,y)がwindow_(xywh)の内か外か調べる
bool CheckWindow(float pos_x, float pos_y,
    float window_x, float window_y, float window_w, float window_h)
{
    if (pos_x < window_x)
    {
        return false;//領域外
    }
    if (pos_x > window_w)
    {
        return false;//領域外
    }
    if (pos_y < window_y)
    {
        return false;//領域外
    }
    if (pos_y > window_h)
    {
        return false;//領域外
    }

    return true;//領域内
}

//---GetAtan2Angle関数
//引数1   float w　　：幅
//引数2   float h　　：高さ
//戻り値  float　　　：高さ(0～360)
//内容
//高さと幅から直角三角形があると仮定してその角度を求める
float GetAtan2Angle(float w, float h)
{
    //atan2で角度を求める
    float r = atan2(h, w) * 180.0f / 3.14f;

    //-180～-0を180～-360に変更
    if (r < 0)
    {
        r = 360 - fabs(r);
    }

    return r;
}

/*
---GetBulletEffec関数
引数1　　int* ani      着弾アニメーション
引数2　　int* ani_time 着弾アニメーション間隔タイム
引数3　　bool del      削除チェック(true=着弾エフェクト　false=通常の弾丸)
引数4　　int  timintg  間隔区間
戻り値　RECT_F eff;    描写するRECT
delで弾丸のRECTや着弾エフェクトのRECT(アニメーションのRECTを返す)
*/
RECT_F GetBulletEffect(int* ani, int* ani_time, bool del, int timing)
{
    //返すRECT情報
    RECT_F rect;

    //プラグで通常弾丸か着弾アニメーション処理分岐
    if (del == true)
    {
        //着弾アニメーション
        //リソース着弾アニメーション
        RECT_F ani_src[4] =
        {
            {32,0,32,64},
            {32,32,64,64},
            {32,64,96,64},
            {32,96,128,64},
        };
        //アニメーションのコマ間隔
        if (*ani_time > timing)
        {
            *ani += 1;        //アニメーションのコマを1つ進める
            *ani_time = 0;
        }
        else
        {
            *ani_time += 1;
        }

        rect = ani_src[*ani];//アニメーションのRECT配列からm_ani番目RECT情報を渡す

    }
    else
    {
        //弾丸はアニメーションなし
        //リソース弾丸位置
        RECT_F bullet = { 0.0f,96.0f,126.0f,32.0f };
        rect = bullet;
    }

    return rect;
}