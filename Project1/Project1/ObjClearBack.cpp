//�g�p����w�b�_�[�t�@�C��
#include "GameL\DrawTexture.h"
#include "GameHead.h"
#include"ObjClearBack.h"

//�g�p����l�[���X�y�[�X
using namespace GameL;

//�C�j�V�����C�Y
void CObjClearback::Init()
{

}

//�A�N�V����
void CObjClearback::Action()
{

}

//�h���[
void CObjClearback::Draw()
{
	//�`��J���[���
	float c[4] = { 1.0f,1.0f,1.0f,1.0f };

	RECT_F src;//�`��؂���ʒu
	RECT_F dst;//�`���\��

	//�؂���ʒu
	src.m_top = 0.0f;
	src.m_left = 0.0f;
	src.m_right = 512.0f;
	src.m_bottom = 512.0f;

	//�\���ʒu�̐ݒ�
	dst.m_top = 0.0f;
	dst.m_left = 0.0f;
	dst.m_right = 800.0f;
	dst.m_bottom = 600.0f;

	//�摜�\��
	Draw::Draw(0, &src, &dst, c, 0.0f);

}