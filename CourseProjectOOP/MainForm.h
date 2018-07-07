#pragma once
#include "SelectForm.h"
#include "HelpAboutForm.h"

namespace CourseProjectOOP {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			pressedMenuButton = false;
			InitializeComponent();
			toolTipMenu->SetToolTip(buttonMenu, "Меню");
			toolTipClose->SetToolTip(buttonClose, "Закрити");
			toolTipDelete->SetToolTip(buttonDelete, "Видалити запис");
			toolTipAdd->SetToolTip(buttonNewRecord, "Новий запис");
			toolTipEdit->SetToolTip(buttonEditRecord, "Редагувати запис");
		}

	protected:
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  buttonClose;
	private: System::Windows::Forms::Button^  buttonMenu;
	private: System::Data::OleDb::OleDbConnection^  oleDbConnection1;
	private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand1;
	private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand1;
	private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapterManufacturers;
	private: System::Data::DataSet^  dataSet;
	private: System::Data::DataTable^  manufacturers;
	private: System::Data::DataTable^  departments;
	private: System::Data::DataTable^  discount_cards;
	private: System::Data::DataTable^  invoice;
	private: System::Data::DataTable^  supplies;
	private: System::Data::DataTable^  workers;
	private: System::Data::DataTable^  selling;
	private: System::Data::DataTable^  goods;
	private: System::Data::DataTable^  transactions;
	private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand2;
	private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand2;
	private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand2;
	private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand2;
	private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapterDepartments;
	private: System::Windows::Forms::ToolTip^  toolTipMenu;
	private: System::Windows::Forms::ToolTip^  toolTipClose;
	private: System::Windows::Forms::Button^  buttonManufacturers;
	private: System::Windows::Forms::Button^  buttonDepartments;
	private: System::Data::DataColumn^  m_id;
	private: System::Data::DataColumn^  m_name;
	private: System::Data::DataColumn^  m_country;
	private: System::Data::DataColumn^  m_city;
	private: System::Data::DataColumn^  m_address;
	private: System::Data::DataColumn^  m_phone_number;
	private: System::Data::DataColumn^  m_email;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  кодВиробникаDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Data::DataColumn^  d_id;
	private: System::Data::DataColumn^  d_name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  midDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  mnameDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  mcountryDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  mcityDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  maddressDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  mphonenumberDataGridViewTextBoxColumn;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  memailDataGridViewTextBoxColumn;
	private: System::Windows::Forms::Button^  buttonDiscountCards;
	private: System::Windows::Forms::Button^  buttonInvoice;
	private: System::Windows::Forms::Button^  buttonSupplies;
	private: System::Windows::Forms::Button^  buttonWorkers;
	private: System::Windows::Forms::Button^  buttonSelling;
	private: System::Windows::Forms::Button^  buttonGoods;
	private: System::Windows::Forms::Button^  buttonTransactions;
	private: System::Data::DataColumn^  dc_id;
	private: System::Data::DataColumn^  dc_client_name;
	private: System::Data::DataColumn^  dc_percentage;
	private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand3;
	private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand3;
	private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand3;
	private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand3;
	private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapterDiscountCards;
	private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand4;
	private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand4;
	private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand4;
	private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand4;
	private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapterInvoice;
	private: System::Data::DataColumn^  i_id;
	private: System::Data::DataColumn^  i_w_id;
	private: System::Data::DataColumn^  i_date_time;
	private: System::Data::DataColumn^  d_shelving_type;
	private: System::Windows::Forms::Button^  buttonDelete;
	private: System::Windows::Forms::ToolTip^  toolTipDelete;
	private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand5;
	private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand5;
	private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand5;
	private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand5;
	private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapterSupplies;
	private: System::Data::DataColumn^  s_id;
	private: System::Data::DataColumn^  s_i_id;
	private: System::Data::DataColumn^  s_g_id;
	private: System::Data::DataColumn^  s_units_amount;
	private: System::Data::DataColumn^  s_purchase_price;
	private: System::Data::DataColumn^  s_expiration_date;
	private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand6;
	private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand6;
	private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand6;
	private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand6;
	private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapterWorkers;
	private: System::Data::DataColumn^  w_id;
	private: System::Data::DataColumn^  w_name;
	private: System::Data::DataColumn^  w_employment_date;
	private: System::Data::DataColumn^  w_firing_date;
	private: System::Data::DataColumn^  w_birth_date;
	private: System::Data::DataColumn^  w_d_id;
	private: System::Data::DataColumn^  w_job;
	private: System::Data::DataColumn^  w_education;
	private: System::Data::DataColumn^  w_salary;
	private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand7;
	private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand7;
	private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand7;
	private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand7;
	private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapterSelling;
	private: System::Data::DataColumn^  sel_id;
	private: System::Data::DataColumn^  sel_t_id;
	private: System::Data::DataColumn^  sel_g_id;
	private: System::Data::DataColumn^  sel_units_amount;
	private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand8;
	private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand8;
	private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand8;
	private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand8;
	private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapterGoods;
	private: System::Data::DataColumn^  g_id;
	private: System::Data::DataColumn^  g_name;
	private: System::Data::DataColumn^  g_barcode;
	private: System::Data::DataColumn^  g_category;
	private: System::Data::DataColumn^  g_d_id;
	private: System::Data::DataColumn^  g_unit_of_measurement;
	private: System::Data::DataColumn^  g_m_id;
	private: System::Data::DataColumn^  g_retail_price;
	private: System::Data::OleDb::OleDbCommand^  oleDbSelectCommand9;
	private: System::Data::OleDb::OleDbCommand^  oleDbInsertCommand9;
	private: System::Data::OleDb::OleDbCommand^  oleDbUpdateCommand9;
	private: System::Data::OleDb::OleDbCommand^  oleDbDeleteCommand9;
	private: System::Data::OleDb::OleDbDataAdapter^  oleDbDataAdapterTransactions;
	private: System::Data::DataColumn^  t_id;
	private: System::Data::DataColumn^  t_w_id;
	private: System::Data::DataColumn^  t_dc_id;
	private: System::Data::DataColumn^  t_date_time;
	private: System::Windows::Forms::Button^  buttonSaveChanges;
	private: System::Windows::Forms::Button^  buttonPrint;
	private: System::Drawing::Printing::PrintDocument^  printDocument1;
	private: System::Windows::Forms::PrintDialog^  printDialog1;
	private: System::Windows::Forms::PrintPreviewDialog^  printPreviewDialog1;
	private: System::Windows::Forms::Button^  buttonPreview;
	private: System::Windows::Forms::Panel^  panelMenu;
	private: System::Windows::Forms::Panel^  panelTop;
	private: System::Windows::Forms::Button^  buttonExit;
	private: System::Windows::Forms::Button^  buttonAbout;
	private: System::Windows::Forms::Button^  buttonHelp;
	private: System::Windows::Forms::Button^  buttonSelections;
	private: System::Windows::Forms::Panel^  panelSelections;
	private: System::Windows::Forms::Button^  buttonMostPopularGoods;
	private: System::Windows::Forms::Button^  buttonWarehouseGoods;
	private: System::Windows::Forms::Button^  buttonCashierStatistics;
	private: System::Windows::Forms::Button^  buttonTransactionCost;
	private: System::Windows::Forms::Button^  buttonManufacturersBySuppliedGoodsAmount;
	private: System::Windows::Forms::Button^  buttonNewRecord;
	private: System::Windows::Forms::Panel^  panelAddOrEditManufacturer;
	private: System::Windows::Forms::Button^  buttonCancelManufacturer;
	private: System::Windows::Forms::Button^  buttonSaveManufacturer;
	private: System::Windows::Forms::Label^  labelMEmail;
	private: System::Windows::Forms::Label^  labelMPhone;
	private: System::Windows::Forms::Label^  labelMAddress;
	private: System::Windows::Forms::Label^  labelMCity;
	private: System::Windows::Forms::Label^  labelMCountry;
	private: System::Windows::Forms::Label^  labelMName;
	private: System::Windows::Forms::TextBox^  textBoxMEmail;
	private: System::Windows::Forms::TextBox^  textBoxMPhone;
	private: System::Windows::Forms::TextBox^  textBoxMAddress;
	private: System::Windows::Forms::TextBox^  textBoxMCity;
	private: System::Windows::Forms::TextBox^  textBoxMCountry;
	private: System::Windows::Forms::TextBox^  textBoxMName;
	private: System::Windows::Forms::Label^  labelManufacturer;
	private: System::Windows::Forms::Button^  buttonEditRecord;
	private: System::Windows::Forms::ToolTip^  toolTipAdd;
	private: System::Windows::Forms::ToolTip^  toolTipEdit;
	private: System::Windows::Forms::ToolTip^  toolTipSave;
	private: System::Windows::Forms::ToolTip^  toolTipCancel;
	private: System::Windows::Forms::Panel^  panelAddOrEditDepartment;
	private: System::Windows::Forms::ComboBox^  comboBoxDShelvingType;
	private: System::Windows::Forms::Button^  buttonCancelDepartment;
	private: System::Windows::Forms::Button^  buttonSaveDepartment;
	private: System::Windows::Forms::Label^  labelDShelvingType;
	private: System::Windows::Forms::Label^  labelDName;
	private: System::Windows::Forms::TextBox^  textBoxDName;
	private: System::Windows::Forms::Label^  labelDepartment;
	private: System::Windows::Forms::Panel^  panelAddOrEditDiscountCard;
	private: System::Windows::Forms::TextBox^  textBoxDCPercentage;
	private: System::Windows::Forms::Button^  buttonCancelDiscountCard;
	private: System::Windows::Forms::Button^  buttonSaveDiscountCard;
	private: System::Windows::Forms::Label^  labelDCPercentage;
	private: System::Windows::Forms::Label^  labelDCClientName;
	private: System::Windows::Forms::TextBox^  textBoxDCClientName;
	private: System::Windows::Forms::Label^  labelDiscountCard;
	private: System::Windows::Forms::Panel^  panelAddOrEditInvoice;
	private: System::Windows::Forms::DateTimePicker^  dateTimePickerIDate;
	private: System::Windows::Forms::ComboBox^  comboBoxIWName;
	private: System::Windows::Forms::Button^  buttonCancelInvoice;
	private: System::Windows::Forms::Button^  buttonSaveInvoice;
	private: System::Windows::Forms::Label^  labelIDateTime;
	private: System::Windows::Forms::Label^  labelIWName;
	private: System::Windows::Forms::Label^  labelInvoice;
	private: System::Windows::Forms::DateTimePicker^  dateTimePickerITime;
	private: System::Windows::Forms::Panel^  panelAddOrEditSupply;
	private: System::Windows::Forms::ComboBox^  comboBoxSGId;
	private: System::Windows::Forms::ComboBox^  comboBoxSIId;
	private: System::Windows::Forms::Button^  buttonCancelSupply;
	private: System::Windows::Forms::Button^  buttonSaveSupply;
	private: System::Windows::Forms::Label^  labelSExpirationDate;
	private: System::Windows::Forms::Label^  labelSPurchasePrice;
	private: System::Windows::Forms::Label^  labelSUnitsAmount;
	private: System::Windows::Forms::Label^  labelSGId;
	private: System::Windows::Forms::Label^  labelSIId;
	private: System::Windows::Forms::TextBox^  textBoxSPurchasePrice;
	private: System::Windows::Forms::TextBox^  textBoxSUnitsAmount;
	private: System::Windows::Forms::Label^  labelSupply;
	private: System::Windows::Forms::DateTimePicker^  dateTimePickerSExpirationDate;
	private: System::Windows::Forms::Panel^  panelAddOrEditWorker;
	private: System::Windows::Forms::ComboBox^  comboBoxWDId;
	private: System::Windows::Forms::TextBox^  textBoxWSalary;
	private: System::Windows::Forms::ComboBox^  comboBoxWEducation;
	private: System::Windows::Forms::ComboBox^  comboBoxWJob;
	private: System::Windows::Forms::DateTimePicker^  dateTimePickerWBirthDate;
	private: System::Windows::Forms::DateTimePicker^  dateTimePickerWFiringDate;
	private: System::Windows::Forms::DateTimePicker^  dateTimePickerWEmploymentDate;
	private: System::Windows::Forms::Label^  labelWDId;
	private: System::Windows::Forms::Label^  labelWSalary;
	private: System::Windows::Forms::Button^  buttonCancelWorker;
	private: System::Windows::Forms::Button^  buttonSaveWorker;
	private: System::Windows::Forms::Label^  labelWEducation;
	private: System::Windows::Forms::Label^  labelWJob;
	private: System::Windows::Forms::Label^  labelWBirthDate;
	private: System::Windows::Forms::Label^  labelWFiringDate;
	private: System::Windows::Forms::Label^  labelWEmploymentDate;
	private: System::Windows::Forms::Label^  labelWName;
	private: System::Windows::Forms::TextBox^  textBoxWName;
	private: System::Windows::Forms::Label^  labelWorker;
	private: System::Windows::Forms::Panel^  panelAddOrEditSelling;
	private: System::Windows::Forms::ComboBox^  comboBoxSelGId;
	private: System::Windows::Forms::ComboBox^  comboBoxSelTId;
	private: System::Windows::Forms::Button^  buttonCancelSelling;
	private: System::Windows::Forms::Button^  buttonSaveSelling;
	private: System::Windows::Forms::Label^  labelSelUnitsAmount;
	private: System::Windows::Forms::Label^  labelSelGId;
	private: System::Windows::Forms::Label^  labelSelTId;
	private: System::Windows::Forms::TextBox^  textBoxSelUnitsAmount;
	private: System::Windows::Forms::Label^  labelSelling;
	private: System::Windows::Forms::Panel^  panelAddOrEditGood;
	private: System::Windows::Forms::ComboBox^  comboBoxGDId;
	private: System::Windows::Forms::Label^  labelGDId;
	private: System::Windows::Forms::TextBox^  textBoxGBarcode;
	private: System::Windows::Forms::ComboBox^  comboBoxGMId;
	private: System::Windows::Forms::TextBox^  textBoxGRetailPrice;
	private: System::Windows::Forms::Label^  labelGMId;
	private: System::Windows::Forms::Label^  labelGRetailPrice;
	private: System::Windows::Forms::Button^  buttonCancelGood;
	private: System::Windows::Forms::Button^  buttonSaveGood;
	private: System::Windows::Forms::Label^  labelGUnitOfMeasurement;
	private: System::Windows::Forms::Label^  labelGCategory;
	private: System::Windows::Forms::Label^  labelGBarcode;
	private: System::Windows::Forms::Label^  labelGName;
	private: System::Windows::Forms::TextBox^  textBoxGName;
	private: System::Windows::Forms::Label^  labelGood;
	private: System::Windows::Forms::ComboBox^  comboBoxGCategory;
	private: System::Windows::Forms::ComboBox^  comboBoxGUnitOfMeasurement;
	private: System::Windows::Forms::Panel^  panelAddOrEditTransaction;
	private: System::Windows::Forms::ComboBox^  comboBoxTWName;
	private: System::Windows::Forms::Label^  labelTWName;
	private: System::Windows::Forms::ComboBox^  comboBoxTDCId;
	private: System::Windows::Forms::Button^  buttonCancelTransaction;
	private: System::Windows::Forms::Button^  buttonSaveTransaction;
	private: System::Windows::Forms::Label^  labelTDateTime;
	private: System::Windows::Forms::Label^  labelTDCId;
	private: System::Windows::Forms::Label^  labelTransaction;
	private: System::Windows::Forms::DateTimePicker^  dateTimePickerTTime;
	private: System::Windows::Forms::DateTimePicker^  dateTimePickerTDate;
	private: System::ComponentModel::IContainer^  components;

	private: Button^  previousPressedTab;
	private: bool pressedMenuButton;
	private: bool pressedSelectionsButton;
	private: Point^ mouseOffset;
	private: int page;
	private: int editingRowIndexInDGV;
	private: DataGridViewRow^ editingRow;
	private: String^ addOrEditButtonValue;
	private: Panel^ currentAddOrEditPanel;

	private: void saveChanges() {
				 if (dataSet->HasChanges()) {
					 dropAdditionalColumns();
					 oleDbDataAdapterManufacturers->Update(manufacturers);
					 oleDbDataAdapterDepartments->Update(departments);
					 oleDbDataAdapterGoods->Update(goods);
					 oleDbDataAdapterDiscountCards->Update(discount_cards);
					 oleDbDataAdapterWorkers->Update(workers);
					 oleDbDataAdapterInvoice->Update(invoice);
					 oleDbDataAdapterSupplies->Update(supplies);
					 oleDbDataAdapterTransactions->Update(transactions);
					 oleDbDataAdapterSelling->Update(selling);
					 dataSet->AcceptChanges();
					 addAdditionalColumns();
					 previousPressedTab->Enabled = true;
					 previousPressedTab->PerformClick();
				 }
			 }

	private: void closeWithoutChanges() {
				 dataSet->RejectChanges();
				 Application::Exit();
			 }

	private: void deletingSelected() {
				 String ^ message;
				 if (dataGridView1->SelectedRows->Count != 0) {
					 if (dataGridView1->SelectedRows->Count == 1)
						 message = "Видалити запис?";
					 else message = "Видалити записи? (" + dataGridView1->SelectedRows->Count + " шт.)";
					 System::Windows::Forms::DialogResult dialogResult = MessageBox::Show(message, "Видалення", 
						 MessageBoxButtons::OKCancel, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button2);
					 if (dialogResult == System::Windows::Forms::DialogResult::OK)
						 for each(DataGridViewRow ^ row in dataGridView1->SelectedRows)
							 dataGridView1->Rows->RemoveAt(row->Index);
				 }
				 else {
					 MessageBox::Show("Оберіть запис для видалення!", "", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 }
			 }

	private: void addAdditionalColumns() {
				 DataColumn^ g_manufacturer = goods->Columns->Add("g_manufacturer", System::Type::GetType("System.String"), "Parent(manufacturers_goods).m_name");
				 g_manufacturer->Caption = "Виробник";
				 DataColumn^ g_department = goods->Columns->Add("g_department", System::Type::GetType("System.String"), "Parent(departments_goods).d_name");
				 g_department->Caption = "Відділ";
				 DataColumn^ s_good = supplies->Columns->Add("s_good", System::Type::GetType("System.String"), "Parent(goods_supplies).g_name");
				 s_good->Caption = "Товар";
				 DataColumn^ sel_good = selling->Columns->Add("sel_good", System::Type::GetType("System.String"), "Parent(goods_selling).g_name");
				 sel_good->Caption = "Товар";
				 DataColumn^ w_department = workers->Columns->Add("w_department", System::Type::GetType("System.String"), "Parent(departments_workers).d_name");
				 w_department->Caption = "Відділ";
				 DataColumn^ i_worker = invoice->Columns->Add("i_worker", System::Type::GetType("System.String"), "Parent(workers_invoice).w_name");
				 i_worker->Caption = "Працівник";
				 DataColumn^ t_worker = transactions->Columns->Add("t_worker", System::Type::GetType("System.String"), "Parent(workers_transactions).w_name");
				 t_worker->Caption = "Працівник";
			 }

	private: void dropAdditionalColumns() {
				 goods->Columns->Remove("g_manufacturer");
				 goods->Columns->Remove("g_department");
				 supplies->Columns->Remove("s_good");
				 selling->Columns->Remove("sel_good");
				 workers->Columns->Remove("w_department");
				 invoice->Columns->Remove("i_worker");
				 transactions->Columns->Remove("t_worker");
			 }

	private: void displayTable (DataTable^ tempTable, Button^ tempButton) {
				 hideMenu();
				 if (previousPressedTab != nullptr) {
					 previousPressedTab->Enabled = true;
					 previousPressedTab->BackColor = System::Drawing::Color::White;
				 }
				 tempButton->Enabled = false;
				 tempButton->BackColor = System::Drawing::Color::FromArgb(255, 193, 7);
				 dataGridView1->ClearSelection();
				 for (int i = 0; i < tempTable->Columns->Count; i++)
					 dataGridView1->Columns[i]->HeaderText = tempTable->Columns[i]->Caption;
				 previousPressedTab = tempButton;
			 }

	private: void moveMenuPanelX() {
				 double currentX = panelMenu->Location.X;
				 double startX = panelMenu->Location.X;
				 double y = panelMenu->Location.Y;
				 if (pressedMenuButton) {
					 double endX = startX + panelMenu->Size.Width;
					 while (currentX <= endX) {
						 panelMenu->Location = Point(currentX, y);
						 currentX += 1;
					 }
				 }
				 else {
					 double endX = 0 - panelMenu->Size.Width;
					 currentX = startX;
					 while (currentX >= endX) {
						 panelMenu->Location = Point(currentX, y);
						 currentX -= 1;
					 }
				 }
			 }

	private: void moveSelectionsPanelX() {
				 if (pressedSelectionsButton)
					 panelSelections->Location = Point(panelMenu->Location.X + panelMenu->Size.Width, panelSelections->Location.Y);
				 else
					 panelSelections->Location = Point(0 - panelMenu->Size.Width, panelSelections->Location.Y);
			 }

	private: void hideMenu(){
				 pressedSelectionsButton = false;
				 moveSelectionsPanelX();
				 pressedMenuButton = false;
				 moveMenuPanelX();
			 }

	private: void movePanel(Control^ panel) {
				Point mousePos = MousePosition;
				mousePos.Offset(mouseOffset->X - this->Location.X, mouseOffset->Y - this->Location.Y);
				panel->Location = mousePos;
			}

#pragma region Selections
	private: DataTable^ mostPopularGoodsByDepartments() {
				 DataTable^ tempDataTable = gcnew DataTable();	
				 DataColumn^ department = tempDataTable->Columns->Add("department", System::Type::GetType("System.String"));
				 department->Caption = "Відділ";
				 DataColumn^ good = tempDataTable->Columns->Add("good", System::Type::GetType("System.String"));
				 good->Caption = "Товар";
				 DataColumn^ soldSupply = tempDataTable->Columns->Add("soldSupply", System::Type::GetType("System.Double"));
				 soldSupply->Caption = "Продано/Отримано %";
				 for (int iter = 0; iter < departments->Rows->Count; iter++) {
					 double suppliesSum = 0, soldSum = 0;
					 double maxPopularity = 0;
					 String^ mostPopularGood = nullptr;
					 if(departments->Rows[iter]->RowState!=DataRowState::Deleted) {
						 for (int i = 0; i < goods->Rows->Count; i++) {
							 if(goods->Rows[i]->RowState!=DataRowState::Deleted)
								 if(Convert::ToInt32(departments->Rows[iter]->ItemArray[0]) == Convert::ToInt32(goods->Rows[i]->ItemArray[4])){
									 for (int j = 0; j < supplies->Rows->Count; j++) {
										 if(supplies->Rows[j]->RowState!=DataRowState::Deleted)
											 if (Convert::ToInt32(supplies->Rows[j]->ItemArray[2]) == Convert::ToInt32(goods->Rows[i]->ItemArray[0]))
												 suppliesSum += Convert::ToDouble(supplies->Rows[j]->ItemArray[3]);
									 }
									 for (int j = 0; j < selling->Rows->Count; j++) {
										 if(selling->Rows[j]->RowState!=DataRowState::Deleted)
											 if (Convert::ToInt32(goods->Rows[i]->ItemArray[0]) == Convert::ToInt32(selling->Rows[j]->ItemArray[2]))
												soldSum += Convert::ToDouble(selling->Rows[j]->ItemArray[3]);
									 }
									 if (((soldSum>0?soldSum:0)/(suppliesSum>0?suppliesSum:1))>maxPopularity) {
										 maxPopularity = (soldSum>0?soldSum:0)/(suppliesSum>0?suppliesSum:1);
										 mostPopularGood = Convert::ToString(goods->Rows[i]->ItemArray[1]);
									 }
								 }
						 }
						 if(!Equals(mostPopularGood, nullptr))
							 tempDataTable->Rows->Add(departments->Rows[iter]->ItemArray[1], mostPopularGood, Math::Round(maxPopularity * 100, 2));
					 }
				 }
				 tempDataTable->DefaultView->Sort = "soldSupply DESC"; 
				 return tempDataTable;
			 }

	private: DataTable^ warehouseGoods(){
				 DataTable^ tempDataTable = gcnew DataTable();
				 DataColumn^ good = tempDataTable->Columns->Add("good", System::Type::GetType("System.String"));
				 good->Caption = "Товар";
				 DataColumn^ barcode = tempDataTable->Columns->Add("barcode", System::Type::GetType("System.String"));
				 barcode->Caption = "Штрих-Код";
				 DataColumn^ notSoldSum = tempDataTable->Columns->Add("notSoldSum", System::Type::GetType("System.Int32"));
				 notSoldSum->Caption = "Залишок";
				 for (int i = 0; i < goods->Rows->Count; i++) {
					 int soldSum = 0, suppliedSum = 0;
					 if(goods->Rows[i]->RowState!=DataRowState::Deleted) {
						 for (int j = 0; j < supplies->Rows->Count; j++)
							 if(supplies->Rows[j]->RowState!=DataRowState::Deleted)
								 if (Convert::ToInt32(supplies->Rows[j]->ItemArray[2]) == Convert::ToInt32(goods->Rows[i]->ItemArray[0]))
									 suppliedSum += Convert::ToDouble(supplies->Rows[j]->ItemArray[3]);
						 for (int j = 0; j < selling->Rows->Count; j++)
							 if(selling->Rows[j]->RowState!=DataRowState::Deleted)
								 if (Convert::ToInt32(goods->Rows[i]->ItemArray[0]) == Convert::ToInt32(selling->Rows[j]->ItemArray[2]))
									 soldSum += Convert::ToDouble(selling->Rows[j]->ItemArray[3]);
						 tempDataTable->Rows->Add(goods->Rows[i]->ItemArray[1], goods->Rows[i]->ItemArray[2], suppliedSum-soldSum);
					 }
				 }
				 tempDataTable->DefaultView->Sort = "notSoldSum"; 
				 return tempDataTable;
			 }

	private: DataTable^ cashierStatistics(){
				 DataTable^ tempDataTable = gcnew DataTable();
				 DataTable^ tempDateTimeTable = transactions->DefaultView->ToTable(true, "t_date_time");
				 for (int i = 0; i < tempDateTimeTable->Rows->Count; i++)
					 tempDateTimeTable->Rows[i]->ItemArray[0] = (Convert::ToDateTime(tempDateTimeTable->Rows[i]->ItemArray[0])).Date;
				 tempDateTimeTable = tempDateTimeTable->DefaultView->ToTable(true, "t_date_time");
				 DataColumn^ cashier = tempDataTable->Columns->Add("cashier", System::Type::GetType("System.String"));
				 cashier->Caption = "Касир";
				 DataColumn^ transactionsPerDay = tempDataTable->Columns->Add("transactionsPerDay", System::Type::GetType("System.Double"));
				 transactionsPerDay->Caption = "Транзакцій за день";
				 DataColumn^ unitsPerTransaction = tempDataTable->Columns->Add("unitsPerTransaction", System::Type::GetType("System.Double"));
				 unitsPerTransaction->Caption = "Одиниць товару за транзакцію";
				 for (int i = 0; i < workers->Rows->Count; i++) {
					 int soldAmount = 0, daysAmount = 0, transactionsAmount = 0;
					 if(workers->Rows[i]->RowState!=DataRowState::Deleted)
						 for (int j = 0; j < transactions->Rows->Count; j++)
							 if(transactions->Rows[j]->RowState!=DataRowState::Deleted)
								 if (Convert::ToInt32(transactions->Rows[j]->ItemArray[1]) == Convert::ToInt32(workers->Rows[i]->ItemArray[0])) {
									 transactionsAmount++;
									 for (int iter = 0; iter < tempDateTimeTable->Rows->Count; iter++)
										 if (tempDateTimeTable->Rows[iter]->RowState!=DataRowState::Deleted){
											 DateTime dateTransactions = (Convert::ToDateTime(transactions->Rows[j]->ItemArray[3])).Date;
											 DateTime dateTemp = (Convert::ToDateTime(tempDateTimeTable->Rows[iter]->ItemArray[0])).Date;
											 if ((Convert::ToDateTime(transactions->Rows[j]->ItemArray[3])).Date == (Convert::ToDateTime(tempDateTimeTable->Rows[iter]->ItemArray[0])).Date)
												 daysAmount++;
										 }
									 for (int iter = 0; iter < selling->Rows->Count; iter++)
										 if (selling->Rows[iter]->RowState!=DataRowState::Deleted)
											 if (Convert::ToInt32(transactions->Rows[j]->ItemArray[0]) == Convert::ToInt32(selling->Rows[iter]->ItemArray[1]))
												 soldAmount += Convert::ToInt32(selling->Rows[iter]->ItemArray[3]);
								 }
					 if (transactionsAmount != 0 && soldAmount != 0)
						 tempDataTable->Rows->Add(Convert::ToString(workers->Rows[i]->ItemArray[1]), Math::Round(double(transactionsAmount)/double(daysAmount == 0? 1 : daysAmount)), Math::Round(double(soldAmount)/double(transactionsAmount == 0? 1: transactionsAmount)));
				 }
				 tempDataTable->DefaultView->Sort = "transactionsPerDay, unitsPerTransaction DESC";
				 return tempDataTable;
			 }

	private: DataTable^ manufacturersBySuppliedGoodsAmount() {
				 DataTable^ tempDataTable = gcnew DataTable();
				 DataColumn^ manufacturer = tempDataTable->Columns->Add("manufacturer", System::Type::GetType("System.String"));
				 manufacturer->Caption = "Виробник";
				 DataColumn^ country = tempDataTable->Columns->Add("country", System::Type::GetType("System.String"));
				 country->Caption = "Країна";
				 DataColumn^ suppliedGoodsAmount = tempDataTable->Columns->Add("suppliedGoodsAmount", System::Type::GetType("System.Int32"));
				 suppliedGoodsAmount->Caption = "Кількість товарів";
				 for each(DataRow^ manufacturerRow in manufacturers->Rows) {
					 int suppliedAmount = 0;
					 if(manufacturerRow->RowState!=DataRowState::Deleted)
						 for each (DataRow^ goodRow in goods->Rows)
							 if(goodRow->RowState!=DataRowState::Deleted) {
								 if (Convert::ToInt32(goodRow->ItemArray[6]) == Convert::ToInt32(manufacturerRow->ItemArray[0]))
									 for each(DataRow^ suppliesRow in supplies->Rows)
										 if(suppliesRow->RowState!=DataRowState::Deleted)
											 if (Convert::ToInt32(suppliesRow->ItemArray[2]) == Convert::ToInt32(goodRow->ItemArray[0]))
												 suppliedAmount += Convert::ToDouble(suppliesRow->ItemArray[3]);
							 }
					 if (suppliedAmount != 0)
						 tempDataTable->Rows->Add(manufacturerRow->ItemArray[1], manufacturerRow->ItemArray[2], suppliedAmount);
				 }
				 tempDataTable->DefaultView->Sort = "suppliedGoodsAmount DESC"; 
				 return tempDataTable;
			 }

	private: DataTable^ transcactionCost(){
				 DataTable^ tempDataTable = gcnew DataTable();
				 DataColumn^ transactionId = tempDataTable->Columns->Add("transactionId", System::Type::GetType("System.Int32"));
				 transactionId->Caption = "Код транзакції";
				 DataColumn^ worker = tempDataTable->Columns->Add("worker", System::Type::GetType("System.String"));
				 worker->Caption = "Касир";
				 DataColumn^ dateTime = tempDataTable->Columns->Add("dateTime", System::Type::GetType("System.DateTime"));
				 dateTime->Caption = "Дата/Час";
				 DataColumn^ price = tempDataTable->Columns->Add("price", System::Type::GetType("System.Double"));
				 price->Caption = "Вартість";
				 DataColumn^ discount = tempDataTable->Columns->Add("discount", System::Type::GetType("System.String"));
				 discount->Caption = "Знижка";
				 DataColumn^ totalPrice = tempDataTable->Columns->Add("totalPrice", System::Type::GetType("System.Double"));
				 totalPrice->Caption = "Кінцева вартість";
				 for each(DataRow^ transactionRow in transactions->Rows) {
					 double soldSum = 0, dcPercent = 0;
					 if(transactionRow->RowState!=DataRowState::Deleted) {
						 for each(DataRow^ discountRow in discount_cards->Rows)						 
							 if(discountRow->RowState!=DataRowState::Deleted)
								 if (!DBNull::Value->Equals(transactionRow->ItemArray[2]))
									 if (Convert::ToInt32(transactionRow->ItemArray[2]) == Convert::ToInt32(discountRow->ItemArray[0]))
										 dcPercent = Convert::ToDouble(discountRow->ItemArray[2]);
						 for each(DataRow^ soldRow in selling->Rows)
							 if(soldRow->RowState!=DataRowState::Deleted)
								 if (Convert::ToInt32(transactionRow->ItemArray[0]) == Convert::ToInt32(soldRow->ItemArray[1]))
									 for each(DataRow^ goodRow in goods->Rows)
										 if(goodRow->RowState!=DataRowState::Deleted)
											 if (Convert::ToInt32(goodRow->ItemArray[0]) == Convert::ToInt32(soldRow->ItemArray[2]))
												 soldSum = soldSum + Convert::ToDouble(soldRow->ItemArray[3]) * Convert::ToDouble(goodRow->ItemArray[7]);
						 if (soldSum != 0)
							 tempDataTable->Rows->Add(transactionRow->ItemArray[0], transactionRow->ItemArray[4], transactionRow->ItemArray[3],
								Math::Round(soldSum, 2), dcPercent == 0? nullptr : Convert::ToString(dcPercent), Math::Round(soldSum - soldSum/100 * dcPercent, 2));
					 }
				 }
				 return tempDataTable;
			 }
#pragma endregion

#pragma region Add or Edit Records
	private: void clearFields(Panel^ tempPanel) {
				 for each(Control^ c in tempPanel->Controls) {
					 if (c->GetType() == textBoxMName->GetType())
						 safe_cast<TextBox^>(c)->Clear();
					 else if (c->GetType() == comboBoxDShelvingType->GetType())
						 safe_cast<ComboBox^>(c)->SelectedIndex = -1;
					 else if (c->GetType() == dateTimePickerIDate->GetType()) {
						 if (safe_cast<DateTimePicker^>(c)->Format == System::Windows::Forms::DateTimePickerFormat::Time)
							 safe_cast<DateTimePicker^>(c)->Value = DateTime::Now;
						 else safe_cast<DateTimePicker^>(c)->Value = DateTime::Now.Date;
					 }
				 }
			 }

	private: void enableDisableAlmostEverything(bool trueFalse) {
				 buttonClose->Enabled = trueFalse;
				 buttonMenu->Enabled = trueFalse;
				 buttonDelete->Enabled = trueFalse;
				 buttonNewRecord->Enabled = trueFalse;
				 buttonEditRecord->Enabled = trueFalse;
			 }

	private: void closeAddOrEditPanel(Panel^ panel) {
				 panel->Visible = false;
				 clearFields(panel);
				 enableDisableAlmostEverything(true);
			 }

	private: void openAddOrEditPanel(Label^ label, String^ headerText, Button^ saveButton, Button^ cancelButton) {
				 hideMenu();
				 currentAddOrEditPanel = safe_cast<Panel^>(label->Parent);
				 currentAddOrEditPanel->Location = Point(this->Size.Width/2 - currentAddOrEditPanel->Size.Width/2, 
					 this->Size.Height/2 - currentAddOrEditPanel->Size.Height/2);
				 for each(Control^ c in label->Parent->Controls)
					 if (c->GetType() == comboBoxDShelvingType->GetType())
						 safe_cast<ComboBox^>(c)->SelectedIndex = -1;
				 enableDisableAlmostEverything(false);
				 label->Parent->Visible = true;
				 label->Text = headerText;
				 toolTipSave->SetToolTip(saveButton, "Зберегти");
				 toolTipCancel->SetToolTip(cancelButton, "Відміна");
			 }

	private: void fillComboBox(ComboBox^ comboBox, DataTable^ table, String^ checkValue, int checkColumnIndex, int valueColumnIndex) {
				 comboBox->Items->Clear();
				 for each (DataRow^ row in table->Rows) {
					 if (row->RowState != DataRowState::Deleted)
						 if (row->ItemArray[checkColumnIndex]->ToString()->Equals(checkValue))
							 comboBox->Items->Add(row->ItemArray[valueColumnIndex]->ToString());
				 }
			 }

	private: int editingRowIndexInTable(DataTable^ sourceTable) {
				 for (int i = 0; i < sourceTable->Rows->Count; i++)
					 if (sourceTable->Rows[i]->RowState != DataRowState::Deleted)
						 if (Convert::ToInt32(sourceTable->Rows[i]->ItemArray[0]) == Convert::ToInt32(editingRow->Cells[0]->Value))
							 return i;
			 }

	private: void backToEditingRow(Button^ tab) {
				 if (addOrEditButtonValue->Equals("edit")) {
					 if (previousPressedTab != tab) {
					 tab->PerformClick();
					 dataGridView1->Rows[editingRowIndexInDGV]->Selected = true;
					 editingRow = dataGridView1->Rows[editingRowIndexInDGV];
					 }
				 }
				 else tab->PerformClick();
			 }

	private: void saveManufacturer() {
				 if (!String::IsNullOrEmpty(textBoxMName->Text) &&
					 !String::IsNullOrEmpty(textBoxMCountry->Text) &&
					 !String::IsNullOrEmpty(textBoxMCity->Text) &&
					 !String::IsNullOrEmpty(textBoxMAddress->Text)&&
					 !String::IsNullOrEmpty(textBoxMPhone->Text)) {
						 if (checkManufacturer()) {
							 if (addOrEditButtonValue->Equals("edit"))
								 if (isEditedManufacturer()) {
									 editingRow->Cells[1]->Value = textBoxMName->Text;
									 editingRow->Cells[2]->Value = textBoxMCountry->Text;
									 editingRow->Cells[3]->Value = textBoxMCity->Text;
									 editingRow->Cells[4]->Value = textBoxMAddress->Text;
									 editingRow->Cells[5]->Value = textBoxMPhone->Text;
									 editingRow->Cells[6]->Value = textBoxMEmail->Text;
									 manufacturers->Rows[editingRowIndexInTable(manufacturers)]->EndEdit();
								 }
								 else
									 MessageBox::Show("Запис не змінено", "", MessageBoxButtons::OK, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button1);
							 else {
								 manufacturers->Rows->Add (nullptr, textBoxMName->Text, textBoxMCountry->Text, textBoxMCity->Text, textBoxMAddress->Text, textBoxMPhone->Text, 
									 String::IsNullOrEmpty(textBoxMPhone->Text)?textBoxMAddress->Text:nullptr);
								 closeAddOrEditPanel(panelAddOrEditManufacturer);
							 }
						 }
				 }
				 else MessageBox::Show("Заповніть обов'язкові поля, серед яких:\n- назва виробника\n- країна\n- місто\n- адреса\n- номер телефону", 
						 "Увага!", MessageBoxButtons::OK, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button1);
			 }

	private: void saveDepartment() {
				 if (!String::IsNullOrEmpty(textBoxDName->Text) &&
					 !String::IsNullOrEmpty(comboBoxDShelvingType->Text)) {
						 if (checkDepartment()) {
							 if (addOrEditButtonValue->Equals("edit"))
								 if (isEditedDepartment()) {
									 editingRow->Cells[1]->Value = textBoxDName->Text;
									 editingRow->Cells[2]->Value = comboBoxDShelvingType->Text;
									 departments->Rows[editingRowIndexInTable(departments)]->EndEdit();
								 }
								 else
									 MessageBox::Show("Запис не змінено", "", MessageBoxButtons::OK, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button1);
							 else {
								 departments->Rows->Add (nullptr, textBoxDName->Text, comboBoxDShelvingType->Text);
								 closeAddOrEditPanel(panelAddOrEditDepartment);
							 }
						 }
				 }
				 else
					 MessageBox::Show("Заповніть всі поля!", "Увага!", MessageBoxButtons::OK, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button1);
			 }

	private: void saveDiscountCard() {
				 if (!String::IsNullOrEmpty(textBoxDCClientName->Text) &&
					 !String::IsNullOrEmpty(textBoxDCPercentage->Text)) {
						 if (checkDiscountCard()) {
							 if (addOrEditButtonValue->Equals("edit"))
								 if (isEditedDiscountCard()) {
									 editingRow->Cells[1]->Value = textBoxDCClientName->Text;
									 editingRow->Cells[2]->Value = textBoxDCPercentage->Text;
									 discount_cards->Rows[editingRowIndexInTable(discount_cards)]->EndEdit();
								 }
								 else
									 MessageBox::Show("Запис не змінено", "", MessageBoxButtons::OK, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button1);
							 else {
								 discount_cards->Rows->Add (nullptr, textBoxDCClientName->Text, textBoxDCPercentage->Text);
								 closeAddOrEditPanel(panelAddOrEditDiscountCard);
							 }
						 }
				 }
				 else
					 MessageBox::Show("Заповніть всі поля!", "Увага!", MessageBoxButtons::OK, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button1);
			 }

	private: void saveInvoice() {
				 if (!String::IsNullOrEmpty(comboBoxIWName->Text)) {
					if (checkInvoice()) {
						if (addOrEditButtonValue->Equals("edit"))
							if (isEditedInvoice()) {
								for (int i = 0; i < workers->Rows->Count; i++)
									if ((comboBoxIWName->SelectedItem->Equals(workers->Rows[i]->ItemArray[1])) && (workers->Rows[i]->ItemArray[6]->Equals("менеджер закупівлі"))) {
										editingRow->Cells[1]->Value = workers->Rows[i]->ItemArray[0];
										editingRow->Cells[2]->Value = dateTimePickerIDate->Value.Date + dateTimePickerITime->Value.TimeOfDay;
										invoice->Rows[editingRowIndexInTable(invoice)]->EndEdit();
										break; 
									}
							}
							else
								MessageBox::Show("Запис не змінено", "", MessageBoxButtons::OK, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button1);
						else {
							for (int i = 0; i < workers->Rows->Count; i++)
								if ((comboBoxIWName->SelectedItem->Equals(workers->Rows[i]->ItemArray[1])) && (workers->Rows[i]->ItemArray[6]->Equals("менеджер закупівлі")))
									invoice->Rows->Add (nullptr, workers->Rows[i]->ItemArray[0], dateTimePickerIDate->Value.Date + dateTimePickerITime->Value.TimeOfDay);
							closeAddOrEditPanel(panelAddOrEditInvoice);
						}
					}
				 }
				 else MessageBox::Show("Заповніть всі поля!", "Увага!", MessageBoxButtons::OK, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button1);
			 }

	private: void saveSupply() {
				 if (!String::IsNullOrEmpty(comboBoxSIId->Text) &&
					 !String::IsNullOrEmpty(comboBoxSGId->Text) &&
					 !String::IsNullOrEmpty(textBoxSUnitsAmount->Text) &&
					 !String::IsNullOrEmpty(textBoxSPurchasePrice->Text)) {
						 if (checkSupply()) {
							 if (addOrEditButtonValue->Equals("edit"))
								 if (isEditedSupply()) {
									 for (int i = 0; i < goods->Rows->Count; i++)
										 if (comboBoxSGId->Text->Equals(goods->Rows[i]->ItemArray[1])) {
											 editingRow->Cells[1]->Value = comboBoxSIId->Text;
											 editingRow->Cells[2]->Value = goods->Rows[i]->ItemArray[0];
											 editingRow->Cells[3]->Value = textBoxSUnitsAmount->Text;
											 editingRow->Cells[4]->Value = textBoxSPurchasePrice->Text;
											 editingRow->Cells[5]->Value = dateTimePickerSExpirationDate->Value.Date;
											 supplies->Rows[editingRowIndexInTable(supplies)]->EndEdit();
											 break;
										 }
								 }
								 else
									 MessageBox::Show("Запис не змінено", "", MessageBoxButtons::OK, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button1);
							 else {
								 for (int i = 0; i < goods->Rows->Count; i++)
									 if (comboBoxSGId->Text->Equals(goods->Rows[i]->ItemArray[1]))
										 supplies->Rows->Add (nullptr, comboBoxSIId->Text, goods->Rows[i]->ItemArray[0], textBoxSUnitsAmount->Text, 
											 textBoxSPurchasePrice->Text, dateTimePickerSExpirationDate->Value.Date);
								 closeAddOrEditPanel(panelAddOrEditSupply);
							 }
						 }
				 }
				 else MessageBox::Show("Заповніть всі поля!", "Увага!", MessageBoxButtons::OK, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button1);
			 }

	private: void saveWorker() {
				 if (!String::IsNullOrEmpty(textBoxWName->Text) &&
					 !String::IsNullOrEmpty(comboBoxWJob->Text) &&
					 !String::IsNullOrEmpty(textBoxWSalary->Text)) {
						 if (checkWorker()) {
							 if (addOrEditButtonValue->Equals("edit"))
								 if (isEditedWorker()) {
									 for (int i = 0; i < departments->Rows->Count; i++) {
										 if (comboBoxWDId->Text->Equals(departments->Rows[i]->ItemArray[1])) {
											 editingRow->Cells[5]->Value = departments->Rows[i]->ItemArray[0];
											 break;
										 }
									 }
									 editingRow->Cells[1]->Value = textBoxWName->Text;
									 editingRow->Cells[2]->Value = dateTimePickerWEmploymentDate->Value.Date;
									 if (dateTimePickerWFiringDate->Checked == true)
										 editingRow->Cells[3]->Value = dateTimePickerWFiringDate->Value.Date;
									 else editingRow->Cells[3]->Value = DBNull::Value;
									 editingRow->Cells[4]->Value = dateTimePickerWBirthDate->Value.Date;
									 editingRow->Cells[6]->Value = comboBoxWJob->Text;
									 editingRow->Cells[7]->Value = comboBoxWEducation->Text;
									 editingRow->Cells[8]->Value = textBoxWSalary->Text;
									 workers->Rows[editingRowIndexInTable(workers)]->EndEdit();
								 }
								 else
									 MessageBox::Show("Запис не змінено", "", MessageBoxButtons::OK, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button1);
							 else {
								 int departmentId = -1;
								 for (int i = 0; i < departments->Rows->Count; i++)
									 if (comboBoxWDId->Text->Equals(departments->Rows[i]->ItemArray[1])) {
										 departmentId = Convert::ToInt32(departments->Rows[i]->ItemArray[0]);
									 }
									 if (dateTimePickerWFiringDate->Checked == true)
										 workers->Rows->Add (nullptr, textBoxWName->Text, dateTimePickerWEmploymentDate->Value.Date, dateTimePickerWFiringDate->Value.Date, 
										 dateTimePickerWBirthDate->Value.Date, departmentId < 0? nullptr : Convert::ToString(departmentId), comboBoxWJob->Text, 
										 String::IsNullOrEmpty(textBoxMPhone->Text)?comboBoxWEducation->Text:nullptr, textBoxWSalary->Text);
									 else
										 workers->Rows->Add (nullptr, textBoxWName->Text, dateTimePickerWEmploymentDate->Value.Date, DBNull::Value, 
										 dateTimePickerWBirthDate->Value.Date, departmentId < 0? nullptr : Convert::ToString(departmentId), comboBoxWJob->Text, 
										 String::IsNullOrEmpty(textBoxMPhone->Text)?comboBoxWEducation->Text:nullptr, textBoxWSalary->Text);
								 closeAddOrEditPanel(panelAddOrEditWorker);
							 }
						 }
				 }
				 else MessageBox::Show("Заповніть обов'язкові поля, серед яких:\n- ПІБ працівника\n- Посада\n- Оклад", "Увага!", MessageBoxButtons::OK, MessageBoxIcon::Warning, 
					 MessageBoxDefaultButton::Button1);
			 }

	private: void saveSelling() {
				 if (!String::IsNullOrEmpty(comboBoxSelTId->Text) && !String::IsNullOrEmpty(comboBoxSelTId->Text) && !String::IsNullOrEmpty(textBoxSelUnitsAmount->Text)) {
						 if (checkSelling()) {
							 if (addOrEditButtonValue->Equals("edit"))
								 if (isEditedSelling()) {
									 for (int i = 0; i < goods->Rows->Count; i++)
										 if (comboBoxSelGId->SelectedItem->Equals(goods->Rows[i]->ItemArray[1])) {
											 editingRow->Cells[1]->Value = comboBoxSelTId->Text;
											 editingRow->Cells[2]->Value = goods->Rows[i]->ItemArray[0];
											 editingRow->Cells[3]->Value = textBoxSelUnitsAmount->Text;
											 selling->Rows[editingRowIndexInTable(selling)]->EndEdit();
											 break; 
										 }
								 }
								 else
									 MessageBox::Show("Запис не змінено", "", MessageBoxButtons::OK, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button1);
							 else {
								 for (int i = 0; i < goods->Rows->Count; i++) {
									 if (comboBoxSelGId->SelectedItem->Equals(goods->Rows[i]->ItemArray[1])) {
										 selling->Rows->Add(nullptr, comboBoxSelTId->Text, goods->Rows[i]->ItemArray[0], textBoxSelUnitsAmount->Text);
										 break; 
									 }
								 }
								 closeAddOrEditPanel(panelAddOrEditSelling);
							 }
						 }
				 }
				 else MessageBox::Show("Заповніть всі поля!", "Увага!", MessageBoxButtons::OK, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button1);
			 }

	private: void saveGood() {
				 if (!String::IsNullOrEmpty(textBoxGName->Text) && !String::IsNullOrEmpty(textBoxGBarcode->Text) &&
					 !String::IsNullOrEmpty(comboBoxGCategory->Text) && !String::IsNullOrEmpty(comboBoxGUnitOfMeasurement->Text) &&
					 !String::IsNullOrEmpty(textBoxGRetailPrice->Text) && !String::IsNullOrEmpty(comboBoxGMId->Text) &&
					 !String::IsNullOrEmpty(comboBoxGDId->Text)) {
						 if (checkGood()) {
							 if (addOrEditButtonValue->Equals("edit"))
								 if (isEditedGood()) {
									 for (int i = 0; i < departments->Rows->Count; i++) {
										 if (comboBoxGDId->Text->Equals(departments->Rows[i]->ItemArray[1])) {
											 editingRow->Cells[4]->Value = departments->Rows[i]->ItemArray[0];
											 break; 
										 }
									 }
									 for (int i = 0; i < manufacturers->Rows->Count; i++) {
										 if (comboBoxGMId->Text->Equals(manufacturers->Rows[i]->ItemArray[1])) {
											 editingRow->Cells[6]->Value = manufacturers->Rows[i]->ItemArray[0];
											 break; 
										 }
									 }
									 editingRow->Cells[1]->Value = textBoxGName->Text;
									 editingRow->Cells[2]->Value = textBoxGBarcode->Text;
									 editingRow->Cells[3]->Value = comboBoxGCategory->Text;
									 editingRow->Cells[5]->Value = comboBoxGUnitOfMeasurement->Text;
									 editingRow->Cells[7]->Value = textBoxGRetailPrice->Text;
									 goods->Rows[editingRowIndexInTable(goods)]->EndEdit();
								 }
								 else
									 MessageBox::Show("Запис не змінено", "", MessageBoxButtons::OK, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button1);
							 else {
								 int department, manufacturer;
								 for (int i = 0; i < departments->Rows->Count; i++) {
									 if (comboBoxGDId->Text->Equals(departments->Rows[i]->ItemArray[1])) {
										 department = Convert::ToInt32(departments->Rows[i]->ItemArray[0]);
										 break; 
									 }
								 }
								 for (int i = 0; i < manufacturers->Rows->Count; i++) {
									 if (comboBoxGMId->Text->Equals(manufacturers->Rows[i]->ItemArray[1])) {
										 manufacturer = Convert::ToInt32(manufacturers->Rows[i]->ItemArray[0]);
										 break; 
									 }
								 }
								 goods->Rows->Add (nullptr, textBoxGName->Text, textBoxGBarcode->Text, comboBoxGCategory->Text, department, comboBoxGUnitOfMeasurement->Text,
									 manufacturer, textBoxGRetailPrice->Text);
								 closeAddOrEditPanel(panelAddOrEditGood);
							 }
						 }
				 }
				 else MessageBox::Show("Заповніть всі поля!", "Увага!", MessageBoxButtons::OK, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button1);
			 }

	private: void saveTransaction() {
				 if (!String::IsNullOrEmpty(comboBoxTWName->Text)) {
					if (checkTransaction()) {
						if (addOrEditButtonValue->Equals("edit"))
							if (isEditedTransaction()) {
								for (int i = 0; i < workers->Rows->Count; i++)
									if ((comboBoxTWName->SelectedItem->Equals(workers->Rows[i]->ItemArray[1])) && (workers->Rows[i]->ItemArray[6]->Equals("касир"))) {
										editingRow->Cells[1]->Value = workers->Rows[i]->ItemArray[0];
										if (!String::IsNullOrEmpty(comboBoxTDCId->Text))
											editingRow->Cells[2]->Value = comboBoxTDCId->Text;
										else editingRow->Cells[2]->Value = DBNull::Value;
										editingRow->Cells[3]->Value = dateTimePickerTDate->Value.Date + dateTimePickerTTime->Value.TimeOfDay;
										transactions->Rows[editingRowIndexInTable(transactions)]->EndEdit();
										break; 
									}
							}
							else
								MessageBox::Show("Запис не змінено", "", MessageBoxButtons::OK, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button1);
						else {
							for (int i = 0; i < workers->Rows->Count; i++)
								if ((comboBoxTWName->SelectedItem->Equals(workers->Rows[i]->ItemArray[1])) && (workers->Rows[i]->ItemArray[6]->Equals("касир"))) {
									if (!String::IsNullOrEmpty(comboBoxTDCId->Text))
										transactions->Rows->Add (nullptr, workers->Rows[i]->ItemArray[0], comboBoxTDCId->Text,
										dateTimePickerTDate->Value.Date + dateTimePickerTTime->Value.TimeOfDay);
									else transactions->Rows->Add (nullptr, workers->Rows[i]->ItemArray[0], DBNull::Value,
										dateTimePickerTDate->Value.Date + dateTimePickerTTime->Value.TimeOfDay);
								}
							closeAddOrEditPanel(panelAddOrEditTransaction);
						}
					}
				 }
				 else MessageBox::Show("Заповніть поле \"Касир\"!", "Увага!", MessageBoxButtons::OK, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button1);
			 }

#pragma region Checks
	private: bool uniqueValue(TextBox^ checkingTextBox, DataTable^ sourceTable, DataColumn^ sourceColumn) {
				 int editingRowIndex = editingRowIndexInTable(sourceTable);
				 for (int i = 0; i < sourceTable->Rows->Count; i++)
					 if (sourceTable->Rows[i]->RowState != DataRowState::Deleted)
						 if (editingRowIndex != i && !String::IsNullOrEmpty(checkingTextBox->Text))
						 	 if (sourceTable->Rows[i]->ItemArray[sourceColumn->Ordinal]->ToString()->Equals(checkingTextBox->Text))
								 return false;
				 return true;
			 }

	private: String^ lastSymbol(TextBox^ checkingTextBox, Char forbiddenSymbol, Label^ checkingTextBoxLabel) {
				 if (checkingTextBox->TextLength != 0)
					 if (checkingTextBox->TextLength-1 == checkingTextBox->Text->LastIndexOf(forbiddenSymbol))
						 return "Символ '" + forbiddenSymbol +"' не може бути останнім в полі \"" + checkingTextBoxLabel->Text + "\"";
				 return nullptr;
			 }

	private: bool checkManufacturer() {
				 String ^ message;
				 if(!uniqueValue(textBoxMName, manufacturers, m_name))
					 message = "Таке значення поля \"Назва виробника\" вже існує!";
				 else if(textBoxMCountry->TextLength < 3)
					 message = "Назва країни повинна бути не менше 3 символів!";
				 else if(!uniqueValue(textBoxMAddress, manufacturers, m_address))
					 message = "Таке значення поля \"Адреса\" вже існує!";
				 else if(lastSymbol(textBoxMAddress, '/', labelMAddress) != nullptr)
					 message = lastSymbol(textBoxMAddress, '/', labelMAddress);
				 else if(lastSymbol(textBoxMAddress, ',', labelMAddress) != nullptr)
					 message = lastSymbol(textBoxMAddress, ',', labelMAddress);
				 else if(!uniqueValue(textBoxMPhone, manufacturers, m_phone_number))
					 message = "Таке значення поля \"Номер телефону\" вже існує!";
				 else if(lastSymbol(textBoxMPhone, '+', labelMPhone) != nullptr)
					 message = lastSymbol(textBoxMPhone, '+', labelMPhone);
				 else if(lastSymbol(textBoxMPhone, '-', labelMPhone) != nullptr)
					 message = lastSymbol(textBoxMPhone, '-', labelMPhone);
				 else if(!uniqueValue(textBoxMEmail, manufacturers, m_email))
					 message = "Таке значення поля \"E-mail\" вже існує!";
				 else if(lastSymbol(textBoxMEmail, '@', labelMEmail) != nullptr)
					 message = lastSymbol(textBoxMEmail, '@', labelMEmail);
				 else if(lastSymbol(textBoxMEmail, '.', labelMEmail) != nullptr)
					 message = lastSymbol(textBoxMEmail, '.', labelMEmail);
				 else if ((textBoxMEmail->TextLength != 0) && textBoxMEmail->Text->IndexOf('.') == -1)
					 message = "Невірний формат запису E-mail!\nE-mail повинен містити '@' і хоча б одну крапку";
				 else {
					 int digitsAmount = 0;
					 for (int i = 0; i < textBoxMPhone->TextLength; i++)
						 if(Char::IsDigit(textBoxMPhone->Text[i]))
							 digitsAmount++;
					 if(digitsAmount < 3)
						 message = "Номер телефону повинен містити не менше трьох цифр!";
				 }
				 if (message != nullptr) {
					 MessageBox::Show(message, "Помилка вводу", MessageBoxButtons::OK, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button1);
					 return false;
				 }
				 else 
					 return true;
			 }

	private: bool checkDepartment() {
				 String ^ message;
				 if(!uniqueValue(textBoxDName, departments, d_name))
					 message = "Таке значення поля \"Назва відділу\" вже існує!";
				 else if(comboBoxDShelvingType->SelectedIndex == -1)
					 message = "Введене значення поля \"Тип стелажів\" не належить списку!";
				 if (message != nullptr) {
					 MessageBox::Show(message, "Помилка вводу", MessageBoxButtons::OK, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button1);
					 return false;
				 }
				 else 
					 return true;
			 }

	private: bool checkDiscountCard() {
				 String ^ message;
				 if(lastSymbol(textBoxDCPercentage, ',', labelDCPercentage) != nullptr)
					 message = lastSymbol(textBoxDCPercentage, ',', labelDCPercentage);
				 else if (Convert::ToDouble(textBoxDCPercentage->Text) > 100)
					 message = "Відсоток знижки не може бути більшим, ніж 100!";
				 if (message != nullptr) {
				 MessageBox::Show(message, "Помилка вводу", MessageBoxButtons::OK, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button1);
					 return false;
				 }
				 else 
					 return true;
			 }

	private: bool checkInvoice() {
				 String ^ message;
				 if(comboBoxIWName->SelectedIndex == -1)
					 message = "Введене значення поля \"Працівник\" не належить списку!";
				 else {
					 int currentRecordIndex = addOrEditButtonValue->Equals("edit")? editingRowIndexInTable(invoice) : invoice->Rows->Count;
					 DateTime^ currentInvoiceDateTime = dateTimePickerIDate->Value.Date + dateTimePickerITime->Value.TimeOfDay;
					 for (int i = 0; i < workers->Rows->Count; i++)
						 if ((comboBoxIWName->SelectedItem->Equals(workers->Rows[i]->ItemArray[1])) && (workers->Rows[i]->ItemArray[6]->Equals("менеджер закупівлі"))) {
							 if (Convert::ToDateTime(workers->Rows[i]->ItemArray[2]) > dateTimePickerIDate->Value.Date)
								 message = "Дата накладної не може бути меншою, аніж дата прийняття менеджера на роботу";
							 else if (!DBNull::Value->Equals(workers->Rows[i]->ItemArray[3]))
								 if (Convert::ToDateTime(workers->Rows[i]->ItemArray[3]) < dateTimePickerIDate->Value.Date)
									 message = "Дата накладної не може бути більшою, аніж дата звільнення менеджера з роботи";
						 }
					 if (message == nullptr)
						 for (int i = currentRecordIndex-1; i >= 0 ; i--)
							 if (invoice->Rows[i]->RowState != DataRowState::Deleted) {
								 if (currentInvoiceDateTime->CompareTo(Convert::ToDateTime(invoice->Rows[i]->ItemArray[2])) < 0)
									 message = "Дата накладної не може бути меншою, ніж дата попередньої накладної";
								 break;
							 }
					 if ((message == nullptr) && addOrEditButtonValue->Equals("edit"))
						 for (int i = currentRecordIndex + 1; i < invoice->Rows->Count; i++)
							 if (invoice->Rows[i]->RowState != DataRowState::Deleted) {
								 if (currentInvoiceDateTime->CompareTo(Convert::ToDateTime(invoice->Rows[i]->ItemArray[2])) > 0) {
									 message = "Дата накладної не може бути більшою, ніж дата наступної накладної";
									 break;
								 }
							 }
					 if (message == nullptr)
						 for (int i = 0; i < invoice->Rows->Count; i++)
							 if (invoice->Rows[i]->RowState != DataRowState::Deleted)
								 if ((currentInvoiceDateTime->CompareTo(Convert::ToDateTime(invoice->Rows[i]->ItemArray[2])) == 0) &&
									 comboBoxIWName->Text->Equals(Convert::ToString(invoice->Rows[i]->ItemArray[3]))) {
									 message = "Працівник не може одночасно приймати більше однієї накладної";
									 break;
								 }
				 }
				 if (message != nullptr) {
				 MessageBox::Show(message, "Помилка вводу", MessageBoxButtons::OK, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button1);
					 return false;
				 }
				 else 
					 return true;
			 }

	private: bool checkSupply() {
				 String ^ message;
				 if (comboBoxSIId->SelectedIndex == -1)
					 message = "Введене значення поля \"Код накладної\" не належить списку!";						 
				 else if (comboBoxSGId->SelectedIndex == -1)
					 message = "Введене значення поля \"Товар\" не належить списку!";
				 else if(lastSymbol(textBoxSPurchasePrice, ',', labelSPurchasePrice) != nullptr)
					 message = lastSymbol(textBoxSPurchasePrice, ',', labelSPurchasePrice);
				 else for (int i = 0; i < invoice->Rows->Count; i++) {
					 if (invoice->Rows[i]->RowState != DataRowState::Deleted)
						 if (Convert::ToInt32(comboBoxSIId->Text) == Convert::ToInt32(invoice->Rows[i]->ItemArray[0]))
							 if (dateTimePickerSExpirationDate->Value.CompareTo(Convert::ToDateTime(invoice->Rows[i]->ItemArray[2])) < 0)
								 message = "Термін зберігання не може бути меншим, ніж дата накладної!";
				 }
				 if (message != nullptr) {
				 MessageBox::Show(message, "Помилка вводу", MessageBoxButtons::OK, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button1);
					 return false;
				 }
				 else 
					 return true;
			 }

	private: bool checkWorker() {
				 String ^ message;
				 if (comboBoxWJob->SelectedIndex == -1)
					 message = "Введене значення поля \"Посада\" не належить списку!";						 
				 else if ((comboBoxWEducation->Text->Length != 0) && (comboBoxWEducation->SelectedIndex == -1))
					 message = "Введене значення поля \"Освіта\" не належить списку!";
				 else if(lastSymbol(textBoxWSalary, ',', labelWSalary) != nullptr)
					 message = lastSymbol(textBoxWSalary, ',', labelWSalary);
				 else if (Convert::ToDouble(textBoxWSalary->Text) < 3200)
					 message = "Мінімальний оклад в Україні становить 3200грн!";						 
				 else if ((comboBoxWDId->Text->Length != 0) && (comboBoxWDId->SelectedIndex == -1))
					 message = "Введене значення поля \"Відділ\" не належить списку!";
				 else if ((dateTimePickerWEmploymentDate->Value.Date - dateTimePickerWBirthDate->Value.Date) < TimeSpan::FromDays(16*365.25))
					 message = "Вік працівника не може бути менше 16-ти років на момент прийому на роботу!";
				 else if ((dateTimePickerWEmploymentDate->Value.Date - dateTimePickerWBirthDate->Value.Date) >= TimeSpan::FromDays(60*365.25))
					 message = "Вік працівника не може перевищувати 60 років на момент прийому на роботу!";
				 else if (dateTimePickerWFiringDate->Checked != false) {
					 if (dateTimePickerWEmploymentDate->Value.Date.CompareTo(dateTimePickerWFiringDate->Value.Date) >= 0)
						 message = "Дата звільнення повинна бути більшою, аніж дата прийняття на роботу!";
					 else {
						 for (int i = invoice->Rows->Count - 1; i >= 0; i--) {
							 if (invoice->Rows[i]->ItemArray[3]->ToString()->Equals(textBoxWName->Text))
								 if (Convert::ToDateTime(invoice->Rows[i]->ItemArray[2]).CompareTo(dateTimePickerWFiringDate->Value.Date) > 0) {
									 message = "Працівник не може бути звільнений раніше, аніж він прийняв накладну!";
									 break;
								 }
						 }
						 for (int i = transactions->Rows->Count - 1; i >= 0; i--) {
							 if (transactions->Rows[i]->ItemArray[4]->ToString()->Equals(textBoxWName->Text))
								 if (Convert::ToDateTime(transactions->Rows[i]->ItemArray[3]).CompareTo(dateTimePickerWFiringDate->Value.Date) > 0) {
									 message = "Працівник не може бути звільнений раніше, аніж він здійснив транзакцію!";
									 break;
								 }
						 }
					 }
				 }
				 if (message != nullptr) {
					 MessageBox::Show(message, "Помилка вводу", MessageBoxButtons::OK, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button1);
					 return false;
				 }
				 else 
					 return true;
			 }

	private: bool checkSelling() {
				 String ^ message;
				 if (comboBoxSelTId->SelectedIndex == -1)
					 message = "Введене значення поля \"Код транзакції\" не належить списку!";
				 else if (comboBoxSelGId->SelectedIndex == -1)
					 message = "Введене значення поля \"Товар\" не належить списку!";
				 else {
					 DataTable^ tempCheckTable = warehouseGoods();
					 for each (DataRow^ checkRow in tempCheckTable->Rows) {
						 if (comboBoxSelGId->Text->Equals(checkRow->ItemArray[0])) {
							 if (Convert::ToInt32(textBoxSelUnitsAmount->Text) > Convert::ToInt32(checkRow->ItemArray[2]))
								 message = "Неможливо продату товару більше, аніж є в наявності!";
						 }
					 }
				 }
				 if (message != nullptr) {
					 MessageBox::Show(message, "Помилка вводу", MessageBoxButtons::OK, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button1);
					 return false;
				 }
				 else 
					 return true;
			 }

	private: bool checkGood() {
				 String ^ message;
				 if (textBoxGBarcode->TextLength < 8)
					 message = "Кількість цифр штрих-коду не може бути меншою, аніж 8!";
				 else if (comboBoxGCategory->SelectedIndex == -1)
					 message = "Введене значення поля \"Категорія\" не належить списку!";
				 else if (comboBoxGUnitOfMeasurement->SelectedIndex == -1)
					 message = "Введене значення поля \"Одиниця виміру\" не належить списку!";
				 else if(lastSymbol(textBoxGRetailPrice, ',', labelGRetailPrice) != nullptr)
					 message = lastSymbol(textBoxGRetailPrice, ',', labelGRetailPrice);
				 else if (comboBoxGMId->SelectedIndex == -1)
					 message = "Введене значення поля \"Виробник\" не належить списку!";
				 else if (comboBoxGDId->SelectedIndex == -1)
					 message = "Введене значення поля \"Відділ\" не належить списку!";
				 if (message != nullptr) {
					 MessageBox::Show(message, "Помилка вводу", MessageBoxButtons::OK, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button1);
					 return false;
				 }
				 else 
					 return true;
			 }

	private: bool checkTransaction() {
				 String ^ message;
				 if(comboBoxTWName->SelectedIndex == -1)
					 message = "Введене значення поля \"Касир\" не належить списку!";
				 else if((comboBoxTDCId->Text->Length != 0) && (comboBoxTDCId->SelectedIndex == -1))
					 message = "Введене значення поля \"Код дисконтної картки\" не належить списку!";
				 else {
					 int currentRecordIndex = addOrEditButtonValue->Equals("edit")? editingRowIndexInTable(transactions) : transactions->Rows->Count;
					 DateTime^ currentTransactionDateTime = dateTimePickerTDate->Value.Date + dateTimePickerTTime->Value.TimeOfDay;
					 for (int i = 0; i < workers->Rows->Count; i++)
						 if ((comboBoxTWName->SelectedItem->Equals(workers->Rows[i]->ItemArray[1])) && (workers->Rows[i]->ItemArray[6]->Equals("касир"))) {
							 if (Convert::ToDateTime(workers->Rows[i]->ItemArray[2]) > dateTimePickerTDate->Value.Date)
								 message = "Дата транзакції не може бути меншою, аніж дата прийняття касира на роботу";
							 else if (!DBNull::Value->Equals(workers->Rows[i]->ItemArray[3]))
								 if (Convert::ToDateTime(workers->Rows[i]->ItemArray[3]) < dateTimePickerTDate->Value.Date)
									 message = "Дата транзакції не може бути більшою, аніж дата звільнення касира з роботи";
						 }
					 if (message == nullptr)
						 for (int i = currentRecordIndex-1; i >= 0 ; i--)
							 if (transactions->Rows[i]->RowState != DataRowState::Deleted) {
								 if (currentTransactionDateTime->CompareTo(Convert::ToDateTime(transactions->Rows[i]->ItemArray[3])) < 0)
									 message = "Дата транзакції не може бути меншою, ніж дата попередньої транзакції";
								 break;
							 }
					 if ((message == nullptr) && addOrEditButtonValue->Equals("edit"))
						 for (int i = currentRecordIndex + 1; i < transactions->Rows->Count; i++)
							 if (transactions->Rows[i]->RowState != DataRowState::Deleted) {
								 if (currentTransactionDateTime->CompareTo(Convert::ToDateTime(transactions->Rows[i]->ItemArray[3])) > 0) {
									 message = "Дата транзакції не може бути більшою, ніж дата наступної транзакції";
									 break;
								 }
							 }
					 if (message == nullptr)
						 for (int i = 0; i < transactions->Rows->Count; i++)
							 if (transactions->Rows[i]->RowState != DataRowState::Deleted)
								 if ((currentTransactionDateTime->CompareTo(Convert::ToDateTime(transactions->Rows[i]->ItemArray[3])) == 0) &&
									 comboBoxTWName->Text->Equals(Convert::ToString(transactions->Rows[i]->ItemArray[3]))) {
									 message = "Касир не може одночасно здійснювати більше однієї транзакції";
									 break;
								 }
				 }
				 if (message != nullptr) {
				 MessageBox::Show(message, "Помилка вводу", MessageBoxButtons::OK, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button1);
					 return false;
				 }
				 else 
					 return true;
			 }
#pragma endregion

#pragma region Edit Records
	private: void editManufacturer() {
				 openAddOrEditPanel(labelManufacturer, "Редагувати виробника №" + Convert::ToString(editingRow->Cells[0]->Value), buttonSaveManufacturer,
					 buttonCancelManufacturer);
				 textBoxMName->Text = editingRow->Cells[1]->Value->ToString();
				 textBoxMCountry->Text = Convert::ToString(editingRow->Cells[2]->Value);
				 textBoxMCity->Text = Convert::ToString(editingRow->Cells[3]->Value);
				 textBoxMAddress->Text = Convert::ToString(editingRow->Cells[4]->Value);
				 textBoxMPhone->Text = Convert::ToString(editingRow->Cells[5]->Value);
				 textBoxMEmail->Text = Convert::ToString(editingRow->Cells[6]->Value);
			 }

	private: bool isEditedManufacturer() {
				 if (Convert::ToString(editingRow->Cells[1]->Value)->Equals(textBoxMName->Text) && 
					 Convert::ToString(editingRow->Cells[2]->Value)->Equals(textBoxMCountry->Text) &&
					 Convert::ToString(editingRow->Cells[3]->Value)->Equals(textBoxMCity->Text) &&
					 Convert::ToString(editingRow->Cells[4]->Value)->Equals(textBoxMAddress->Text) &&
					 Convert::ToString(editingRow->Cells[5]->Value)->Equals(textBoxMPhone->Text) &&
					 Convert::ToString(editingRow->Cells[6]->Value)->Equals(textBoxMEmail->Text))
					 return false;
				 else return true;
	}

	private: void editDepartment() {
				 openAddOrEditPanel(labelDepartment, "Редагувати відділ №" + Convert::ToString(editingRow->Cells[0]->Value), buttonSaveDepartment,
					 buttonCancelDepartment);
				 textBoxDName->Text = editingRow->Cells[1]->Value->ToString();
				 comboBoxDShelvingType->Text = Convert::ToString(editingRow->Cells[2]->Value);
			 }

	private: bool isEditedDepartment() {
				 if (Convert::ToString(editingRow->Cells[1]->Value)->Equals(textBoxDName->Text) && 
					 Convert::ToString(editingRow->Cells[2]->Value)->Equals(comboBoxDShelvingType->Text))
					 return false;
				 else return true;
	}

	private: void editDiscountCard() {
				 openAddOrEditPanel(labelDiscountCard, "Редагувати дисконтну картку №" + Convert::ToString(editingRow->Cells[0]->Value), buttonSaveDiscountCard,
					 buttonCancelDiscountCard);
				 textBoxDCClientName->Text = editingRow->Cells[1]->Value->ToString();
				 textBoxDCPercentage->Text = Convert::ToString(editingRow->Cells[2]->Value);
			 }

	private: bool isEditedDiscountCard() {
				 if (Convert::ToString(editingRow->Cells[1]->Value)->Equals(textBoxDCClientName->Text) && 
					 Convert::ToString(editingRow->Cells[2]->Value)->Equals(textBoxDCPercentage->Text))
					 return false;
				 else return true;
	}

	private: void editInvoice() {
				 fillComboBox(comboBoxIWName, workers, "менеджер закупівлі", 6, 1);
				 openAddOrEditPanel(labelInvoice, "Редагувати накладну №" + Convert::ToString(editingRow->Cells[0]->Value), buttonSaveInvoice,
					 buttonCancelInvoice);
				 comboBoxIWName->Text = editingRow->Cells[3]->Value->ToString();
				 dateTimePickerIDate->Value = (Convert::ToDateTime(editingRow->Cells[2]->Value)).Date;
				 dateTimePickerITime->Value = Convert::ToDateTime(editingRow->Cells[2]->Value);
			 }

	private: bool isEditedInvoice() {
				 if (editingRow->Cells[3]->Value->ToString()->Equals(comboBoxIWName->Text) &&
					 (Convert::ToDateTime(editingRow->Cells[2]->Value)).Date == dateTimePickerIDate->Value.Date && 
					 (Convert::ToDateTime(editingRow->Cells[2]->Value)).TimeOfDay == dateTimePickerITime->Value.TimeOfDay)
					 return false;
				 else return true;
	}

	private: void editSupply() {
				 openAddOrEditPanel(labelSupply, "Редагувати поставку №" + Convert::ToString(editingRow->Cells[0]->Value), buttonSaveSupply,
					 buttonCancelSupply);
				 comboBoxSIId->Text = editingRow->Cells[1]->Value->ToString();
				 comboBoxSGId->Text = editingRow->Cells[6]->Value->ToString();
				 textBoxSUnitsAmount->Text = editingRow->Cells[3]->Value->ToString();
				 textBoxSPurchasePrice->Text = editingRow->Cells[4]->Value->ToString();
				 dateTimePickerSExpirationDate->Value = (Convert::ToDateTime(editingRow->Cells[5]->Value)).Date;
			 }

	private: bool isEditedSupply() {
				 if (editingRow->Cells[1]->Value->ToString()->Equals(comboBoxSIId->Text) &&
					 editingRow->Cells[6]->Value->ToString()->Equals(comboBoxSGId->Text) &&
					 editingRow->Cells[3]->Value->ToString()->Equals(textBoxSUnitsAmount->Text) &&
					 editingRow->Cells[4]->Value->ToString()->Equals(textBoxSPurchasePrice->Text) &&
					 (Convert::ToDateTime(editingRow->Cells[5]->Value)).Date == dateTimePickerSExpirationDate->Value)
					 return false;
				 else return true;
	}

	private: void editWorker() {
				 openAddOrEditPanel(labelWorker, "Редагувати працівника №" + Convert::ToString(editingRow->Cells[0]->Value), buttonSaveWorker,
					 buttonCancelWorker);
				 textBoxWName->Text = editingRow->Cells[1]->Value->ToString();
				 dateTimePickerWEmploymentDate->Value = (Convert::ToDateTime(editingRow->Cells[2]->Value)).Date;
				 if (!editingRow->Cells[3]->Value->Equals(DBNull::Value)) {
					 dateTimePickerWFiringDate->Checked = true;
					 dateTimePickerWFiringDate->Value = (Convert::ToDateTime(editingRow->Cells[3]->Value)).Date;
				 }
				 else dateTimePickerWFiringDate->Checked = false;
				 dateTimePickerWBirthDate->Value = (Convert::ToDateTime(editingRow->Cells[4]->Value)).Date;
				 comboBoxWJob->Text = editingRow->Cells[6]->Value->ToString();
				 comboBoxWEducation->Text = editingRow->Cells[7]->Value->ToString();
				 textBoxWSalary->Text = editingRow->Cells[8]->Value->ToString();
				 comboBoxWDId->Text = editingRow->Cells[9]->Value->ToString();
			 }

	private: bool isEditedWorker() {
				 if(Convert::ToString(editingRow->Cells[1]->Value)->Equals(textBoxWName->Text) &&
					 (Convert::ToDateTime(editingRow->Cells[2]->Value)).Date == dateTimePickerWEmploymentDate->Value &&
					 (Convert::ToDateTime(editingRow->Cells[4]->Value)).Date == dateTimePickerWBirthDate->Value &&
					 Convert::ToString(editingRow->Cells[6]->Value)->Equals(comboBoxWJob->Text) &&
					 Convert::ToString(editingRow->Cells[8]->Value)->Equals(textBoxWSalary->Text)) {
					 if(editingRow->Cells[3]->Value->Equals(DBNull::Value) && dateTimePickerWFiringDate->Checked == true ||
						 !(editingRow->Cells[3]->Value->Equals(DBNull::Value)) && dateTimePickerWFiringDate->Checked == false)
						 return true;
					 else if (!(editingRow->Cells[3]->Value->Equals(DBNull::Value)) && dateTimePickerWFiringDate->Checked == true)
						 if((Convert::ToDateTime(editingRow->Cells[3]->Value)).Date.CompareTo(dateTimePickerWFiringDate->Value) != 0)
							 return true;
					 if(!(editingRow->Cells[9]->Value->ToString()->Equals(comboBoxWDId->Text)))
						 return true;
					 if (!(editingRow->Cells[7]->Value->ToString()->Equals(comboBoxWEducation->Text)))
						 return true;
				 }
				 return false;
	}

	private: void editSelling() {
				 comboBoxSelGId->Items->Clear();
				 DataTable^ tempTable = warehouseGoods();
				 for each (DataRow^ row in tempTable->Rows) {
					 if (row->RowState != DataRowState::Deleted)
						 comboBoxSelGId->Items->Add(row->ItemArray[0]->ToString());
				 }
				 openAddOrEditPanel(labelSelling, "Редагувати продаж №" + Convert::ToString(editingRow->Cells[0]->Value), buttonSaveSelling,
					 buttonCancelSelling);
				 comboBoxSelTId->Text = editingRow->Cells[1]->Value->ToString();
				 comboBoxSelGId->Text = editingRow->Cells[4]->Value->ToString();
				 textBoxSelUnitsAmount->Text = editingRow->Cells[3]->Value->ToString();
			 }

	private: bool isEditedSelling() {
				 if(Convert::ToString(editingRow->Cells[1]->Value)->Equals(comboBoxSelTId->Text) &&
					 Convert::ToString(editingRow->Cells[4]->Value)->Equals(comboBoxSelGId->Text) &&
					 Convert::ToString(editingRow->Cells[3]->Value)->Equals(textBoxSelUnitsAmount->Text))
					 return false;
				 else return true;
	}

	private: void editGood() {
				 openAddOrEditPanel(labelGood, "Редагувати товар №" + Convert::ToString(editingRow->Cells[0]->Value), buttonSaveGood,
					 buttonCancelGood);
				 textBoxGName->Text = editingRow->Cells[1]->Value->ToString();
				 textBoxGBarcode->Text = editingRow->Cells[2]->Value->ToString();
				 comboBoxGCategory->Text = editingRow->Cells[3]->Value->ToString();
				 comboBoxGUnitOfMeasurement->Text = editingRow->Cells[5]->Value->ToString();
				 textBoxGRetailPrice->Text = editingRow->Cells[7]->Value->ToString();
				 comboBoxGMId->Text = editingRow->Cells[8]->Value->ToString();
				 comboBoxGDId->Text = editingRow->Cells[9]->Value->ToString();
			 }

	private: bool isEditedGood() {
				 if(Convert::ToString(editingRow->Cells[1]->Value)->Equals(textBoxGName->Text) &&
					 Convert::ToString(editingRow->Cells[2]->Value)->Equals(textBoxGBarcode->Text) &&
					 Convert::ToString(editingRow->Cells[3]->Value)->Equals(comboBoxGCategory->Text) &&
					 Convert::ToString(editingRow->Cells[5]->Value)->Equals(comboBoxGUnitOfMeasurement->Text) &&
					 Convert::ToString(editingRow->Cells[7]->Value)->Equals(textBoxGRetailPrice->Text) &&
					 Convert::ToString(editingRow->Cells[8]->Value)->Equals(comboBoxGMId->Text) &&
					 Convert::ToString(editingRow->Cells[9]->Value)->Equals(comboBoxGDId->Text))
					 return false;
				 else return true;
	}

	private: void editTransaction() {
				 fillComboBox(comboBoxTWName, workers, "касир", 6, 1);
				 openAddOrEditPanel(labelTransaction, "Редагувати транзакцію №" + Convert::ToString(editingRow->Cells[0]->Value), buttonSaveTransaction,
					 buttonCancelTransaction);
				 comboBoxTDCId->Text = editingRow->Cells[2]->Value->ToString();
				 comboBoxTWName->Text = editingRow->Cells[4]->Value->ToString();
				 dateTimePickerTDate->Value = (Convert::ToDateTime(editingRow->Cells[3]->Value)).Date;
				 dateTimePickerTTime->Value = Convert::ToDateTime(editingRow->Cells[3]->Value);
			 }

	private: bool isEditedTransaction() {
				 if (editingRow->Cells[2]->Value->ToString()->Equals(comboBoxTDCId->Text) &&
					 editingRow->Cells[4]->Value->ToString()->Equals(comboBoxTWName->Text) &&
					 (Convert::ToDateTime(editingRow->Cells[3]->Value)).Date == dateTimePickerTDate->Value.Date && 
					 (Convert::ToDateTime(editingRow->Cells[3]->Value)).TimeOfDay == dateTimePickerTTime->Value.TimeOfDay)
					 return false;
				 else return true;
	}
#pragma endregion
#pragma endregion

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dataSet = (gcnew System::Data::DataSet());
			this->manufacturers = (gcnew System::Data::DataTable());
			this->m_id = (gcnew System::Data::DataColumn());
			this->m_name = (gcnew System::Data::DataColumn());
			this->m_country = (gcnew System::Data::DataColumn());
			this->m_city = (gcnew System::Data::DataColumn());
			this->m_address = (gcnew System::Data::DataColumn());
			this->m_phone_number = (gcnew System::Data::DataColumn());
			this->m_email = (gcnew System::Data::DataColumn());
			this->departments = (gcnew System::Data::DataTable());
			this->d_id = (gcnew System::Data::DataColumn());
			this->d_name = (gcnew System::Data::DataColumn());
			this->d_shelving_type = (gcnew System::Data::DataColumn());
			this->discount_cards = (gcnew System::Data::DataTable());
			this->dc_id = (gcnew System::Data::DataColumn());
			this->dc_client_name = (gcnew System::Data::DataColumn());
			this->dc_percentage = (gcnew System::Data::DataColumn());
			this->invoice = (gcnew System::Data::DataTable());
			this->i_id = (gcnew System::Data::DataColumn());
			this->i_w_id = (gcnew System::Data::DataColumn());
			this->i_date_time = (gcnew System::Data::DataColumn());
			this->supplies = (gcnew System::Data::DataTable());
			this->s_id = (gcnew System::Data::DataColumn());
			this->s_i_id = (gcnew System::Data::DataColumn());
			this->s_g_id = (gcnew System::Data::DataColumn());
			this->s_units_amount = (gcnew System::Data::DataColumn());
			this->s_purchase_price = (gcnew System::Data::DataColumn());
			this->s_expiration_date = (gcnew System::Data::DataColumn());
			this->workers = (gcnew System::Data::DataTable());
			this->w_id = (gcnew System::Data::DataColumn());
			this->w_name = (gcnew System::Data::DataColumn());
			this->w_employment_date = (gcnew System::Data::DataColumn());
			this->w_firing_date = (gcnew System::Data::DataColumn());
			this->w_birth_date = (gcnew System::Data::DataColumn());
			this->w_d_id = (gcnew System::Data::DataColumn());
			this->w_job = (gcnew System::Data::DataColumn());
			this->w_education = (gcnew System::Data::DataColumn());
			this->w_salary = (gcnew System::Data::DataColumn());
			this->selling = (gcnew System::Data::DataTable());
			this->sel_id = (gcnew System::Data::DataColumn());
			this->sel_t_id = (gcnew System::Data::DataColumn());
			this->sel_g_id = (gcnew System::Data::DataColumn());
			this->sel_units_amount = (gcnew System::Data::DataColumn());
			this->goods = (gcnew System::Data::DataTable());
			this->g_id = (gcnew System::Data::DataColumn());
			this->g_name = (gcnew System::Data::DataColumn());
			this->g_barcode = (gcnew System::Data::DataColumn());
			this->g_category = (gcnew System::Data::DataColumn());
			this->g_d_id = (gcnew System::Data::DataColumn());
			this->g_unit_of_measurement = (gcnew System::Data::DataColumn());
			this->g_m_id = (gcnew System::Data::DataColumn());
			this->g_retail_price = (gcnew System::Data::DataColumn());
			this->transactions = (gcnew System::Data::DataTable());
			this->t_id = (gcnew System::Data::DataColumn());
			this->t_w_id = (gcnew System::Data::DataColumn());
			this->t_dc_id = (gcnew System::Data::DataColumn());
			this->t_date_time = (gcnew System::Data::DataColumn());
			this->buttonClose = (gcnew System::Windows::Forms::Button());
			this->buttonMenu = (gcnew System::Windows::Forms::Button());
			this->oleDbConnection1 = (gcnew System::Data::OleDb::OleDbConnection());
			this->oleDbSelectCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand1 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDataAdapterManufacturers = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->oleDbSelectCommand2 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand2 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand2 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand2 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDataAdapterDepartments = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->toolTipMenu = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTipClose = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->buttonManufacturers = (gcnew System::Windows::Forms::Button());
			this->buttonDepartments = (gcnew System::Windows::Forms::Button());
			this->кодВиробникаDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->midDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->mnameDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->mcountryDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->mcityDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->maddressDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->mphonenumberDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->memailDataGridViewTextBoxColumn = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->buttonDiscountCards = (gcnew System::Windows::Forms::Button());
			this->buttonInvoice = (gcnew System::Windows::Forms::Button());
			this->buttonSupplies = (gcnew System::Windows::Forms::Button());
			this->buttonWorkers = (gcnew System::Windows::Forms::Button());
			this->buttonSelling = (gcnew System::Windows::Forms::Button());
			this->buttonGoods = (gcnew System::Windows::Forms::Button());
			this->buttonTransactions = (gcnew System::Windows::Forms::Button());
			this->oleDbSelectCommand3 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand3 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand3 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand3 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDataAdapterDiscountCards = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->oleDbSelectCommand4 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand4 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand4 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand4 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDataAdapterInvoice = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->toolTipDelete = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->oleDbSelectCommand5 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand5 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand5 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand5 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDataAdapterSupplies = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->oleDbSelectCommand6 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand6 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand6 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand6 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDataAdapterWorkers = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->oleDbSelectCommand7 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand7 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand7 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand7 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDataAdapterSelling = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->oleDbSelectCommand8 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand8 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand8 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand8 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDataAdapterGoods = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->oleDbSelectCommand9 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbInsertCommand9 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbUpdateCommand9 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDeleteCommand9 = (gcnew System::Data::OleDb::OleDbCommand());
			this->oleDbDataAdapterTransactions = (gcnew System::Data::OleDb::OleDbDataAdapter());
			this->buttonSaveChanges = (gcnew System::Windows::Forms::Button());
			this->buttonPrint = (gcnew System::Windows::Forms::Button());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->printPreviewDialog1 = (gcnew System::Windows::Forms::PrintPreviewDialog());
			this->buttonPreview = (gcnew System::Windows::Forms::Button());
			this->panelMenu = (gcnew System::Windows::Forms::Panel());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->buttonAbout = (gcnew System::Windows::Forms::Button());
			this->buttonHelp = (gcnew System::Windows::Forms::Button());
			this->buttonSelections = (gcnew System::Windows::Forms::Button());
			this->panelTop = (gcnew System::Windows::Forms::Panel());
			this->panelSelections = (gcnew System::Windows::Forms::Panel());
			this->buttonTransactionCost = (gcnew System::Windows::Forms::Button());
			this->buttonManufacturersBySuppliedGoodsAmount = (gcnew System::Windows::Forms::Button());
			this->buttonCashierStatistics = (gcnew System::Windows::Forms::Button());
			this->buttonWarehouseGoods = (gcnew System::Windows::Forms::Button());
			this->buttonMostPopularGoods = (gcnew System::Windows::Forms::Button());
			this->buttonNewRecord = (gcnew System::Windows::Forms::Button());
			this->panelAddOrEditManufacturer = (gcnew System::Windows::Forms::Panel());
			this->buttonCancelManufacturer = (gcnew System::Windows::Forms::Button());
			this->buttonSaveManufacturer = (gcnew System::Windows::Forms::Button());
			this->labelMEmail = (gcnew System::Windows::Forms::Label());
			this->labelMPhone = (gcnew System::Windows::Forms::Label());
			this->labelMAddress = (gcnew System::Windows::Forms::Label());
			this->labelMCity = (gcnew System::Windows::Forms::Label());
			this->labelMCountry = (gcnew System::Windows::Forms::Label());
			this->labelMName = (gcnew System::Windows::Forms::Label());
			this->textBoxMEmail = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMPhone = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMAddress = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMCity = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMCountry = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMName = (gcnew System::Windows::Forms::TextBox());
			this->labelManufacturer = (gcnew System::Windows::Forms::Label());
			this->panelAddOrEditDepartment = (gcnew System::Windows::Forms::Panel());
			this->comboBoxDShelvingType = (gcnew System::Windows::Forms::ComboBox());
			this->buttonCancelDepartment = (gcnew System::Windows::Forms::Button());
			this->buttonSaveDepartment = (gcnew System::Windows::Forms::Button());
			this->labelDShelvingType = (gcnew System::Windows::Forms::Label());
			this->labelDName = (gcnew System::Windows::Forms::Label());
			this->textBoxDName = (gcnew System::Windows::Forms::TextBox());
			this->labelDepartment = (gcnew System::Windows::Forms::Label());
			this->buttonEditRecord = (gcnew System::Windows::Forms::Button());
			this->toolTipAdd = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTipEdit = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTipSave = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->toolTipCancel = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->panelAddOrEditDiscountCard = (gcnew System::Windows::Forms::Panel());
			this->textBoxDCPercentage = (gcnew System::Windows::Forms::TextBox());
			this->buttonCancelDiscountCard = (gcnew System::Windows::Forms::Button());
			this->buttonSaveDiscountCard = (gcnew System::Windows::Forms::Button());
			this->labelDCPercentage = (gcnew System::Windows::Forms::Label());
			this->labelDCClientName = (gcnew System::Windows::Forms::Label());
			this->textBoxDCClientName = (gcnew System::Windows::Forms::TextBox());
			this->labelDiscountCard = (gcnew System::Windows::Forms::Label());
			this->panelAddOrEditInvoice = (gcnew System::Windows::Forms::Panel());
			this->dateTimePickerITime = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePickerIDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBoxIWName = (gcnew System::Windows::Forms::ComboBox());
			this->buttonCancelInvoice = (gcnew System::Windows::Forms::Button());
			this->buttonSaveInvoice = (gcnew System::Windows::Forms::Button());
			this->labelIDateTime = (gcnew System::Windows::Forms::Label());
			this->labelIWName = (gcnew System::Windows::Forms::Label());
			this->labelInvoice = (gcnew System::Windows::Forms::Label());
			this->panelAddOrEditSupply = (gcnew System::Windows::Forms::Panel());
			this->dateTimePickerSExpirationDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBoxSGId = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxSIId = (gcnew System::Windows::Forms::ComboBox());
			this->buttonCancelSupply = (gcnew System::Windows::Forms::Button());
			this->buttonSaveSupply = (gcnew System::Windows::Forms::Button());
			this->labelSExpirationDate = (gcnew System::Windows::Forms::Label());
			this->labelSPurchasePrice = (gcnew System::Windows::Forms::Label());
			this->labelSUnitsAmount = (gcnew System::Windows::Forms::Label());
			this->labelSGId = (gcnew System::Windows::Forms::Label());
			this->labelSIId = (gcnew System::Windows::Forms::Label());
			this->textBoxSPurchasePrice = (gcnew System::Windows::Forms::TextBox());
			this->textBoxSUnitsAmount = (gcnew System::Windows::Forms::TextBox());
			this->labelSupply = (gcnew System::Windows::Forms::Label());
			this->panelAddOrEditWorker = (gcnew System::Windows::Forms::Panel());
			this->comboBoxWDId = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxWSalary = (gcnew System::Windows::Forms::TextBox());
			this->comboBoxWEducation = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxWJob = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePickerWBirthDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePickerWFiringDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePickerWEmploymentDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->labelWDId = (gcnew System::Windows::Forms::Label());
			this->labelWSalary = (gcnew System::Windows::Forms::Label());
			this->buttonCancelWorker = (gcnew System::Windows::Forms::Button());
			this->buttonSaveWorker = (gcnew System::Windows::Forms::Button());
			this->labelWEducation = (gcnew System::Windows::Forms::Label());
			this->labelWJob = (gcnew System::Windows::Forms::Label());
			this->labelWBirthDate = (gcnew System::Windows::Forms::Label());
			this->labelWFiringDate = (gcnew System::Windows::Forms::Label());
			this->labelWEmploymentDate = (gcnew System::Windows::Forms::Label());
			this->labelWName = (gcnew System::Windows::Forms::Label());
			this->textBoxWName = (gcnew System::Windows::Forms::TextBox());
			this->labelWorker = (gcnew System::Windows::Forms::Label());
			this->panelAddOrEditSelling = (gcnew System::Windows::Forms::Panel());
			this->comboBoxSelGId = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxSelTId = (gcnew System::Windows::Forms::ComboBox());
			this->buttonCancelSelling = (gcnew System::Windows::Forms::Button());
			this->buttonSaveSelling = (gcnew System::Windows::Forms::Button());
			this->labelSelUnitsAmount = (gcnew System::Windows::Forms::Label());
			this->labelSelGId = (gcnew System::Windows::Forms::Label());
			this->labelSelTId = (gcnew System::Windows::Forms::Label());
			this->textBoxSelUnitsAmount = (gcnew System::Windows::Forms::TextBox());
			this->labelSelling = (gcnew System::Windows::Forms::Label());
			this->panelAddOrEditGood = (gcnew System::Windows::Forms::Panel());
			this->comboBoxGCategory = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxGUnitOfMeasurement = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxGDId = (gcnew System::Windows::Forms::ComboBox());
			this->labelGDId = (gcnew System::Windows::Forms::Label());
			this->textBoxGBarcode = (gcnew System::Windows::Forms::TextBox());
			this->comboBoxGMId = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxGRetailPrice = (gcnew System::Windows::Forms::TextBox());
			this->labelGMId = (gcnew System::Windows::Forms::Label());
			this->labelGRetailPrice = (gcnew System::Windows::Forms::Label());
			this->buttonCancelGood = (gcnew System::Windows::Forms::Button());
			this->buttonSaveGood = (gcnew System::Windows::Forms::Button());
			this->labelGUnitOfMeasurement = (gcnew System::Windows::Forms::Label());
			this->labelGCategory = (gcnew System::Windows::Forms::Label());
			this->labelGBarcode = (gcnew System::Windows::Forms::Label());
			this->labelGName = (gcnew System::Windows::Forms::Label());
			this->textBoxGName = (gcnew System::Windows::Forms::TextBox());
			this->labelGood = (gcnew System::Windows::Forms::Label());
			this->panelAddOrEditTransaction = (gcnew System::Windows::Forms::Panel());
			this->dateTimePickerTTime = (gcnew System::Windows::Forms::DateTimePicker());
			this->comboBoxTWName = (gcnew System::Windows::Forms::ComboBox());
			this->dateTimePickerTDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->labelTWName = (gcnew System::Windows::Forms::Label());
			this->comboBoxTDCId = (gcnew System::Windows::Forms::ComboBox());
			this->buttonCancelTransaction = (gcnew System::Windows::Forms::Button());
			this->buttonSaveTransaction = (gcnew System::Windows::Forms::Button());
			this->labelTDateTime = (gcnew System::Windows::Forms::Label());
			this->labelTDCId = (gcnew System::Windows::Forms::Label());
			this->labelTransaction = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataSet))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->manufacturers))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->departments))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->discount_cards))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->invoice))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->supplies))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->workers))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->selling))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->goods))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->transactions))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->panelMenu->SuspendLayout();
			this->panelTop->SuspendLayout();
			this->panelSelections->SuspendLayout();
			this->panelAddOrEditManufacturer->SuspendLayout();
			this->panelAddOrEditDepartment->SuspendLayout();
			this->panelAddOrEditDiscountCard->SuspendLayout();
			this->panelAddOrEditInvoice->SuspendLayout();
			this->panelAddOrEditSupply->SuspendLayout();
			this->panelAddOrEditWorker->SuspendLayout();
			this->panelAddOrEditSelling->SuspendLayout();
			this->panelAddOrEditGood->SuspendLayout();
			this->panelAddOrEditTransaction->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataSet
			// 
			this->dataSet->DataSetName = L"NewDataSet";
			this->dataSet->Tables->AddRange(gcnew cli::array< System::Data::DataTable^  >(9) {this->manufacturers, this->departments, 
				this->discount_cards, this->invoice, this->supplies, this->workers, this->selling, this->goods, this->transactions});
			// 
			// manufacturers
			// 
			this->manufacturers->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(7) {this->m_id, this->m_name, this->m_country, 
				this->m_city, this->m_address, this->m_phone_number, this->m_email});
			cli::array< System::String^ >^ __mcTemp__1 = gcnew cli::array< System::String^  >(1) {L"m_id"};
			this->manufacturers->Constraints->AddRange(gcnew cli::array< System::Data::Constraint^  >(1) {(gcnew System::Data::UniqueConstraint(L"Constraint1", 
				__mcTemp__1, true))});
			this->manufacturers->PrimaryKey = gcnew cli::array< System::Data::DataColumn^  >(1) {this->m_id};
			this->manufacturers->TableName = L"manufacturers";
			// 
			// m_id
			// 
			this->m_id->AllowDBNull = false;
			this->m_id->AutoIncrement = true;
			this->m_id->AutoIncrementSeed = static_cast<System::Int64>(1);
			this->m_id->Caption = L"Код виробника";
			this->m_id->ColumnName = L"m_id";
			this->m_id->DataType = System::Int32::typeid;
			// 
			// m_name
			// 
			this->m_name->Caption = L"Назва виробника";
			this->m_name->ColumnName = L"m_name";
			// 
			// m_country
			// 
			this->m_country->Caption = L"Країна";
			this->m_country->ColumnName = L"m_country";
			// 
			// m_city
			// 
			this->m_city->Caption = L"Місто";
			this->m_city->ColumnName = L"m_city";
			// 
			// m_address
			// 
			this->m_address->Caption = L"Адреса";
			this->m_address->ColumnName = L"m_address";
			// 
			// m_phone_number
			// 
			this->m_phone_number->Caption = L"Номер телефону";
			this->m_phone_number->ColumnName = L"m_phone_number";
			// 
			// m_email
			// 
			this->m_email->Caption = L"E-mail адреса";
			this->m_email->ColumnName = L"m_email";
			// 
			// departments
			// 
			this->departments->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(3) {this->d_id, this->d_name, this->d_shelving_type});
			cli::array< System::String^ >^ __mcTemp__2 = gcnew cli::array< System::String^  >(1) {L"d_id"};
			this->departments->Constraints->AddRange(gcnew cli::array< System::Data::Constraint^  >(1) {(gcnew System::Data::UniqueConstraint(L"Constraint1", 
				__mcTemp__2, true))});
			this->departments->PrimaryKey = gcnew cli::array< System::Data::DataColumn^  >(1) {this->d_id};
			this->departments->TableName = L"departments";
			// 
			// d_id
			// 
			this->d_id->AllowDBNull = false;
			this->d_id->AutoIncrement = true;
			this->d_id->AutoIncrementSeed = static_cast<System::Int64>(1);
			this->d_id->Caption = L"Код відділу";
			this->d_id->ColumnName = L"d_id";
			this->d_id->DataType = System::Int32::typeid;
			// 
			// d_name
			// 
			this->d_name->Caption = L"Назва відділу";
			this->d_name->ColumnName = L"d_name";
			// 
			// d_shelving_type
			// 
			this->d_shelving_type->Caption = L"Тип стелажів";
			this->d_shelving_type->ColumnName = L"d_shelving_type";
			// 
			// discount_cards
			// 
			this->discount_cards->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(3) {this->dc_id, this->dc_client_name, 
				this->dc_percentage});
			cli::array< System::String^ >^ __mcTemp__3 = gcnew cli::array< System::String^  >(1) {L"dc_id"};
			this->discount_cards->Constraints->AddRange(gcnew cli::array< System::Data::Constraint^  >(1) {(gcnew System::Data::UniqueConstraint(L"Constraint1", 
				__mcTemp__3, true))});
			this->discount_cards->PrimaryKey = gcnew cli::array< System::Data::DataColumn^  >(1) {this->dc_id};
			this->discount_cards->TableName = L"discount_cards";
			// 
			// dc_id
			// 
			this->dc_id->AllowDBNull = false;
			this->dc_id->AutoIncrement = true;
			this->dc_id->AutoIncrementSeed = static_cast<System::Int64>(1);
			this->dc_id->Caption = L"Код картки";
			this->dc_id->ColumnName = L"dc_id";
			this->dc_id->DataType = System::Int32::typeid;
			// 
			// dc_client_name
			// 
			this->dc_client_name->Caption = L"ПІБ покупця";
			this->dc_client_name->ColumnName = L"dc_client_name";
			// 
			// dc_percentage
			// 
			this->dc_percentage->Caption = L"Відсоток знижки";
			this->dc_percentage->ColumnName = L"dc_percentage";
			this->dc_percentage->DataType = System::Double::typeid;
			// 
			// invoice
			// 
			this->invoice->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(3) {this->i_id, this->i_w_id, this->i_date_time});
			cli::array< System::String^ >^ __mcTemp__4 = gcnew cli::array< System::String^  >(1) {L"i_id"};
			this->invoice->Constraints->AddRange(gcnew cli::array< System::Data::Constraint^  >(1) {(gcnew System::Data::UniqueConstraint(L"Constraint1", 
				__mcTemp__4, true))});
			this->invoice->PrimaryKey = gcnew cli::array< System::Data::DataColumn^  >(1) {this->i_id};
			this->invoice->TableName = L"invoice";
			// 
			// i_id
			// 
			this->i_id->AllowDBNull = false;
			this->i_id->AutoIncrement = true;
			this->i_id->AutoIncrementSeed = static_cast<System::Int64>(1);
			this->i_id->Caption = L"Код накладної";
			this->i_id->ColumnName = L"i_id";
			this->i_id->DataType = System::Int32::typeid;
			// 
			// i_w_id
			// 
			this->i_w_id->Caption = L"Працівник";
			this->i_w_id->ColumnName = L"i_w_id";
			this->i_w_id->DataType = System::Int32::typeid;
			// 
			// i_date_time
			// 
			this->i_date_time->Caption = L"Дата і час";
			this->i_date_time->ColumnName = L"i_date_time";
			this->i_date_time->DataType = System::DateTime::typeid;
			// 
			// supplies
			// 
			this->supplies->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(6) {this->s_id, this->s_i_id, this->s_g_id, 
				this->s_units_amount, this->s_purchase_price, this->s_expiration_date});
			cli::array< System::String^ >^ __mcTemp__5 = gcnew cli::array< System::String^  >(1) {L"s_id"};
			this->supplies->Constraints->AddRange(gcnew cli::array< System::Data::Constraint^  >(1) {(gcnew System::Data::UniqueConstraint(L"Constraint1", 
				__mcTemp__5, true))});
			this->supplies->PrimaryKey = gcnew cli::array< System::Data::DataColumn^  >(1) {this->s_id};
			this->supplies->TableName = L"supplies";
			// 
			// s_id
			// 
			this->s_id->AllowDBNull = false;
			this->s_id->AutoIncrement = true;
			this->s_id->AutoIncrementSeed = static_cast<System::Int64>(1);
			this->s_id->Caption = L"Код поставки";
			this->s_id->ColumnName = L"s_id";
			this->s_id->DataType = System::Int32::typeid;
			// 
			// s_i_id
			// 
			this->s_i_id->Caption = L"Код накладної";
			this->s_i_id->ColumnName = L"s_i_id";
			this->s_i_id->DataType = System::Int32::typeid;
			// 
			// s_g_id
			// 
			this->s_g_id->Caption = L"Товар";
			this->s_g_id->ColumnName = L"s_g_id";
			this->s_g_id->DataType = System::Int32::typeid;
			// 
			// s_units_amount
			// 
			this->s_units_amount->Caption = L"Кількість одиниць";
			this->s_units_amount->ColumnName = L"s_units_amount";
			this->s_units_amount->DataType = System::Int32::typeid;
			// 
			// s_purchase_price
			// 
			this->s_purchase_price->Caption = L"Закупівельна ціна";
			this->s_purchase_price->ColumnName = L"s_purchase_price";
			this->s_purchase_price->DataType = System::Decimal::typeid;
			// 
			// s_expiration_date
			// 
			this->s_expiration_date->Caption = L"Термін придатності";
			this->s_expiration_date->ColumnName = L"s_expiration_date";
			this->s_expiration_date->DataType = System::DateTime::typeid;
			// 
			// workers
			// 
			this->workers->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(9) {this->w_id, this->w_name, this->w_employment_date, 
				this->w_firing_date, this->w_birth_date, this->w_d_id, this->w_job, this->w_education, this->w_salary});
			cli::array< System::String^ >^ __mcTemp__6 = gcnew cli::array< System::String^  >(1) {L"w_id"};
			this->workers->Constraints->AddRange(gcnew cli::array< System::Data::Constraint^  >(1) {(gcnew System::Data::UniqueConstraint(L"Constraint1", 
				__mcTemp__6, true))});
			this->workers->PrimaryKey = gcnew cli::array< System::Data::DataColumn^  >(1) {this->w_id};
			this->workers->TableName = L"workers";
			// 
			// w_id
			// 
			this->w_id->AllowDBNull = false;
			this->w_id->AutoIncrement = true;
			this->w_id->AutoIncrementSeed = static_cast<System::Int64>(1);
			this->w_id->Caption = L"Код працівника";
			this->w_id->ColumnName = L"w_id";
			this->w_id->DataType = System::Int32::typeid;
			// 
			// w_name
			// 
			this->w_name->Caption = L"ПІБ працівника";
			this->w_name->ColumnName = L"w_name";
			// 
			// w_employment_date
			// 
			this->w_employment_date->Caption = L"Дата влаштування";
			this->w_employment_date->ColumnName = L"w_employment_date";
			this->w_employment_date->DataType = System::DateTime::typeid;
			// 
			// w_firing_date
			// 
			this->w_firing_date->Caption = L"Дата звільнення";
			this->w_firing_date->ColumnName = L"w_firing_date";
			this->w_firing_date->DataType = System::DateTime::typeid;
			// 
			// w_birth_date
			// 
			this->w_birth_date->Caption = L"Дата народження";
			this->w_birth_date->ColumnName = L"w_birth_date";
			this->w_birth_date->DataType = System::DateTime::typeid;
			// 
			// w_d_id
			// 
			this->w_d_id->Caption = L"Відділ";
			this->w_d_id->ColumnName = L"w_d_id";
			this->w_d_id->DataType = System::Int32::typeid;
			// 
			// w_job
			// 
			this->w_job->Caption = L"Посада";
			this->w_job->ColumnName = L"w_job";
			// 
			// w_education
			// 
			this->w_education->Caption = L"Освіта";
			this->w_education->ColumnName = L"w_education";
			// 
			// w_salary
			// 
			this->w_salary->Caption = L"Оклад";
			this->w_salary->ColumnName = L"w_salary";
			this->w_salary->DataType = System::Decimal::typeid;
			// 
			// selling
			// 
			this->selling->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(4) {this->sel_id, this->sel_t_id, this->sel_g_id, 
				this->sel_units_amount});
			cli::array< System::String^ >^ __mcTemp__7 = gcnew cli::array< System::String^  >(1) {L"sel_id"};
			this->selling->Constraints->AddRange(gcnew cli::array< System::Data::Constraint^  >(1) {(gcnew System::Data::UniqueConstraint(L"Constraint1", 
				__mcTemp__7, true))});
			this->selling->PrimaryKey = gcnew cli::array< System::Data::DataColumn^  >(1) {this->sel_id};
			this->selling->TableName = L"selling";
			// 
			// sel_id
			// 
			this->sel_id->AllowDBNull = false;
			this->sel_id->AutoIncrement = true;
			this->sel_id->AutoIncrementSeed = static_cast<System::Int64>(1);
			this->sel_id->Caption = L"Код продажу";
			this->sel_id->ColumnName = L"sel_id";
			this->sel_id->DataType = System::Int32::typeid;
			// 
			// sel_t_id
			// 
			this->sel_t_id->Caption = L"Код транзакції";
			this->sel_t_id->ColumnName = L"sel_t_id";
			this->sel_t_id->DataType = System::Int32::typeid;
			// 
			// sel_g_id
			// 
			this->sel_g_id->Caption = L"Товар";
			this->sel_g_id->ColumnName = L"sel_g_id";
			this->sel_g_id->DataType = System::Int32::typeid;
			// 
			// sel_units_amount
			// 
			this->sel_units_amount->Caption = L"Кількість одиниць";
			this->sel_units_amount->ColumnName = L"sel_units_amount";
			this->sel_units_amount->DataType = System::Int32::typeid;
			// 
			// goods
			// 
			this->goods->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(8) {this->g_id, this->g_name, this->g_barcode, 
				this->g_category, this->g_d_id, this->g_unit_of_measurement, this->g_m_id, this->g_retail_price});
			cli::array< System::String^ >^ __mcTemp__8 = gcnew cli::array< System::String^  >(1) {L"g_id"};
			this->goods->Constraints->AddRange(gcnew cli::array< System::Data::Constraint^  >(1) {(gcnew System::Data::UniqueConstraint(L"Constraint1", 
				__mcTemp__8, true))});
			this->goods->PrimaryKey = gcnew cli::array< System::Data::DataColumn^  >(1) {this->g_id};
			this->goods->TableName = L"goods";
			// 
			// g_id
			// 
			this->g_id->AllowDBNull = false;
			this->g_id->AutoIncrement = true;
			this->g_id->AutoIncrementSeed = static_cast<System::Int64>(1);
			this->g_id->Caption = L"Код товару";
			this->g_id->ColumnName = L"g_id";
			this->g_id->DataType = System::Int32::typeid;
			// 
			// g_name
			// 
			this->g_name->Caption = L"Назва товару";
			this->g_name->ColumnName = L"g_name";
			// 
			// g_barcode
			// 
			this->g_barcode->Caption = L"Штрих-код";
			this->g_barcode->ColumnName = L"g_barcode";
			// 
			// g_category
			// 
			this->g_category->Caption = L"Категорія товару";
			this->g_category->ColumnName = L"g_category";
			// 
			// g_d_id
			// 
			this->g_d_id->Caption = L"Відділ";
			this->g_d_id->ColumnName = L"g_d_id";
			this->g_d_id->DataType = System::Int32::typeid;
			// 
			// g_unit_of_measurement
			// 
			this->g_unit_of_measurement->Caption = L"Одиниця виміру";
			this->g_unit_of_measurement->ColumnName = L"g_unit_of_measurement";
			// 
			// g_m_id
			// 
			this->g_m_id->Caption = L"Виробник";
			this->g_m_id->ColumnName = L"g_m_id";
			this->g_m_id->DataType = System::Int32::typeid;
			// 
			// g_retail_price
			// 
			this->g_retail_price->Caption = L"Роздрібна ціна";
			this->g_retail_price->ColumnName = L"g_retail_price";
			this->g_retail_price->DataType = System::Decimal::typeid;
			// 
			// transactions
			// 
			this->transactions->Columns->AddRange(gcnew cli::array< System::Data::DataColumn^  >(4) {this->t_id, this->t_w_id, this->t_dc_id, 
				this->t_date_time});
			cli::array< System::String^ >^ __mcTemp__9 = gcnew cli::array< System::String^  >(1) {L"t_id"};
			this->transactions->Constraints->AddRange(gcnew cli::array< System::Data::Constraint^  >(1) {(gcnew System::Data::UniqueConstraint(L"Constraint1", 
				__mcTemp__9, true))});
			this->transactions->PrimaryKey = gcnew cli::array< System::Data::DataColumn^  >(1) {this->t_id};
			this->transactions->TableName = L"transactions";
			// 
			// t_id
			// 
			this->t_id->AllowDBNull = false;
			this->t_id->AutoIncrement = true;
			this->t_id->AutoIncrementSeed = static_cast<System::Int64>(1);
			this->t_id->Caption = L"Код транзакції";
			this->t_id->ColumnName = L"t_id";
			this->t_id->DataType = System::Int32::typeid;
			// 
			// t_w_id
			// 
			this->t_w_id->Caption = L"Працівник";
			this->t_w_id->ColumnName = L"t_w_id";
			this->t_w_id->DataType = System::Int32::typeid;
			// 
			// t_dc_id
			// 
			this->t_dc_id->Caption = L"Код дисконтної картки";
			this->t_dc_id->ColumnName = L"t_dc_id";
			this->t_dc_id->DataType = System::Int32::typeid;
			// 
			// t_date_time
			// 
			this->t_date_time->Caption = L"Дата і час";
			this->t_date_time->ColumnName = L"t_date_time";
			this->t_date_time->DataType = System::DateTime::typeid;
			// 
			// buttonClose
			// 
			this->buttonClose->AutoSize = true;
			this->buttonClose->BackColor = System::Drawing::Color::Transparent;
			this->buttonClose->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonClose->FlatAppearance->BorderSize = 0;
			this->buttonClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonClose->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"buttonClose.Image")));
			this->buttonClose->Location = System::Drawing::Point(1106, 12);
			this->buttonClose->Name = L"buttonClose";
			this->buttonClose->Size = System::Drawing::Size(44, 44);
			this->buttonClose->TabIndex = 1;
			this->buttonClose->UseVisualStyleBackColor = false;
			this->buttonClose->Click += gcnew System::EventHandler(this, &MainForm::buttonClose_Click);
			// 
			// buttonMenu
			// 
			this->buttonMenu->AutoSize = true;
			this->buttonMenu->BackColor = System::Drawing::Color::Transparent;
			this->buttonMenu->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonMenu->FlatAppearance->BorderSize = 0;
			this->buttonMenu->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonMenu->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"buttonMenu.Image")));
			this->buttonMenu->Location = System::Drawing::Point(12, 12);
			this->buttonMenu->Name = L"buttonMenu";
			this->buttonMenu->Size = System::Drawing::Size(44, 44);
			this->buttonMenu->TabIndex = 0;
			this->buttonMenu->UseVisualStyleBackColor = false;
			this->buttonMenu->Click += gcnew System::EventHandler(this, &MainForm::buttonMenu_Click);
			// 
			// oleDbConnection1
			// 
			this->oleDbConnection1->ConnectionString = L"Provider=Microsoft.ACE.OLEDB.12.0;Data Source=Supermarket.accdb";
			// 
			// oleDbSelectCommand1
			// 
			this->oleDbSelectCommand1->CommandText = L"SELECT        Виробники.*\r\nFROM            Виробники";
			this->oleDbSelectCommand1->Connection = this->oleDbConnection1;
			// 
			// oleDbInsertCommand1
			// 
			this->oleDbInsertCommand1->CommandText = L"INSERT INTO `Виробники` (`m_name`, `m_country`, `m_city`, `m_address`, `m_phone_n" 
				L"umber`, `m_email`) VALUES (\?, \?, \?, \?, \?, \?)";
			this->oleDbInsertCommand1->Connection = this->oleDbConnection1;
			this->oleDbInsertCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(6) {(gcnew System::Data::OleDb::OleDbParameter(L"m_name", 
				System::Data::OleDb::OleDbType::VarWChar, 0, L"m_name")), (gcnew System::Data::OleDb::OleDbParameter(L"m_country", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"m_country")), (gcnew System::Data::OleDb::OleDbParameter(L"m_city", System::Data::OleDb::OleDbType::VarWChar, 0, L"m_city")), 
				(gcnew System::Data::OleDb::OleDbParameter(L"m_address", System::Data::OleDb::OleDbType::VarWChar, 0, L"m_address")), (gcnew System::Data::OleDb::OleDbParameter(L"m_phone_number", 
				System::Data::OleDb::OleDbType::VarWChar, 0, L"m_phone_number")), (gcnew System::Data::OleDb::OleDbParameter(L"m_email", 
				System::Data::OleDb::OleDbType::VarWChar, 0, L"m_email"))});
			// 
			// oleDbUpdateCommand1
			// 
			this->oleDbUpdateCommand1->CommandText = resources->GetString(L"oleDbUpdateCommand1.CommandText");
			this->oleDbUpdateCommand1->Connection = this->oleDbConnection1;
			this->oleDbUpdateCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(19) {(gcnew System::Data::OleDb::OleDbParameter(L"m_name", 
				System::Data::OleDb::OleDbType::VarWChar, 0, L"m_name")), (gcnew System::Data::OleDb::OleDbParameter(L"m_country", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"m_country")), (gcnew System::Data::OleDb::OleDbParameter(L"m_city", System::Data::OleDb::OleDbType::VarWChar, 0, L"m_city")), 
				(gcnew System::Data::OleDb::OleDbParameter(L"m_address", System::Data::OleDb::OleDbType::VarWChar, 0, L"m_address")), (gcnew System::Data::OleDb::OleDbParameter(L"m_phone_number", 
				System::Data::OleDb::OleDbType::VarWChar, 0, L"m_phone_number")), (gcnew System::Data::OleDb::OleDbParameter(L"m_email", 
				System::Data::OleDb::OleDbType::VarWChar, 0, L"m_email")), (gcnew System::Data::OleDb::OleDbParameter(L"Original_m_id", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"m_id", System::Data::DataRowVersion::Original, 
				nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_m_name", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, 
				static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"m_name", System::Data::DataRowVersion::Original, true, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"Original_m_name", System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, 
				false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"m_name", System::Data::DataRowVersion::Original, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"IsNull_m_country", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, 
				static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"m_country", System::Data::DataRowVersion::Original, true, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"Original_m_country", System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, 
				false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"m_country", System::Data::DataRowVersion::Original, 
				nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_m_city", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, 
				static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"m_city", System::Data::DataRowVersion::Original, true, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"Original_m_city", System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, 
				false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"m_city", System::Data::DataRowVersion::Original, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"IsNull_m_address", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, 
				static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"m_address", System::Data::DataRowVersion::Original, true, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"Original_m_address", System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, 
				false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"m_address", System::Data::DataRowVersion::Original, 
				nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_m_phone_number", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"m_phone_number", 
				System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_m_phone_number", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"m_phone_number", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_m_email", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"m_email", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_m_email", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"m_email", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oleDbDeleteCommand1
			// 
			this->oleDbDeleteCommand1->CommandText = resources->GetString(L"oleDbDeleteCommand1.CommandText");
			this->oleDbDeleteCommand1->Connection = this->oleDbConnection1;
			this->oleDbDeleteCommand1->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(13) {(gcnew System::Data::OleDb::OleDbParameter(L"Original_m_id", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"m_id", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_m_name", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"m_name", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_m_name", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"m_name", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_m_country", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"m_country", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_m_country", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"m_country", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_m_city", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"m_city", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_m_city", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"m_city", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_m_address", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"m_address", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_m_address", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"m_address", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_m_phone_number", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"m_phone_number", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_m_phone_number", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"m_phone_number", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_m_email", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"m_email", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_m_email", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"m_email", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oleDbDataAdapterManufacturers
			// 
			this->oleDbDataAdapterManufacturers->DeleteCommand = this->oleDbDeleteCommand1;
			this->oleDbDataAdapterManufacturers->InsertCommand = this->oleDbInsertCommand1;
			this->oleDbDataAdapterManufacturers->SelectCommand = this->oleDbSelectCommand1;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__10 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(7) {(gcnew System::Data::Common::DataColumnMapping(L"m_id", 
				L"m_id")), (gcnew System::Data::Common::DataColumnMapping(L"m_name", L"m_name")), (gcnew System::Data::Common::DataColumnMapping(L"m_country", 
				L"m_country")), (gcnew System::Data::Common::DataColumnMapping(L"m_city", L"m_city")), (gcnew System::Data::Common::DataColumnMapping(L"m_address", 
				L"m_address")), (gcnew System::Data::Common::DataColumnMapping(L"m_phone_number", L"m_phone_number")), (gcnew System::Data::Common::DataColumnMapping(L"m_email", 
				L"m_email"))};
			this->oleDbDataAdapterManufacturers->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"Виробники", __mcTemp__10))});
			this->oleDbDataAdapterManufacturers->UpdateCommand = this->oleDbUpdateCommand1;
			// 
			// oleDbSelectCommand2
			// 
			this->oleDbSelectCommand2->CommandText = L"SELECT        Відділи.*\r\nFROM            Відділи";
			this->oleDbSelectCommand2->Connection = this->oleDbConnection1;
			// 
			// oleDbInsertCommand2
			// 
			this->oleDbInsertCommand2->CommandText = L"INSERT INTO `Відділи` (`d_name`, `d_shelving_type`) VALUES (\?, \?)";
			this->oleDbInsertCommand2->Connection = this->oleDbConnection1;
			this->oleDbInsertCommand2->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(2) {(gcnew System::Data::OleDb::OleDbParameter(L"d_name", 
				System::Data::OleDb::OleDbType::VarWChar, 0, L"d_name")), (gcnew System::Data::OleDb::OleDbParameter(L"d_shelving_type", 
				System::Data::OleDb::OleDbType::VarWChar, 0, L"d_shelving_type"))});
			// 
			// oleDbUpdateCommand2
			// 
			this->oleDbUpdateCommand2->CommandText = resources->GetString(L"oleDbUpdateCommand2.CommandText");
			this->oleDbUpdateCommand2->Connection = this->oleDbConnection1;
			this->oleDbUpdateCommand2->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(7) {(gcnew System::Data::OleDb::OleDbParameter(L"d_name", 
				System::Data::OleDb::OleDbType::VarWChar, 0, L"d_name")), (gcnew System::Data::OleDb::OleDbParameter(L"d_shelving_type", 
				System::Data::OleDb::OleDbType::VarWChar, 0, L"d_shelving_type")), (gcnew System::Data::OleDb::OleDbParameter(L"Original_d_id", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"d_id", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_d_name", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"d_name", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_d_name", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"d_name", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_d_shelving_type", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"d_shelving_type", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_d_shelving_type", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"d_shelving_type", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oleDbDeleteCommand2
			// 
			this->oleDbDeleteCommand2->CommandText = L"DELETE FROM `Відділи` WHERE ((`d_id` = \?) AND ((\? = 1 AND `d_name` IS NULL) OR (`" 
				L"d_name` = \?)) AND ((\? = 1 AND `d_shelving_type` IS NULL) OR (`d_shelving_type` =" 
				L" \?)))";
			this->oleDbDeleteCommand2->Connection = this->oleDbConnection1;
			this->oleDbDeleteCommand2->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(5) {(gcnew System::Data::OleDb::OleDbParameter(L"Original_d_id", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"d_id", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_d_name", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"d_name", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_d_name", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"d_name", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_d_shelving_type", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"d_shelving_type", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_d_shelving_type", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"d_shelving_type", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oleDbDataAdapterDepartments
			// 
			this->oleDbDataAdapterDepartments->DeleteCommand = this->oleDbDeleteCommand2;
			this->oleDbDataAdapterDepartments->InsertCommand = this->oleDbInsertCommand2;
			this->oleDbDataAdapterDepartments->SelectCommand = this->oleDbSelectCommand2;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__11 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(3) {(gcnew System::Data::Common::DataColumnMapping(L"d_id", 
				L"d_id")), (gcnew System::Data::Common::DataColumnMapping(L"d_name", L"d_name")), (gcnew System::Data::Common::DataColumnMapping(L"d_shelving_type", 
				L"d_shelving_type"))};
			this->oleDbDataAdapterDepartments->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"Відділи", __mcTemp__11))});
			this->oleDbDataAdapterDepartments->UpdateCommand = this->oleDbUpdateCommand2;
			// 
			// buttonManufacturers
			// 
			this->buttonManufacturers->AutoSize = true;
			this->buttonManufacturers->BackColor = System::Drawing::Color::White;
			this->buttonManufacturers->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonManufacturers->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->buttonManufacturers->FlatAppearance->BorderSize = 0;
			this->buttonManufacturers->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonManufacturers->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->buttonManufacturers->Location = System::Drawing::Point(150, 103);
			this->buttonManufacturers->Name = L"buttonManufacturers";
			this->buttonManufacturers->Size = System::Drawing::Size(101, 34);
			this->buttonManufacturers->TabIndex = 3;
			this->buttonManufacturers->Text = L"Виробники";
			this->buttonManufacturers->UseVisualStyleBackColor = false;
			this->buttonManufacturers->Click += gcnew System::EventHandler(this, &MainForm::buttonManufacturers_Click);
			// 
			// buttonDepartments
			// 
			this->buttonDepartments->AutoSize = true;
			this->buttonDepartments->BackColor = System::Drawing::Color::White;
			this->buttonDepartments->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonDepartments->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->buttonDepartments->FlatAppearance->BorderSize = 0;
			this->buttonDepartments->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDepartments->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->buttonDepartments->Location = System::Drawing::Point(251, 103);
			this->buttonDepartments->Name = L"buttonDepartments";
			this->buttonDepartments->Size = System::Drawing::Size(77, 34);
			this->buttonDepartments->TabIndex = 4;
			this->buttonDepartments->Text = L"Відділи";
			this->buttonDepartments->UseVisualStyleBackColor = false;
			this->buttonDepartments->Click += gcnew System::EventHandler(this, &MainForm::buttonDepartments_Click);
			// 
			// кодВиробникаDataGridViewTextBoxColumn
			// 
			this->кодВиробникаDataGridViewTextBoxColumn->DataPropertyName = L"Код виробника";
			this->кодВиробникаDataGridViewTextBoxColumn->HeaderText = L"Код виробника";
			this->кодВиробникаDataGridViewTextBoxColumn->Name = L"кодВиробникаDataGridViewTextBoxColumn";
			this->кодВиробникаDataGridViewTextBoxColumn->Width = 870;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->AutoGenerateColumns = false;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(96)), 
				static_cast<System::Int32>(static_cast<System::Byte>(125)), static_cast<System::Int32>(static_cast<System::Byte>(139)));
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->CellBorderStyle = System::Windows::Forms::DataGridViewCellBorderStyle::Sunken;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {this->midDataGridViewTextBoxColumn, 
				this->mnameDataGridViewTextBoxColumn, this->mcountryDataGridViewTextBoxColumn, this->mcityDataGridViewTextBoxColumn, this->maddressDataGridViewTextBoxColumn, 
				this->mphonenumberDataGridViewTextBoxColumn, this->memailDataGridViewTextBoxColumn});
			this->dataGridView1->DataMember = L"manufacturers";
			this->dataGridView1->DataSource = this->dataSet;
			this->dataGridView1->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataGridView1->GridColor = System::Drawing::SystemColors::ControlDarkDark;
			this->dataGridView1->Location = System::Drawing::Point(150, 137);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 10.5F));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(96)), 
				static_cast<System::Int32>(static_cast<System::Byte>(125)), static_cast<System::Int32>(static_cast<System::Byte>(139)));
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(852, 450);
			this->dataGridView1->TabIndex = 5;
			this->dataGridView1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::dataGridView1_MouseClick);
			// 
			// midDataGridViewTextBoxColumn
			// 
			this->midDataGridViewTextBoxColumn->DataPropertyName = L"m_id";
			this->midDataGridViewTextBoxColumn->HeaderText = L"m_id";
			this->midDataGridViewTextBoxColumn->Name = L"midDataGridViewTextBoxColumn";
			// 
			// mnameDataGridViewTextBoxColumn
			// 
			this->mnameDataGridViewTextBoxColumn->DataPropertyName = L"m_name";
			this->mnameDataGridViewTextBoxColumn->HeaderText = L"m_name";
			this->mnameDataGridViewTextBoxColumn->Name = L"mnameDataGridViewTextBoxColumn";
			// 
			// mcountryDataGridViewTextBoxColumn
			// 
			this->mcountryDataGridViewTextBoxColumn->DataPropertyName = L"m_country";
			this->mcountryDataGridViewTextBoxColumn->HeaderText = L"m_country";
			this->mcountryDataGridViewTextBoxColumn->Name = L"mcountryDataGridViewTextBoxColumn";
			// 
			// mcityDataGridViewTextBoxColumn
			// 
			this->mcityDataGridViewTextBoxColumn->DataPropertyName = L"m_city";
			this->mcityDataGridViewTextBoxColumn->HeaderText = L"m_city";
			this->mcityDataGridViewTextBoxColumn->Name = L"mcityDataGridViewTextBoxColumn";
			// 
			// maddressDataGridViewTextBoxColumn
			// 
			this->maddressDataGridViewTextBoxColumn->DataPropertyName = L"m_address";
			this->maddressDataGridViewTextBoxColumn->HeaderText = L"m_address";
			this->maddressDataGridViewTextBoxColumn->Name = L"maddressDataGridViewTextBoxColumn";
			// 
			// mphonenumberDataGridViewTextBoxColumn
			// 
			this->mphonenumberDataGridViewTextBoxColumn->DataPropertyName = L"m_phone_number";
			this->mphonenumberDataGridViewTextBoxColumn->HeaderText = L"m_phone_number";
			this->mphonenumberDataGridViewTextBoxColumn->Name = L"mphonenumberDataGridViewTextBoxColumn";
			// 
			// memailDataGridViewTextBoxColumn
			// 
			this->memailDataGridViewTextBoxColumn->DataPropertyName = L"m_email";
			this->memailDataGridViewTextBoxColumn->HeaderText = L"m_email";
			this->memailDataGridViewTextBoxColumn->Name = L"memailDataGridViewTextBoxColumn";
			// 
			// buttonDiscountCards
			// 
			this->buttonDiscountCards->AutoSize = true;
			this->buttonDiscountCards->BackColor = System::Drawing::Color::White;
			this->buttonDiscountCards->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonDiscountCards->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->buttonDiscountCards->FlatAppearance->BorderSize = 0;
			this->buttonDiscountCards->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDiscountCards->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->buttonDiscountCards->Location = System::Drawing::Point(328, 103);
			this->buttonDiscountCards->Name = L"buttonDiscountCards";
			this->buttonDiscountCards->Size = System::Drawing::Size(147, 34);
			this->buttonDiscountCards->TabIndex = 6;
			this->buttonDiscountCards->Text = L"Дисконтні картки";
			this->buttonDiscountCards->UseVisualStyleBackColor = false;
			this->buttonDiscountCards->Click += gcnew System::EventHandler(this, &MainForm::buttonDiscountCards_Click);
			// 
			// buttonInvoice
			// 
			this->buttonInvoice->AutoSize = true;
			this->buttonInvoice->BackColor = System::Drawing::Color::White;
			this->buttonInvoice->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonInvoice->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->buttonInvoice->FlatAppearance->BorderSize = 0;
			this->buttonInvoice->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonInvoice->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->buttonInvoice->Location = System::Drawing::Point(475, 103);
			this->buttonInvoice->Name = L"buttonInvoice";
			this->buttonInvoice->Size = System::Drawing::Size(86, 34);
			this->buttonInvoice->TabIndex = 7;
			this->buttonInvoice->Text = L"Накладні";
			this->buttonInvoice->UseVisualStyleBackColor = false;
			this->buttonInvoice->Click += gcnew System::EventHandler(this, &MainForm::buttonInvoice_Click);
			// 
			// buttonSupplies
			// 
			this->buttonSupplies->AutoSize = true;
			this->buttonSupplies->BackColor = System::Drawing::Color::White;
			this->buttonSupplies->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonSupplies->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->buttonSupplies->FlatAppearance->BorderSize = 0;
			this->buttonSupplies->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSupplies->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->buttonSupplies->Location = System::Drawing::Point(561, 103);
			this->buttonSupplies->Name = L"buttonSupplies";
			this->buttonSupplies->Size = System::Drawing::Size(91, 34);
			this->buttonSupplies->TabIndex = 8;
			this->buttonSupplies->Text = L"Поставки";
			this->buttonSupplies->UseVisualStyleBackColor = false;
			this->buttonSupplies->Click += gcnew System::EventHandler(this, &MainForm::buttonSupplies_Click);
			// 
			// buttonWorkers
			// 
			this->buttonWorkers->AutoSize = true;
			this->buttonWorkers->BackColor = System::Drawing::Color::White;
			this->buttonWorkers->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonWorkers->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->buttonWorkers->FlatAppearance->BorderSize = 0;
			this->buttonWorkers->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonWorkers->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->buttonWorkers->Location = System::Drawing::Point(652, 103);
			this->buttonWorkers->Name = L"buttonWorkers";
			this->buttonWorkers->Size = System::Drawing::Size(106, 34);
			this->buttonWorkers->TabIndex = 9;
			this->buttonWorkers->Text = L"Працівники";
			this->buttonWorkers->UseVisualStyleBackColor = false;
			this->buttonWorkers->Click += gcnew System::EventHandler(this, &MainForm::buttonWorkers_Click);
			// 
			// buttonSelling
			// 
			this->buttonSelling->AutoSize = true;
			this->buttonSelling->BackColor = System::Drawing::Color::White;
			this->buttonSelling->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonSelling->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->buttonSelling->FlatAppearance->BorderSize = 0;
			this->buttonSelling->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSelling->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->buttonSelling->Location = System::Drawing::Point(758, 103);
			this->buttonSelling->Name = L"buttonSelling";
			this->buttonSelling->Size = System::Drawing::Size(78, 34);
			this->buttonSelling->TabIndex = 10;
			this->buttonSelling->Text = L"Продаж";
			this->buttonSelling->UseVisualStyleBackColor = false;
			this->buttonSelling->Click += gcnew System::EventHandler(this, &MainForm::buttonSelling_Click);
			// 
			// buttonGoods
			// 
			this->buttonGoods->AutoSize = true;
			this->buttonGoods->BackColor = System::Drawing::Color::White;
			this->buttonGoods->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonGoods->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->buttonGoods->FlatAppearance->BorderSize = 0;
			this->buttonGoods->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonGoods->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->buttonGoods->Location = System::Drawing::Point(836, 103);
			this->buttonGoods->Name = L"buttonGoods";
			this->buttonGoods->Size = System::Drawing::Size(73, 34);
			this->buttonGoods->TabIndex = 11;
			this->buttonGoods->Text = L"Товари";
			this->buttonGoods->UseVisualStyleBackColor = false;
			this->buttonGoods->Click += gcnew System::EventHandler(this, &MainForm::buttonGoods_Click);
			// 
			// buttonTransactions
			// 
			this->buttonTransactions->AutoSize = true;
			this->buttonTransactions->BackColor = System::Drawing::Color::White;
			this->buttonTransactions->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonTransactions->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->buttonTransactions->FlatAppearance->BorderSize = 0;
			this->buttonTransactions->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonTransactions->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->buttonTransactions->Location = System::Drawing::Point(909, 103);
			this->buttonTransactions->Name = L"buttonTransactions";
			this->buttonTransactions->Size = System::Drawing::Size(93, 34);
			this->buttonTransactions->TabIndex = 12;
			this->buttonTransactions->Text = L"Транзакції";
			this->buttonTransactions->UseVisualStyleBackColor = false;
			this->buttonTransactions->Click += gcnew System::EventHandler(this, &MainForm::buttonTransactions_Click);
			// 
			// oleDbSelectCommand3
			// 
			this->oleDbSelectCommand3->CommandText = L"SELECT        ДисконтніКартки.*\r\nFROM            ДисконтніКартки";
			this->oleDbSelectCommand3->Connection = this->oleDbConnection1;
			// 
			// oleDbInsertCommand3
			// 
			this->oleDbInsertCommand3->CommandText = L"INSERT INTO `ДисконтніКартки` (`dc_client_name`, `dc_percentage`) VALUES (\?, \?)";
			this->oleDbInsertCommand3->Connection = this->oleDbConnection1;
			this->oleDbInsertCommand3->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(2) {(gcnew System::Data::OleDb::OleDbParameter(L"dc_client_name", 
				System::Data::OleDb::OleDbType::VarWChar, 0, L"dc_client_name")), (gcnew System::Data::OleDb::OleDbParameter(L"dc_percentage", 
				System::Data::OleDb::OleDbType::Single, 0, L"dc_percentage"))});
			// 
			// oleDbUpdateCommand3
			// 
			this->oleDbUpdateCommand3->CommandText = resources->GetString(L"oleDbUpdateCommand3.CommandText");
			this->oleDbUpdateCommand3->Connection = this->oleDbConnection1;
			this->oleDbUpdateCommand3->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(7) {(gcnew System::Data::OleDb::OleDbParameter(L"dc_client_name", 
				System::Data::OleDb::OleDbType::VarWChar, 0, L"dc_client_name")), (gcnew System::Data::OleDb::OleDbParameter(L"dc_percentage", 
				System::Data::OleDb::OleDbType::Single, 0, L"dc_percentage")), (gcnew System::Data::OleDb::OleDbParameter(L"Original_dc_id", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"dc_id", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_dc_client_name", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"dc_client_name", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_dc_client_name", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"dc_client_name", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_dc_percentage", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"dc_percentage", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_dc_percentage", 
				System::Data::OleDb::OleDbType::Single, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"dc_percentage", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oleDbDeleteCommand3
			// 
			this->oleDbDeleteCommand3->CommandText = L"DELETE FROM `ДисконтніКартки` WHERE ((`dc_id` = \?) AND ((\? = 1 AND `dc_client_nam" 
				L"e` IS NULL) OR (`dc_client_name` = \?)) AND ((\? = 1 AND `dc_percentage` IS NULL) " 
				L"OR (`dc_percentage` = \?)))";
			this->oleDbDeleteCommand3->Connection = this->oleDbConnection1;
			this->oleDbDeleteCommand3->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(5) {(gcnew System::Data::OleDb::OleDbParameter(L"Original_dc_id", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"dc_id", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_dc_client_name", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"dc_client_name", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_dc_client_name", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"dc_client_name", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_dc_percentage", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"dc_percentage", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_dc_percentage", 
				System::Data::OleDb::OleDbType::Single, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"dc_percentage", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oleDbDataAdapterDiscountCards
			// 
			this->oleDbDataAdapterDiscountCards->DeleteCommand = this->oleDbDeleteCommand3;
			this->oleDbDataAdapterDiscountCards->InsertCommand = this->oleDbInsertCommand3;
			this->oleDbDataAdapterDiscountCards->SelectCommand = this->oleDbSelectCommand3;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__12 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(3) {(gcnew System::Data::Common::DataColumnMapping(L"dc_id", 
				L"dc_id")), (gcnew System::Data::Common::DataColumnMapping(L"dc_client_name", L"dc_client_name")), (gcnew System::Data::Common::DataColumnMapping(L"dc_percentage", 
				L"dc_percentage"))};
			this->oleDbDataAdapterDiscountCards->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"ДисконтніКартки", __mcTemp__12))});
			this->oleDbDataAdapterDiscountCards->UpdateCommand = this->oleDbUpdateCommand3;
			// 
			// oleDbSelectCommand4
			// 
			this->oleDbSelectCommand4->CommandText = L"SELECT        Накладні.*\r\nFROM            Накладні";
			this->oleDbSelectCommand4->Connection = this->oleDbConnection1;
			// 
			// oleDbInsertCommand4
			// 
			this->oleDbInsertCommand4->CommandText = L"INSERT INTO `Накладні` (`i_w_id`, `i_date_time`) VALUES (\?, \?)";
			this->oleDbInsertCommand4->Connection = this->oleDbConnection1;
			this->oleDbInsertCommand4->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(2) {(gcnew System::Data::OleDb::OleDbParameter(L"i_w_id", 
				System::Data::OleDb::OleDbType::Integer, 0, L"i_w_id")), (gcnew System::Data::OleDb::OleDbParameter(L"i_date_time", System::Data::OleDb::OleDbType::Date, 
				0, L"i_date_time"))});
			// 
			// oleDbUpdateCommand4
			// 
			this->oleDbUpdateCommand4->CommandText = L"UPDATE `Накладні` SET `i_w_id` = \?, `i_date_time` = \? WHERE ((`i_id` = \?) AND ((\?" 
				L" = 1 AND `i_w_id` IS NULL) OR (`i_w_id` = \?)) AND ((\? = 1 AND `i_date_time` IS N" 
				L"ULL) OR (`i_date_time` = \?)))";
			this->oleDbUpdateCommand4->Connection = this->oleDbConnection1;
			this->oleDbUpdateCommand4->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(7) {(gcnew System::Data::OleDb::OleDbParameter(L"i_w_id", 
				System::Data::OleDb::OleDbType::Integer, 0, L"i_w_id")), (gcnew System::Data::OleDb::OleDbParameter(L"i_date_time", System::Data::OleDb::OleDbType::Date, 
				0, L"i_date_time")), (gcnew System::Data::OleDb::OleDbParameter(L"Original_i_id", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"i_id", System::Data::DataRowVersion::Original, 
				nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_i_w_id", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, 
				static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"i_w_id", System::Data::DataRowVersion::Original, true, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"Original_i_w_id", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, 
				false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"i_w_id", System::Data::DataRowVersion::Original, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"IsNull_i_date_time", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, 
				static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"i_date_time", System::Data::DataRowVersion::Original, true, 
				nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_i_date_time", System::Data::OleDb::OleDbType::Date, 0, System::Data::ParameterDirection::Input, 
				false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"i_date_time", System::Data::DataRowVersion::Original, 
				nullptr))});
			// 
			// oleDbDeleteCommand4
			// 
			this->oleDbDeleteCommand4->CommandText = L"DELETE FROM `Накладні` WHERE ((`i_id` = \?) AND ((\? = 1 AND `i_w_id` IS NULL) OR (" 
				L"`i_w_id` = \?)) AND ((\? = 1 AND `i_date_time` IS NULL) OR (`i_date_time` = \?)))";
			this->oleDbDeleteCommand4->Connection = this->oleDbConnection1;
			this->oleDbDeleteCommand4->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(5) {(gcnew System::Data::OleDb::OleDbParameter(L"Original_i_id", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"i_id", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_i_w_id", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"i_w_id", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_i_w_id", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"i_w_id", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_i_date_time", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"i_date_time", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_i_date_time", 
				System::Data::OleDb::OleDbType::Date, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"i_date_time", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oleDbDataAdapterInvoice
			// 
			this->oleDbDataAdapterInvoice->DeleteCommand = this->oleDbDeleteCommand4;
			this->oleDbDataAdapterInvoice->InsertCommand = this->oleDbInsertCommand4;
			this->oleDbDataAdapterInvoice->SelectCommand = this->oleDbSelectCommand4;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__13 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(3) {(gcnew System::Data::Common::DataColumnMapping(L"i_id", 
				L"i_id")), (gcnew System::Data::Common::DataColumnMapping(L"i_w_id", L"i_w_id")), (gcnew System::Data::Common::DataColumnMapping(L"i_date_time", 
				L"i_date_time"))};
			this->oleDbDataAdapterInvoice->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"Накладні", __mcTemp__13))});
			this->oleDbDataAdapterInvoice->UpdateCommand = this->oleDbUpdateCommand4;
			// 
			// buttonDelete
			// 
			this->buttonDelete->AutoSize = true;
			this->buttonDelete->BackColor = System::Drawing::Color::Transparent;
			this->buttonDelete->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonDelete->FlatAppearance->BorderSize = 0;
			this->buttonDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonDelete->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"buttonDelete.Image")));
			this->buttonDelete->Location = System::Drawing::Point(1040, 615);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(44, 44);
			this->buttonDelete->TabIndex = 13;
			this->buttonDelete->UseVisualStyleBackColor = false;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &MainForm::buttonDelete_Click);
			// 
			// oleDbSelectCommand5
			// 
			this->oleDbSelectCommand5->CommandText = L"SELECT        Поставка.*\r\nFROM            Поставка";
			this->oleDbSelectCommand5->Connection = this->oleDbConnection1;
			// 
			// oleDbInsertCommand5
			// 
			this->oleDbInsertCommand5->CommandText = L"INSERT INTO `Поставка` (`s_i_id`, `s_g_id`, `s_units_amount`, `s_purchase_price`," 
				L" `s_expiration_date`) VALUES (\?, \?, \?, \?, \?)";
			this->oleDbInsertCommand5->Connection = this->oleDbConnection1;
			this->oleDbInsertCommand5->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(5) {(gcnew System::Data::OleDb::OleDbParameter(L"s_i_id", 
				System::Data::OleDb::OleDbType::Integer, 0, L"s_i_id")), (gcnew System::Data::OleDb::OleDbParameter(L"s_g_id", System::Data::OleDb::OleDbType::Integer, 
				0, L"s_g_id")), (gcnew System::Data::OleDb::OleDbParameter(L"s_units_amount", System::Data::OleDb::OleDbType::Integer, 0, 
				L"s_units_amount")), (gcnew System::Data::OleDb::OleDbParameter(L"s_purchase_price", System::Data::OleDb::OleDbType::Currency, 
				0, L"s_purchase_price")), (gcnew System::Data::OleDb::OleDbParameter(L"s_expiration_date", System::Data::OleDb::OleDbType::Date, 
				0, L"s_expiration_date"))});
			// 
			// oleDbUpdateCommand5
			// 
			this->oleDbUpdateCommand5->CommandText = resources->GetString(L"oleDbUpdateCommand5.CommandText");
			this->oleDbUpdateCommand5->Connection = this->oleDbConnection1;
			this->oleDbUpdateCommand5->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(16) {(gcnew System::Data::OleDb::OleDbParameter(L"s_i_id", 
				System::Data::OleDb::OleDbType::Integer, 0, L"s_i_id")), (gcnew System::Data::OleDb::OleDbParameter(L"s_g_id", System::Data::OleDb::OleDbType::Integer, 
				0, L"s_g_id")), (gcnew System::Data::OleDb::OleDbParameter(L"s_units_amount", System::Data::OleDb::OleDbType::Integer, 0, 
				L"s_units_amount")), (gcnew System::Data::OleDb::OleDbParameter(L"s_purchase_price", System::Data::OleDb::OleDbType::Currency, 
				0, L"s_purchase_price")), (gcnew System::Data::OleDb::OleDbParameter(L"s_expiration_date", System::Data::OleDb::OleDbType::Date, 
				0, L"s_expiration_date")), (gcnew System::Data::OleDb::OleDbParameter(L"Original_s_id", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"s_id", System::Data::DataRowVersion::Original, 
				nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_s_i_id", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, 
				static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"s_i_id", System::Data::DataRowVersion::Original, true, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"Original_s_i_id", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, 
				false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"s_i_id", System::Data::DataRowVersion::Original, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"IsNull_s_g_id", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, 
				static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"s_g_id", System::Data::DataRowVersion::Original, true, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"Original_s_g_id", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, 
				false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"s_g_id", System::Data::DataRowVersion::Original, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"IsNull_s_units_amount", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, 
				static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"s_units_amount", System::Data::DataRowVersion::Original, true, 
				nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_s_units_amount", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"s_units_amount", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_s_purchase_price", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"s_purchase_price", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_s_purchase_price", 
				System::Data::OleDb::OleDbType::Currency, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"s_purchase_price", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_s_expiration_date", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"s_expiration_date", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_s_expiration_date", 
				System::Data::OleDb::OleDbType::Date, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"s_expiration_date", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oleDbDeleteCommand5
			// 
			this->oleDbDeleteCommand5->CommandText = resources->GetString(L"oleDbDeleteCommand5.CommandText");
			this->oleDbDeleteCommand5->Connection = this->oleDbConnection1;
			this->oleDbDeleteCommand5->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(11) {(gcnew System::Data::OleDb::OleDbParameter(L"Original_s_id", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"s_id", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_s_i_id", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"s_i_id", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_s_i_id", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"s_i_id", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_s_g_id", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"s_g_id", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_s_g_id", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"s_g_id", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_s_units_amount", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"s_units_amount", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_s_units_amount", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"s_units_amount", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_s_purchase_price", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"s_purchase_price", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_s_purchase_price", 
				System::Data::OleDb::OleDbType::Currency, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"s_purchase_price", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_s_expiration_date", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"s_expiration_date", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_s_expiration_date", 
				System::Data::OleDb::OleDbType::Date, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"s_expiration_date", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oleDbDataAdapterSupplies
			// 
			this->oleDbDataAdapterSupplies->DeleteCommand = this->oleDbDeleteCommand5;
			this->oleDbDataAdapterSupplies->InsertCommand = this->oleDbInsertCommand5;
			this->oleDbDataAdapterSupplies->SelectCommand = this->oleDbSelectCommand5;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__14 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(6) {(gcnew System::Data::Common::DataColumnMapping(L"s_id", 
				L"s_id")), (gcnew System::Data::Common::DataColumnMapping(L"s_i_id", L"s_i_id")), (gcnew System::Data::Common::DataColumnMapping(L"s_g_id", 
				L"s_g_id")), (gcnew System::Data::Common::DataColumnMapping(L"s_units_amount", L"s_units_amount")), (gcnew System::Data::Common::DataColumnMapping(L"s_purchase_price", 
				L"s_purchase_price")), (gcnew System::Data::Common::DataColumnMapping(L"s_expiration_date", L"s_expiration_date"))};
			this->oleDbDataAdapterSupplies->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"Поставка", __mcTemp__14))});
			this->oleDbDataAdapterSupplies->UpdateCommand = this->oleDbUpdateCommand5;
			// 
			// oleDbSelectCommand6
			// 
			this->oleDbSelectCommand6->CommandText = L"SELECT        Працівники.*\r\nFROM            Працівники";
			this->oleDbSelectCommand6->Connection = this->oleDbConnection1;
			// 
			// oleDbInsertCommand6
			// 
			this->oleDbInsertCommand6->CommandText = L"INSERT INTO `Працівники` (`w_name`, `w_employment_date`, `w_firing_date`, `w_birt" 
				L"h_date`, `w_d_id`, `w_job`, `w_education`, `w_salary`) VALUES (\?, \?, \?, \?, \?, \?," 
				L" \?, \?)";
			this->oleDbInsertCommand6->Connection = this->oleDbConnection1;
			this->oleDbInsertCommand6->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(8) {(gcnew System::Data::OleDb::OleDbParameter(L"w_name", 
				System::Data::OleDb::OleDbType::VarWChar, 0, L"w_name")), (gcnew System::Data::OleDb::OleDbParameter(L"w_employment_date", 
				System::Data::OleDb::OleDbType::Date, 0, L"w_employment_date")), (gcnew System::Data::OleDb::OleDbParameter(L"w_firing_date", 
				System::Data::OleDb::OleDbType::Date, 0, L"w_firing_date")), (gcnew System::Data::OleDb::OleDbParameter(L"w_birth_date", 
				System::Data::OleDb::OleDbType::Date, 0, L"w_birth_date")), (gcnew System::Data::OleDb::OleDbParameter(L"w_d_id", System::Data::OleDb::OleDbType::Integer, 
				0, L"w_d_id")), (gcnew System::Data::OleDb::OleDbParameter(L"w_job", System::Data::OleDb::OleDbType::VarWChar, 0, L"w_job")), 
				(gcnew System::Data::OleDb::OleDbParameter(L"w_education", System::Data::OleDb::OleDbType::VarWChar, 0, L"w_education")), (gcnew System::Data::OleDb::OleDbParameter(L"w_salary", 
				System::Data::OleDb::OleDbType::Currency, 0, L"w_salary"))});
			// 
			// oleDbUpdateCommand6
			// 
			this->oleDbUpdateCommand6->CommandText = resources->GetString(L"oleDbUpdateCommand6.CommandText");
			this->oleDbUpdateCommand6->Connection = this->oleDbConnection1;
			this->oleDbUpdateCommand6->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(25) {(gcnew System::Data::OleDb::OleDbParameter(L"w_name", 
				System::Data::OleDb::OleDbType::VarWChar, 0, L"w_name")), (gcnew System::Data::OleDb::OleDbParameter(L"w_employment_date", 
				System::Data::OleDb::OleDbType::Date, 0, L"w_employment_date")), (gcnew System::Data::OleDb::OleDbParameter(L"w_firing_date", 
				System::Data::OleDb::OleDbType::Date, 0, L"w_firing_date")), (gcnew System::Data::OleDb::OleDbParameter(L"w_birth_date", 
				System::Data::OleDb::OleDbType::Date, 0, L"w_birth_date")), (gcnew System::Data::OleDb::OleDbParameter(L"w_d_id", System::Data::OleDb::OleDbType::Integer, 
				0, L"w_d_id")), (gcnew System::Data::OleDb::OleDbParameter(L"w_job", System::Data::OleDb::OleDbType::VarWChar, 0, L"w_job")), 
				(gcnew System::Data::OleDb::OleDbParameter(L"w_education", System::Data::OleDb::OleDbType::VarWChar, 0, L"w_education")), (gcnew System::Data::OleDb::OleDbParameter(L"w_salary", 
				System::Data::OleDb::OleDbType::Currency, 0, L"w_salary")), (gcnew System::Data::OleDb::OleDbParameter(L"Original_w_id", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"w_id", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_w_name", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"w_name", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_w_name", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"w_name", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_w_employment_date", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"w_employment_date", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_w_employment_date", 
				System::Data::OleDb::OleDbType::Date, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"w_employment_date", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_w_firing_date", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"w_firing_date", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_w_firing_date", 
				System::Data::OleDb::OleDbType::Date, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"w_firing_date", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_w_birth_date", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"w_birth_date", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_w_birth_date", 
				System::Data::OleDb::OleDbType::Date, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"w_birth_date", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_w_d_id", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"w_d_id", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_w_d_id", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"w_d_id", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_w_job", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"w_job", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_w_job", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"w_job", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_w_education", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"w_education", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_w_education", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"w_education", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_w_salary", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"w_salary", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_w_salary", 
				System::Data::OleDb::OleDbType::Currency, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"w_salary", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oleDbDeleteCommand6
			// 
			this->oleDbDeleteCommand6->CommandText = resources->GetString(L"oleDbDeleteCommand6.CommandText");
			this->oleDbDeleteCommand6->Connection = this->oleDbConnection1;
			this->oleDbDeleteCommand6->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(17) {(gcnew System::Data::OleDb::OleDbParameter(L"Original_w_id", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"w_id", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_w_name", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"w_name", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_w_name", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"w_name", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_w_employment_date", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"w_employment_date", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_w_employment_date", 
				System::Data::OleDb::OleDbType::Date, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"w_employment_date", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_w_firing_date", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"w_firing_date", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_w_firing_date", 
				System::Data::OleDb::OleDbType::Date, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"w_firing_date", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_w_birth_date", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"w_birth_date", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_w_birth_date", 
				System::Data::OleDb::OleDbType::Date, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"w_birth_date", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_w_d_id", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"w_d_id", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_w_d_id", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"w_d_id", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_w_job", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"w_job", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_w_job", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"w_job", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_w_education", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"w_education", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_w_education", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"w_education", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_w_salary", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"w_salary", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_w_salary", 
				System::Data::OleDb::OleDbType::Currency, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"w_salary", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oleDbDataAdapterWorkers
			// 
			this->oleDbDataAdapterWorkers->DeleteCommand = this->oleDbDeleteCommand6;
			this->oleDbDataAdapterWorkers->InsertCommand = this->oleDbInsertCommand6;
			this->oleDbDataAdapterWorkers->SelectCommand = this->oleDbSelectCommand6;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__15 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(9) {(gcnew System::Data::Common::DataColumnMapping(L"w_id", 
				L"w_id")), (gcnew System::Data::Common::DataColumnMapping(L"w_name", L"w_name")), (gcnew System::Data::Common::DataColumnMapping(L"w_employment_date", 
				L"w_employment_date")), (gcnew System::Data::Common::DataColumnMapping(L"w_firing_date", L"w_firing_date")), (gcnew System::Data::Common::DataColumnMapping(L"w_birth_date", 
				L"w_birth_date")), (gcnew System::Data::Common::DataColumnMapping(L"w_d_id", L"w_d_id")), (gcnew System::Data::Common::DataColumnMapping(L"w_job", 
				L"w_job")), (gcnew System::Data::Common::DataColumnMapping(L"w_education", L"w_education")), (gcnew System::Data::Common::DataColumnMapping(L"w_salary", 
				L"w_salary"))};
			this->oleDbDataAdapterWorkers->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"Працівники", __mcTemp__15))});
			this->oleDbDataAdapterWorkers->UpdateCommand = this->oleDbUpdateCommand6;
			// 
			// oleDbSelectCommand7
			// 
			this->oleDbSelectCommand7->CommandText = L"SELECT        Продаж.*\r\nFROM            Продаж";
			this->oleDbSelectCommand7->Connection = this->oleDbConnection1;
			// 
			// oleDbInsertCommand7
			// 
			this->oleDbInsertCommand7->CommandText = L"INSERT INTO `Продаж` (`sel_t_id`, `sel_g_id`, `sel_units_amount`) VALUES (\?, \?, \?" 
				L")";
			this->oleDbInsertCommand7->Connection = this->oleDbConnection1;
			this->oleDbInsertCommand7->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(3) {(gcnew System::Data::OleDb::OleDbParameter(L"sel_t_id", 
				System::Data::OleDb::OleDbType::Integer, 0, L"sel_t_id")), (gcnew System::Data::OleDb::OleDbParameter(L"sel_g_id", System::Data::OleDb::OleDbType::Integer, 
				0, L"sel_g_id")), (gcnew System::Data::OleDb::OleDbParameter(L"sel_units_amount", System::Data::OleDb::OleDbType::Integer, 
				0, L"sel_units_amount"))});
			// 
			// oleDbUpdateCommand7
			// 
			this->oleDbUpdateCommand7->CommandText = resources->GetString(L"oleDbUpdateCommand7.CommandText");
			this->oleDbUpdateCommand7->Connection = this->oleDbConnection1;
			this->oleDbUpdateCommand7->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(10) {(gcnew System::Data::OleDb::OleDbParameter(L"sel_t_id", 
				System::Data::OleDb::OleDbType::Integer, 0, L"sel_t_id")), (gcnew System::Data::OleDb::OleDbParameter(L"sel_g_id", System::Data::OleDb::OleDbType::Integer, 
				0, L"sel_g_id")), (gcnew System::Data::OleDb::OleDbParameter(L"sel_units_amount", System::Data::OleDb::OleDbType::Integer, 
				0, L"sel_units_amount")), (gcnew System::Data::OleDb::OleDbParameter(L"Original_sel_id", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"sel_id", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_sel_t_id", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"sel_t_id", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_sel_t_id", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"sel_t_id", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_sel_g_id", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"sel_g_id", System::Data::DataRowVersion::Original, 
				true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_sel_g_id", System::Data::OleDb::OleDbType::Integer, 
				0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"sel_g_id", 
				System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_sel_units_amount", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"sel_units_amount", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_sel_units_amount", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"sel_units_amount", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oleDbDeleteCommand7
			// 
			this->oleDbDeleteCommand7->CommandText = resources->GetString(L"oleDbDeleteCommand7.CommandText");
			this->oleDbDeleteCommand7->Connection = this->oleDbConnection1;
			this->oleDbDeleteCommand7->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(7) {(gcnew System::Data::OleDb::OleDbParameter(L"Original_sel_id", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"sel_id", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_sel_t_id", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"sel_t_id", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_sel_t_id", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"sel_t_id", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_sel_g_id", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"sel_g_id", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_sel_g_id", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"sel_g_id", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_sel_units_amount", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"sel_units_amount", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_sel_units_amount", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"sel_units_amount", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oleDbDataAdapterSelling
			// 
			this->oleDbDataAdapterSelling->DeleteCommand = this->oleDbDeleteCommand7;
			this->oleDbDataAdapterSelling->InsertCommand = this->oleDbInsertCommand7;
			this->oleDbDataAdapterSelling->SelectCommand = this->oleDbSelectCommand7;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__16 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(4) {(gcnew System::Data::Common::DataColumnMapping(L"sel_id", 
				L"sel_id")), (gcnew System::Data::Common::DataColumnMapping(L"sel_t_id", L"sel_t_id")), (gcnew System::Data::Common::DataColumnMapping(L"sel_g_id", 
				L"sel_g_id")), (gcnew System::Data::Common::DataColumnMapping(L"sel_units_amount", L"sel_units_amount"))};
			this->oleDbDataAdapterSelling->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"Продаж", __mcTemp__16))});
			this->oleDbDataAdapterSelling->UpdateCommand = this->oleDbUpdateCommand7;
			// 
			// oleDbSelectCommand8
			// 
			this->oleDbSelectCommand8->CommandText = L"SELECT        Товари.*\r\nFROM            Товари";
			this->oleDbSelectCommand8->Connection = this->oleDbConnection1;
			// 
			// oleDbInsertCommand8
			// 
			this->oleDbInsertCommand8->CommandText = L"INSERT INTO `Товари` (`g_name`, `g_barcode`, `g_category`, `g_d_id`, `g_unit_of_m" 
				L"easurement`, `g_m_id`, `g_retail_price`) VALUES (\?, \?, \?, \?, \?, \?, \?)";
			this->oleDbInsertCommand8->Connection = this->oleDbConnection1;
			this->oleDbInsertCommand8->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(7) {(gcnew System::Data::OleDb::OleDbParameter(L"g_name", 
				System::Data::OleDb::OleDbType::VarWChar, 0, L"g_name")), (gcnew System::Data::OleDb::OleDbParameter(L"g_barcode", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"g_barcode")), (gcnew System::Data::OleDb::OleDbParameter(L"g_category", System::Data::OleDb::OleDbType::VarWChar, 0, 
				L"g_category")), (gcnew System::Data::OleDb::OleDbParameter(L"g_d_id", System::Data::OleDb::OleDbType::Integer, 0, L"g_d_id")), 
				(gcnew System::Data::OleDb::OleDbParameter(L"g_unit_of_measurement", System::Data::OleDb::OleDbType::VarWChar, 0, L"g_unit_of_measurement")), 
				(gcnew System::Data::OleDb::OleDbParameter(L"g_m_id", System::Data::OleDb::OleDbType::Integer, 0, L"g_m_id")), (gcnew System::Data::OleDb::OleDbParameter(L"g_retail_price", 
				System::Data::OleDb::OleDbType::Currency, 0, L"g_retail_price"))});
			// 
			// oleDbUpdateCommand8
			// 
			this->oleDbUpdateCommand8->CommandText = resources->GetString(L"oleDbUpdateCommand8.CommandText");
			this->oleDbUpdateCommand8->Connection = this->oleDbConnection1;
			this->oleDbUpdateCommand8->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(22) {(gcnew System::Data::OleDb::OleDbParameter(L"g_name", 
				System::Data::OleDb::OleDbType::VarWChar, 0, L"g_name")), (gcnew System::Data::OleDb::OleDbParameter(L"g_barcode", System::Data::OleDb::OleDbType::VarWChar, 
				0, L"g_barcode")), (gcnew System::Data::OleDb::OleDbParameter(L"g_category", System::Data::OleDb::OleDbType::VarWChar, 0, 
				L"g_category")), (gcnew System::Data::OleDb::OleDbParameter(L"g_d_id", System::Data::OleDb::OleDbType::Integer, 0, L"g_d_id")), 
				(gcnew System::Data::OleDb::OleDbParameter(L"g_unit_of_measurement", System::Data::OleDb::OleDbType::VarWChar, 0, L"g_unit_of_measurement")), 
				(gcnew System::Data::OleDb::OleDbParameter(L"g_m_id", System::Data::OleDb::OleDbType::Integer, 0, L"g_m_id")), (gcnew System::Data::OleDb::OleDbParameter(L"g_retail_price", 
				System::Data::OleDb::OleDbType::Currency, 0, L"g_retail_price")), (gcnew System::Data::OleDb::OleDbParameter(L"Original_g_id", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"g_id", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_g_name", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"g_name", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_g_name", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"g_name", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_g_barcode", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"g_barcode", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_g_barcode", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"g_barcode", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_g_category", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"g_category", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_g_category", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"g_category", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_g_d_id", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"g_d_id", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_g_d_id", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"g_d_id", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_g_unit_of_measurement", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"g_unit_of_measurement", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_g_unit_of_measurement", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"g_unit_of_measurement", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_g_m_id", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"g_m_id", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_g_m_id", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"g_m_id", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_g_retail_price", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"g_retail_price", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_g_retail_price", 
				System::Data::OleDb::OleDbType::Currency, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"g_retail_price", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oleDbDeleteCommand8
			// 
			this->oleDbDeleteCommand8->CommandText = resources->GetString(L"oleDbDeleteCommand8.CommandText");
			this->oleDbDeleteCommand8->Connection = this->oleDbConnection1;
			this->oleDbDeleteCommand8->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(15) {(gcnew System::Data::OleDb::OleDbParameter(L"Original_g_id", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"g_id", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_g_name", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"g_name", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_g_name", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"g_name", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_g_barcode", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"g_barcode", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_g_barcode", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"g_barcode", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_g_category", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"g_category", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_g_category", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"g_category", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_g_d_id", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"g_d_id", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_g_d_id", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"g_d_id", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_g_unit_of_measurement", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"g_unit_of_measurement", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_g_unit_of_measurement", 
				System::Data::OleDb::OleDbType::VarWChar, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"g_unit_of_measurement", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_g_m_id", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"g_m_id", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_g_m_id", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"g_m_id", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_g_retail_price", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"g_retail_price", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_g_retail_price", 
				System::Data::OleDb::OleDbType::Currency, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"g_retail_price", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oleDbDataAdapterGoods
			// 
			this->oleDbDataAdapterGoods->DeleteCommand = this->oleDbDeleteCommand8;
			this->oleDbDataAdapterGoods->InsertCommand = this->oleDbInsertCommand8;
			this->oleDbDataAdapterGoods->SelectCommand = this->oleDbSelectCommand8;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__17 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(8) {(gcnew System::Data::Common::DataColumnMapping(L"g_id", 
				L"g_id")), (gcnew System::Data::Common::DataColumnMapping(L"g_name", L"g_name")), (gcnew System::Data::Common::DataColumnMapping(L"g_barcode", 
				L"g_barcode")), (gcnew System::Data::Common::DataColumnMapping(L"g_category", L"g_category")), (gcnew System::Data::Common::DataColumnMapping(L"g_d_id", 
				L"g_d_id")), (gcnew System::Data::Common::DataColumnMapping(L"g_unit_of_measurement", L"g_unit_of_measurement")), (gcnew System::Data::Common::DataColumnMapping(L"g_m_id", 
				L"g_m_id")), (gcnew System::Data::Common::DataColumnMapping(L"g_retail_price", L"g_retail_price"))};
			this->oleDbDataAdapterGoods->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"Товари", __mcTemp__17))});
			this->oleDbDataAdapterGoods->UpdateCommand = this->oleDbUpdateCommand8;
			// 
			// oleDbSelectCommand9
			// 
			this->oleDbSelectCommand9->CommandText = L"SELECT        Транзакції.*\r\nFROM            Транзакції";
			this->oleDbSelectCommand9->Connection = this->oleDbConnection1;
			// 
			// oleDbInsertCommand9
			// 
			this->oleDbInsertCommand9->CommandText = L"INSERT INTO `Транзакції` (`t_w_id`, `t_dc_id`, `t_date_time`) VALUES (\?, \?, \?)";
			this->oleDbInsertCommand9->Connection = this->oleDbConnection1;
			this->oleDbInsertCommand9->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(3) {(gcnew System::Data::OleDb::OleDbParameter(L"t_w_id", 
				System::Data::OleDb::OleDbType::Integer, 0, L"t_w_id")), (gcnew System::Data::OleDb::OleDbParameter(L"t_dc_id", System::Data::OleDb::OleDbType::Integer, 
				0, L"t_dc_id")), (gcnew System::Data::OleDb::OleDbParameter(L"t_date_time", System::Data::OleDb::OleDbType::Date, 0, L"t_date_time"))});
			// 
			// oleDbUpdateCommand9
			// 
			this->oleDbUpdateCommand9->CommandText = resources->GetString(L"oleDbUpdateCommand9.CommandText");
			this->oleDbUpdateCommand9->Connection = this->oleDbConnection1;
			this->oleDbUpdateCommand9->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(10) {(gcnew System::Data::OleDb::OleDbParameter(L"t_w_id", 
				System::Data::OleDb::OleDbType::Integer, 0, L"t_w_id")), (gcnew System::Data::OleDb::OleDbParameter(L"t_dc_id", System::Data::OleDb::OleDbType::Integer, 
				0, L"t_dc_id")), (gcnew System::Data::OleDb::OleDbParameter(L"t_date_time", System::Data::OleDb::OleDbType::Date, 0, L"t_date_time")), 
				(gcnew System::Data::OleDb::OleDbParameter(L"Original_t_id", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, 
				false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"t_id", System::Data::DataRowVersion::Original, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"IsNull_t_w_id", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, 
				static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"t_w_id", System::Data::DataRowVersion::Original, true, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"Original_t_w_id", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, 
				false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"t_w_id", System::Data::DataRowVersion::Original, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"IsNull_t_dc_id", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, 
				static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"t_dc_id", System::Data::DataRowVersion::Original, true, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"Original_t_dc_id", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, 
				false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"t_dc_id", System::Data::DataRowVersion::Original, nullptr)), 
				(gcnew System::Data::OleDb::OleDbParameter(L"IsNull_t_date_time", System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, 
				static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"t_date_time", System::Data::DataRowVersion::Original, true, 
				nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_t_date_time", System::Data::OleDb::OleDbType::Date, 0, System::Data::ParameterDirection::Input, 
				false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), L"t_date_time", System::Data::DataRowVersion::Original, 
				nullptr))});
			// 
			// oleDbDeleteCommand9
			// 
			this->oleDbDeleteCommand9->CommandText = resources->GetString(L"oleDbDeleteCommand9.CommandText");
			this->oleDbDeleteCommand9->Connection = this->oleDbConnection1;
			this->oleDbDeleteCommand9->Parameters->AddRange(gcnew cli::array< System::Data::OleDb::OleDbParameter^  >(7) {(gcnew System::Data::OleDb::OleDbParameter(L"Original_t_id", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"t_id", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_t_w_id", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"t_w_id", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_t_w_id", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"t_w_id", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_t_dc_id", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"t_dc_id", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_t_dc_id", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), 
				static_cast<System::Byte>(0), L"t_dc_id", System::Data::DataRowVersion::Original, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"IsNull_t_date_time", 
				System::Data::OleDb::OleDbType::Integer, 0, System::Data::ParameterDirection::Input, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"t_date_time", System::Data::DataRowVersion::Original, true, nullptr)), (gcnew System::Data::OleDb::OleDbParameter(L"Original_t_date_time", 
				System::Data::OleDb::OleDbType::Date, 0, System::Data::ParameterDirection::Input, false, static_cast<System::Byte>(0), static_cast<System::Byte>(0), 
				L"t_date_time", System::Data::DataRowVersion::Original, nullptr))});
			// 
			// oleDbDataAdapterTransactions
			// 
			this->oleDbDataAdapterTransactions->DeleteCommand = this->oleDbDeleteCommand9;
			this->oleDbDataAdapterTransactions->InsertCommand = this->oleDbInsertCommand9;
			this->oleDbDataAdapterTransactions->SelectCommand = this->oleDbSelectCommand9;
			cli::array< System::Data::Common::DataColumnMapping^ >^ __mcTemp__18 = gcnew cli::array< System::Data::Common::DataColumnMapping^  >(4) {(gcnew System::Data::Common::DataColumnMapping(L"t_id", 
				L"t_id")), (gcnew System::Data::Common::DataColumnMapping(L"t_w_id", L"t_w_id")), (gcnew System::Data::Common::DataColumnMapping(L"t_dc_id", 
				L"t_dc_id")), (gcnew System::Data::Common::DataColumnMapping(L"t_date_time", L"t_date_time"))};
			this->oleDbDataAdapterTransactions->TableMappings->AddRange(gcnew cli::array< System::Data::Common::DataTableMapping^  >(1) {(gcnew System::Data::Common::DataTableMapping(L"Table", 
				L"Транзакції", __mcTemp__18))});
			this->oleDbDataAdapterTransactions->UpdateCommand = this->oleDbUpdateCommand9;
			// 
			// buttonSaveChanges
			// 
			this->buttonSaveChanges->BackColor = System::Drawing::Color::Transparent;
			this->buttonSaveChanges->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonSaveChanges->FlatAppearance->BorderSize = 0;
			this->buttonSaveChanges->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSaveChanges->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->buttonSaveChanges->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"buttonSaveChanges.Image")));
			this->buttonSaveChanges->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonSaveChanges->Location = System::Drawing::Point(12, 38);
			this->buttonSaveChanges->Name = L"buttonSaveChanges";
			this->buttonSaveChanges->Size = System::Drawing::Size(236, 64);
			this->buttonSaveChanges->TabIndex = 14;
			this->buttonSaveChanges->Text = L"       Зберегти";
			this->buttonSaveChanges->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonSaveChanges->UseVisualStyleBackColor = false;
			this->buttonSaveChanges->Click += gcnew System::EventHandler(this, &MainForm::buttonSaveChanges_Click);
			// 
			// buttonPrint
			// 
			this->buttonPrint->BackColor = System::Drawing::Color::Transparent;
			this->buttonPrint->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonPrint->FlatAppearance->BorderSize = 0;
			this->buttonPrint->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPrint->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->buttonPrint->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"buttonPrint.Image")));
			this->buttonPrint->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonPrint->Location = System::Drawing::Point(12, 102);
			this->buttonPrint->Name = L"buttonPrint";
			this->buttonPrint->Size = System::Drawing::Size(236, 64);
			this->buttonPrint->TabIndex = 15;
			this->buttonPrint->Text = L"       Друк";
			this->buttonPrint->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonPrint->UseVisualStyleBackColor = false;
			this->buttonPrint->Click += gcnew System::EventHandler(this, &MainForm::buttonPrint_Click);
			// 
			// printDocument1
			// 
			this->printDocument1->PrintPage += gcnew System::Drawing::Printing::PrintPageEventHandler(this, &MainForm::printDocument1_PrintPage);
			// 
			// printDialog1
			// 
			this->printDialog1->AllowSelection = true;
			this->printDialog1->AllowSomePages = true;
			this->printDialog1->Document = this->printDocument1;
			this->printDialog1->PrintToFile = true;
			this->printDialog1->ShowHelp = true;
			this->printDialog1->UseEXDialog = true;
			// 
			// printPreviewDialog1
			// 
			this->printPreviewDialog1->AutoScrollMargin = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoScrollMinSize = System::Drawing::Size(0, 0);
			this->printPreviewDialog1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->printPreviewDialog1->ClientSize = System::Drawing::Size(400, 300);
			this->printPreviewDialog1->Document = this->printDocument1;
			this->printPreviewDialog1->Enabled = true;
			this->printPreviewDialog1->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"printPreviewDialog1.Icon")));
			this->printPreviewDialog1->Name = L"printPreviewDialog1";
			this->printPreviewDialog1->ShowIcon = false;
			this->printPreviewDialog1->Visible = false;
			// 
			// buttonPreview
			// 
			this->buttonPreview->BackColor = System::Drawing::Color::Transparent;
			this->buttonPreview->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonPreview->FlatAppearance->BorderSize = 0;
			this->buttonPreview->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonPreview->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->buttonPreview->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"buttonPreview.Image")));
			this->buttonPreview->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonPreview->Location = System::Drawing::Point(12, 166);
			this->buttonPreview->Name = L"buttonPreview";
			this->buttonPreview->Size = System::Drawing::Size(236, 64);
			this->buttonPreview->TabIndex = 16;
			this->buttonPreview->Text = L"       Попередній              перегляд";
			this->buttonPreview->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonPreview->UseVisualStyleBackColor = false;
			this->buttonPreview->Click += gcnew System::EventHandler(this, &MainForm::buttonPreview_Click);
			// 
			// panelMenu
			// 
			this->panelMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(90)), 
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->panelMenu->Controls->Add(this->buttonExit);
			this->panelMenu->Controls->Add(this->buttonAbout);
			this->panelMenu->Controls->Add(this->buttonHelp);
			this->panelMenu->Controls->Add(this->buttonSelections);
			this->panelMenu->Controls->Add(this->buttonSaveChanges);
			this->panelMenu->Controls->Add(this->buttonPreview);
			this->panelMenu->Controls->Add(this->buttonPrint);
			this->panelMenu->Location = System::Drawing::Point(-260, 65);
			this->panelMenu->Name = L"panelMenu";
			this->panelMenu->Size = System::Drawing::Size(260, 649);
			this->panelMenu->TabIndex = 17;
			// 
			// buttonExit
			// 
			this->buttonExit->BackColor = System::Drawing::Color::Transparent;
			this->buttonExit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonExit->FlatAppearance->BorderSize = 0;
			this->buttonExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonExit->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->buttonExit->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"buttonExit.Image")));
			this->buttonExit->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonExit->Location = System::Drawing::Point(12, 422);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(236, 64);
			this->buttonExit->TabIndex = 20;
			this->buttonExit->Text = L"       Вихід";
			this->buttonExit->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonExit->UseVisualStyleBackColor = false;
			this->buttonExit->Click += gcnew System::EventHandler(this, &MainForm::buttonClose_Click);
			// 
			// buttonAbout
			// 
			this->buttonAbout->BackColor = System::Drawing::Color::Transparent;
			this->buttonAbout->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonAbout->FlatAppearance->BorderSize = 0;
			this->buttonAbout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAbout->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->buttonAbout->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"buttonAbout.Image")));
			this->buttonAbout->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonAbout->Location = System::Drawing::Point(12, 358);
			this->buttonAbout->Name = L"buttonAbout";
			this->buttonAbout->Size = System::Drawing::Size(236, 64);
			this->buttonAbout->TabIndex = 19;
			this->buttonAbout->Text = L"       Про програму...";
			this->buttonAbout->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonAbout->UseVisualStyleBackColor = false;
			this->buttonAbout->Click += gcnew System::EventHandler(this, &MainForm::buttonAbout_Click);
			// 
			// buttonHelp
			// 
			this->buttonHelp->BackColor = System::Drawing::Color::Transparent;
			this->buttonHelp->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonHelp->FlatAppearance->BorderSize = 0;
			this->buttonHelp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonHelp->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->buttonHelp->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"buttonHelp.Image")));
			this->buttonHelp->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonHelp->Location = System::Drawing::Point(12, 294);
			this->buttonHelp->Name = L"buttonHelp";
			this->buttonHelp->Size = System::Drawing::Size(236, 64);
			this->buttonHelp->TabIndex = 18;
			this->buttonHelp->Text = L"       Довідка";
			this->buttonHelp->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonHelp->UseVisualStyleBackColor = false;
			this->buttonHelp->Click += gcnew System::EventHandler(this, &MainForm::buttonHelp_Click);
			// 
			// buttonSelections
			// 
			this->buttonSelections->BackColor = System::Drawing::Color::Transparent;
			this->buttonSelections->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonSelections->FlatAppearance->BorderSize = 0;
			this->buttonSelections->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSelections->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->buttonSelections->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"buttonSelections.Image")));
			this->buttonSelections->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonSelections->Location = System::Drawing::Point(12, 230);
			this->buttonSelections->Name = L"buttonSelections";
			this->buttonSelections->Size = System::Drawing::Size(236, 64);
			this->buttonSelections->TabIndex = 17;
			this->buttonSelections->Text = L"       Вибірки";
			this->buttonSelections->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonSelections->UseVisualStyleBackColor = false;
			this->buttonSelections->Click += gcnew System::EventHandler(this, &MainForm::buttonSelections_Click);
			// 
			// panelTop
			// 
			this->panelTop->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(90)), 
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->panelTop->Controls->Add(this->buttonMenu);
			this->panelTop->Controls->Add(this->buttonClose);
			this->panelTop->Location = System::Drawing::Point(0, 0);
			this->panelTop->Name = L"panelTop";
			this->panelTop->Size = System::Drawing::Size(1162, 66);
			this->panelTop->TabIndex = 18;
			this->panelTop->Click += gcnew System::EventHandler(this, &MainForm::panelTop_Click);
			this->panelTop->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::panelTop_MouseDown);
			this->panelTop->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::panelTop_MouseMove);
			// 
			// panelSelections
			// 
			this->panelSelections->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(90)), 
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->panelSelections->Controls->Add(this->buttonTransactionCost);
			this->panelSelections->Controls->Add(this->buttonManufacturersBySuppliedGoodsAmount);
			this->panelSelections->Controls->Add(this->buttonCashierStatistics);
			this->panelSelections->Controls->Add(this->buttonWarehouseGoods);
			this->panelSelections->Controls->Add(this->buttonMostPopularGoods);
			this->panelSelections->Location = System::Drawing::Point(-260, 283);
			this->panelSelections->Name = L"panelSelections";
			this->panelSelections->Size = System::Drawing::Size(260, 344);
			this->panelSelections->TabIndex = 20;
			// 
			// buttonTransactionCost
			// 
			this->buttonTransactionCost->BackColor = System::Drawing::Color::Transparent;
			this->buttonTransactionCost->FlatAppearance->BorderSize = 0;
			this->buttonTransactionCost->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonTransactionCost->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->buttonTransactionCost->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonTransactionCost->Location = System::Drawing::Point(12, 268);
			this->buttonTransactionCost->Name = L"buttonTransactionCost";
			this->buttonTransactionCost->Size = System::Drawing::Size(236, 64);
			this->buttonTransactionCost->TabIndex = 19;
			this->buttonTransactionCost->Text = L"Вартість транзакцій";
			this->buttonTransactionCost->UseVisualStyleBackColor = false;
			this->buttonTransactionCost->Click += gcnew System::EventHandler(this, &MainForm::buttonTransactionCost_Click);
			// 
			// buttonManufacturersBySuppliedGoodsAmount
			// 
			this->buttonManufacturersBySuppliedGoodsAmount->BackColor = System::Drawing::Color::Transparent;
			this->buttonManufacturersBySuppliedGoodsAmount->FlatAppearance->BorderSize = 0;
			this->buttonManufacturersBySuppliedGoodsAmount->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonManufacturersBySuppliedGoodsAmount->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Bold, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonManufacturersBySuppliedGoodsAmount->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonManufacturersBySuppliedGoodsAmount->Location = System::Drawing::Point(12, 204);
			this->buttonManufacturersBySuppliedGoodsAmount->Name = L"buttonManufacturersBySuppliedGoodsAmount";
			this->buttonManufacturersBySuppliedGoodsAmount->Size = System::Drawing::Size(236, 64);
			this->buttonManufacturersBySuppliedGoodsAmount->TabIndex = 18;
			this->buttonManufacturersBySuppliedGoodsAmount->Text = L"Виробники за кількістю товарів";
			this->buttonManufacturersBySuppliedGoodsAmount->UseVisualStyleBackColor = false;
			this->buttonManufacturersBySuppliedGoodsAmount->Click += gcnew System::EventHandler(this, &MainForm::buttonManufacturersBySuppliedGoodsAmount_Click);
			// 
			// buttonCashierStatistics
			// 
			this->buttonCashierStatistics->BackColor = System::Drawing::Color::Transparent;
			this->buttonCashierStatistics->FlatAppearance->BorderSize = 0;
			this->buttonCashierStatistics->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCashierStatistics->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->buttonCashierStatistics->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonCashierStatistics->Location = System::Drawing::Point(12, 140);
			this->buttonCashierStatistics->Name = L"buttonCashierStatistics";
			this->buttonCashierStatistics->Size = System::Drawing::Size(236, 64);
			this->buttonCashierStatistics->TabIndex = 17;
			this->buttonCashierStatistics->Text = L"Статистика касирів";
			this->buttonCashierStatistics->UseVisualStyleBackColor = false;
			this->buttonCashierStatistics->Click += gcnew System::EventHandler(this, &MainForm::buttonCashierStatistics_Click);
			// 
			// buttonWarehouseGoods
			// 
			this->buttonWarehouseGoods->BackColor = System::Drawing::Color::Transparent;
			this->buttonWarehouseGoods->FlatAppearance->BorderSize = 0;
			this->buttonWarehouseGoods->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonWarehouseGoods->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->buttonWarehouseGoods->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonWarehouseGoods->Location = System::Drawing::Point(12, 76);
			this->buttonWarehouseGoods->Name = L"buttonWarehouseGoods";
			this->buttonWarehouseGoods->Size = System::Drawing::Size(236, 64);
			this->buttonWarehouseGoods->TabIndex = 16;
			this->buttonWarehouseGoods->Text = L"Залишок товарів на складі";
			this->buttonWarehouseGoods->UseVisualStyleBackColor = false;
			this->buttonWarehouseGoods->Click += gcnew System::EventHandler(this, &MainForm::buttonWarehouseGoods_Click);
			// 
			// buttonMostPopularGoods
			// 
			this->buttonMostPopularGoods->BackColor = System::Drawing::Color::Transparent;
			this->buttonMostPopularGoods->FlatAppearance->BorderSize = 0;
			this->buttonMostPopularGoods->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonMostPopularGoods->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->buttonMostPopularGoods->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonMostPopularGoods->Location = System::Drawing::Point(12, 12);
			this->buttonMostPopularGoods->Name = L"buttonMostPopularGoods";
			this->buttonMostPopularGoods->Size = System::Drawing::Size(236, 64);
			this->buttonMostPopularGoods->TabIndex = 15;
			this->buttonMostPopularGoods->Text = L"Найпопулярніші товари по відділах";
			this->buttonMostPopularGoods->UseVisualStyleBackColor = false;
			this->buttonMostPopularGoods->Click += gcnew System::EventHandler(this, &MainForm::buttonMostPopularGoods_Click);
			// 
			// buttonNewRecord
			// 
			this->buttonNewRecord->AutoSize = true;
			this->buttonNewRecord->BackColor = System::Drawing::Color::Transparent;
			this->buttonNewRecord->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonNewRecord->FlatAppearance->BorderSize = 0;
			this->buttonNewRecord->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonNewRecord->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"buttonNewRecord.Image")));
			this->buttonNewRecord->Location = System::Drawing::Point(990, 615);
			this->buttonNewRecord->Name = L"buttonNewRecord";
			this->buttonNewRecord->Size = System::Drawing::Size(44, 44);
			this->buttonNewRecord->TabIndex = 21;
			this->buttonNewRecord->UseVisualStyleBackColor = false;
			this->buttonNewRecord->Click += gcnew System::EventHandler(this, &MainForm::buttonNewRecord_Click);
			// 
			// panelAddOrEditManufacturer
			// 
			this->panelAddOrEditManufacturer->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelAddOrEditManufacturer->Controls->Add(this->buttonCancelManufacturer);
			this->panelAddOrEditManufacturer->Controls->Add(this->buttonSaveManufacturer);
			this->panelAddOrEditManufacturer->Controls->Add(this->labelMEmail);
			this->panelAddOrEditManufacturer->Controls->Add(this->labelMPhone);
			this->panelAddOrEditManufacturer->Controls->Add(this->labelMAddress);
			this->panelAddOrEditManufacturer->Controls->Add(this->labelMCity);
			this->panelAddOrEditManufacturer->Controls->Add(this->labelMCountry);
			this->panelAddOrEditManufacturer->Controls->Add(this->labelMName);
			this->panelAddOrEditManufacturer->Controls->Add(this->textBoxMEmail);
			this->panelAddOrEditManufacturer->Controls->Add(this->textBoxMPhone);
			this->panelAddOrEditManufacturer->Controls->Add(this->textBoxMAddress);
			this->panelAddOrEditManufacturer->Controls->Add(this->textBoxMCity);
			this->panelAddOrEditManufacturer->Controls->Add(this->textBoxMCountry);
			this->panelAddOrEditManufacturer->Controls->Add(this->textBoxMName);
			this->panelAddOrEditManufacturer->Controls->Add(this->labelManufacturer);
			this->panelAddOrEditManufacturer->Location = System::Drawing::Point(1582, 305);
			this->panelAddOrEditManufacturer->Name = L"panelAddOrEditManufacturer";
			this->panelAddOrEditManufacturer->Size = System::Drawing::Size(420, 310);
			this->panelAddOrEditManufacturer->TabIndex = 22;
			this->panelAddOrEditManufacturer->Visible = false;
			// 
			// buttonCancelManufacturer
			// 
			this->buttonCancelManufacturer->AutoSize = true;
			this->buttonCancelManufacturer->BackColor = System::Drawing::Color::Transparent;
			this->buttonCancelManufacturer->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonCancelManufacturer->FlatAppearance->BorderSize = 0;
			this->buttonCancelManufacturer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCancelManufacturer->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"buttonCancelManufacturer.Image")));
			this->buttonCancelManufacturer->Location = System::Drawing::Point(220, 240);
			this->buttonCancelManufacturer->Name = L"buttonCancelManufacturer";
			this->buttonCancelManufacturer->Size = System::Drawing::Size(44, 44);
			this->buttonCancelManufacturer->TabIndex = 15;
			this->buttonCancelManufacturer->UseVisualStyleBackColor = false;
			this->buttonCancelManufacturer->Click += gcnew System::EventHandler(this, &MainForm::buttonCancelManufacturer_Click);
			// 
			// buttonSaveManufacturer
			// 
			this->buttonSaveManufacturer->AutoSize = true;
			this->buttonSaveManufacturer->BackColor = System::Drawing::Color::Transparent;
			this->buttonSaveManufacturer->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonSaveManufacturer->FlatAppearance->BorderSize = 0;
			this->buttonSaveManufacturer->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSaveManufacturer->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"buttonSaveManufacturer.Image")));
			this->buttonSaveManufacturer->Location = System::Drawing::Point(156, 240);
			this->buttonSaveManufacturer->Name = L"buttonSaveManufacturer";
			this->buttonSaveManufacturer->Size = System::Drawing::Size(44, 44);
			this->buttonSaveManufacturer->TabIndex = 14;
			this->buttonSaveManufacturer->UseVisualStyleBackColor = false;
			this->buttonSaveManufacturer->Click += gcnew System::EventHandler(this, &MainForm::buttonSaveManufacturer_Click);
			// 
			// labelMEmail
			// 
			this->labelMEmail->AutoSize = true;
			this->labelMEmail->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelMEmail->Location = System::Drawing::Point(12, 193);
			this->labelMEmail->Name = L"labelMEmail";
			this->labelMEmail->Size = System::Drawing::Size(56, 21);
			this->labelMEmail->TabIndex = 12;
			this->labelMEmail->Text = L"E-mail";
			// 
			// labelMPhone
			// 
			this->labelMPhone->AutoSize = true;
			this->labelMPhone->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelMPhone->Location = System::Drawing::Point(12, 167);
			this->labelMPhone->Name = L"labelMPhone";
			this->labelMPhone->Size = System::Drawing::Size(135, 21);
			this->labelMPhone->TabIndex = 11;
			this->labelMPhone->Text = L"Номер телефону";
			// 
			// labelMAddress
			// 
			this->labelMAddress->AutoSize = true;
			this->labelMAddress->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelMAddress->Location = System::Drawing::Point(12, 140);
			this->labelMAddress->Name = L"labelMAddress";
			this->labelMAddress->Size = System::Drawing::Size(62, 21);
			this->labelMAddress->TabIndex = 10;
			this->labelMAddress->Text = L"Адреса";
			// 
			// labelMCity
			// 
			this->labelMCity->AutoSize = true;
			this->labelMCity->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelMCity->Location = System::Drawing::Point(12, 115);
			this->labelMCity->Name = L"labelMCity";
			this->labelMCity->Size = System::Drawing::Size(51, 21);
			this->labelMCity->TabIndex = 9;
			this->labelMCity->Text = L"Місто";
			// 
			// labelMCountry
			// 
			this->labelMCountry->AutoSize = true;
			this->labelMCountry->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelMCountry->Location = System::Drawing::Point(12, 88);
			this->labelMCountry->Name = L"labelMCountry";
			this->labelMCountry->Size = System::Drawing::Size(56, 21);
			this->labelMCountry->TabIndex = 8;
			this->labelMCountry->Text = L"Країна";
			// 
			// labelMName
			// 
			this->labelMName->AutoSize = true;
			this->labelMName->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelMName->Location = System::Drawing::Point(12, 62);
			this->labelMName->Name = L"labelMName";
			this->labelMName->Size = System::Drawing::Size(136, 21);
			this->labelMName->TabIndex = 7;
			this->labelMName->Text = L"Назва виробника";
			// 
			// textBoxMEmail
			// 
			this->textBoxMEmail->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBoxMEmail->Location = System::Drawing::Point(154, 190);
			this->textBoxMEmail->MaxLength = 255;
			this->textBoxMEmail->Name = L"textBoxMEmail";
			this->textBoxMEmail->Size = System::Drawing::Size(251, 24);
			this->textBoxMEmail->TabIndex = 6;
			this->textBoxMEmail->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBoxMEmail_KeyPress);
			// 
			// textBoxMPhone
			// 
			this->textBoxMPhone->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBoxMPhone->Location = System::Drawing::Point(154, 164);
			this->textBoxMPhone->MaxLength = 15;
			this->textBoxMPhone->Name = L"textBoxMPhone";
			this->textBoxMPhone->Size = System::Drawing::Size(251, 24);
			this->textBoxMPhone->TabIndex = 5;
			this->textBoxMPhone->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBoxMPhone_KeyPress);
			// 
			// textBoxMAddress
			// 
			this->textBoxMAddress->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBoxMAddress->Location = System::Drawing::Point(154, 138);
			this->textBoxMAddress->MaxLength = 100;
			this->textBoxMAddress->Name = L"textBoxMAddress";
			this->textBoxMAddress->Size = System::Drawing::Size(251, 24);
			this->textBoxMAddress->TabIndex = 4;
			this->textBoxMAddress->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBoxMAddress_KeyPress);
			// 
			// textBoxMCity
			// 
			this->textBoxMCity->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBoxMCity->Location = System::Drawing::Point(154, 112);
			this->textBoxMCity->MaxLength = 100;
			this->textBoxMCity->Name = L"textBoxMCity";
			this->textBoxMCity->Size = System::Drawing::Size(251, 24);
			this->textBoxMCity->TabIndex = 3;
			this->textBoxMCity->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBoxMCity_KeyPress);
			// 
			// textBoxMCountry
			// 
			this->textBoxMCountry->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBoxMCountry->Location = System::Drawing::Point(154, 85);
			this->textBoxMCountry->MaxLength = 30;
			this->textBoxMCountry->Name = L"textBoxMCountry";
			this->textBoxMCountry->Size = System::Drawing::Size(251, 24);
			this->textBoxMCountry->TabIndex = 2;
			this->textBoxMCountry->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBoxMCountry_KeyPress);
			// 
			// textBoxMName
			// 
			this->textBoxMName->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBoxMName->Location = System::Drawing::Point(154, 59);
			this->textBoxMName->MaxLength = 50;
			this->textBoxMName->Name = L"textBoxMName";
			this->textBoxMName->Size = System::Drawing::Size(251, 24);
			this->textBoxMName->TabIndex = 1;
			this->textBoxMName->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBoxMName_KeyPress);
			// 
			// labelManufacturer
			// 
			this->labelManufacturer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), 
				static_cast<System::Int32>(static_cast<System::Byte>(90)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->labelManufacturer->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelManufacturer->Location = System::Drawing::Point(-1, -1);
			this->labelManufacturer->Name = L"labelManufacturer";
			this->labelManufacturer->Size = System::Drawing::Size(420, 50);
			this->labelManufacturer->TabIndex = 0;
			this->labelManufacturer->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelManufacturer->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::panelTop_MouseDown);
			this->labelManufacturer->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::label_MouseMove);
			// 
			// panelAddOrEditDepartment
			// 
			this->panelAddOrEditDepartment->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelAddOrEditDepartment->Controls->Add(this->comboBoxDShelvingType);
			this->panelAddOrEditDepartment->Controls->Add(this->buttonCancelDepartment);
			this->panelAddOrEditDepartment->Controls->Add(this->buttonSaveDepartment);
			this->panelAddOrEditDepartment->Controls->Add(this->labelDShelvingType);
			this->panelAddOrEditDepartment->Controls->Add(this->labelDName);
			this->panelAddOrEditDepartment->Controls->Add(this->textBoxDName);
			this->panelAddOrEditDepartment->Controls->Add(this->labelDepartment);
			this->panelAddOrEditDepartment->Location = System::Drawing::Point(1582, 325);
			this->panelAddOrEditDepartment->Name = L"panelAddOrEditDepartment";
			this->panelAddOrEditDepartment->Size = System::Drawing::Size(420, 206);
			this->panelAddOrEditDepartment->TabIndex = 23;
			this->panelAddOrEditDepartment->Visible = false;
			// 
			// comboBoxDShelvingType
			// 
			this->comboBoxDShelvingType->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->comboBoxDShelvingType->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboBoxDShelvingType->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9));
			this->comboBoxDShelvingType->FormattingEnabled = true;
			this->comboBoxDShelvingType->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"відкриті", L"закриті", L"з підігрівом", 
				L"з охолодженням"});
			this->comboBoxDShelvingType->Location = System::Drawing::Point(154, 86);
			this->comboBoxDShelvingType->MaxLength = 15;
			this->comboBoxDShelvingType->Name = L"comboBoxDShelvingType";
			this->comboBoxDShelvingType->Size = System::Drawing::Size(251, 25);
			this->comboBoxDShelvingType->TabIndex = 16;
			this->comboBoxDShelvingType->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::comboBoxDShelvingType_KeyPress);
			// 
			// buttonCancelDepartment
			// 
			this->buttonCancelDepartment->AutoSize = true;
			this->buttonCancelDepartment->BackColor = System::Drawing::Color::Transparent;
			this->buttonCancelDepartment->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonCancelDepartment->FlatAppearance->BorderSize = 0;
			this->buttonCancelDepartment->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCancelDepartment->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"buttonCancelDepartment.Image")));
			this->buttonCancelDepartment->Location = System::Drawing::Point(220, 135);
			this->buttonCancelDepartment->Name = L"buttonCancelDepartment";
			this->buttonCancelDepartment->Size = System::Drawing::Size(44, 44);
			this->buttonCancelDepartment->TabIndex = 15;
			this->buttonCancelDepartment->UseVisualStyleBackColor = false;
			this->buttonCancelDepartment->Click += gcnew System::EventHandler(this, &MainForm::buttonCancelDepartment_Click);
			// 
			// buttonSaveDepartment
			// 
			this->buttonSaveDepartment->AutoSize = true;
			this->buttonSaveDepartment->BackColor = System::Drawing::Color::Transparent;
			this->buttonSaveDepartment->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonSaveDepartment->FlatAppearance->BorderSize = 0;
			this->buttonSaveDepartment->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSaveDepartment->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"buttonSaveDepartment.Image")));
			this->buttonSaveDepartment->Location = System::Drawing::Point(156, 135);
			this->buttonSaveDepartment->Name = L"buttonSaveDepartment";
			this->buttonSaveDepartment->Size = System::Drawing::Size(44, 44);
			this->buttonSaveDepartment->TabIndex = 14;
			this->buttonSaveDepartment->UseVisualStyleBackColor = false;
			this->buttonSaveDepartment->Click += gcnew System::EventHandler(this, &MainForm::buttonSaveDepartment_Click);
			// 
			// labelDShelvingType
			// 
			this->labelDShelvingType->AutoSize = true;
			this->labelDShelvingType->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelDShelvingType->Location = System::Drawing::Point(12, 88);
			this->labelDShelvingType->Name = L"labelDShelvingType";
			this->labelDShelvingType->Size = System::Drawing::Size(110, 21);
			this->labelDShelvingType->TabIndex = 8;
			this->labelDShelvingType->Text = L"Тип стелажів";
			// 
			// labelDName
			// 
			this->labelDName->AutoSize = true;
			this->labelDName->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelDName->Location = System::Drawing::Point(12, 62);
			this->labelDName->Name = L"labelDName";
			this->labelDName->Size = System::Drawing::Size(112, 21);
			this->labelDName->TabIndex = 7;
			this->labelDName->Text = L"Назва відділу";
			// 
			// textBoxDName
			// 
			this->textBoxDName->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBoxDName->Location = System::Drawing::Point(154, 59);
			this->textBoxDName->MaxLength = 50;
			this->textBoxDName->Name = L"textBoxDName";
			this->textBoxDName->Size = System::Drawing::Size(251, 24);
			this->textBoxDName->TabIndex = 1;
			this->textBoxDName->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBoxDName_KeyPress);
			// 
			// labelDepartment
			// 
			this->labelDepartment->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(90)), 
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->labelDepartment->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelDepartment->Location = System::Drawing::Point(-1, -1);
			this->labelDepartment->Name = L"labelDepartment";
			this->labelDepartment->Size = System::Drawing::Size(420, 50);
			this->labelDepartment->TabIndex = 0;
			this->labelDepartment->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelDepartment->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::panelTop_MouseDown);
			this->labelDepartment->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::label_MouseMove);
			// 
			// buttonEditRecord
			// 
			this->buttonEditRecord->AutoSize = true;
			this->buttonEditRecord->BackColor = System::Drawing::Color::Transparent;
			this->buttonEditRecord->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonEditRecord->FlatAppearance->BorderSize = 0;
			this->buttonEditRecord->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonEditRecord->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"buttonEditRecord.Image")));
			this->buttonEditRecord->Location = System::Drawing::Point(940, 615);
			this->buttonEditRecord->Name = L"buttonEditRecord";
			this->buttonEditRecord->Size = System::Drawing::Size(44, 44);
			this->buttonEditRecord->TabIndex = 23;
			this->buttonEditRecord->UseVisualStyleBackColor = false;
			this->buttonEditRecord->Click += gcnew System::EventHandler(this, &MainForm::buttonEditRecord_Click);
			// 
			// panelAddOrEditDiscountCard
			// 
			this->panelAddOrEditDiscountCard->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelAddOrEditDiscountCard->Controls->Add(this->textBoxDCPercentage);
			this->panelAddOrEditDiscountCard->Controls->Add(this->buttonCancelDiscountCard);
			this->panelAddOrEditDiscountCard->Controls->Add(this->buttonSaveDiscountCard);
			this->panelAddOrEditDiscountCard->Controls->Add(this->labelDCPercentage);
			this->panelAddOrEditDiscountCard->Controls->Add(this->labelDCClientName);
			this->panelAddOrEditDiscountCard->Controls->Add(this->textBoxDCClientName);
			this->panelAddOrEditDiscountCard->Controls->Add(this->labelDiscountCard);
			this->panelAddOrEditDiscountCard->Location = System::Drawing::Point(1582, 206);
			this->panelAddOrEditDiscountCard->Name = L"panelAddOrEditDiscountCard";
			this->panelAddOrEditDiscountCard->Size = System::Drawing::Size(420, 206);
			this->panelAddOrEditDiscountCard->TabIndex = 24;
			this->panelAddOrEditDiscountCard->Visible = false;
			// 
			// textBoxDCPercentage
			// 
			this->textBoxDCPercentage->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBoxDCPercentage->Location = System::Drawing::Point(154, 86);
			this->textBoxDCPercentage->MaxLength = 10;
			this->textBoxDCPercentage->Name = L"textBoxDCPercentage";
			this->textBoxDCPercentage->Size = System::Drawing::Size(251, 24);
			this->textBoxDCPercentage->TabIndex = 16;
			this->textBoxDCPercentage->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBoxDCPercentage_KeyPress);
			// 
			// buttonCancelDiscountCard
			// 
			this->buttonCancelDiscountCard->AutoSize = true;
			this->buttonCancelDiscountCard->BackColor = System::Drawing::Color::Transparent;
			this->buttonCancelDiscountCard->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonCancelDiscountCard->FlatAppearance->BorderSize = 0;
			this->buttonCancelDiscountCard->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCancelDiscountCard->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"buttonCancelDiscountCard.Image")));
			this->buttonCancelDiscountCard->Location = System::Drawing::Point(220, 135);
			this->buttonCancelDiscountCard->Name = L"buttonCancelDiscountCard";
			this->buttonCancelDiscountCard->Size = System::Drawing::Size(44, 44);
			this->buttonCancelDiscountCard->TabIndex = 15;
			this->buttonCancelDiscountCard->UseVisualStyleBackColor = false;
			this->buttonCancelDiscountCard->Click += gcnew System::EventHandler(this, &MainForm::buttonCancelDiscountCard_Click);
			// 
			// buttonSaveDiscountCard
			// 
			this->buttonSaveDiscountCard->AutoSize = true;
			this->buttonSaveDiscountCard->BackColor = System::Drawing::Color::Transparent;
			this->buttonSaveDiscountCard->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonSaveDiscountCard->FlatAppearance->BorderSize = 0;
			this->buttonSaveDiscountCard->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSaveDiscountCard->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"buttonSaveDiscountCard.Image")));
			this->buttonSaveDiscountCard->Location = System::Drawing::Point(156, 135);
			this->buttonSaveDiscountCard->Name = L"buttonSaveDiscountCard";
			this->buttonSaveDiscountCard->Size = System::Drawing::Size(44, 44);
			this->buttonSaveDiscountCard->TabIndex = 14;
			this->buttonSaveDiscountCard->UseVisualStyleBackColor = false;
			this->buttonSaveDiscountCard->Click += gcnew System::EventHandler(this, &MainForm::buttonSaveDiscountCard_Click);
			// 
			// labelDCPercentage
			// 
			this->labelDCPercentage->AutoSize = true;
			this->labelDCPercentage->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelDCPercentage->Location = System::Drawing::Point(12, 88);
			this->labelDCPercentage->Name = L"labelDCPercentage";
			this->labelDCPercentage->Size = System::Drawing::Size(131, 21);
			this->labelDCPercentage->TabIndex = 8;
			this->labelDCPercentage->Text = L"Відсоток знижки";
			// 
			// labelDCClientName
			// 
			this->labelDCClientName->AutoSize = true;
			this->labelDCClientName->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelDCClientName->Location = System::Drawing::Point(12, 62);
			this->labelDCClientName->Name = L"labelDCClientName";
			this->labelDCClientName->Size = System::Drawing::Size(100, 21);
			this->labelDCClientName->TabIndex = 7;
			this->labelDCClientName->Text = L"ПІБ клієнта";
			// 
			// textBoxDCClientName
			// 
			this->textBoxDCClientName->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBoxDCClientName->Location = System::Drawing::Point(154, 59);
			this->textBoxDCClientName->MaxLength = 100;
			this->textBoxDCClientName->Name = L"textBoxDCClientName";
			this->textBoxDCClientName->Size = System::Drawing::Size(251, 24);
			this->textBoxDCClientName->TabIndex = 1;
			this->textBoxDCClientName->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBoxDCClientName_KeyPress);
			// 
			// labelDiscountCard
			// 
			this->labelDiscountCard->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), 
				static_cast<System::Int32>(static_cast<System::Byte>(90)), static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->labelDiscountCard->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelDiscountCard->Location = System::Drawing::Point(-1, -1);
			this->labelDiscountCard->Name = L"labelDiscountCard";
			this->labelDiscountCard->Size = System::Drawing::Size(420, 50);
			this->labelDiscountCard->TabIndex = 0;
			this->labelDiscountCard->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelDiscountCard->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::panelTop_MouseDown);
			this->labelDiscountCard->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::label_MouseMove);
			// 
			// panelAddOrEditInvoice
			// 
			this->panelAddOrEditInvoice->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelAddOrEditInvoice->Controls->Add(this->dateTimePickerITime);
			this->panelAddOrEditInvoice->Controls->Add(this->dateTimePickerIDate);
			this->panelAddOrEditInvoice->Controls->Add(this->comboBoxIWName);
			this->panelAddOrEditInvoice->Controls->Add(this->buttonCancelInvoice);
			this->panelAddOrEditInvoice->Controls->Add(this->buttonSaveInvoice);
			this->panelAddOrEditInvoice->Controls->Add(this->labelIDateTime);
			this->panelAddOrEditInvoice->Controls->Add(this->labelIWName);
			this->panelAddOrEditInvoice->Controls->Add(this->labelInvoice);
			this->panelAddOrEditInvoice->Location = System::Drawing::Point(1582, 404);
			this->panelAddOrEditInvoice->Name = L"panelAddOrEditInvoice";
			this->panelAddOrEditInvoice->Size = System::Drawing::Size(420, 206);
			this->panelAddOrEditInvoice->TabIndex = 25;
			this->panelAddOrEditInvoice->Visible = false;
			// 
			// dateTimePickerITime
			// 
			this->dateTimePickerITime->CalendarFont = (gcnew System::Drawing::Font(L"Comic Sans MS", 9));
			this->dateTimePickerITime->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9));
			this->dateTimePickerITime->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dateTimePickerITime->Location = System::Drawing::Point(285, 86);
			this->dateTimePickerITime->Name = L"dateTimePickerITime";
			this->dateTimePickerITime->ShowUpDown = true;
			this->dateTimePickerITime->Size = System::Drawing::Size(120, 24);
			this->dateTimePickerITime->TabIndex = 19;
			// 
			// dateTimePickerIDate
			// 
			this->dateTimePickerIDate->Cursor = System::Windows::Forms::Cursors::Hand;
			this->dateTimePickerIDate->CustomFormat = L"";
			this->dateTimePickerIDate->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9));
			this->dateTimePickerIDate->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePickerIDate->Location = System::Drawing::Point(154, 86);
			this->dateTimePickerIDate->MaxDate = System::DateTime(2017, 10, 31, 0, 0, 0, 0);
			this->dateTimePickerIDate->MinDate = System::DateTime(2010, 7, 19, 0, 0, 0, 0);
			this->dateTimePickerIDate->Name = L"dateTimePickerIDate";
			this->dateTimePickerIDate->Size = System::Drawing::Size(120, 24);
			this->dateTimePickerIDate->TabIndex = 18;
			this->dateTimePickerIDate->Value = System::DateTime(2017, 10, 30, 0, 27, 0, 272);
			// 
			// comboBoxIWName
			// 
			this->comboBoxIWName->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->comboBoxIWName->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboBoxIWName->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9));
			this->comboBoxIWName->FormattingEnabled = true;
			this->comboBoxIWName->Location = System::Drawing::Point(154, 58);
			this->comboBoxIWName->MaxLength = 50;
			this->comboBoxIWName->Name = L"comboBoxIWName";
			this->comboBoxIWName->Size = System::Drawing::Size(251, 25);
			this->comboBoxIWName->TabIndex = 17;
			this->comboBoxIWName->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::comboboxIWName_KeyPress);
			// 
			// buttonCancelInvoice
			// 
			this->buttonCancelInvoice->AutoSize = true;
			this->buttonCancelInvoice->BackColor = System::Drawing::Color::Transparent;
			this->buttonCancelInvoice->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonCancelInvoice->FlatAppearance->BorderSize = 0;
			this->buttonCancelInvoice->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCancelInvoice->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"buttonCancelInvoice.Image")));
			this->buttonCancelInvoice->Location = System::Drawing::Point(220, 135);
			this->buttonCancelInvoice->Name = L"buttonCancelInvoice";
			this->buttonCancelInvoice->Size = System::Drawing::Size(44, 44);
			this->buttonCancelInvoice->TabIndex = 15;
			this->buttonCancelInvoice->UseVisualStyleBackColor = false;
			this->buttonCancelInvoice->Click += gcnew System::EventHandler(this, &MainForm::buttonCancelInvoice_Click);
			// 
			// buttonSaveInvoice
			// 
			this->buttonSaveInvoice->AutoSize = true;
			this->buttonSaveInvoice->BackColor = System::Drawing::Color::Transparent;
			this->buttonSaveInvoice->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonSaveInvoice->FlatAppearance->BorderSize = 0;
			this->buttonSaveInvoice->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSaveInvoice->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"buttonSaveInvoice.Image")));
			this->buttonSaveInvoice->Location = System::Drawing::Point(156, 135);
			this->buttonSaveInvoice->Name = L"buttonSaveInvoice";
			this->buttonSaveInvoice->Size = System::Drawing::Size(44, 44);
			this->buttonSaveInvoice->TabIndex = 14;
			this->buttonSaveInvoice->UseVisualStyleBackColor = false;
			this->buttonSaveInvoice->Click += gcnew System::EventHandler(this, &MainForm::buttonSaveInvoice_Click);
			// 
			// labelIDateTime
			// 
			this->labelIDateTime->AutoSize = true;
			this->labelIDateTime->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelIDateTime->Location = System::Drawing::Point(12, 88);
			this->labelIDateTime->Name = L"labelIDateTime";
			this->labelIDateTime->Size = System::Drawing::Size(87, 21);
			this->labelIDateTime->TabIndex = 8;
			this->labelIDateTime->Text = L"Дата і час";
			// 
			// labelIWName
			// 
			this->labelIWName->AutoSize = true;
			this->labelIWName->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelIWName->Location = System::Drawing::Point(12, 62);
			this->labelIWName->Name = L"labelIWName";
			this->labelIWName->Size = System::Drawing::Size(128, 21);
			this->labelIWName->TabIndex = 7;
			this->labelIWName->Text = L"ПІБ працівника";
			// 
			// labelInvoice
			// 
			this->labelInvoice->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(90)), 
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->labelInvoice->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelInvoice->Location = System::Drawing::Point(-1, -1);
			this->labelInvoice->Name = L"labelInvoice";
			this->labelInvoice->Size = System::Drawing::Size(420, 50);
			this->labelInvoice->TabIndex = 0;
			this->labelInvoice->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelInvoice->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::panelTop_MouseDown);
			this->labelInvoice->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::label_MouseMove);
			// 
			// panelAddOrEditSupply
			// 
			this->panelAddOrEditSupply->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelAddOrEditSupply->Controls->Add(this->dateTimePickerSExpirationDate);
			this->panelAddOrEditSupply->Controls->Add(this->comboBoxSGId);
			this->panelAddOrEditSupply->Controls->Add(this->comboBoxSIId);
			this->panelAddOrEditSupply->Controls->Add(this->buttonCancelSupply);
			this->panelAddOrEditSupply->Controls->Add(this->buttonSaveSupply);
			this->panelAddOrEditSupply->Controls->Add(this->labelSExpirationDate);
			this->panelAddOrEditSupply->Controls->Add(this->labelSPurchasePrice);
			this->panelAddOrEditSupply->Controls->Add(this->labelSUnitsAmount);
			this->panelAddOrEditSupply->Controls->Add(this->labelSGId);
			this->panelAddOrEditSupply->Controls->Add(this->labelSIId);
			this->panelAddOrEditSupply->Controls->Add(this->textBoxSPurchasePrice);
			this->panelAddOrEditSupply->Controls->Add(this->textBoxSUnitsAmount);
			this->panelAddOrEditSupply->Controls->Add(this->labelSupply);
			this->panelAddOrEditSupply->Location = System::Drawing::Point(1602, 256);
			this->panelAddOrEditSupply->Name = L"panelAddOrEditSupply";
			this->panelAddOrEditSupply->Size = System::Drawing::Size(440, 284);
			this->panelAddOrEditSupply->TabIndex = 23;
			this->panelAddOrEditSupply->Visible = false;
			// 
			// dateTimePickerSExpirationDate
			// 
			this->dateTimePickerSExpirationDate->Cursor = System::Windows::Forms::Cursors::Hand;
			this->dateTimePickerSExpirationDate->CustomFormat = L"";
			this->dateTimePickerSExpirationDate->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9));
			this->dateTimePickerSExpirationDate->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePickerSExpirationDate->Location = System::Drawing::Point(174, 164);
			this->dateTimePickerSExpirationDate->MaxDate = System::DateTime(2017, 10, 31, 0, 0, 0, 0);
			this->dateTimePickerSExpirationDate->MinDate = System::DateTime(2010, 7, 19, 0, 0, 0, 0);
			this->dateTimePickerSExpirationDate->Name = L"dateTimePickerSExpirationDate";
			this->dateTimePickerSExpirationDate->Size = System::Drawing::Size(251, 24);
			this->dateTimePickerSExpirationDate->TabIndex = 20;
			this->dateTimePickerSExpirationDate->Value = System::DateTime(2017, 10, 30, 0, 27, 0, 299);
			// 
			// comboBoxSGId
			// 
			this->comboBoxSGId->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->comboBoxSGId->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboBoxSGId->DataSource = this->dataSet;
			this->comboBoxSGId->DisplayMember = L"goods.g_name";
			this->comboBoxSGId->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9));
			this->comboBoxSGId->FormattingEnabled = true;
			this->comboBoxSGId->Location = System::Drawing::Point(174, 85);
			this->comboBoxSGId->MaxLength = 100;
			this->comboBoxSGId->Name = L"comboBoxSGId";
			this->comboBoxSGId->Size = System::Drawing::Size(251, 25);
			this->comboBoxSGId->TabIndex = 17;
			this->comboBoxSGId->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::comboBoxSGId_KeyPress);
			// 
			// comboBoxSIId
			// 
			this->comboBoxSIId->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->comboBoxSIId->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboBoxSIId->DataSource = this->dataSet;
			this->comboBoxSIId->DisplayMember = L"invoice.i_id";
			this->comboBoxSIId->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9));
			this->comboBoxSIId->FormattingEnabled = true;
			this->comboBoxSIId->Location = System::Drawing::Point(174, 58);
			this->comboBoxSIId->MaxLength = 10;
			this->comboBoxSIId->Name = L"comboBoxSIId";
			this->comboBoxSIId->Size = System::Drawing::Size(251, 25);
			this->comboBoxSIId->TabIndex = 16;
			this->comboBoxSIId->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::comboBoxSIId_KeyPress);
			// 
			// buttonCancelSupply
			// 
			this->buttonCancelSupply->AutoSize = true;
			this->buttonCancelSupply->BackColor = System::Drawing::Color::Transparent;
			this->buttonCancelSupply->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonCancelSupply->FlatAppearance->BorderSize = 0;
			this->buttonCancelSupply->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCancelSupply->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"buttonCancelSupply.Image")));
			this->buttonCancelSupply->Location = System::Drawing::Point(230, 214);
			this->buttonCancelSupply->Name = L"buttonCancelSupply";
			this->buttonCancelSupply->Size = System::Drawing::Size(44, 44);
			this->buttonCancelSupply->TabIndex = 15;
			this->buttonCancelSupply->UseVisualStyleBackColor = false;
			this->buttonCancelSupply->Click += gcnew System::EventHandler(this, &MainForm::buttonCancelSupply_Click);
			// 
			// buttonSaveSupply
			// 
			this->buttonSaveSupply->AutoSize = true;
			this->buttonSaveSupply->BackColor = System::Drawing::Color::Transparent;
			this->buttonSaveSupply->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonSaveSupply->FlatAppearance->BorderSize = 0;
			this->buttonSaveSupply->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSaveSupply->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"buttonSaveSupply.Image")));
			this->buttonSaveSupply->Location = System::Drawing::Point(166, 214);
			this->buttonSaveSupply->Name = L"buttonSaveSupply";
			this->buttonSaveSupply->Size = System::Drawing::Size(44, 44);
			this->buttonSaveSupply->TabIndex = 14;
			this->buttonSaveSupply->UseVisualStyleBackColor = false;
			this->buttonSaveSupply->Click += gcnew System::EventHandler(this, &MainForm::buttonSaveSupply_Click);
			// 
			// labelSExpirationDate
			// 
			this->labelSExpirationDate->AutoSize = true;
			this->labelSExpirationDate->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelSExpirationDate->Location = System::Drawing::Point(12, 167);
			this->labelSExpirationDate->Name = L"labelSExpirationDate";
			this->labelSExpirationDate->Size = System::Drawing::Size(154, 21);
			this->labelSExpirationDate->TabIndex = 11;
			this->labelSExpirationDate->Text = L"Термін придатності";
			// 
			// labelSPurchasePrice
			// 
			this->labelSPurchasePrice->AutoSize = true;
			this->labelSPurchasePrice->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelSPurchasePrice->Location = System::Drawing::Point(12, 140);
			this->labelSPurchasePrice->Name = L"labelSPurchasePrice";
			this->labelSPurchasePrice->Size = System::Drawing::Size(141, 21);
			this->labelSPurchasePrice->TabIndex = 10;
			this->labelSPurchasePrice->Text = L"Закупівельна ціна";
			// 
			// labelSUnitsAmount
			// 
			this->labelSUnitsAmount->AutoSize = true;
			this->labelSUnitsAmount->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelSUnitsAmount->Location = System::Drawing::Point(12, 115);
			this->labelSUnitsAmount->Name = L"labelSUnitsAmount";
			this->labelSUnitsAmount->Size = System::Drawing::Size(74, 21);
			this->labelSUnitsAmount->TabIndex = 9;
			this->labelSUnitsAmount->Text = L"Кількість";
			// 
			// labelSGId
			// 
			this->labelSGId->AutoSize = true;
			this->labelSGId->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelSGId->Location = System::Drawing::Point(12, 88);
			this->labelSGId->Name = L"labelSGId";
			this->labelSGId->Size = System::Drawing::Size(53, 21);
			this->labelSGId->TabIndex = 8;
			this->labelSGId->Text = L"Товар";
			// 
			// labelSIId
			// 
			this->labelSIId->AutoSize = true;
			this->labelSIId->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelSIId->Location = System::Drawing::Point(12, 62);
			this->labelSIId->Name = L"labelSIId";
			this->labelSIId->Size = System::Drawing::Size(116, 21);
			this->labelSIId->TabIndex = 7;
			this->labelSIId->Text = L"Код накладної";
			// 
			// textBoxSPurchasePrice
			// 
			this->textBoxSPurchasePrice->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBoxSPurchasePrice->Location = System::Drawing::Point(174, 138);
			this->textBoxSPurchasePrice->MaxLength = 10;
			this->textBoxSPurchasePrice->Name = L"textBoxSPurchasePrice";
			this->textBoxSPurchasePrice->Size = System::Drawing::Size(251, 24);
			this->textBoxSPurchasePrice->TabIndex = 4;
			this->textBoxSPurchasePrice->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBoxSPurchasePrice_KeyPress);
			// 
			// textBoxSUnitsAmount
			// 
			this->textBoxSUnitsAmount->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBoxSUnitsAmount->Location = System::Drawing::Point(174, 112);
			this->textBoxSUnitsAmount->MaxLength = 10;
			this->textBoxSUnitsAmount->Name = L"textBoxSUnitsAmount";
			this->textBoxSUnitsAmount->Size = System::Drawing::Size(251, 24);
			this->textBoxSUnitsAmount->TabIndex = 3;
			this->textBoxSUnitsAmount->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBoxSUnitsAmount_KeyPress);
			// 
			// labelSupply
			// 
			this->labelSupply->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(90)), 
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->labelSupply->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelSupply->Location = System::Drawing::Point(-1, -1);
			this->labelSupply->Name = L"labelSupply";
			this->labelSupply->Size = System::Drawing::Size(440, 50);
			this->labelSupply->TabIndex = 0;
			this->labelSupply->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelSupply->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::panelTop_MouseDown);
			this->labelSupply->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::label_MouseMove);
			// 
			// panelAddOrEditWorker
			// 
			this->panelAddOrEditWorker->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelAddOrEditWorker->Controls->Add(this->comboBoxWDId);
			this->panelAddOrEditWorker->Controls->Add(this->textBoxWSalary);
			this->panelAddOrEditWorker->Controls->Add(this->comboBoxWEducation);
			this->panelAddOrEditWorker->Controls->Add(this->comboBoxWJob);
			this->panelAddOrEditWorker->Controls->Add(this->dateTimePickerWBirthDate);
			this->panelAddOrEditWorker->Controls->Add(this->dateTimePickerWFiringDate);
			this->panelAddOrEditWorker->Controls->Add(this->dateTimePickerWEmploymentDate);
			this->panelAddOrEditWorker->Controls->Add(this->labelWDId);
			this->panelAddOrEditWorker->Controls->Add(this->labelWSalary);
			this->panelAddOrEditWorker->Controls->Add(this->buttonCancelWorker);
			this->panelAddOrEditWorker->Controls->Add(this->buttonSaveWorker);
			this->panelAddOrEditWorker->Controls->Add(this->labelWEducation);
			this->panelAddOrEditWorker->Controls->Add(this->labelWJob);
			this->panelAddOrEditWorker->Controls->Add(this->labelWBirthDate);
			this->panelAddOrEditWorker->Controls->Add(this->labelWFiringDate);
			this->panelAddOrEditWorker->Controls->Add(this->labelWEmploymentDate);
			this->panelAddOrEditWorker->Controls->Add(this->labelWName);
			this->panelAddOrEditWorker->Controls->Add(this->textBoxWName);
			this->panelAddOrEditWorker->Controls->Add(this->labelWorker);
			this->panelAddOrEditWorker->Location = System::Drawing::Point(1602, 242);
			this->panelAddOrEditWorker->Name = L"panelAddOrEditWorker";
			this->panelAddOrEditWorker->Size = System::Drawing::Size(440, 364);
			this->panelAddOrEditWorker->TabIndex = 23;
			this->panelAddOrEditWorker->Visible = false;
			// 
			// comboBoxWDId
			// 
			this->comboBoxWDId->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->comboBoxWDId->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboBoxWDId->DataSource = this->dataSet;
			this->comboBoxWDId->DisplayMember = L"departments.d_name";
			this->comboBoxWDId->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9));
			this->comboBoxWDId->FormattingEnabled = true;
			this->comboBoxWDId->Location = System::Drawing::Point(174, 243);
			this->comboBoxWDId->MaxLength = 50;
			this->comboBoxWDId->Name = L"comboBoxWDId";
			this->comboBoxWDId->Size = System::Drawing::Size(251, 25);
			this->comboBoxWDId->TabIndex = 21;
			this->comboBoxWDId->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::comboBoxDShelvingType_KeyPress);
			// 
			// textBoxWSalary
			// 
			this->textBoxWSalary->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBoxWSalary->Location = System::Drawing::Point(174, 217);
			this->textBoxWSalary->MaxLength = 10;
			this->textBoxWSalary->Name = L"textBoxWSalary";
			this->textBoxWSalary->Size = System::Drawing::Size(251, 24);
			this->textBoxWSalary->TabIndex = 25;
			this->textBoxWSalary->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBoxWSalary_KeyPress);
			// 
			// comboBoxWEducation
			// 
			this->comboBoxWEducation->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->comboBoxWEducation->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboBoxWEducation->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9));
			this->comboBoxWEducation->FormattingEnabled = true;
			this->comboBoxWEducation->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"середня спеціальна", L"незакінчена вища", 
				L"вища"});
			this->comboBoxWEducation->Location = System::Drawing::Point(174, 190);
			this->comboBoxWEducation->MaxLength = 20;
			this->comboBoxWEducation->Name = L"comboBoxWEducation";
			this->comboBoxWEducation->Size = System::Drawing::Size(251, 25);
			this->comboBoxWEducation->TabIndex = 24;
			this->comboBoxWEducation->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::comboBoxDShelvingType_KeyPress);
			// 
			// comboBoxWJob
			// 
			this->comboBoxWJob->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->comboBoxWJob->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboBoxWJob->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9));
			this->comboBoxWJob->FormattingEnabled = true;
			this->comboBoxWJob->Items->AddRange(gcnew cli::array< System::Object^  >(14) {L"генеральний директор", L"фінансовий директор", 
				L"бухгалтер", L"юрист", L"менеджер по персоналу", L"менеджер закупівлі", L"адміністратор торгового залу", L"промоутер", L"мерчендайзер", 
				L"копірайтер", L"касир", L"охоронець", L"вантажник", L"прибиральник"});
			this->comboBoxWJob->Location = System::Drawing::Point(174, 163);
			this->comboBoxWJob->MaxLength = 50;
			this->comboBoxWJob->Name = L"comboBoxWJob";
			this->comboBoxWJob->Size = System::Drawing::Size(251, 25);
			this->comboBoxWJob->TabIndex = 21;
			this->comboBoxWJob->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::comboBoxDShelvingType_KeyPress);
			// 
			// dateTimePickerWBirthDate
			// 
			this->dateTimePickerWBirthDate->Cursor = System::Windows::Forms::Cursors::Hand;
			this->dateTimePickerWBirthDate->CustomFormat = L"";
			this->dateTimePickerWBirthDate->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9));
			this->dateTimePickerWBirthDate->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePickerWBirthDate->Location = System::Drawing::Point(174, 137);
			this->dateTimePickerWBirthDate->MaxDate = System::DateTime(2017, 10, 31, 0, 0, 0, 0);
			this->dateTimePickerWBirthDate->MinDate = System::DateTime(1940, 7, 19, 0, 0, 0, 0);
			this->dateTimePickerWBirthDate->Name = L"dateTimePickerWBirthDate";
			this->dateTimePickerWBirthDate->Size = System::Drawing::Size(251, 24);
			this->dateTimePickerWBirthDate->TabIndex = 23;
			this->dateTimePickerWBirthDate->Value = System::DateTime(2017, 10, 30, 0, 27, 0, 299);
			// 
			// dateTimePickerWFiringDate
			// 
			this->dateTimePickerWFiringDate->Checked = false;
			this->dateTimePickerWFiringDate->Cursor = System::Windows::Forms::Cursors::Hand;
			this->dateTimePickerWFiringDate->CustomFormat = L"";
			this->dateTimePickerWFiringDate->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9));
			this->dateTimePickerWFiringDate->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePickerWFiringDate->Location = System::Drawing::Point(174, 111);
			this->dateTimePickerWFiringDate->MaxDate = System::DateTime(2017, 10, 31, 0, 0, 0, 0);
			this->dateTimePickerWFiringDate->MinDate = System::DateTime(2010, 7, 19, 0, 0, 0, 0);
			this->dateTimePickerWFiringDate->Name = L"dateTimePickerWFiringDate";
			this->dateTimePickerWFiringDate->ShowCheckBox = true;
			this->dateTimePickerWFiringDate->Size = System::Drawing::Size(251, 24);
			this->dateTimePickerWFiringDate->TabIndex = 22;
			this->dateTimePickerWFiringDate->Value = System::DateTime(2017, 10, 30, 0, 27, 0, 299);
			// 
			// dateTimePickerWEmploymentDate
			// 
			this->dateTimePickerWEmploymentDate->Cursor = System::Windows::Forms::Cursors::Hand;
			this->dateTimePickerWEmploymentDate->CustomFormat = L"";
			this->dateTimePickerWEmploymentDate->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9));
			this->dateTimePickerWEmploymentDate->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePickerWEmploymentDate->Location = System::Drawing::Point(174, 85);
			this->dateTimePickerWEmploymentDate->MaxDate = System::DateTime(2017, 10, 31, 0, 0, 0, 0);
			this->dateTimePickerWEmploymentDate->MinDate = System::DateTime(2010, 7, 19, 0, 0, 0, 0);
			this->dateTimePickerWEmploymentDate->Name = L"dateTimePickerWEmploymentDate";
			this->dateTimePickerWEmploymentDate->Size = System::Drawing::Size(251, 24);
			this->dateTimePickerWEmploymentDate->TabIndex = 21;
			this->dateTimePickerWEmploymentDate->Value = System::DateTime(2017, 10, 30, 0, 0, 0, 0);
			// 
			// labelWDId
			// 
			this->labelWDId->AutoSize = true;
			this->labelWDId->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelWDId->Location = System::Drawing::Point(12, 245);
			this->labelWDId->Name = L"labelWDId";
			this->labelWDId->Size = System::Drawing::Size(55, 21);
			this->labelWDId->TabIndex = 17;
			this->labelWDId->Text = L"Відділ";
			// 
			// labelWSalary
			// 
			this->labelWSalary->AutoSize = true;
			this->labelWSalary->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelWSalary->Location = System::Drawing::Point(12, 219);
			this->labelWSalary->Name = L"labelWSalary";
			this->labelWSalary->Size = System::Drawing::Size(56, 21);
			this->labelWSalary->TabIndex = 16;
			this->labelWSalary->Text = L"Оклад";
			// 
			// buttonCancelWorker
			// 
			this->buttonCancelWorker->AutoSize = true;
			this->buttonCancelWorker->BackColor = System::Drawing::Color::Transparent;
			this->buttonCancelWorker->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonCancelWorker->FlatAppearance->BorderSize = 0;
			this->buttonCancelWorker->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCancelWorker->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"buttonCancelWorker.Image")));
			this->buttonCancelWorker->Location = System::Drawing::Point(230, 293);
			this->buttonCancelWorker->Name = L"buttonCancelWorker";
			this->buttonCancelWorker->Size = System::Drawing::Size(44, 44);
			this->buttonCancelWorker->TabIndex = 15;
			this->buttonCancelWorker->UseVisualStyleBackColor = false;
			this->buttonCancelWorker->Click += gcnew System::EventHandler(this, &MainForm::buttonCancelWorker_Click);
			// 
			// buttonSaveWorker
			// 
			this->buttonSaveWorker->AutoSize = true;
			this->buttonSaveWorker->BackColor = System::Drawing::Color::Transparent;
			this->buttonSaveWorker->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonSaveWorker->FlatAppearance->BorderSize = 0;
			this->buttonSaveWorker->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSaveWorker->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"buttonSaveWorker.Image")));
			this->buttonSaveWorker->Location = System::Drawing::Point(166, 293);
			this->buttonSaveWorker->Name = L"buttonSaveWorker";
			this->buttonSaveWorker->Size = System::Drawing::Size(44, 44);
			this->buttonSaveWorker->TabIndex = 14;
			this->buttonSaveWorker->UseVisualStyleBackColor = false;
			this->buttonSaveWorker->Click += gcnew System::EventHandler(this, &MainForm::buttonSaveWorker_Click);
			// 
			// labelWEducation
			// 
			this->labelWEducation->AutoSize = true;
			this->labelWEducation->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelWEducation->Location = System::Drawing::Point(12, 193);
			this->labelWEducation->Name = L"labelWEducation";
			this->labelWEducation->Size = System::Drawing::Size(57, 21);
			this->labelWEducation->TabIndex = 12;
			this->labelWEducation->Text = L"Освіта";
			// 
			// labelWJob
			// 
			this->labelWJob->AutoSize = true;
			this->labelWJob->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelWJob->Location = System::Drawing::Point(12, 167);
			this->labelWJob->Name = L"labelWJob";
			this->labelWJob->Size = System::Drawing::Size(66, 21);
			this->labelWJob->TabIndex = 11;
			this->labelWJob->Text = L"Посада";
			// 
			// labelWBirthDate
			// 
			this->labelWBirthDate->AutoSize = true;
			this->labelWBirthDate->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelWBirthDate->Location = System::Drawing::Point(12, 140);
			this->labelWBirthDate->Name = L"labelWBirthDate";
			this->labelWBirthDate->Size = System::Drawing::Size(136, 21);
			this->labelWBirthDate->TabIndex = 10;
			this->labelWBirthDate->Text = L"Дата народження";
			// 
			// labelWFiringDate
			// 
			this->labelWFiringDate->AutoSize = true;
			this->labelWFiringDate->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelWFiringDate->Location = System::Drawing::Point(12, 115);
			this->labelWFiringDate->Name = L"labelWFiringDate";
			this->labelWFiringDate->Size = System::Drawing::Size(128, 21);
			this->labelWFiringDate->TabIndex = 9;
			this->labelWFiringDate->Text = L"Дата звільнення";
			// 
			// labelWEmploymentDate
			// 
			this->labelWEmploymentDate->AutoSize = true;
			this->labelWEmploymentDate->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelWEmploymentDate->Location = System::Drawing::Point(12, 88);
			this->labelWEmploymentDate->Name = L"labelWEmploymentDate";
			this->labelWEmploymentDate->Size = System::Drawing::Size(145, 21);
			this->labelWEmploymentDate->TabIndex = 8;
			this->labelWEmploymentDate->Text = L"Дата влаштування";
			// 
			// labelWName
			// 
			this->labelWName->AutoSize = true;
			this->labelWName->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelWName->Location = System::Drawing::Point(12, 62);
			this->labelWName->Name = L"labelWName";
			this->labelWName->Size = System::Drawing::Size(128, 21);
			this->labelWName->TabIndex = 7;
			this->labelWName->Text = L"ПІБ працівника";
			// 
			// textBoxWName
			// 
			this->textBoxWName->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBoxWName->Location = System::Drawing::Point(174, 59);
			this->textBoxWName->MaxLength = 100;
			this->textBoxWName->Name = L"textBoxWName";
			this->textBoxWName->Size = System::Drawing::Size(251, 24);
			this->textBoxWName->TabIndex = 1;
			this->textBoxWName->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBoxWName_KeyPress);
			// 
			// labelWorker
			// 
			this->labelWorker->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(90)), 
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->labelWorker->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelWorker->Location = System::Drawing::Point(-1, -1);
			this->labelWorker->Name = L"labelWorker";
			this->labelWorker->Size = System::Drawing::Size(440, 50);
			this->labelWorker->TabIndex = 0;
			this->labelWorker->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelWorker->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::panelTop_MouseDown);
			this->labelWorker->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::label_MouseMove);
			// 
			// panelAddOrEditSelling
			// 
			this->panelAddOrEditSelling->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelAddOrEditSelling->Controls->Add(this->comboBoxSelGId);
			this->panelAddOrEditSelling->Controls->Add(this->comboBoxSelTId);
			this->panelAddOrEditSelling->Controls->Add(this->buttonCancelSelling);
			this->panelAddOrEditSelling->Controls->Add(this->buttonSaveSelling);
			this->panelAddOrEditSelling->Controls->Add(this->labelSelUnitsAmount);
			this->panelAddOrEditSelling->Controls->Add(this->labelSelGId);
			this->panelAddOrEditSelling->Controls->Add(this->labelSelTId);
			this->panelAddOrEditSelling->Controls->Add(this->textBoxSelUnitsAmount);
			this->panelAddOrEditSelling->Controls->Add(this->labelSelling);
			this->panelAddOrEditSelling->Location = System::Drawing::Point(1572, 352);
			this->panelAddOrEditSelling->Name = L"panelAddOrEditSelling";
			this->panelAddOrEditSelling->Size = System::Drawing::Size(410, 232);
			this->panelAddOrEditSelling->TabIndex = 24;
			this->panelAddOrEditSelling->Visible = false;
			// 
			// comboBoxSelGId
			// 
			this->comboBoxSelGId->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->comboBoxSelGId->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboBoxSelGId->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9));
			this->comboBoxSelGId->FormattingEnabled = true;
			this->comboBoxSelGId->Location = System::Drawing::Point(144, 85);
			this->comboBoxSelGId->MaxLength = 100;
			this->comboBoxSelGId->Name = L"comboBoxSelGId";
			this->comboBoxSelGId->Size = System::Drawing::Size(251, 25);
			this->comboBoxSelGId->TabIndex = 17;
			this->comboBoxSelGId->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::comboBoxSGId_KeyPress);
			// 
			// comboBoxSelTId
			// 
			this->comboBoxSelTId->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->comboBoxSelTId->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboBoxSelTId->DataSource = this->dataSet;
			this->comboBoxSelTId->DisplayMember = L"transactions.t_id";
			this->comboBoxSelTId->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9));
			this->comboBoxSelTId->FormattingEnabled = true;
			this->comboBoxSelTId->Location = System::Drawing::Point(144, 58);
			this->comboBoxSelTId->MaxLength = 10;
			this->comboBoxSelTId->Name = L"comboBoxSelTId";
			this->comboBoxSelTId->Size = System::Drawing::Size(251, 25);
			this->comboBoxSelTId->TabIndex = 16;
			this->comboBoxSelTId->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::comboBoxSIId_KeyPress);
			// 
			// buttonCancelSelling
			// 
			this->buttonCancelSelling->AutoSize = true;
			this->buttonCancelSelling->BackColor = System::Drawing::Color::Transparent;
			this->buttonCancelSelling->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonCancelSelling->FlatAppearance->BorderSize = 0;
			this->buttonCancelSelling->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCancelSelling->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"buttonCancelSelling.Image")));
			this->buttonCancelSelling->Location = System::Drawing::Point(215, 162);
			this->buttonCancelSelling->Name = L"buttonCancelSelling";
			this->buttonCancelSelling->Size = System::Drawing::Size(44, 44);
			this->buttonCancelSelling->TabIndex = 15;
			this->buttonCancelSelling->UseVisualStyleBackColor = false;
			this->buttonCancelSelling->Click += gcnew System::EventHandler(this, &MainForm::buttonCancelSelling_Click);
			// 
			// buttonSaveSelling
			// 
			this->buttonSaveSelling->AutoSize = true;
			this->buttonSaveSelling->BackColor = System::Drawing::Color::Transparent;
			this->buttonSaveSelling->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonSaveSelling->FlatAppearance->BorderSize = 0;
			this->buttonSaveSelling->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSaveSelling->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"buttonSaveSelling.Image")));
			this->buttonSaveSelling->Location = System::Drawing::Point(151, 162);
			this->buttonSaveSelling->Name = L"buttonSaveSelling";
			this->buttonSaveSelling->Size = System::Drawing::Size(44, 44);
			this->buttonSaveSelling->TabIndex = 14;
			this->buttonSaveSelling->UseVisualStyleBackColor = false;
			this->buttonSaveSelling->Click += gcnew System::EventHandler(this, &MainForm::buttonSaveSelling_Click);
			// 
			// labelSelUnitsAmount
			// 
			this->labelSelUnitsAmount->AutoSize = true;
			this->labelSelUnitsAmount->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelSelUnitsAmount->Location = System::Drawing::Point(12, 115);
			this->labelSelUnitsAmount->Name = L"labelSelUnitsAmount";
			this->labelSelUnitsAmount->Size = System::Drawing::Size(74, 21);
			this->labelSelUnitsAmount->TabIndex = 9;
			this->labelSelUnitsAmount->Text = L"Кількість";
			// 
			// labelSelGId
			// 
			this->labelSelGId->AutoSize = true;
			this->labelSelGId->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelSelGId->Location = System::Drawing::Point(12, 88);
			this->labelSelGId->Name = L"labelSelGId";
			this->labelSelGId->Size = System::Drawing::Size(53, 21);
			this->labelSelGId->TabIndex = 8;
			this->labelSelGId->Text = L"Товар";
			// 
			// labelSelTId
			// 
			this->labelSelTId->AutoSize = true;
			this->labelSelTId->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelSelTId->Location = System::Drawing::Point(12, 62);
			this->labelSelTId->Name = L"labelSelTId";
			this->labelSelTId->Size = System::Drawing::Size(115, 21);
			this->labelSelTId->TabIndex = 7;
			this->labelSelTId->Text = L"Код транзакції";
			// 
			// textBoxSelUnitsAmount
			// 
			this->textBoxSelUnitsAmount->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBoxSelUnitsAmount->Location = System::Drawing::Point(144, 112);
			this->textBoxSelUnitsAmount->MaxLength = 10;
			this->textBoxSelUnitsAmount->Name = L"textBoxSelUnitsAmount";
			this->textBoxSelUnitsAmount->Size = System::Drawing::Size(251, 24);
			this->textBoxSelUnitsAmount->TabIndex = 3;
			this->textBoxSelUnitsAmount->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBoxSelUnitsAmount_KeyPress);
			// 
			// labelSelling
			// 
			this->labelSelling->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(90)), 
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->labelSelling->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelSelling->Location = System::Drawing::Point(-1, -1);
			this->labelSelling->Name = L"labelSelling";
			this->labelSelling->Size = System::Drawing::Size(410, 50);
			this->labelSelling->TabIndex = 0;
			this->labelSelling->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelSelling->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::panelTop_MouseDown);
			this->labelSelling->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::label_MouseMove);
			// 
			// panelAddOrEditGood
			// 
			this->panelAddOrEditGood->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelAddOrEditGood->Controls->Add(this->comboBoxGCategory);
			this->panelAddOrEditGood->Controls->Add(this->comboBoxGUnitOfMeasurement);
			this->panelAddOrEditGood->Controls->Add(this->comboBoxGDId);
			this->panelAddOrEditGood->Controls->Add(this->labelGDId);
			this->panelAddOrEditGood->Controls->Add(this->textBoxGBarcode);
			this->panelAddOrEditGood->Controls->Add(this->comboBoxGMId);
			this->panelAddOrEditGood->Controls->Add(this->textBoxGRetailPrice);
			this->panelAddOrEditGood->Controls->Add(this->labelGMId);
			this->panelAddOrEditGood->Controls->Add(this->labelGRetailPrice);
			this->panelAddOrEditGood->Controls->Add(this->buttonCancelGood);
			this->panelAddOrEditGood->Controls->Add(this->buttonSaveGood);
			this->panelAddOrEditGood->Controls->Add(this->labelGUnitOfMeasurement);
			this->panelAddOrEditGood->Controls->Add(this->labelGCategory);
			this->panelAddOrEditGood->Controls->Add(this->labelGBarcode);
			this->panelAddOrEditGood->Controls->Add(this->labelGName);
			this->panelAddOrEditGood->Controls->Add(this->textBoxGName);
			this->panelAddOrEditGood->Controls->Add(this->labelGood);
			this->panelAddOrEditGood->Location = System::Drawing::Point(1592, 252);
			this->panelAddOrEditGood->Name = L"panelAddOrEditGood";
			this->panelAddOrEditGood->Size = System::Drawing::Size(430, 338);
			this->panelAddOrEditGood->TabIndex = 26;
			this->panelAddOrEditGood->Visible = false;
			// 
			// comboBoxGCategory
			// 
			this->comboBoxGCategory->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->comboBoxGCategory->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboBoxGCategory->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9));
			this->comboBoxGCategory->FormattingEnabled = true;
			this->comboBoxGCategory->Items->AddRange(gcnew cli::array< System::Object^  >(17) {L"Молочні вироби", L"Консервовані продукти", 
				L"Крупи", L"Макаронні вироби", L"Торт", L"Тістечко", L"Цукерки", L"Печиво", L"Картопля", L"Алгоколь", L"Мінеральна вода", L"Газований напій", 
				L"Сік", L"Майонез", L"Гірчиця", L"Кетчуп", L"Хлібобулочний виріб"});
			this->comboBoxGCategory->Location = System::Drawing::Point(164, 110);
			this->comboBoxGCategory->MaxLength = 50;
			this->comboBoxGCategory->Name = L"comboBoxGCategory";
			this->comboBoxGCategory->Size = System::Drawing::Size(251, 25);
			this->comboBoxGCategory->TabIndex = 32;
			this->comboBoxGCategory->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::comboBoxDShelvingType_KeyPress);
			// 
			// comboBoxGUnitOfMeasurement
			// 
			this->comboBoxGUnitOfMeasurement->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->comboBoxGUnitOfMeasurement->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboBoxGUnitOfMeasurement->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9));
			this->comboBoxGUnitOfMeasurement->FormattingEnabled = true;
			this->comboBoxGUnitOfMeasurement->Items->AddRange(gcnew cli::array< System::Object^  >(5) {L"банка", L"кілограм", L"пляшка", 
				L"упаковка", L"штука"});
			this->comboBoxGUnitOfMeasurement->Location = System::Drawing::Point(164, 137);
			this->comboBoxGUnitOfMeasurement->MaxLength = 50;
			this->comboBoxGUnitOfMeasurement->Name = L"comboBoxGUnitOfMeasurement";
			this->comboBoxGUnitOfMeasurement->Size = System::Drawing::Size(251, 25);
			this->comboBoxGUnitOfMeasurement->TabIndex = 31;
			this->comboBoxGUnitOfMeasurement->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::comboBoxGUnitOfMeasurement_KeyPress);
			// 
			// comboBoxGDId
			// 
			this->comboBoxGDId->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->comboBoxGDId->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboBoxGDId->DataSource = this->dataSet;
			this->comboBoxGDId->DisplayMember = L"departments.d_name";
			this->comboBoxGDId->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9));
			this->comboBoxGDId->FormattingEnabled = true;
			this->comboBoxGDId->Location = System::Drawing::Point(164, 217);
			this->comboBoxGDId->MaxLength = 50;
			this->comboBoxGDId->Name = L"comboBoxGDId";
			this->comboBoxGDId->Size = System::Drawing::Size(251, 25);
			this->comboBoxGDId->TabIndex = 28;
			this->comboBoxGDId->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::comboBoxDShelvingType_KeyPress);
			// 
			// labelGDId
			// 
			this->labelGDId->AutoSize = true;
			this->labelGDId->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelGDId->Location = System::Drawing::Point(12, 219);
			this->labelGDId->Name = L"labelGDId";
			this->labelGDId->Size = System::Drawing::Size(55, 21);
			this->labelGDId->TabIndex = 27;
			this->labelGDId->Text = L"Відділ";
			// 
			// textBoxGBarcode
			// 
			this->textBoxGBarcode->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBoxGBarcode->Location = System::Drawing::Point(164, 84);
			this->textBoxGBarcode->MaxLength = 13;
			this->textBoxGBarcode->Name = L"textBoxGBarcode";
			this->textBoxGBarcode->Size = System::Drawing::Size(251, 24);
			this->textBoxGBarcode->TabIndex = 26;
			this->textBoxGBarcode->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBoxGBarcode_KeyPress);
			// 
			// comboBoxGMId
			// 
			this->comboBoxGMId->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->comboBoxGMId->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboBoxGMId->DataSource = this->dataSet;
			this->comboBoxGMId->DisplayMember = L"manufacturers.m_name";
			this->comboBoxGMId->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9));
			this->comboBoxGMId->FormattingEnabled = true;
			this->comboBoxGMId->Location = System::Drawing::Point(164, 190);
			this->comboBoxGMId->MaxLength = 50;
			this->comboBoxGMId->Name = L"comboBoxGMId";
			this->comboBoxGMId->Size = System::Drawing::Size(251, 25);
			this->comboBoxGMId->TabIndex = 21;
			this->comboBoxGMId->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::comboBoxSGId_KeyPress);
			// 
			// textBoxGRetailPrice
			// 
			this->textBoxGRetailPrice->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBoxGRetailPrice->Location = System::Drawing::Point(164, 164);
			this->textBoxGRetailPrice->MaxLength = 10;
			this->textBoxGRetailPrice->Name = L"textBoxGRetailPrice";
			this->textBoxGRetailPrice->Size = System::Drawing::Size(251, 24);
			this->textBoxGRetailPrice->TabIndex = 25;
			this->textBoxGRetailPrice->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBoxSPurchasePrice_KeyPress);
			// 
			// labelGMId
			// 
			this->labelGMId->AutoSize = true;
			this->labelGMId->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelGMId->Location = System::Drawing::Point(12, 193);
			this->labelGMId->Name = L"labelGMId";
			this->labelGMId->Size = System::Drawing::Size(79, 21);
			this->labelGMId->TabIndex = 17;
			this->labelGMId->Text = L"Виробник";
			// 
			// labelGRetailPrice
			// 
			this->labelGRetailPrice->AutoSize = true;
			this->labelGRetailPrice->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelGRetailPrice->Location = System::Drawing::Point(12, 167);
			this->labelGRetailPrice->Name = L"labelGRetailPrice";
			this->labelGRetailPrice->Size = System::Drawing::Size(115, 21);
			this->labelGRetailPrice->TabIndex = 16;
			this->labelGRetailPrice->Text = L"Роздрібна ціна";
			// 
			// buttonCancelGood
			// 
			this->buttonCancelGood->AutoSize = true;
			this->buttonCancelGood->BackColor = System::Drawing::Color::Transparent;
			this->buttonCancelGood->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonCancelGood->FlatAppearance->BorderSize = 0;
			this->buttonCancelGood->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCancelGood->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"buttonCancelGood.Image")));
			this->buttonCancelGood->Location = System::Drawing::Point(225, 268);
			this->buttonCancelGood->Name = L"buttonCancelGood";
			this->buttonCancelGood->Size = System::Drawing::Size(44, 44);
			this->buttonCancelGood->TabIndex = 15;
			this->buttonCancelGood->UseVisualStyleBackColor = false;
			this->buttonCancelGood->Click += gcnew System::EventHandler(this, &MainForm::buttonCancelGood_Click);
			// 
			// buttonSaveGood
			// 
			this->buttonSaveGood->AutoSize = true;
			this->buttonSaveGood->BackColor = System::Drawing::Color::Transparent;
			this->buttonSaveGood->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonSaveGood->FlatAppearance->BorderSize = 0;
			this->buttonSaveGood->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSaveGood->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"buttonSaveGood.Image")));
			this->buttonSaveGood->Location = System::Drawing::Point(161, 268);
			this->buttonSaveGood->Name = L"buttonSaveGood";
			this->buttonSaveGood->Size = System::Drawing::Size(44, 44);
			this->buttonSaveGood->TabIndex = 14;
			this->buttonSaveGood->UseVisualStyleBackColor = false;
			this->buttonSaveGood->Click += gcnew System::EventHandler(this, &MainForm::buttonSaveGood_Click);
			// 
			// labelGUnitOfMeasurement
			// 
			this->labelGUnitOfMeasurement->AutoSize = true;
			this->labelGUnitOfMeasurement->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelGUnitOfMeasurement->Location = System::Drawing::Point(12, 141);
			this->labelGUnitOfMeasurement->Name = L"labelGUnitOfMeasurement";
			this->labelGUnitOfMeasurement->Size = System::Drawing::Size(132, 21);
			this->labelGUnitOfMeasurement->TabIndex = 12;
			this->labelGUnitOfMeasurement->Text = L"Одиниця виміру";
			// 
			// labelGCategory
			// 
			this->labelGCategory->AutoSize = true;
			this->labelGCategory->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelGCategory->Location = System::Drawing::Point(12, 115);
			this->labelGCategory->Name = L"labelGCategory";
			this->labelGCategory->Size = System::Drawing::Size(79, 21);
			this->labelGCategory->TabIndex = 11;
			this->labelGCategory->Text = L"Категорія";
			// 
			// labelGBarcode
			// 
			this->labelGBarcode->AutoSize = true;
			this->labelGBarcode->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelGBarcode->Location = System::Drawing::Point(12, 88);
			this->labelGBarcode->Name = L"labelGBarcode";
			this->labelGBarcode->Size = System::Drawing::Size(92, 21);
			this->labelGBarcode->TabIndex = 10;
			this->labelGBarcode->Text = L"Штрих-код";
			// 
			// labelGName
			// 
			this->labelGName->AutoSize = true;
			this->labelGName->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelGName->Location = System::Drawing::Point(12, 62);
			this->labelGName->Name = L"labelGName";
			this->labelGName->Size = System::Drawing::Size(108, 21);
			this->labelGName->TabIndex = 7;
			this->labelGName->Text = L"Назва товару";
			// 
			// textBoxGName
			// 
			this->textBoxGName->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBoxGName->Location = System::Drawing::Point(164, 58);
			this->textBoxGName->MaxLength = 100;
			this->textBoxGName->Name = L"textBoxGName";
			this->textBoxGName->Size = System::Drawing::Size(251, 24);
			this->textBoxGName->TabIndex = 1;
			this->textBoxGName->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::textBoxGName_KeyPress);
			// 
			// labelGood
			// 
			this->labelGood->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(90)), 
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->labelGood->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelGood->Location = System::Drawing::Point(-1, -1);
			this->labelGood->Name = L"labelGood";
			this->labelGood->Size = System::Drawing::Size(430, 50);
			this->labelGood->TabIndex = 0;
			this->labelGood->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelGood->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::panelTop_MouseDown);
			this->labelGood->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::label_MouseMove);
			// 
			// panelAddOrEditTransaction
			// 
			this->panelAddOrEditTransaction->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panelAddOrEditTransaction->Controls->Add(this->dateTimePickerTTime);
			this->panelAddOrEditTransaction->Controls->Add(this->comboBoxTWName);
			this->panelAddOrEditTransaction->Controls->Add(this->dateTimePickerTDate);
			this->panelAddOrEditTransaction->Controls->Add(this->labelTWName);
			this->panelAddOrEditTransaction->Controls->Add(this->comboBoxTDCId);
			this->panelAddOrEditTransaction->Controls->Add(this->buttonCancelTransaction);
			this->panelAddOrEditTransaction->Controls->Add(this->buttonSaveTransaction);
			this->panelAddOrEditTransaction->Controls->Add(this->labelTDateTime);
			this->panelAddOrEditTransaction->Controls->Add(this->labelTDCId);
			this->panelAddOrEditTransaction->Controls->Add(this->labelTransaction);
			this->panelAddOrEditTransaction->Location = System::Drawing::Point(1622, 185);
			this->panelAddOrEditTransaction->Name = L"panelAddOrEditTransaction";
			this->panelAddOrEditTransaction->Size = System::Drawing::Size(460, 232);
			this->panelAddOrEditTransaction->TabIndex = 25;
			this->panelAddOrEditTransaction->Visible = false;
			// 
			// dateTimePickerTTime
			// 
			this->dateTimePickerTTime->CalendarFont = (gcnew System::Drawing::Font(L"Comic Sans MS", 9));
			this->dateTimePickerTTime->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9));
			this->dateTimePickerTTime->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dateTimePickerTTime->Location = System::Drawing::Point(325, 86);
			this->dateTimePickerTTime->Name = L"dateTimePickerTTime";
			this->dateTimePickerTTime->ShowUpDown = true;
			this->dateTimePickerTTime->Size = System::Drawing::Size(120, 24);
			this->dateTimePickerTTime->TabIndex = 21;
			// 
			// comboBoxTWName
			// 
			this->comboBoxTWName->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->comboBoxTWName->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboBoxTWName->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9));
			this->comboBoxTWName->FormattingEnabled = true;
			this->comboBoxTWName->Location = System::Drawing::Point(194, 112);
			this->comboBoxTWName->MaxLength = 100;
			this->comboBoxTWName->Name = L"comboBoxTWName";
			this->comboBoxTWName->Size = System::Drawing::Size(251, 25);
			this->comboBoxTWName->TabIndex = 20;
			this->comboBoxTWName->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::comboboxIWName_KeyPress);
			// 
			// dateTimePickerTDate
			// 
			this->dateTimePickerTDate->Cursor = System::Windows::Forms::Cursors::Hand;
			this->dateTimePickerTDate->CustomFormat = L"";
			this->dateTimePickerTDate->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9));
			this->dateTimePickerTDate->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimePickerTDate->Location = System::Drawing::Point(194, 86);
			this->dateTimePickerTDate->MaxDate = System::DateTime(2017, 10, 31, 0, 0, 0, 0);
			this->dateTimePickerTDate->MinDate = System::DateTime(2010, 7, 19, 0, 0, 0, 0);
			this->dateTimePickerTDate->Name = L"dateTimePickerTDate";
			this->dateTimePickerTDate->Size = System::Drawing::Size(120, 24);
			this->dateTimePickerTDate->TabIndex = 20;
			this->dateTimePickerTDate->Value = System::DateTime(2017, 10, 31, 0, 0, 0, 0);
			// 
			// labelTWName
			// 
			this->labelTWName->AutoSize = true;
			this->labelTWName->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelTWName->Location = System::Drawing::Point(12, 114);
			this->labelTWName->Name = L"labelTWName";
			this->labelTWName->Size = System::Drawing::Size(54, 21);
			this->labelTWName->TabIndex = 19;
			this->labelTWName->Text = L"Касир";
			// 
			// comboBoxTDCId
			// 
			this->comboBoxTDCId->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->comboBoxTDCId->AutoCompleteSource = System::Windows::Forms::AutoCompleteSource::ListItems;
			this->comboBoxTDCId->DataSource = this->dataSet;
			this->comboBoxTDCId->DisplayMember = L"discount_cards.dc_id";
			this->comboBoxTDCId->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9));
			this->comboBoxTDCId->FormattingEnabled = true;
			this->comboBoxTDCId->Location = System::Drawing::Point(194, 59);
			this->comboBoxTDCId->MaxLength = 100;
			this->comboBoxTDCId->Name = L"comboBoxTDCId";
			this->comboBoxTDCId->Size = System::Drawing::Size(251, 25);
			this->comboBoxTDCId->TabIndex = 17;
			this->comboBoxTDCId->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::comboBoxSIId_KeyPress);
			// 
			// buttonCancelTransaction
			// 
			this->buttonCancelTransaction->AutoSize = true;
			this->buttonCancelTransaction->BackColor = System::Drawing::Color::Transparent;
			this->buttonCancelTransaction->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonCancelTransaction->FlatAppearance->BorderSize = 0;
			this->buttonCancelTransaction->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonCancelTransaction->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"buttonCancelTransaction.Image")));
			this->buttonCancelTransaction->Location = System::Drawing::Point(240, 162);
			this->buttonCancelTransaction->Name = L"buttonCancelTransaction";
			this->buttonCancelTransaction->Size = System::Drawing::Size(44, 44);
			this->buttonCancelTransaction->TabIndex = 15;
			this->buttonCancelTransaction->UseVisualStyleBackColor = false;
			this->buttonCancelTransaction->Click += gcnew System::EventHandler(this, &MainForm::buttonCancelTransaction_Click);
			// 
			// buttonSaveTransaction
			// 
			this->buttonSaveTransaction->AutoSize = true;
			this->buttonSaveTransaction->BackColor = System::Drawing::Color::Transparent;
			this->buttonSaveTransaction->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonSaveTransaction->FlatAppearance->BorderSize = 0;
			this->buttonSaveTransaction->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonSaveTransaction->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"buttonSaveTransaction.Image")));
			this->buttonSaveTransaction->Location = System::Drawing::Point(176, 162);
			this->buttonSaveTransaction->Name = L"buttonSaveTransaction";
			this->buttonSaveTransaction->Size = System::Drawing::Size(44, 44);
			this->buttonSaveTransaction->TabIndex = 14;
			this->buttonSaveTransaction->UseVisualStyleBackColor = false;
			this->buttonSaveTransaction->Click += gcnew System::EventHandler(this, &MainForm::buttonSaveTransaction_Click);
			// 
			// labelTDateTime
			// 
			this->labelTDateTime->AutoSize = true;
			this->labelTDateTime->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelTDateTime->Location = System::Drawing::Point(12, 88);
			this->labelTDateTime->Name = L"labelTDateTime";
			this->labelTDateTime->Size = System::Drawing::Size(87, 21);
			this->labelTDateTime->TabIndex = 9;
			this->labelTDateTime->Text = L"Дата і час";
			// 
			// labelTDCId
			// 
			this->labelTDCId->AutoSize = true;
			this->labelTDCId->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelTDCId->Location = System::Drawing::Point(12, 62);
			this->labelTDCId->Name = L"labelTDCId";
			this->labelTDCId->Size = System::Drawing::Size(178, 21);
			this->labelTDCId->TabIndex = 7;
			this->labelTDCId->Text = L"Код дисконтної картки";
			// 
			// labelTransaction
			// 
			this->labelTransaction->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(69)), static_cast<System::Int32>(static_cast<System::Byte>(90)), 
				static_cast<System::Int32>(static_cast<System::Byte>(100)));
			this->labelTransaction->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->labelTransaction->Location = System::Drawing::Point(-1, -1);
			this->labelTransaction->Name = L"labelTransaction";
			this->labelTransaction->Size = System::Drawing::Size(460, 50);
			this->labelTransaction->TabIndex = 0;
			this->labelTransaction->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelTransaction->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::panelTop_MouseDown);
			this->labelTransaction->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::label_MouseMove);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(96)), static_cast<System::Int32>(static_cast<System::Byte>(125)), 
				static_cast<System::Int32>(static_cast<System::Byte>(139)));
			this->ClientSize = System::Drawing::Size(1162, 713);
			this->Controls->Add(this->panelAddOrEditTransaction);
			this->Controls->Add(this->panelAddOrEditGood);
			this->Controls->Add(this->panelAddOrEditSelling);
			this->Controls->Add(this->panelAddOrEditSupply);
			this->Controls->Add(this->panelAddOrEditInvoice);
			this->Controls->Add(this->panelAddOrEditWorker);
			this->Controls->Add(this->panelAddOrEditDepartment);
			this->Controls->Add(this->panelAddOrEditDiscountCard);
			this->Controls->Add(this->panelAddOrEditManufacturer);
			this->Controls->Add(this->buttonEditRecord);
			this->Controls->Add(this->buttonNewRecord);
			this->Controls->Add(this->panelSelections);
			this->Controls->Add(this->panelTop);
			this->Controls->Add(this->panelMenu);
			this->Controls->Add(this->buttonDelete);
			this->Controls->Add(this->buttonTransactions);
			this->Controls->Add(this->buttonGoods);
			this->Controls->Add(this->buttonSelling);
			this->Controls->Add(this->buttonWorkers);
			this->Controls->Add(this->buttonSupplies);
			this->Controls->Add(this->buttonInvoice);
			this->Controls->Add(this->buttonDiscountCards);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->buttonDepartments);
			this->Controls->Add(this->buttonManufacturers);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"MainForm";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainForm::MainForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::MainForm_MouseClick);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataSet))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->manufacturers))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->departments))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->discount_cards))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->invoice))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->supplies))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->workers))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->selling))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->goods))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->transactions))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->panelMenu->ResumeLayout(false);
			this->panelTop->ResumeLayout(false);
			this->panelTop->PerformLayout();
			this->panelSelections->ResumeLayout(false);
			this->panelAddOrEditManufacturer->ResumeLayout(false);
			this->panelAddOrEditManufacturer->PerformLayout();
			this->panelAddOrEditDepartment->ResumeLayout(false);
			this->panelAddOrEditDepartment->PerformLayout();
			this->panelAddOrEditDiscountCard->ResumeLayout(false);
			this->panelAddOrEditDiscountCard->PerformLayout();
			this->panelAddOrEditInvoice->ResumeLayout(false);
			this->panelAddOrEditInvoice->PerformLayout();
			this->panelAddOrEditSupply->ResumeLayout(false);
			this->panelAddOrEditSupply->PerformLayout();
			this->panelAddOrEditWorker->ResumeLayout(false);
			this->panelAddOrEditWorker->PerformLayout();
			this->panelAddOrEditSelling->ResumeLayout(false);
			this->panelAddOrEditSelling->PerformLayout();
			this->panelAddOrEditGood->ResumeLayout(false);
			this->panelAddOrEditGood->PerformLayout();
			this->panelAddOrEditTransaction->ResumeLayout(false);
			this->panelAddOrEditTransaction->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
				 dataGridView1->AutoGenerateColumns = true;
				 dataSet->Relations->Add("manufacturers_goods", manufacturers->Columns["m_id"], goods->Columns["g_m_id"]);
				 dataSet->Relations->Add("departments_goods", departments->Columns["d_id"], goods->Columns["g_d_id"]);
				 dataSet->Relations->Add("goods_selling", goods->Columns["g_id"], selling->Columns["sel_g_id"]);
				 dataSet->Relations->Add("goods_supplies", goods->Columns["g_id"], supplies->Columns["s_g_id"]);
				 dataSet->Relations->Add("departments_workers", departments->Columns["d_id"], workers->Columns["w_d_id"]);
				 dataSet->Relations->Add("workers_invoice", workers->Columns["w_id"], invoice->Columns["i_w_id"]);
				 dataSet->Relations->Add("workers_transactions", workers->Columns["w_id"], transactions->Columns["t_w_id"]);
				 dataSet->Relations->Add("discount_cards_transactions", discount_cards->Columns["dc_id"], transactions->Columns["t_dc_id"]);
				 dataSet->Relations->Add("transactions_selling", transactions->Columns["t_id"], selling->Columns["sel_t_id"]);
				 dataSet->Relations->Add("invoice_selling", invoice->Columns["i_id"], supplies->Columns["s_i_id"]);
				 oleDbDataAdapterManufacturers->Fill(manufacturers);
				 oleDbDataAdapterDepartments->Fill(departments);
				 oleDbDataAdapterGoods->Fill(goods);
				 oleDbDataAdapterWorkers->Fill(workers);
				 oleDbDataAdapterInvoice->Fill(invoice);
				 oleDbDataAdapterSupplies->Fill(supplies);
				 oleDbDataAdapterDiscountCards->Fill(discount_cards);
				 oleDbDataAdapterTransactions->Fill(transactions);
				 oleDbDataAdapterSelling->Fill(selling);
				 buttonManufacturers->PerformClick();
				 addAdditionalColumns();
				 dateTimePickerIDate->MaxDate = DateTime::Now.Date;
				 dateTimePickerSExpirationDate->MaxDate = DateTime::Now.Date;
				 dateTimePickerWBirthDate->MaxDate = DateTime::Now.Date;
				 dateTimePickerWEmploymentDate->MaxDate = DateTime::Now.Date;
				 dateTimePickerWFiringDate->MaxDate = DateTime::Now.Date;
				 dateTimePickerTDate->MaxDate = DateTime::Now.Date;
			 }

