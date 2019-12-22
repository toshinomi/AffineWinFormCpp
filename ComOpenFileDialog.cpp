#include "ComOpenFileDialog.h"

/// <summary>
/// �R���X�g���N�^
/// </summary>
ComOpenFileDialog::ComOpenFileDialog()
{
	m_openFileDialog = gcnew OpenFileDialog();
}

/// <summary>
/// �f�X�N�g���N�^
/// </summary>
ComOpenFileDialog::~ComOpenFileDialog()
{
	delete m_openFileDialog;
}

/// <summary>
/// �_�C�A���O�̕\��
/// </summary>
/// <returns>���� ����/���s</returns>
bool ComOpenFileDialog::ShowDialog()
{
	bool bRst = false;

	if (m_openFileDialog->ShowDialog() == DialogResult::OK)
	{
		bRst = true;
	}

	return bRst;
}