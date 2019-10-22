#pragma once

public class CTranslate
{
private:
	float m_fTx;
	float m_fTy;
public:
	// Tx
	void SetTx(float _fTx);
	float GetTx(void);
	// Ty
	void SetTy(float _fTy);
	float GetTy(void);

	CTranslate();
	~CTranslate();
};

public class CScale
{
private:
	float m_fSx;
	float m_fSy;
public:
	// Sx
	void SetSx(float _fSx);
	float GetSx(void);
	// Sy
	void SetSy(float _fSy);
	float GetSy(void);

	CScale();
	~CScale();
};

public class CRotate
{
private:
	float m_fAngle;
public:
	void SetAngle(float _fAngle);
	float GetAngle(void);

	CRotate();
	~CRotate();
};

public class CAffineInfo
{
private:
	CTranslate* m_translate;
	CScale* m_scale;
	CRotate* m_rotate;
public:
	// Translate
	void SetTranslate(CTranslate* _translate);
	CTranslate* GetTranslate(void);
	// Scale
	void SetScale(CScale* _scale);
	CScale* GetScale(void);
	// Rotate
	void SetRotate(CRotate* _rotate);
	CRotate* GetRotate(void);

	CAffineInfo();
	~CAffineInfo();
};