#pragma region DataGridView Tabs
	private: System::Void buttonManufacturers_Click(System::Object^  sender, System::EventArgs^  e) {
				 dataGridView1->DataMember = "manufacturers";
				 displayTable(manufacturers, buttonManufacturers);
			 }

	private: System::Void buttonDepartments_Click(System::Object^  sender, System::EventArgs^  e) {
				 dataGridView1->DataMember = "departments";
				 displayTable(departments, buttonDepartments);
			 }

	private: System::Void buttonDiscountCards_Click(System::Object^  sender, System::EventArgs^  e) {
				 dataGridView1->DataMember = "discount_cards";
				 displayTable(discount_cards, buttonDiscountCards);
			 }

	private: System::Void buttonInvoice_Click(System::Object^  sender, System::EventArgs^  e) {
				 dataGridView1->DataMember = "invoice";
				 displayTable(invoice, buttonInvoice);
				 dataGridView1->Columns["i_w_id"]->Visible = false;
			 }

	private: System::Void buttonSupplies_Click(System::Object^  sender, System::EventArgs^  e) {
				 dataGridView1->DataMember = "supplies";
				 displayTable(supplies, buttonSupplies);
				 dataGridView1->Columns["s_g_id"]->Visible = false;
			 }

	private: System::Void buttonWorkers_Click(System::Object^  sender, System::EventArgs^  e) {
				 dataGridView1->DataMember = "workers";
				 displayTable(workers, buttonWorkers);
				 dataGridView1->Columns["w_d_id"]->Visible = false;
			 }

	private: System::Void buttonSelling_Click(System::Object^  sender, System::EventArgs^  e) {
				 dataGridView1->DataMember = "selling";
				 displayTable(selling, buttonSelling);
				 dataGridView1->Columns["sel_g_id"]->Visible = false;
			 }

	private: System::Void buttonGoods_Click(System::Object^  sender, System::EventArgs^  e) {
				 dataGridView1->DataMember = "goods";
				 displayTable(goods, buttonGoods);
				 dataGridView1->Columns["g_m_id"]->Visible = false;
				 dataGridView1->Columns["g_d_id"]->Visible = false;
			 }

	private: System::Void buttonTransactions_Click(System::Object^  sender, System::EventArgs^  e) {
				 dataGridView1->DataMember = "transactions";
				 displayTable(transactions, buttonTransactions);
				 dataGridView1->Columns["t_w_id"]->Visible = false;
			 }
