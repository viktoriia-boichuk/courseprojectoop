#pragma once

namespace CourseProjectOOP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class HelpAboutForm : public System::Windows::Forms::Form
	{
	public:
		HelpAboutForm(String^ formName)
		{
			InitializeComponent();
			toolTipClose->SetToolTip(buttonClose, "Закрити");
			labelFormName->Text = formName;
		}

	protected:
		~HelpAboutForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^  panelTop;
	private: System::Windows::Forms::Label^  labelFormName;
	private: System::Windows::Forms::Button^  buttonClose;
	private: System::Windows::Forms::TextBox^  textBox;
	private: System::Windows::Forms::ToolTip^  toolTipClose;
	private: System::ComponentModel::IContainer^  components;

	private: Point^ mouseOffset;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(HelpAboutForm::typeid));
			this->panelTop = (gcnew System::Windows::Forms::Panel());
			this->labelFormName = (gcnew System::Windows::Forms::Label());
			this->buttonClose = (gcnew System::Windows::Forms::Button());
			this->textBox = (gcnew System::Windows::Forms::TextBox());
			this->toolTipClose = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->panelTop->SuspendLayout();
			this->SuspendLayout();
			// 
			// panelTop
			// 
			this->panelTop->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(90)), 
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->panelTop->Controls->Add(this->labelFormName);
			this->panelTop->Controls->Add(this->buttonClose);
			this->panelTop->Location = System::Drawing::Point(0, 0);
			this->panelTop->Name = L"panelTop";
			this->panelTop->Size = System::Drawing::Size(680, 66);
			this->panelTop->TabIndex = 20;
			this->panelTop->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &HelpAboutForm::panelTop_MouseDown);
			this->panelTop->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &HelpAboutForm::panelTop_MouseMove);
			// 
			// labelFormName
			// 
			this->labelFormName->BackColor = System::Drawing::Color::Transparent;
			this->labelFormName->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelFormName->Location = System::Drawing::Point(55, 12);
			this->labelFormName->Name = L"labelFormName";
			this->labelFormName->Size = System::Drawing::Size(568, 44);
			this->labelFormName->TabIndex = 2;
			this->labelFormName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelFormName->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &HelpAboutForm::panelTop_MouseDown);
			this->labelFormName->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &HelpAboutForm::panelTop_MouseMove);
			// 
			// buttonClose
			// 
			this->buttonClose->AutoSize = true;
			this->buttonClose->BackColor = System::Drawing::Color::Transparent;
			this->buttonClose->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonClose->FlatAppearance->BorderSize = 0;
			this->buttonClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonClose->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"buttonClose.Image")));
			this->buttonClose->Location = System::Drawing::Point(623, 12);
			this->buttonClose->Name = L"buttonClose";
			this->buttonClose->Size = System::Drawing::Size(44, 44);
			this->buttonClose->TabIndex = 1;
			this->buttonClose->UseVisualStyleBackColor = false;
			this->buttonClose->Click += gcnew System::EventHandler(this, &HelpAboutForm::buttonClose_Click);
			// 
			// textBox
			// 
			this->textBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(96)), static_cast<System::Int32>(static_cast<System::Byte>(125)), 
				static_cast<System::Int32>(static_cast<System::Byte>(139)));
			this->textBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox->Cursor = System::Windows::Forms::Cursors::Default;
			this->textBox->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox->Location = System::Drawing::Point(13, 79);
			this->textBox->Multiline = true;
			this->textBox->Name = L"textBox";
			this->textBox->ReadOnly = true;
			this->textBox->Size = System::Drawing::Size(654, 408);
			this->textBox->TabIndex = 21;
			// 
			// HelpAboutForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(96)), static_cast<System::Int32>(static_cast<System::Byte>(125)), 
				static_cast<System::Int32>(static_cast<System::Byte>(139)));
			this->ClientSize = System::Drawing::Size(680, 500);
			this->Controls->Add(this->textBox);
			this->Controls->Add(this->panelTop);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"HelpAboutForm";
			this->Text = L"HelpAboutForm";
			this->Load += gcnew System::EventHandler(this, &HelpAboutForm::HelpAboutForm_Load);
			this->panelTop->ResumeLayout(false);
			this->panelTop->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void buttonClose_Click(System::Object^  sender, System::EventArgs^  e) {
				 this->Close();
			 }

	private: System::Void panelTop_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 mouseOffset = gcnew Point(-e->X, -e->Y);
			 }

	private: System::Void panelTop_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 if (e->Button == System::Windows::Forms::MouseButtons::Left)
				 {
					 Point mousePos = MousePosition;
					 mousePos.Offset(mouseOffset->X, mouseOffset->Y);
					 this->Location = mousePos;
				 }
			 }

	private: System::Void HelpAboutForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 try {
					 String^ fileName = labelFormName->Text->Equals("Довідка") ? "help.txt" : "about.txt";
					 System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(fileName, System::Text::Encoding::Default);
					 textBox->Text = sr->ReadToEnd();
					 if (labelFormName->Text->Equals("Довідка"))
						 textBox->ScrollBars = ScrollBars::Vertical;
					 sr->Close();
				 }
				 catch (System::IO::FileLoadException^ e) {
					 MessageBox::Show("Помилка:\n" + e->Message, "Помилка!", MessageBoxButtons::OK, MessageBoxIcon::Error, MessageBoxDefaultButton::Button1);
				 }
			 }
};
}
