#pragma once

/// <summary>
/// 移動情報
/// </summary>
public class CTranslate
{
private:
	float m_fTx;
	float m_fTy;
public:
	/// <summary>
	/// X方向の移動の設定
	/// </summary>
	/// <param name="_fTx">X方向の移動</param>
	void SetTx(float _fTx);

	/// <summary>
	/// X方向の移動の取得
	/// </summary>
	float GetTx(void);

	/// <summary>
	/// Y方向の移動の設定
	/// </summary>
	/// <param name="_fTy">Y方向の移動</param>
	void SetTy(float _fTy);

	/// <summary>
	/// Y方向の移動の取得
	/// </summary>
	float GetTy(void);

	/// <summary>
	/// コンストラクタ
	/// </summary>
	CTranslate();

	/// <summary>
	/// デスクトラクタ
	/// </summary>
	~CTranslate();
};

/// <summary>
/// 拡大・縮小情報
/// </summary>
public class CScale
{
private:
	float m_fSx;
	float m_fSy;
public:
	/// <summary>
	/// X方向の拡大・縮小の設定
	/// </summary>
	/// <param name="_fSx">X方向の拡大・縮小</param>
	void SetSx(float _fSx);

	/// <summary>
	/// X方向の拡大・縮小の取得
	/// </summary>
	float GetSx(void);

	/// <summary>
	/// Y方向の拡大・縮小の設定
	/// </summary>
	/// <param name="_fSy">Y方向の拡大・縮小</param>
	void SetSy(float _fSy);

	/// <summary>
	/// X方向の拡大・縮小の取得
	/// </summary>
	float GetSy(void);

	/// <summary>
	/// コンストラクタ
	/// </summary>
	CScale();

	/// <summary>
	/// デスクトラクタ
	/// </summary>
	~CScale();
};

/// <summary>
/// 回転情報
/// </summary>
public class CRotate
{
private:
	float m_fAngle;
public:
	/// <summary>
	/// 回転の設定
	/// </summary>
	/// <param name="_fAngle">回転</param>
	void SetAngle(float _fAngle);

	/// <summary>
	/// 回転の取得
	/// </summary>
	float GetAngle(void);

	/// <summary>
	/// コンストラクタ
	/// </summary>
	CRotate();

	/// <summary>
	/// デスクトラクタ
	/// </summary>
	~CRotate();
};

/// <summary>
/// アフィン変換情報
/// </summary>
public class CAffineInfo
{
private:
	CTranslate* m_translate;
	CScale* m_scale;
	CRotate* m_rotate;
public:
	/// <summary>
	/// 移動情報の設定
	/// </summary>
	/// <param name="_translate">移動情報</param>
	void SetTranslate(CTranslate* _translate);

	/// <summary>
	/// 移動情報の取得
	/// </summary>
	CTranslate* GetTranslate(void);

	/// <summary>
	/// 拡大・縮小情報の設定
	/// </summary>
	/// <param name="_scale">拡大・縮小情報</param>
	void SetScale(CScale* _scale);

	/// <summary>
	/// 拡大・縮小情報の取得
	/// </summary>
	CScale* GetScale(void);

	/// <summary>
	/// 回転情報の設定
	/// </summary>
	/// <param name="_scale">回転情報</param>
	void SetRotate(CRotate* _rotate);

	/// <summary>
	/// 回転情報の取得
	/// </summary>
	CRotate* GetRotate(void);

	/// <summary>
	/// コンストラクタ
	/// </summary>
	CAffineInfo();

	/// <summary>
	/// デスクトラクタ
	/// </summary>
	~CAffineInfo();
};