#pragma endregion
			 
	private: System::Void buttonClose_Click(System::Object^  sender, System::EventArgs^  e) {
				 Application::Exit();
			 }

	private: System::Void MainForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
				 if (dataSet->HasChanges()) {
					 System::Windows::Forms::DialogResult dialogResult = MessageBox::Show("До бази даних внесено зміни. Зберегти їх?", 
						 "Увага!", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button3);
					 if (dialogResult == System::Windows::Forms::DialogResult::Yes) {
						 saveChanges();
						 Application::Exit();
					 }
					 else if (dialogResult == System::Windows::Forms::DialogResult::Cancel)
						 e->Cancel = true;
					 else closeWithoutChanges();
				 }
				 else closeWithoutChanges();
			 }

	private: System::Void buttonDelete_Click(System::Object^  sender, System::EventArgs^  e) {
				 deletingSelected();
			 }

	private: System::Void buttonSaveChanges_Click(System::Object^  sender, System::EventArgs^  e) {
				 saveChanges();
			 }

	private: System::Void buttonPrint_Click(System::Object^  sender, System::EventArgs^  e) {
				 printDocument1->DefaultPageSettings->Landscape = true;
				 page = 0;
				 if (printDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
					 printDocument1->Print();
			 }
			 
	private: System::Void printDocument1_PrintPage(System::Object^  sender, System::Drawing::Printing::PrintPageEventArgs^  e) {
				 int headerHeight = dataGridView1->ColumnHeadersHeight, width = 0, headerX = 75, headerY = 100;
				 Pen ^ p = gcnew Pen (Color::Black, 2.5f);
				 for (int i = 0; i < dataGridView1->ColumnCount; i++) {
					 if (dataGridView1->Columns[i]->Visible == true) {
						 headerX += width;
						 width = dataGridView1->Columns[i]->Width;
						 e->Graphics->FillRectangle(Brushes::DarkGray, headerX, headerY, width, headerHeight);
						 e->Graphics->DrawRectangle(p, headerX, headerY, width, headerHeight);
						 e->Graphics->DrawString(dataGridView1->Columns[i]->HeaderText->ToString(), dataGridView1->ColumnHeadersDefaultCellStyle->Font, Brushes::Black, 
							System::Drawing::Rectangle(headerX, headerY, width, headerHeight));
					 }
				 }
				 int rowHeight = dataGridView1->Rows[0]->Height, rowY = headerY + headerHeight, rowX;
				 for (page; page < dataGridView1->RowCount; page++) {
					 width = 0, rowX = 75;
					 if (rowY > e->MarginBounds.Height) {
						e->HasMorePages = true;
						return;
					 }
					 for (int j = 0; j < dataGridView1->ColumnCount; j++) {
						 if (dataGridView1->Columns[j]->Visible == true) {
							 rowX += width;
							 width = dataGridView1->Columns[j]->Width;
							 e->Graphics->FillRectangle(Brushes::WhiteSmoke, rowX, rowY, width, rowHeight);
							 e->Graphics->DrawRectangle(p, rowX, rowY, width, rowHeight);
							 e->Graphics->DrawString(dataGridView1->Rows[page]->Cells[j]->FormattedValue->ToString(), dataGridView1->RowsDefaultCellStyle->Font, Brushes::Black, 
								 System::Drawing::Rectangle(rowX, rowY, width, rowHeight));
						 }
					 }
					 rowY += rowHeight;
				 }
			 }

	private: System::Void buttonPreview_Click(System::Object^  sender, System::EventArgs^  e) {
				 page = 0;
				 printDocument1->DefaultPageSettings->Landscape = true;
				 printPreviewDialog1->Width = 1000;
				 printPreviewDialog1->Height = 1000;
				 printPreviewDialog1->ShowDialog();
			 }

	private: System::Void buttonMenu_Click(System::Object^  sender, System::EventArgs^  e) {
				 pressedMenuButton = !pressedMenuButton;
				 moveMenuPanelX();
			 }

	private: System::Void MainForm_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 if (currentAddOrEditPanel != nullptr)
					 if (currentAddOrEditPanel->Visible == true)
						 currentAddOrEditPanel->Location = Point(this->Size.Width/2 - currentAddOrEditPanel->Size.Width/2, 
						 this->Size.Height/2 - currentAddOrEditPanel->Size.Height/2);
				 hideMenu();
		 }

	private: System::Void panelTop_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 mouseOffset = gcnew Point(-e->X, -e->Y);
			 }
			 
	private: System::Void panelTop_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 if (e->Button == System::Windows::Forms::MouseButtons::Left) {
					 Point mousePos = MousePosition;
					 mousePos.Offset(mouseOffset->X, mouseOffset->Y);
					 this->Location = mousePos;
				 }
			 }

	private: System::Void dataGridView1_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 hideMenu();
			 }

	private: System::Void panelTop_Click(System::Object^  sender, System::EventArgs^  e) {
				 hideMenu();
			 }
	
