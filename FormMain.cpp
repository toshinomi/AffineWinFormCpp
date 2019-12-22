#include "FormMain.h"

using namespace AffineWinFormCpp;

/// <summary>
/// �^�C�g���o�[�}�E�X�_�E���̃N���b�N�C�x���g
/// </summary>
/// <param name="sender">�I�u�W�F�N�g</param>
/// <param name="e">�C�x���g�̃f�[�^</param>
void FormMain::OnMouseDownLblTitle(Object^ sender, MouseEventArgs^ e)
{
	if ((e->Button & ::MouseButtons::Left) == ::MouseButtons::Left)
	{
		Point^ point = gcnew Point(e->X, e->Y);
		m_mousePoint = point;
		delete point;
	}
}

/// <summary>
/// �^�C�g���o�[�}�E�X���[�u�̃N���b�N�C�x���g
/// </summary>
/// <param name="sender">�I�u�W�F�N�g</param>
/// <param name="e">�C�x���g�̃f�[�^</param>
void FormMain::OnMouseMoveLblTitle(Object^ sender, MouseEventArgs^ e)
{
	if ((e->Button & ::MouseButtons::Left) == ::MouseButtons::Left)
	{
		this->Left += e->X - m_mousePoint->X;
		this->Top += e->Y - m_mousePoint->Y;
	}
}

/// <summary>
/// �t�@�C���I���{�^���̃N���b�N�C�x���g
/// </summary>
/// <param name="sender">�I�u�W�F�N�g</param>
/// <param name="e">�C�x���g�̃f�[�^</param>
void FormMain::OnClickBtnFileSelect(Object^ sender, EventArgs^ e)
{
	ComOpenFileDialog^ openFileDlg = gcnew ComOpenFileDialog();
	openFileDlg->SetFilter("JPG|*.jpg|PNG|*.png");
	openFileDlg->SetTitle("Open the file");
	if (openFileDlg->ShowDialog() == true)
	{
		pictureBox->Image = nullptr;
		m_strOpenFileName = openFileDlg->GetFileName();
		pictureBox->ImageLocation = m_strOpenFileName;
	}
	delete openFileDlg;

	return;
}

/// <summary>
/// ����{�^���̃N���b�N�C�x���g
/// </summary>
/// <param name="sender">�I�u�W�F�N�g</param>
/// <param name="e">�C�x���g�̃f�[�^</param>
void FormMain::OnClickBtnClose(Object^ sender, EventArgs^ e)
{
	::DialogResult result = ::MessageBox::Show("Close the application ?", "Question", MessageBoxButtons::OKCancel, MessageBoxIcon::Exclamation, MessageBoxDefaultButton::Button2);
	if (result == ::DialogResult::OK)
	{
		this->Close();
	}
}

/// <summary>
/// �������{�^���̃N���b�N�C�x���g
/// </summary>
/// <param name="sender">�I�u�W�F�N�g</param>
/// <param name="e">�C�x���g�̃f�[�^</param>
void FormMain::OnClickBtnInit(Object^ sender, EventArgs^ e)
{
	if (!String::IsNullOrWhiteSpace(m_strOpenFileName))
	{
		pictureBox->ImageLocation = m_strOpenFileName;
	}
}

/// <summary>
/// �A�t�B���ϊ����s�{�^���̃N���b�N�C�x���g
/// </summary>
/// <param name="sender">�I�u�W�F�N�g</param>
/// <param name="e">�C�x���g�̃f�[�^</param>
void FormMain::OnClickBtnGo(Object^ sender, EventArgs^ e)
{
	if (String::IsNullOrWhiteSpace(m_strOpenFileName))
	{
		return;
	}

	CAffineInfo* pAffineInfo = new CAffineInfo();
	CTranslate* pTranslate = pAffineInfo->GetTranslate();
	CScale* pScale = pAffineInfo->GetScale();
	CRotate* pRotate = pAffineInfo->GetRotate();
	if (!IsEmpty(textBoxTx->Text))
	{
		pTranslate->SetTx(float::Parse(textBoxTx->Text));
	}
	if (!IsEmpty(textBoxTy->Text))
	{
		pTranslate->SetTy(float::Parse(textBoxTy->Text));
	}

	if (!IsEmpty(textBoxSx->Text))
	{
		pScale->SetSx(float::Parse(textBoxSx->Text));
	}
	if (!IsEmpty(textBoxSy->Text))
	{
		pScale->SetSy(float::Parse(textBoxSy->Text));
	}

	if (!IsEmpty(textBoxRotate->Text))
	{
		pRotate->SetAngle(float::Parse(textBoxRotate->Text));
	}

	Image^ image = Affine(pAffineInfo);
	pictureBox->Image = (Image^)image->Clone();
	delete pAffineInfo;
	delete image;
}

