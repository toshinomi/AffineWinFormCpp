#include "ComSaveFileDialog.h"

/// <summary>
/// �R���X�g���N�^
/// </summary>
ComSaveFileDialog::ComSaveFileDialog(void)
{
	m_saveFileDialog = gcnew SaveFileDialog();
}

/// <summary>
/// �f�X�N�g���N�^
/// </summary>
ComSaveFileDialog::~ComSaveFileDialog(void)
{
	delete m_saveFileDialog;
}

/// <summary>
/// �_�C�A���O�̕\��
/// </summary>
/// <returns>���� ����/���s</returns>
bool ComSaveFileDialog::ShowDialog(void)
{
	bool bRst = false;

	if (m_saveFileDialog->ShowDialog() == DialogResult::OK)
	{
		bRst = true;
	}

	return bRst;
}

/// <summary>
/// �X�g���[���̏�����
/// </summary>
/// <param name="_str">�t�@�C������</param>
/// <returns>���s���� ����/���s</returns>
bool ComSaveFileDialog::StreamWrite(String^ _str)
{
	Stream^ stream;
	bool bRst = true;
	try
	{
		stream = m_saveFileDialog->OpenFile();
	}
	catch (Exception^)
	{
		bRst = false;
		return bRst;
	}
	StreamWriter^ streamWriter = gcnew StreamWriter(stream, Encoding::GetEncoding("UTF-8"));
	streamWriter->Write(_str);
	streamWriter->Close();
	stream->Close();
	delete streamWriter;

	return bRst;
}