#pragma region Selection Buttons
	private: System::Void buttonSelections_Click(System::Object^  sender, System::EventArgs^  e) {
				 pressedSelectionsButton = !pressedSelectionsButton;
				 moveSelectionsPanelX();
			 }

	private: System::Void buttonMostPopularGoods_Click(System::Object^  sender, System::EventArgs^  e) {
				 SelectForm^ selectForm = gcnew SelectForm("Найпопулярніші товари по відділах", mostPopularGoodsByDepartments());
				 selectForm->Show();
			 }

	private: System::Void buttonWarehouseGoods_Click(System::Object^  sender, System::EventArgs^  e) {
				 SelectForm^ selectForm = gcnew SelectForm("Залишок товарів на складі", warehouseGoods());
				 selectForm->Show();
			 }

	private: System::Void buttonCashierStatistics_Click(System::Object^  sender, System::EventArgs^  e) {
				 SelectForm^ selectForm = gcnew SelectForm("Статистика касирів", cashierStatistics());
				 selectForm->Show();
			 }

	private: System::Void buttonManufacturersBySuppliedGoodsAmount_Click(System::Object^  sender, System::EventArgs^  e) {
				 SelectForm^ selectForm = gcnew SelectForm("Виробники за кількістю поставлених товарів", manufacturersBySuppliedGoodsAmount());
				 selectForm->Show();
			 }

	private: System::Void buttonTransactionCost_Click(System::Object^  sender, System::EventArgs^  e) {
				 SelectForm^ selectForm = gcnew SelectForm("Вартість транзакцій", transcactionCost());
				 selectForm->Show();
			 }