/// <summary>
/// ������̋�̃`�F�b�N
/// </summary>
/// <param name="_str">�摜�����̖���</param>
/// <returns>������̋�̃`�F�b�N�̌��� ������Ȃ�/�����񂠂�</returns>
bool FormMain::IsEmpty(String^ _str)
{
	bool bIsEmpty = false;
	if (String::IsNullOrWhiteSpace(_str))
	{
		bIsEmpty = true;
	}

	return bIsEmpty;
}

/// <summary>
/// �A�t�B���ϊ�
/// </summary>
/// <param name="_affineInfo">�A�t�B���ϊ����</param>
/// <returns>�A�t�B���ϊ��̃C���[�W</returns>
Image^ FormMain::Affine(CAffineInfo* _affineInfo)
{
	CTranslate* pTranslate = _affineInfo->GetTranslate();
	CScale* pScale = _affineInfo->GetScale();
	CRotate* pRotate = _affineInfo->GetRotate();
	float fTx = pTranslate->GetTx();
	float fTy = pTranslate->GetTy();
	float fSx = pScale->GetSx();
	float fSy = pScale->GetSy();
	float fAngle = pRotate->GetAngle();

	Bitmap^ bitmap = gcnew Bitmap(pictureBox->Width, pictureBox->Height);
	Graphics^ graphics = Graphics::FromImage(bitmap);

	Image^ image = Image::FromFile(m_strOpenFileName);

	graphics->ResetTransform();
	graphics->TranslateTransform(fTx, fTy, System::Drawing::Drawing2D::MatrixOrder::Append);
	graphics->ScaleTransform(fSx, fSy);
	graphics->RotateTransform(fAngle, System::Drawing::Drawing2D::MatrixOrder::Append);
	graphics->DrawImage(image, 0, 0, pictureBox->Width, pictureBox->Height);

	delete image;
	delete graphics;

	return bitmap;
}

/// <summary>
/// �X�P�[��X�̃e�L�X�g�{�b�N�X�̃L�[���̓C�x���g
/// </summary>
/// <param name="sender">�I�u�W�F�N�g</param>
/// <param name="e">�L�[���̓C�x���g�̃f�[�^</param>
void FormMain::OnKeyPressTextBoxSx(Object^ sender, KeyPressEventArgs^ e)
{
	if (e->KeyChar == '.')
	{
		TextBox^ textbox = (TextBox^)sender;
		if (textbox->TextLength <= 0)
		{
			e->Handled = true;
			return;
		}
		if (CountChar(textbox->Text, ".") >= 1)
		{
			e->Handled = true;
			return;
		}
	}
	if ((e->KeyChar < '0' || e->KeyChar > '9') && e->KeyChar != '.' && e->KeyChar != '\b')
	{
		e->Handled = true;
	}

	return;
}

/// <summary>
/// �X�P�[��Y�̃e�L�X�g�{�b�N�X�̃L�[���̓C�x���g
/// </summary>
/// <param name="sender">�I�u�W�F�N�g</param>
/// <param name="e">�L�[���̓C�x���g�̃f�[�^</param>
void FormMain::OnKeyPressTextBoxSy(Object^ sender, KeyPressEventArgs^ e)
{
	if (e->KeyChar == '.')
	{
		TextBox^ textbox = (TextBox^)sender;
		if (textbox->TextLength <= 0)
		{
			e->Handled = true;
			return;
		}
		if (CountChar(textbox->Text, ".") >= 1)
		{
			e->Handled = true;
			return;
		}
	}
	if ((e->KeyChar < '0' || e->KeyChar > '9') && e->KeyChar != '.' && e->KeyChar != '\b')
	{
		e->Handled = true;
	}

	return;
}

/// <summary>
/// �����񂩂�w��̕������J�E���g����
/// </summary>
/// <param name="_str">������</param>
/// <param name="_strChar">�J�E���g���镶��</param>
/// <returns>�J�E���g��</returns>
int FormMain::CountChar(String^ _str, String^ _strChar)
{
	return _str->Length - _str->Replace(_strChar, "")->Length;
}