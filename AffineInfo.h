#pragma once

/// <summary>
/// �ړ����
/// </summary>
public class CTranslate
{
private:
	float m_fTx;
	float m_fTy;
public:
	/// <summary>
	/// X�����̈ړ��̐ݒ�
	/// </summary>
	/// <param name="_fTx">X�����̈ړ�</param>
	void SetTx(float _fTx);

	/// <summary>
	/// X�����̈ړ��̎擾
	/// </summary>
	float GetTx(void);

	/// <summary>
	/// Y�����̈ړ��̐ݒ�
	/// </summary>
	/// <param name="_fTy">Y�����̈ړ�</param>
	void SetTy(float _fTy);

	/// <summary>
	/// Y�����̈ړ��̎擾
	/// </summary>
	float GetTy(void);

	/// <summary>
	/// �R���X�g���N�^
	/// </summary>
	CTranslate();

	/// <summary>
	/// �f�X�N�g���N�^
	/// </summary>
	~CTranslate();
};

/// <summary>
/// �g��E�k�����
/// </summary>
public class CScale
{
private:
	float m_fSx;
	float m_fSy;
public:
	/// <summary>
	/// X�����̊g��E�k���̐ݒ�
	/// </summary>
	/// <param name="_fSx">X�����̊g��E�k��</param>
	void SetSx(float _fSx);

	/// <summary>
	/// X�����̊g��E�k���̎擾
	/// </summary>
	float GetSx(void);

	/// <summary>
	/// Y�����̊g��E�k���̐ݒ�
	/// </summary>
	/// <param name="_fSy">Y�����̊g��E�k��</param>
	void SetSy(float _fSy);

	/// <summary>
	/// X�����̊g��E�k���̎擾
	/// </summary>
	float GetSy(void);

	/// <summary>
	/// �R���X�g���N�^
	/// </summary>
	CScale();

	/// <summary>
	/// �f�X�N�g���N�^
	/// </summary>
	~CScale();
};

/// <summary>
/// ��]���
/// </summary>
public class CRotate
{
private:
	float m_fAngle;
public:
	/// <summary>
	/// ��]�̐ݒ�
	/// </summary>
	/// <param name="_fAngle">��]</param>
	void SetAngle(float _fAngle);

	/// <summary>
	/// ��]�̎擾
	/// </summary>
	float GetAngle(void);

	/// <summary>
	/// �R���X�g���N�^
	/// </summary>
	CRotate();

	/// <summary>
	/// �f�X�N�g���N�^
	/// </summary>
	~CRotate();
};

/// <summary>
/// �A�t�B���ϊ����
/// </summary>
public class CAffineInfo
{
private:
	CTranslate* m_translate;
	CScale* m_scale;
	CRotate* m_rotate;
public:
	/// <summary>
	/// �ړ����̐ݒ�
	/// </summary>
	/// <param name="_translate">�ړ����</param>
	void SetTranslate(CTranslate* _translate);

	/// <summary>
	/// �ړ����̎擾
	/// </summary>
	CTranslate* GetTranslate(void);

	/// <summary>
	/// �g��E�k�����̐ݒ�
	/// </summary>
	/// <param name="_scale">�g��E�k�����</param>
	void SetScale(CScale* _scale);

	/// <summary>
	/// �g��E�k�����̎擾
	/// </summary>
	CScale* GetScale(void);

	/// <summary>
	/// ��]���̐ݒ�
	/// </summary>
	/// <param name="_scale">��]���</param>
	void SetRotate(CRotate* _rotate);

	/// <summary>
	/// ��]���̎擾
	/// </summary>
	CRotate* GetRotate(void);

	/// <summary>
	/// �R���X�g���N�^
	/// </summary>
	CAffineInfo();

	/// <summary>
	/// �f�X�N�g���N�^
	/// </summary>
	~CAffineInfo();
};