#pragma endregion

#pragma region Pannels for Adding and Editing
	private: System::Void buttonNewRecord_Click(System::Object^  sender, System::EventArgs^  e) {
				 addOrEditButtonValue = gcnew String("add");
				 if (previousPressedTab == buttonManufacturers)
					 openAddOrEditPanel(labelManufacturer, "Додати виробника", buttonSaveManufacturer, buttonCancelManufacturer);
				 else if (previousPressedTab == buttonDepartments)
					 openAddOrEditPanel(labelDepartment, "Додати відділ", buttonSaveDepartment, buttonCancelDepartment);
				 else if (previousPressedTab == buttonDiscountCards)
					 openAddOrEditPanel(labelDiscountCard, "Додати дисконтну картку", buttonSaveDiscountCard, buttonCancelDiscountCard);
				 else if (previousPressedTab == buttonInvoice) {
					 fillComboBox(comboBoxIWName, workers, "менеджер закупівлі", 6, 1);
					 clearFields(panelAddOrEditInvoice);
					 openAddOrEditPanel(labelInvoice, "Додати накладну", buttonSaveInvoice, buttonCancelInvoice);
				 }
				 else if (previousPressedTab == buttonSupplies) {
					 clearFields(panelAddOrEditSupply);
					 openAddOrEditPanel(labelSupply, "Додати поставку", buttonSaveSupply, buttonCancelSupply);
				 }
				 else if (previousPressedTab == buttonWorkers) {
					 dateTimePickerWFiringDate->Checked = false;
					 clearFields(panelAddOrEditWorker);
					 openAddOrEditPanel(labelWorker, "Додати працівника", buttonSaveWorker, buttonCancelWorker);
				 }
				 else if (previousPressedTab == buttonSelling) {
					 comboBoxSelGId->Items->Clear();
					 DataTable^ tempTable = warehouseGoods();
					 for each (DataRow^ row in tempTable->Rows) {
						 if (row->RowState != DataRowState::Deleted)
							 comboBoxSelGId->Items->Add(row->ItemArray[0]->ToString());
					 }
					 openAddOrEditPanel(labelSelling, "Додати продаж", buttonSaveSelling, buttonCancelSelling);
				 }
				 else if (previousPressedTab == buttonGoods)
					 openAddOrEditPanel(labelGood, "Додати товар", buttonSaveGood, buttonCancelGood);
				 else if (previousPressedTab == buttonTransactions) {
					 fillComboBox(comboBoxTWName, workers, "касир", 6, 1);
					 clearFields(panelAddOrEditTransaction);
					 openAddOrEditPanel(labelTransaction, "Додати транзакцію", buttonSaveTransaction, buttonCancelTransaction);
				 }
			 }

	private: System::Void buttonEditRecord_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (dataGridView1->RowCount == 0)
					 MessageBox::Show("В таблиці відсутні записи!", "Увага!", MessageBoxButtons::OK, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button1);
				 else if(!dataGridView1->SelectedRows->Count)
					 MessageBox::Show("Оберіть запис для редагування!", "Увага!", MessageBoxButtons::OK, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button1);
				 else if (dataGridView1->SelectedRows->Count > 1)
					 MessageBox::Show("Неможливо редагувати одразу декілька записів!", "Увага!", MessageBoxButtons::OK, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button1);
				 else {
					 addOrEditButtonValue = gcnew String("edit");
					 editingRow = dataGridView1->SelectedRows[0];
					 editingRowIndexInDGV = dataGridView1->SelectedRows[0]->Index;
					 if (previousPressedTab == buttonManufacturers)
						 editManufacturer();
					 else if (previousPressedTab == buttonDepartments)
						 editDepartment();
					 else if (previousPressedTab == buttonDiscountCards)
						 editDiscountCard();
					 else if (previousPressedTab == buttonInvoice)
						 editInvoice();
					 else if (previousPressedTab == buttonSupplies)
						 editSupply();
					 else if (previousPressedTab == buttonWorkers)
						 editWorker();
					 else if (previousPressedTab == buttonSelling)
						 editSelling();
					 else if (previousPressedTab == buttonGoods)
						 editGood();
					 else if (previousPressedTab == buttonTransactions)
						 editTransaction();
				 }
			 }

	private: System::Void label_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^  e) {
			 if (e->Button == System::Windows::Forms::MouseButtons::Left)
				 {
					 movePanel(safe_cast<Control^>(sender)->Parent);
				 }
		 }

	private: System::Void buttonCancelManufacturer_Click(System::Object^  sender, System::EventArgs^  e) {
				 backToEditingRow(buttonManufacturers);
				 if (addOrEditButtonValue->Equals("edit")) {
					 if (!isEditedManufacturer())
						 closeAddOrEditPanel(panelAddOrEditManufacturer);
					 else {
						 System::Windows::Forms::DialogResult dialogResult1 = MessageBox::Show("До запису внесено зміни. Зберегти їх?", 
							 "Увага!", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button3);
						 if (dialogResult1 == System::Windows::Forms::DialogResult::Yes)
							 saveManufacturer();
						 if (dialogResult1 == System::Windows::Forms::DialogResult::No) 
							 closeAddOrEditPanel(panelAddOrEditManufacturer);
					 }
				 }
				 else {
					 if ((textBoxMName->Text->Length == 0) && 
						 (textBoxMCountry->Text->Length == 0) &&
						 (textBoxMCity->Text->Length == 0) &&
						 (textBoxMAddress->Text->Length == 0) &&
						 (textBoxMPhone->Text->Length == 0) &&
						 (textBoxMEmail->Text->Length == 0)) 
						 closeAddOrEditPanel(panelAddOrEditManufacturer);
					 else {
						 System::Windows::Forms::DialogResult dialogResult2 = MessageBox::Show("Зберегти запис?", 
							 "Увага!", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button3);
						 if (dialogResult2 == System::Windows::Forms::DialogResult::Yes)
							 saveManufacturer();
						 if (dialogResult2 == System::Windows::Forms::DialogResult::No) 
							 closeAddOrEditPanel(panelAddOrEditManufacturer);
					 }
				 }
			 }

	private: System::Void buttonSaveManufacturer_Click(System::Object^  sender, System::EventArgs^  e) {
				 backToEditingRow(buttonManufacturers);
				 saveManufacturer();
			 }

