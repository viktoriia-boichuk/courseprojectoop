#pragma once

namespace CourseProjectOOP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class SelectForm : public System::Windows::Forms::Form
	{
	public:
		SelectForm(String^ label, DataTable^ dataTable)
		{
			InitializeComponent();
			toolTipClose->SetToolTip(buttonClose, "Закрити");
			toolTipPreview->SetToolTip(buttonPreview, "Попередній перегляд");
			toolTipPrint->SetToolTip(buttonPrint, "Друк");
			dataGridView1->AutoGenerateColumns = true;
			dataGridView1->DataSource = dataTable;
			for (int i = 0; i < dataTable->Columns->Count; i++)
				dataGridView1->Columns[i]->HeaderText = dataTable->Columns[i]->Caption;
			label_selectionName->Text = label;
		}

	protected:
		~SelectForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^  panelTop;
	private: System::Windows::Forms::Label^  label_selectionName;
	private: System::Windows::Forms::Button^  buttonClose;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::ToolTip^  toolTipClose;
	private: System::Windows::Forms::Button^  buttonPreview;
	private: System::Windows::Forms::Button^  buttonPrint;
	private: System::Windows::Forms::ToolTip^  toolTipPreview;
	private: System::Windows::Forms::ToolTip^  toolTipPrint;
	private: System::Windows::Forms::PrintDialog^  printDialog1;
	private: System::Drawing::Printing::PrintDocument^  printDocument1;
	private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;

	private: System::ComponentModel::IContainer^  components;

	private: int page;
	private: Point^ mouseOffset;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SelectForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panelTop = (gcnew System::Windows::Forms::Panel());
			this->label_selectionName = (gcnew System::Windows::Forms::Label());
			this->buttonClose = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->toolTipClose = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->buttonPreview = (gcnew System::Windows::Forms::Button());
			this->buttonPrint = (gcnew System::Windows::Forms::Button());
			this->toolTipPreview = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTipPrint = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->panelTop->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// panelTop
			// 
			this->panelTop->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(90)), 
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->panelTop->Controls->Add(this->label_selectionName);
			this->panelTop->Controls->Add(this->buttonClose);
			this->panelTop->Location = System::Drawing::Point(0, 0);
			this->panelTop->Name = L"panelTop";
			this->panelTop->Size = System::Drawing::Size(681, 66);
			this->panelTop->TabIndex = 19;
			this->panelTop->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &SelectForm::panelTop_MouseDown);
			this->panelTop->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &SelectForm::panelTop_MouseMove);
			// 
			// label_selectionName
			// 
			this->label_selectionName->BackColor = System::Drawing::Color::Transparent;
			this->label_selectionName->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label_selectionName->Location = System::Drawing::Point(56, 12);
			this->label_selectionName->Name = L"label_selectionName";
			this->label_selectionName->Size = System::Drawing::Size(568, 44);
			this->label_selectionName->TabIndex = 2;
			this->label_selectionName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label_selectionName->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &SelectForm::panelTop_MouseDown);
			this->label_selectionName->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &SelectForm::panelTop_MouseMove);
			// 
			// buttonClose
			// 
			this->buttonClose->AutoSize = true;
			this->buttonClose->BackColor = System::Drawing::Color::Transparent;
			this->buttonClose->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonClose->FlatAppearance->BorderSize = 0;
			this->buttonClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonClose->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"buttonClose.Image")));
			this->buttonClose->Location = System::Drawing::Point(624, 12);
			this->buttonClose->Name = L"buttonClose";
			this->buttonClose->Size = System::Drawing::Size(44, 44);
			this->buttonClose->TabIndex = 1;
			this->buttonClose->UseVisualStyleBackColor = false;
			this->buttonClose->Click += gcnew System::EventHandler(this, &SelectForm::buttonClose_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(96)), 
				static_cast<System::Int32>(static_cast<System::Byte>(125)), static_cast<System::Int32>(static_cast<System::Byte>(139)));
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(13, 79);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.5F));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::Color::Black;
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->RowTemplate->ReadOnly = true;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(655, 405);
			this->dataGridView1->TabIndex = 20;
			// 
			// buttonPreview
			// 
			this->buttonPreview->AutoSize = true;
			this->buttonPreview->BackColor = System::Drawing::Color::Transparent;
			this->buttonPreview->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonPreview->FlatAppearance->BorderSize = 0;
			this->buttonPreview->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPreview->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"buttonPreview.Image")));
			this->buttonPreview->Location = System::Drawing::Point(290, 504);
			this->buttonPreview->Name = L"buttonPreview";
			this->buttonPreview->Size = System::Drawing::Size(38, 38);
			this->buttonPreview->TabIndex = 3;
			this->buttonPreview->UseVisualStyleBackColor = false;
			this->buttonPreview->Click += gcnew System::EventHandler(this, &SelectForm::buttonPreview_Click);
			// 
			// buttonPrint
			// 
			this->buttonPrint->AutoSize = true;
			this->buttonPrint->BackColor = System::Drawing::Color::Transparent;
			this->buttonPrint->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonPrint->FlatAppearance->BorderSize = 0;
			this->buttonPrint->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPrint->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"buttonPrint.Image")));
			this->buttonPrint->Location = System::Drawing::Point(353, 504);
			this->buttonPrint->Name = L"buttonPrint";
			this->buttonPrint->Size = System::Drawing::Size(38, 38);
			this->buttonPrint->TabIndex = 21;
			this->buttonPrint->UseVisualStyleBackColor = false;
			this->buttonPrint->Click += gcnew System::EventHandler(this, &SelectForm::buttonPrint_Click);
			// 
			// printDialog1
			// 
			this->printDialog1->Document = this->printDocument1;
			this->printDialog1->UseEXDialog = true;
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &SelectForm::printDocument1_PrintPage);
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Document = this->printDocument1;
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->Visible = false;
			// 
			// SelectForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(96)), static_cast<System::Int32>(static_cast<System::Byte>(125)), 
				static_cast<System::Int32>(static_cast<System::Byte>(139)));
			this->ClientSize = System::Drawing::Size(681, 563);
			this->Controls->Add(this->buttonPrint);
			this->Controls->Add(this->buttonPreview);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->panelTop);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"SelectForm";
			this->Text = L"SelectForm";
			this->panelTop->ResumeLayout(false);
			this->panelTop->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
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

	private: System::Void printDocument1_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {
				 int headerHeight = dataGridView1->ColumnHeadersHeight, width = 0, headerX = 75, headerY = 100;
				 Pen ^ p = gcnew Pen (Color::Black, 2.5f);
				 for (int i = 0; i < dataGridView1->ColumnCount; i++) {
					 headerX += width;
					 width = dataGridView1->Columns[i]->Width;
					 e->Graphics->FillRectangle(Brushes::DarkGray, headerX, headerY, width, headerHeight);
					 e->Graphics->DrawRectangle(p, headerX, headerY, width, headerHeight);
					 e->Graphics->DrawString(dataGridView1->Columns[i]->HeaderText->ToString(), dataGridView1->ColumnHeadersDefaultCellStyle->Font, Brushes::Black, 
						System::Drawing::Rectangle(headerX, headerY, width, headerHeight));
				 }
				 int rowHeight = dataGridView1->Rows[0]->Height, rowY = headerY + headerHeight, rowX;
				 for (page; page < dataGridView1->RowCount; page++) {
					 width = 0, rowX = 75;
					 if (rowY > e->MarginBounds.Height) {
						e->HasMorePages = true;
						return;
					 }
					 for (int j = 0; j < dataGridView1->ColumnCount; j++) {
						 rowX += width;
						 width = dataGridView1->Columns[j]->Width;
						 e->Graphics->FillRectangle(Brushes::WhiteSmoke, rowX, rowY, width, rowHeight);
						 e->Graphics->DrawRectangle(p, rowX, rowY, width, rowHeight);
						 e->Graphics->DrawString(dataGridView1->Rows[page]->Cells[j]->FormattedValue->ToString(), dataGridView1->RowsDefaultCellStyle->Font, Brushes::Black, 
							 System::Drawing::Rectangle(rowX, rowY, width, rowHeight));
					 }
					 rowY += rowHeight;
				 }
			 }

	private: System::Void buttonPrint_Click(System::Object^  sender, System::EventArgs^  e) {
				 page = 0;
				 if (printDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
					 printDocument1->Print();
			 }

	private: System::Void buttonPreview_Click(System::Object^  sender, System::EventArgs^  e) {
				 page = 0;
				 printPreviewDialog1->Width = 1000;
				 printPreviewDialog1->Height = 1000;
				 printPreviewDialog1->ShowDialog();
			 }
};
}
