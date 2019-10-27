#pragma once
#include "ComOpenFileDialog.h"
#include "ComSaveFileDialog.h"
#include "AffineInfo.h"

namespace AffineWinFormCpp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// FormMain の概要
	/// </summary>
	public ref class FormMain : public System::Windows::Forms::Form
	{
	public:
		FormMain(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
			lblTitle->MouseDown += gcnew MouseEventHandler(this, &FormMain::OnMouseDownFormMain);
			lblTitle->MouseMove += gcnew MouseEventHandler(this, &FormMain::OnMouseMoveFormMain);
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~FormMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblTitle;
	protected:
	private: System::Windows::Forms::GroupBox^ groupBoxImage;
	private: System::Windows::Forms::PictureBox^ pictureBox;
	private: System::Windows::Forms::TextBox^ textBoxRotate;
	private: System::Windows::Forms::GroupBox^ groupBoxRotate;
	private: System::Windows::Forms::Label^ lblSx;
	private: System::Windows::Forms::TextBox^ textBoxSy;
	private: System::Windows::Forms::TextBox^ textBoxSx;
	private: System::Windows::Forms::Label^ lblTy;
	private: System::Windows::Forms::Label^ lblTx;
	private: System::Windows::Forms::TextBox^ textBoxTy;
	private: System::Windows::Forms::Label^ lblSy;
	private: System::Windows::Forms::TextBox^ textBoxTx;
	private: System::Windows::Forms::Button^ btnGo;
	private: System::Windows::Forms::GroupBox^ groupBoxTranslate;
	private: System::Windows::Forms::Button^ btnInit;
	private: System::Windows::Forms::Button^ btnClose;
	private: System::Windows::Forms::Button^ btnFileSelect;
	private: System::Windows::Forms::GroupBox^ groupBoxAffine;
	private: System::Windows::Forms::GroupBox^ groupBoxScale;
	private: System::Windows::Forms::GroupBox^ groupBoxOperation;

	protected:





















	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->groupBoxImage = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->textBoxRotate = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxRotate = (gcnew System::Windows::Forms::GroupBox());
			this->lblSx = (gcnew System::Windows::Forms::Label());
			this->textBoxSy = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSx = (gcnew System::Windows::Forms::TextBox());
			this->lblTy = (gcnew System::Windows::Forms::Label());
			this->lblTx = (gcnew System::Windows::Forms::Label());
			this->textBoxTy = (gcnew System::Windows::Forms::TextBox());
			this->lblSy = (gcnew System::Windows::Forms::Label());
			this->textBoxTx = (gcnew System::Windows::Forms::TextBox());
			this->btnGo = (gcnew System::Windows::Forms::Button());
			this->groupBoxTranslate = (gcnew System::Windows::Forms::GroupBox());
			this->btnInit = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->btnFileSelect = (gcnew System::Windows::Forms::Button());
			this->groupBoxAffine = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxScale = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxOperation = (gcnew System::Windows::Forms::GroupBox());
			this->groupBoxImage->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			this->groupBoxRotate->SuspendLayout();
			this->groupBoxTranslate->SuspendLayout();
			this->groupBoxAffine->SuspendLayout();
			this->groupBoxScale->SuspendLayout();
			this->groupBoxOperation->SuspendLayout();
			this->SuspendLayout();
			// 
			// lblTitle
			// 
			this->lblTitle->BackColor = System::Drawing::Color::Black;
			this->lblTitle->ForeColor = System::Drawing::Color::White;
			this->lblTitle->Location = System::Drawing::Point(1, 2);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(847, 29);
			this->lblTitle->TabIndex = 7;
			this->lblTitle->Text = L"Affine";
			// 
			// groupBoxImage
			// 
			this->groupBoxImage->Controls->Add(this->pictureBox);
			this->groupBoxImage->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBoxImage->Location = System::Drawing::Point(266, 36);
			this->groupBoxImage->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->groupBoxImage->Name = L"groupBoxImage";
			this->groupBoxImage->Padding = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->groupBoxImage->Size = System::Drawing::Size(568, 578);
			this->groupBoxImage->TabIndex = 6;
			this->groupBoxImage->TabStop = false;
			this->groupBoxImage->Text = L"Image";
			// 
			// pictureBox
			// 
			this->pictureBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox->Location = System::Drawing::Point(8, 24);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(550, 539);
			this->pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox->TabIndex = 3;
			this->pictureBox->TabStop = false;
			// 
			// textBoxRotate
			// 
			this->textBoxRotate->BackColor = System::Drawing::Color::White;
			this->textBoxRotate->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxRotate->Location = System::Drawing::Point(30, 37);
			this->textBoxRotate->Name = L"textBoxRotate";
			this->textBoxRotate->Size = System::Drawing::Size(92, 20);
			this->textBoxRotate->TabIndex = 8;
			this->textBoxRotate->Text = L"0";
			this->textBoxRotate->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// groupBoxRotate
			// 
			this->groupBoxRotate->Controls->Add(this->textBoxRotate);
			this->groupBoxRotate->Location = System::Drawing::Point(18, 212);
			this->groupBoxRotate->Name = L"groupBoxRotate";
			this->groupBoxRotate->Size = System::Drawing::Size(147, 90);
			this->groupBoxRotate->TabIndex = 7;
			this->groupBoxRotate->TabStop = false;
			this->groupBoxRotate->Text = L"Rotate";
			// 
			// lblSx
			// 
			this->lblSx->Location = System::Drawing::Point(5, 23);
			this->lblSx->Name = L"lblSx";
			this->lblSx->Size = System::Drawing::Size(21, 23);
			this->lblSx->TabIndex = 8;
			this->lblSx->Text = L"X";
			// 
			// textBoxSy
			// 
			this->textBoxSy->BackColor = System::Drawing::Color::White;
			this->textBoxSy->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxSy->Location = System::Drawing::Point(30, 49);
			this->textBoxSy->Name = L"textBoxSy";
			this->textBoxSy->Size = System::Drawing::Size(92, 20);
			this->textBoxSy->TabIndex = 7;
			this->textBoxSy->Text = L"1";
			this->textBoxSy->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBoxSy->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FormMain::OnKeyPressTextBoxSy);
			// 
			// textBoxSx
			// 
			this->textBoxSx->BackColor = System::Drawing::Color::White;
			this->textBoxSx->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxSx->Location = System::Drawing::Point(30, 23);
			this->textBoxSx->Name = L"textBoxSx";
			this->textBoxSx->Size = System::Drawing::Size(92, 20);
			this->textBoxSx->TabIndex = 6;
			this->textBoxSx->Text = L"1";
			this->textBoxSx->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->textBoxSx->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &FormMain::OnKeyPressTextBoxSx);
			// 
			// lblTy
			// 
			this->lblTy->Location = System::Drawing::Point(5, 49);
			this->lblTy->Name = L"lblTy";
			this->lblTy->Size = System::Drawing::Size(21, 20);
			this->lblTy->TabIndex = 7;
			this->lblTy->Text = L"Y";
			// 
			// lblTx
			// 
			this->lblTx->Location = System::Drawing::Point(5, 23);
			this->lblTx->Name = L"lblTx";
			this->lblTx->Size = System::Drawing::Size(21, 23);
			this->lblTx->TabIndex = 6;
			this->lblTx->Text = L"X";
			// 
			// textBoxTy
			// 
			this->textBoxTy->BackColor = System::Drawing::Color::White;
			this->textBoxTy->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxTy->Location = System::Drawing::Point(30, 49);
			this->textBoxTy->Name = L"textBoxTy";
			this->textBoxTy->Size = System::Drawing::Size(92, 20);
			this->textBoxTy->TabIndex = 5;
			this->textBoxTy->Text = L"0";
			this->textBoxTy->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// lblSy
			// 
			this->lblSy->Location = System::Drawing::Point(5, 49);
			this->lblSy->Name = L"lblSy";
			this->lblSy->Size = System::Drawing::Size(21, 23);
			this->lblSy->TabIndex = 9;
			this->lblSy->Text = L"Y";
			// 
			// textBoxTx
			// 
			this->textBoxTx->BackColor = System::Drawing::Color::White;
			this->textBoxTx->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxTx->Location = System::Drawing::Point(30, 23);
			this->textBoxTx->Name = L"textBoxTx";
			this->textBoxTx->Size = System::Drawing::Size(92, 20);
			this->textBoxTx->TabIndex = 4;
			this->textBoxTx->Text = L"0";
			this->textBoxTx->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// btnGo
			// 
			this->btnGo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGo->Location = System::Drawing::Point(49, 310);
			this->btnGo->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->btnGo->Name = L"btnGo";
			this->btnGo->Size = System::Drawing::Size(92, 37);
			this->btnGo->TabIndex = 9;
			this->btnGo->Text = L"Go";
			this->btnGo->UseVisualStyleBackColor = true;
			this->btnGo->Click += gcnew System::EventHandler(this, &FormMain::OnClickBtnGo);
			// 
			// groupBoxTranslate
			// 
			this->groupBoxTranslate->Controls->Add(this->lblTy);
			this->groupBoxTranslate->Controls->Add(this->lblTx);
			this->groupBoxTranslate->Controls->Add(this->textBoxTy);
			this->groupBoxTranslate->Controls->Add(this->textBoxTx);
			this->groupBoxTranslate->Location = System::Drawing::Point(18, 22);
			this->groupBoxTranslate->Name = L"groupBoxTranslate";
			this->groupBoxTranslate->Size = System::Drawing::Size(147, 90);
			this->groupBoxTranslate->TabIndex = 5;
			this->groupBoxTranslate->TabStop = false;
			this->groupBoxTranslate->Text = L"Translate";
			// 
			// btnInit
			// 
			this->btnInit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnInit->Location = System::Drawing::Point(43, 86);
			this->btnInit->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->btnInit->Name = L"btnInit";
			this->btnInit->Size = System::Drawing::Size(150, 50);
			this->btnInit->TabIndex = 2;
			this->btnInit->Text = L"Init";
			this->btnInit->UseVisualStyleBackColor = true;
			this->btnInit->Click += gcnew System::EventHandler(this, &FormMain::OnClickBtnInit);
			// 
			// btnClose
			// 
			this->btnClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClose->Location = System::Drawing::Point(43, 146);
			this->btnClose->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(150, 50);
			this->btnClose->TabIndex = 3;
			this->btnClose->Text = L"Close";
			this->btnClose->UseVisualStyleBackColor = true;
			this->btnClose->Click += gcnew System::EventHandler(this, &FormMain::OnClickBtnClose);
			// 
			// btnFileSelect
			// 
			this->btnFileSelect->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnFileSelect->Location = System::Drawing::Point(43, 24);
			this->btnFileSelect->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->btnFileSelect->Name = L"btnFileSelect";
			this->btnFileSelect->Size = System::Drawing::Size(150, 50);
			this->btnFileSelect->TabIndex = 1;
			this->btnFileSelect->Text = L"File Select...";
			this->btnFileSelect->UseVisualStyleBackColor = true;
			this->btnFileSelect->Click += gcnew System::EventHandler(this, &FormMain::OnClickBtnFileSelect);
			// 
			// groupBoxAffine
			// 
			this->groupBoxAffine->Controls->Add(this->btnGo);
			this->groupBoxAffine->Controls->Add(this->groupBoxTranslate);
			this->groupBoxAffine->Controls->Add(this->groupBoxScale);
			this->groupBoxAffine->Controls->Add(this->groupBoxRotate);
			this->groupBoxAffine->Location = System::Drawing::Point(24, 204);
			this->groupBoxAffine->Name = L"groupBoxAffine";
			this->groupBoxAffine->Size = System::Drawing::Size(183, 359);
			this->groupBoxAffine->TabIndex = 8;
			this->groupBoxAffine->TabStop = false;
			this->groupBoxAffine->Text = L"Affine";
			// 
			// groupBoxScale
			// 
			this->groupBoxScale->Controls->Add(this->lblSy);
			this->groupBoxScale->Controls->Add(this->lblSx);
			this->groupBoxScale->Controls->Add(this->textBoxSy);
			this->groupBoxScale->Controls->Add(this->textBoxSx);
			this->groupBoxScale->Location = System::Drawing::Point(18, 116);
			this->groupBoxScale->Name = L"groupBoxScale";
			this->groupBoxScale->Size = System::Drawing::Size(147, 90);
			this->groupBoxScale->TabIndex = 6;
			this->groupBoxScale->TabStop = false;
			this->groupBoxScale->Text = L"Scale";
			// 
			// groupBoxOperation
			// 
			this->groupBoxOperation->Controls->Add(this->btnInit);
			this->groupBoxOperation->Controls->Add(this->btnClose);
			this->groupBoxOperation->Controls->Add(this->btnFileSelect);
			this->groupBoxOperation->Controls->Add(this->groupBoxAffine);
			this->groupBoxOperation->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->groupBoxOperation->Location = System::Drawing::Point(14, 36);
			this->groupBoxOperation->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->groupBoxOperation->Name = L"groupBoxOperation";
			this->groupBoxOperation->Padding = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->groupBoxOperation->Size = System::Drawing::Size(240, 578);
			this->groupBoxOperation->TabIndex = 5;
			this->groupBoxOperation->TabStop = false;
			this->groupBoxOperation->Text = L"Operation";
			// 
			// FormMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(11, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(850, 625);
			this->Controls->Add(this->lblTitle);
			this->Controls->Add(this->groupBoxImage);
			this->Controls->Add(this->groupBoxOperation);
			this->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 15));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->Name = L"FormMain";
			this->Text = L"FormMain";
			this->groupBoxImage->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
			this->groupBoxRotate->ResumeLayout(false);
			this->groupBoxRotate->PerformLayout();
			this->groupBoxTranslate->ResumeLayout(false);
			this->groupBoxTranslate->PerformLayout();
			this->groupBoxAffine->ResumeLayout(false);
			this->groupBoxScale->ResumeLayout(false);
			this->groupBoxScale->PerformLayout();
			this->groupBoxOperation->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		Point^	m_mousePoint;
		String^	m_strOpenFileName;
	public:
		void OnMouseDownFormMain(Object^ sender, MouseEventArgs^ e);
		void OnMouseMoveFormMain(Object^ sender, MouseEventArgs^ e);
		void OnClickBtnFileSelect(Object^ sender, EventArgs^ e);
		void OnClickBtnClose(Object^ sender, EventArgs^ e);
		void OnClickBtnInit(Object^ sender, EventArgs^ e);
		void OnClickBtnGo(Object^ sender, EventArgs^ e);
		bool IsEmpty(String^ _str);
		Image^ Affine(CAffineInfo* _affineInfo);
		void OnKeyPressTextBoxSx(Object^ sender, KeyPressEventArgs^ e);
		void OnKeyPressTextBoxSy(Object^ sender, KeyPressEventArgs^ e);
		int CountChar(String^ _str, String^ _strChar);
	};
}