#pragma region Manufacturer KeyPress
	private: System::Void textBoxMName_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if ((e->KeyChar == ' ')&&(safe_cast<TextBox^>(sender)->Text->LastIndexOf(' ') != safe_cast<TextBox^>(sender)->Text->Length - 1))
					 return;
				 if (Char::IsLetterOrDigit(e->KeyChar)||(e->KeyChar == '.'))
					 return;
				 if (Char::IsControl(e->KeyChar)) { 
					 if (e->KeyChar == (char)Keys::Enter)
						 textBoxMCountry->Focus();
					 return;
				 }
				 e->Handled = true;
			 }

	private: System::Void textBoxMCountry_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if (Char::IsLetter(e->KeyChar))
					 return;
				 if ((e->KeyChar == ' ')&&(safe_cast<TextBox^>(sender)->Text->LastIndexOf(' ') != safe_cast<TextBox^>(sender)->Text->Length - 1))
					 return;
				 if (Char::IsControl(e->KeyChar)) {
					 if (e->KeyChar == (char)Keys::Enter)
						 textBoxMCity->Focus();
					 return;
				 }
				 e->Handled = true;
			 }

	private: System::Void textBoxMCity_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if (Char::IsLetter(e->KeyChar))
					 return;
				 if ((e->KeyChar == ' ')&&(safe_cast<TextBox^>(sender)->Text->LastIndexOf(' ') != safe_cast<TextBox^>(sender)->Text->Length - 1))
					 return;
				 if (Char::IsControl(e->KeyChar)) {
					 if (e->KeyChar == (char)Keys::Enter)
						 textBoxMAddress->Focus();
					 return;
				 }
				 e->Handled = true;
			 }

	private: System::Void textBoxMAddress_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if (Char::IsLetterOrDigit(e->KeyChar))
					 return;
				 if ((e->KeyChar == ' ')&&(safe_cast<TextBox^>(sender)->Text->LastIndexOf(' ') != safe_cast<TextBox^>(sender)->Text->Length - 1))
					 return;
				 if (e->KeyChar == ',' || e->KeyChar == '/') {
					 if ((safe_cast<TextBox^>(sender)->Text->IndexOf(',') != -1) || (safe_cast<TextBox^>(sender)->Text->IndexOf('/') != -1) || 
						 (safe_cast<TextBox^>(sender)->Text->IndexOf(' ') == -1) || (safe_cast<TextBox^>(sender)->Text->LastIndexOf(' ') == safe_cast<TextBox^>(sender)->Text->Length-1))
						 e->Handled = true;
					 return;
				 }
				 if (Char::IsControl(e->KeyChar)) {
					 if (e->KeyChar == (char)Keys::Enter)
						 textBoxMPhone->Focus();
					 return;
				 }
				 e->Handled = true;
			 }

	private: System::Void textBoxMPhone_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if (Char::IsDigit(e->KeyChar))
					 return;
				 if ((e->KeyChar == '+') && (safe_cast<TextBox^>(sender)->Text->Length == 0))
					 return;
				 if (e->KeyChar == '-') {
					 if ((safe_cast<TextBox^>(sender)->Text->LastIndexOf('-') == safe_cast<TextBox^>(sender)->Text->Length-1) || (safe_cast<TextBox^>(sender)->Text->Length == 0))
						 e->Handled = true;
					 return;
				 }
				 if (Char::IsControl(e->KeyChar)) {
					 if (e->KeyChar == (char)Keys::Enter)
						 textBoxMEmail->Focus();
					 return;
				 }
				 e->Handled = true;
			 }

	private: System::Void textBoxMEmail_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if ((e->KeyChar >= 97 && e->KeyChar <= 122) || (e->KeyChar >= 65 && e->KeyChar <= 90))
					 return;
				 if (Char::IsDigit(e->KeyChar) && (safe_cast<TextBox^>(sender)->Text->Length != 0))
					 return;
				 if (e->KeyChar == '@') {
					 if ((safe_cast<TextBox^>(sender)->Text->IndexOf('@') != -1)||(safe_cast<TextBox^>(sender)->Text->Length == 0))
						 e->Handled = true;
					 return;
				 }
				 if (e->KeyChar == '.') {
					 if ((safe_cast<TextBox^>(sender)->Text->IndexOf('@') == -1)||(safe_cast<TextBox^>(sender)->Text->IndexOf('@') == safe_cast<TextBox^>(sender)->Text->Length - 1)||
						 (safe_cast<TextBox^>(sender)->Text->LastIndexOf('.') == safe_cast<TextBox^>(sender)->Text->Length - 1))
						 e->Handled = true;
					 return;
				 }
				 if (Char::IsControl(e->KeyChar)) {
					 if (e->KeyChar == (char)Keys::Enter)
						 buttonSaveManufacturer->Focus();
					 return;
				 }
				 e->Handled = true;
			 }
