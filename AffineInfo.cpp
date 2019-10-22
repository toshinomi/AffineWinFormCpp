#include "AffineInfo.h"

void CTranslate::SetTx(float _fTx)
{
	m_fTx = _fTx;
}

float CTranslate::GetTx(void)
{
	return m_fTx;
}

void CTranslate::SetTy(float _fTy)
{
	m_fTy = _fTy;
}

float CTranslate::GetTy(void)
{
	return m_fTy;
}

CTranslate::CTranslate()
{
	m_fTx = 0.0f;
	m_fTy = 0.0f;
}

CTranslate::~CTranslate()
{
}

void CScale::SetSx(float _fSx)
{
	if (_fSx > 0)
	{
		m_fSx = _fSx;
	}
}

float CScale::GetSx(void)
{
	return m_fSx;
}

void CScale::SetSy(float _fSy)
{
	if (_fSy > 0)
	{
		m_fSy = _fSy;
	}
}

float CScale::GetSy(void)
{
	return m_fSy;
}

CScale::CScale()
{
	m_fSx = 1.0f;
	m_fSy = 1.0f;
}

CScale::~CScale()
{
}

void CRotate::SetAngle(float _fAngle)
{
	m_fAngle = _fAngle;
}

float CRotate::GetAngle(void)
{
	return m_fAngle;
}

CRotate::CRotate()
{
	m_fAngle = 0.0f;
}

CRotate::~CRotate()
{
}

void CAffineInfo::SetTranslate(CTranslate* _translate)
{
	m_translate = _translate;
}

CTranslate* CAffineInfo::GetTranslate(void)
{
	return m_translate;
}

void CAffineInfo::SetScale(CScale* _scale)
{
	m_scale = _scale;
}

CScale* CAffineInfo::GetScale(void)
{
	return m_scale;
}

void CAffineInfo::SetRotate(CRotate* _rotate)
{
	m_rotate = _rotate;
}

CRotate* CAffineInfo::GetRotate(void)
{
	return m_rotate;
}

CAffineInfo::CAffineInfo()
{
	m_translate = new CTranslate();
	m_scale = new CScale();
	m_rotate = new CRotate();
}

CAffineInfo::~CAffineInfo()
{
	delete m_translate;
	delete m_scale;
	delete m_rotate;
}