#pragma endregion

	private: System::Void buttonSaveDepartment_Click(System::Object^  sender, System::EventArgs^  e) {
				 backToEditingRow(buttonDepartments);
				 saveDepartment();
			 }

	private: System::Void buttonCancelDepartment_Click(System::Object^  sender, System::EventArgs^  e) {
				 backToEditingRow(buttonDepartments);
				 if (addOrEditButtonValue->Equals("edit")) {
					 if (!isEditedDepartment())
						 closeAddOrEditPanel(panelAddOrEditDepartment);
					 else {
						 System::Windows::Forms::DialogResult dialogResult1 = MessageBox::Show("До запису внесено зміни. Зберегти їх?", 
							 "Увага!", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button3);
						 if (dialogResult1 == System::Windows::Forms::DialogResult::Yes)
							 saveDepartment();
						 if (dialogResult1 == System::Windows::Forms::DialogResult::No) 
							 closeAddOrEditPanel(panelAddOrEditDepartment);
					 }
				 }
				 else {
					 if ((textBoxDName->Text->Length == 0) && 
						 (comboBoxDShelvingType->Text->Length == 0)) 
						 closeAddOrEditPanel(panelAddOrEditDepartment);
					 else {
						 System::Windows::Forms::DialogResult dialogResult2 = MessageBox::Show("Зберегти запис?", 
							 "Увага!", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button3);
						 if (dialogResult2 == System::Windows::Forms::DialogResult::Yes)
							 saveDepartment();
						 if (dialogResult2 == System::Windows::Forms::DialogResult::No) 
							 closeAddOrEditPanel(panelAddOrEditDepartment);
					 }
				 }
			 }

#pragma region Department KeyPress
	private: System::Void textBoxDName_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if (Char::IsLetter(e->KeyChar))
					 return;
				 if ((e->KeyChar == ' ')&&(safe_cast<TextBox^>(sender)->Text->LastIndexOf(' ') != safe_cast<TextBox^>(sender)->Text->Length - 1))
					 return;
				 if (Char::IsControl(e->KeyChar)) {
					 if (e->KeyChar == (char)Keys::Enter)
						 comboBoxDShelvingType->Focus();
					 return;
				 }
				 e->Handled = true;
			 }

	private: System::Void comboBoxDShelvingType_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if (Char::IsLetter(e->KeyChar))
					 return;
				 if ((e->KeyChar == ' ')&&(safe_cast<ComboBox^>(sender)->Text->LastIndexOf(' ') != safe_cast<ComboBox^>(sender)->Text->Length - 1))
					 return;
				 if (Char::IsControl(e->KeyChar))
					 return;
				 e->Handled = true;
			 }
#pragma endregion

	private: System::Void buttonSaveDiscountCard_Click(System::Object^  sender, System::EventArgs^  e) {
				 backToEditingRow(buttonDiscountCards);
				 saveDiscountCard();
			 }

	private: System::Void buttonCancelDiscountCard_Click(System::Object^  sender, System::EventArgs^  e) {
				 backToEditingRow(buttonDiscountCards);
				 if (addOrEditButtonValue->Equals("edit")) {
					 if (!isEditedDiscountCard())
						 closeAddOrEditPanel(panelAddOrEditDiscountCard);
					 else {
						 System::Windows::Forms::DialogResult dialogResult1 = MessageBox::Show("До запису внесено зміни. Зберегти їх?", 
							 "Увага!", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button3);
						 if (dialogResult1 == System::Windows::Forms::DialogResult::Yes)
							 saveDiscountCard();
						 if (dialogResult1 == System::Windows::Forms::DialogResult::No) 
							 closeAddOrEditPanel(panelAddOrEditDiscountCard);
					 }
				 }
				 else {
					 if ((textBoxDCClientName->Text->Length == 0) && 
						 (textBoxDCPercentage->Text->Length == 0)) 
						 closeAddOrEditPanel(panelAddOrEditDiscountCard);
					 else {
						 System::Windows::Forms::DialogResult dialogResult2 = MessageBox::Show("Зберегти запис?", 
							 "Увага!", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button3);
						 if (dialogResult2 == System::Windows::Forms::DialogResult::Yes)
							 saveDiscountCard();
						 if (dialogResult2 == System::Windows::Forms::DialogResult::No) 
							 closeAddOrEditPanel(panelAddOrEditDiscountCard);
					 }
				 }
			 }

#pragma region DiscountCard KeyPress
	private: System::Void textBoxDCClientName_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if (Char::IsLetter(e->KeyChar))
					 return;
				 if ((e->KeyChar == ' ')&&(safe_cast<TextBox^>(sender)->Text->LastIndexOf(' ') != safe_cast<TextBox^>(sender)->Text->Length - 1))
					 return;
				 if (e->KeyChar == '.') {
					 if ((safe_cast<TextBox^>(sender)->Text->LastIndexOf('.') == safe_cast<TextBox^>(sender)->Text->Length-1) || 
						 (safe_cast<TextBox^>(sender)->Text->LastIndexOf(' ') == safe_cast<TextBox^>(sender)->Text->Length-1) ||
						 (safe_cast<TextBox^>(sender)->Text->Length == 0))
						 e->Handled = true;
					 return;
				 }
				 if (Char::IsControl(e->KeyChar)) {
					 if (e->KeyChar == (char)Keys::Enter)
						 textBoxDCPercentage->Focus();
					 return;
				 }
				 e->Handled = true;
			 }

	private: System::Void textBoxDCPercentage_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if (Char::IsDigit(e->KeyChar))
					 return;
				 if (e->KeyChar == ',') {
					 if ((safe_cast<TextBox^>(sender)->Text->IndexOf(',') != -1)||(safe_cast<TextBox^>(sender)->Text->Length == 0))
						 e->Handled = true;
					 return;
				 }
				 if (Char::IsControl(e->KeyChar)) {
					 if (e->KeyChar == (char)Keys::Enter)
						 buttonSaveDiscountCard->Focus();
					 return;
				 }
				 e->Handled = true;
			 }
#pragma endregion

	private: System::Void buttonSaveInvoice_Click(System::Object^  sender, System::EventArgs^  e) {
				 backToEditingRow(buttonInvoice);
				 saveInvoice();
			 }

	private: System::Void buttonCancelInvoice_Click(System::Object^  sender, System::EventArgs^  e) {
				 backToEditingRow(buttonInvoice);
				 if (addOrEditButtonValue->Equals("edit")) {
					 if (!isEditedInvoice())
						 closeAddOrEditPanel(panelAddOrEditInvoice);
					 else {
						 System::Windows::Forms::DialogResult dialogResult1 = MessageBox::Show("До запису внесено зміни. Зберегти їх?", 
							 "Увага!", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button3);
						 if (dialogResult1 == System::Windows::Forms::DialogResult::Yes)
							 saveInvoice();
						 if (dialogResult1 == System::Windows::Forms::DialogResult::No) 
							 closeAddOrEditPanel(panelAddOrEditInvoice);
					 }
				 }
				 else {
					 if (comboBoxIWName->SelectedIndex == -1) 
						 closeAddOrEditPanel(panelAddOrEditInvoice);
					 else {
						 System::Windows::Forms::DialogResult dialogResult2 = MessageBox::Show("Зберегти запис?", 
							 "Увага!", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button3);
						 if (dialogResult2 == System::Windows::Forms::DialogResult::Yes)
							 saveInvoice();
						 if (dialogResult2 == System::Windows::Forms::DialogResult::No) 
							 closeAddOrEditPanel(panelAddOrEditInvoice);
					 }
				 }
			 }

#pragma region Invoice KeyPress
	private: System::Void comboboxIWName_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if (Char::IsLetter(e->KeyChar))
					 return;
				 if ((e->KeyChar == ' ')&&(safe_cast<ComboBox^>(sender)->Text->LastIndexOf(' ') != safe_cast<ComboBox^>(sender)->Text->Length - 1))
					 return;
				 if (Char::IsControl(e->KeyChar))
					 return;
				 e->Handled = true;
			 }
#pragma endregion

	private: System::Void buttonSaveSupply_Click(System::Object^  sender, System::EventArgs^  e) {
				 backToEditingRow(buttonSupplies);
				 saveSupply();
			 }

	private: System::Void buttonCancelSupply_Click(System::Object^  sender, System::EventArgs^  e) {
				 backToEditingRow(buttonSupplies);
				 if (addOrEditButtonValue->Equals("edit")) {
					 if (!isEditedSupply())
						 closeAddOrEditPanel(panelAddOrEditSupply);
					 else {
						 System::Windows::Forms::DialogResult dialogResult1 = MessageBox::Show("До запису внесено зміни. Зберегти їх?", 
							 "Увага!", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button3);
						 if (dialogResult1 == System::Windows::Forms::DialogResult::Yes)
							 saveSupply();
						 if (dialogResult1 == System::Windows::Forms::DialogResult::No) 
							 closeAddOrEditPanel(panelAddOrEditSupply);
					 }
				 }
				 else {
					 if ((comboBoxSIId->SelectedIndex == -1) && (comboBoxSGId->SelectedIndex == -1) && (textBoxSUnitsAmount->Text->Length == 0) && 
						 (textBoxSPurchasePrice->Text->Length == 0))
						 closeAddOrEditPanel(panelAddOrEditSupply);
					 else {
						 System::Windows::Forms::DialogResult dialogResult2 = MessageBox::Show("Зберегти запис?", 
							 "Увага!", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button3);
						 if (dialogResult2 == System::Windows::Forms::DialogResult::Yes)
							 saveSupply();
						 if (dialogResult2 == System::Windows::Forms::DialogResult::No) 
							 closeAddOrEditPanel(panelAddOrEditSupply);
					 }
				 }
			 }

#pragma region Supply KeyPress
	private: System::Void comboBoxSIId_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if (Char::IsDigit(e->KeyChar))
					 return;
				 if (Char::IsControl(e->KeyChar))
					 return;
				 e->Handled = true;
			 }

	private: System::Void comboBoxSGId_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if (Char::IsLetterOrDigit(e->KeyChar)||(e->KeyChar == '.'))
					 return;
				 if ((e->KeyChar == ' ')&&(safe_cast<ComboBox^>(sender)->Text->LastIndexOf(' ') != safe_cast<ComboBox^>(sender)->Text->Length - 1))
					 return;
				 if (Char::IsControl(e->KeyChar))
					 return;
				 e->Handled = true;
			 }

	private: System::Void textBoxSUnitsAmount_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if (Char::IsDigit(e->KeyChar))
					 return;
				 if (Char::IsControl(e->KeyChar)) {
					 if (e->KeyChar == (char)Keys::Enter)
						 textBoxSPurchasePrice->Focus();
					 return;
				 }
				 e->Handled = true;
			 }

	private: System::Void textBoxSPurchasePrice_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if (Char::IsDigit(e->KeyChar))
					 return;
				 if (e->KeyChar == ',') {
					 if ((safe_cast<TextBox^>(sender)->Text->IndexOf(',') != -1)||(safe_cast<TextBox^>(sender)->Text->Length == 0))
						 e->Handled = true;
					 return;
				 }
				 if (Char::IsControl(e->KeyChar)) {
					 if (e->KeyChar == (char)Keys::Enter)
						 dateTimePickerSExpirationDate->Focus();
					 return;
				 }
				 e->Handled = true;			 
			 }
#pragma endregion

	private: System::Void buttonSaveWorker_Click(System::Object^  sender, System::EventArgs^  e) {
				 backToEditingRow(buttonWorkers);
				 saveWorker();
			 }

	private: System::Void buttonCancelWorker_Click(System::Object^  sender, System::EventArgs^  e) {
				 backToEditingRow(buttonWorkers);
				 if (addOrEditButtonValue->Equals("edit")) {
					 if (!isEditedWorker())
						 closeAddOrEditPanel(panelAddOrEditWorker);
					 else {
						 System::Windows::Forms::DialogResult dialogResult1 = MessageBox::Show("До запису внесено зміни. Зберегти їх?", 
							 "Увага!", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button3);
						 if (dialogResult1 == System::Windows::Forms::DialogResult::Yes)
							 saveWorker();
						 if (dialogResult1 == System::Windows::Forms::DialogResult::No) 
							 closeAddOrEditPanel(panelAddOrEditWorker);
					 }
				 }
				 else {
					 if (String::IsNullOrEmpty(textBoxWName->Text) &&
						 dateTimePickerWEmploymentDate->Value.Date.CompareTo(DateTime::Now.Date) == 0 &&
						 dateTimePickerWFiringDate->Checked == false &&
						 dateTimePickerWBirthDate->Value.Date.CompareTo(DateTime::Now.Date) == 0 &&
						 String::IsNullOrEmpty(comboBoxWJob->Text) &&
						 String::IsNullOrEmpty(comboBoxWEducation->Text) &&
						 String::IsNullOrEmpty(textBoxWSalary->Text) &&
						 String::IsNullOrEmpty(comboBoxWDId->Text))
						 closeAddOrEditPanel(panelAddOrEditWorker);
					 else {
						 System::Windows::Forms::DialogResult dialogResult2 = MessageBox::Show("Зберегти запис?", 
							 "Увага!", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button3);
						 if (dialogResult2 == System::Windows::Forms::DialogResult::Yes)
							 saveWorker();
						 if (dialogResult2 == System::Windows::Forms::DialogResult::No) 
							 closeAddOrEditPanel(panelAddOrEditWorker);
					 }
				 }
			 }

#pragma region Worker KeyPress
	private: System::Void textBoxWName_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if (Char::IsLetter(e->KeyChar))
					 return;
				 if ((e->KeyChar == ' ')&&(safe_cast<TextBox^>(sender)->Text->LastIndexOf(' ') != safe_cast<TextBox^>(sender)->Text->Length - 1))
					 return;
				 if (Char::IsControl(e->KeyChar)) {
					 if (e->KeyChar == (char)Keys::Enter)
						 dateTimePickerWEmploymentDate->Focus();
					 return;
				 }
				 e->Handled = true;
			 }

	private: System::Void textBoxWSalary_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if (Char::IsDigit(e->KeyChar))
					 return;
				 if (e->KeyChar == ',') {
					 if ((safe_cast<TextBox^>(sender)->Text->IndexOf(',') != -1)||(safe_cast<TextBox^>(sender)->Text->Length == 0))
						 e->Handled = true;
					 return;
				 }
				 if (Char::IsControl(e->KeyChar)) {
					 if (e->KeyChar == (char)Keys::Enter)
						 dateTimePickerSExpirationDate->Focus();
					 return;
				 }
				 e->Handled = true;	
			 }
#pragma endregion

	private: System::Void buttonSaveSelling_Click(System::Object^  sender, System::EventArgs^  e) {
				 backToEditingRow(buttonSelling);
				 saveSelling();
			 }

	private: System::Void buttonCancelSelling_Click(System::Object^  sender, System::EventArgs^  e) {
				 backToEditingRow(buttonSelling);
				 if (addOrEditButtonValue->Equals("edit")) {
					 if (!isEditedSelling())
						 closeAddOrEditPanel(panelAddOrEditSelling);
					 else {
						 System::Windows::Forms::DialogResult dialogResult1 = MessageBox::Show("До запису внесено зміни. Зберегти їх?", 
							 "Увага!", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button3);
						 if (dialogResult1 == System::Windows::Forms::DialogResult::Yes)
							 saveSelling();
						 if (dialogResult1 == System::Windows::Forms::DialogResult::No) 
							 closeAddOrEditPanel(panelAddOrEditSelling);
					 }
				 }
				 else {
					 if (String::IsNullOrEmpty(comboBoxSelTId->Text) &&
						 String::IsNullOrEmpty(comboBoxSelGId->Text) &&
						 String::IsNullOrEmpty(textBoxSelUnitsAmount->Text))
						 closeAddOrEditPanel(panelAddOrEditSelling);
					 else {
						 System::Windows::Forms::DialogResult dialogResult2 = MessageBox::Show("Зберегти запис?", 
							 "Увага!", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button3);
						 if (dialogResult2 == System::Windows::Forms::DialogResult::Yes)
							 saveSelling();
						 if (dialogResult2 == System::Windows::Forms::DialogResult::No) 
							 closeAddOrEditPanel(panelAddOrEditSelling);
					 }
				 }
			 }

#pragma region Selling KeyPress
	private: System::Void textBoxSelUnitsAmount_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if (Char::IsDigit(e->KeyChar))
					 return;
				 if (Char::IsControl(e->KeyChar)) {
					 if (e->KeyChar == (char)Keys::Enter)
						 buttonSaveSelling->Focus();
					 return;
				 }
				 e->Handled = true;
			 }
#pragma endregion

	private: System::Void buttonSaveGood_Click(System::Object^  sender, System::EventArgs^  e) {
				 backToEditingRow(buttonGoods);
				 saveGood();
			 }

	private: System::Void buttonCancelGood_Click(System::Object^  sender, System::EventArgs^  e) {
				 backToEditingRow(buttonGoods);
				 if (addOrEditButtonValue->Equals("edit")) {
					 if (!isEditedGood())
						 closeAddOrEditPanel(panelAddOrEditGood);
					 else {
						 System::Windows::Forms::DialogResult dialogResult1 = MessageBox::Show("До запису внесено зміни. Зберегти їх?", 
							 "Увага!", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button3);
						 if (dialogResult1 == System::Windows::Forms::DialogResult::Yes)
							 saveGood();
						 if (dialogResult1 == System::Windows::Forms::DialogResult::No) 
							 closeAddOrEditPanel(panelAddOrEditGood);
					 }
				 }
				 else {
					 if (String::IsNullOrEmpty(textBoxGName->Text) && String::IsNullOrEmpty(textBoxGBarcode->Text) &&
						 String::IsNullOrEmpty(comboBoxGCategory->Text) && String::IsNullOrEmpty(comboBoxGUnitOfMeasurement->Text) &&
						 String::IsNullOrEmpty(textBoxGRetailPrice->Text) && String::IsNullOrEmpty(comboBoxGMId->Text) &&
						 String::IsNullOrEmpty(comboBoxGDId->Text))
						 closeAddOrEditPanel(panelAddOrEditGood);
					 else {
						 System::Windows::Forms::DialogResult dialogResult2 = MessageBox::Show("Зберегти запис?", 
							 "Увага!", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button3);
						 if (dialogResult2 == System::Windows::Forms::DialogResult::Yes)
							 saveGood();
						 if (dialogResult2 == System::Windows::Forms::DialogResult::No) 
							 closeAddOrEditPanel(panelAddOrEditGood);
					 }
				 }
			 }

#pragma region Good KeyPress
	private: System::Void textBoxGName_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if ((e->KeyChar == ' ')&&(safe_cast<TextBox^>(sender)->Text->LastIndexOf(' ') != safe_cast<TextBox^>(sender)->Text->Length - 1))
					 return;
				 if (Char::IsLetterOrDigit(e->KeyChar)||(e->KeyChar == '.'))
					 return;
				 if (Char::IsControl(e->KeyChar)) { 
					 if (e->KeyChar == (char)Keys::Enter)
						 textBoxGBarcode->Focus();
					 return;
				 }
				 e->Handled = true;
			 }

	private: System::Void textBoxGBarcode_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if (Char::IsDigit(e->KeyChar))
					 return;
				 if (Char::IsControl(e->KeyChar)) {
					 if (e->KeyChar == (char)Keys::Enter)
						 comboBoxGCategory->Focus();
					 return;
				 }
				 e->Handled = true;
			 }

	private: System::Void comboBoxGUnitOfMeasurement_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {
				 if (Char::IsLetter(e->KeyChar))
					 return;
				 if (Char::IsControl(e->KeyChar))
					 return;
				 e->Handled = true;
			 }
#pragma endregion

	private: System::Void buttonSaveTransaction_Click(System::Object^  sender, System::EventArgs^  e) {
				 backToEditingRow(buttonTransactions);
				 saveTransaction();
			 }

	private: System::Void buttonCancelTransaction_Click(System::Object^  sender, System::EventArgs^  e) {
				 backToEditingRow(buttonTransactions);
				 if (addOrEditButtonValue->Equals("edit")) {
					 if (!isEditedTransaction())
						 closeAddOrEditPanel(panelAddOrEditTransaction);
					 else {
						 System::Windows::Forms::DialogResult dialogResult1 = MessageBox::Show("До запису внесено зміни. Зберегти їх?", 
							 "Увага!", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button3);
						 if (dialogResult1 == System::Windows::Forms::DialogResult::Yes)
							 saveTransaction();
						 if (dialogResult1 == System::Windows::Forms::DialogResult::No) 
							 closeAddOrEditPanel(panelAddOrEditTransaction);
					 }
				 }
				 else {
					 if (String::IsNullOrEmpty(comboBoxTDCId->Text) && String::IsNullOrEmpty(comboBoxTWName->Text))
						 closeAddOrEditPanel(panelAddOrEditTransaction);
					 else {
						 System::Windows::Forms::DialogResult dialogResult2 = MessageBox::Show("Зберегти запис?", 
							 "Увага!", MessageBoxButtons::YesNoCancel, MessageBoxIcon::Warning, MessageBoxDefaultButton::Button3);
						 if (dialogResult2 == System::Windows::Forms::DialogResult::Yes)
							 saveTransaction();
						 if (dialogResult2 == System::Windows::Forms::DialogResult::No) 
							 closeAddOrEditPanel(panelAddOrEditTransaction);
					 }
				 }
			 }
#pragma endregion

	private: System::Void buttonHelp_Click(System::Object^  sender, System::EventArgs^  e) {
				 HelpAboutForm^ helpForm = gcnew HelpAboutForm("Довідка");
				 helpForm->Show();
			 }

	private: System::Void buttonAbout_Click(System::Object^  sender, System::EventArgs^  e) {
				 HelpAboutForm^ aboutForm = gcnew HelpAboutForm("Про програму...");
				 aboutForm->Show();
			 }
};
}
