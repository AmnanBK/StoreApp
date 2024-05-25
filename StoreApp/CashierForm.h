#pragma once
#include "Item.h"

namespace StoreApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::Collections::Generic;
	using namespace System::IO;

	/// <summary>
	/// Summary for CashierForm
	/// </summary>
	public ref class CashierForm : public System::Windows::Forms::Form
	{
	public:
		CashierForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CashierForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pnlTop;
	protected:
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Button^ btnLogout;
	private: System::Windows::Forms::TextBox^ tbSearch;
	private: System::Windows::Forms::DataGridView^ dgvListItem;
	private: System::Windows::Forms::DataGridView^ dgvPurchaseItem;






	private: System::Windows::Forms::Label^ lbTotal;
	private: System::Windows::Forms::Label^ lbSumPrice;
	private: System::Windows::Forms::Panel^ pnlSumPrice;
	private: System::Windows::Forms::Panel^ pnlDetail;


	private: System::Windows::Forms::Label^ lbNameItem;
	private: System::Windows::Forms::Label^ lbPriceItem;


	private: System::Windows::Forms::Button^ btnPrint;
	private: System::Windows::Forms::NumericUpDown^ nudQty;


	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Label^ lblTitle;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ quantity;






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(CashierForm::typeid));
			this->pnlTop = (gcnew System::Windows::Forms::Panel());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->btnLogout = (gcnew System::Windows::Forms::Button());
			this->tbSearch = (gcnew System::Windows::Forms::TextBox());
			this->dgvListItem = (gcnew System::Windows::Forms::DataGridView());
			this->dgvPurchaseItem = (gcnew System::Windows::Forms::DataGridView());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->quantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lbTotal = (gcnew System::Windows::Forms::Label());
			this->lbSumPrice = (gcnew System::Windows::Forms::Label());
			this->pnlSumPrice = (gcnew System::Windows::Forms::Panel());
			this->pnlDetail = (gcnew System::Windows::Forms::Panel());
			this->nudQty = (gcnew System::Windows::Forms::NumericUpDown());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnPrint = (gcnew System::Windows::Forms::Button());
			this->lbPriceItem = (gcnew System::Windows::Forms::Label());
			this->lbNameItem = (gcnew System::Windows::Forms::Label());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->pnlTop->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvListItem))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPurchaseItem))->BeginInit();
			this->pnlSumPrice->SuspendLayout();
			this->pnlDetail->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudQty))->BeginInit();
			this->SuspendLayout();
			// 
			// pnlTop
			// 
			this->pnlTop->BackColor = System::Drawing::Color::DodgerBlue;
			this->pnlTop->Controls->Add(this->btnExit);
			this->pnlTop->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlTop->Location = System::Drawing::Point(0, 0);
			this->pnlTop->Name = L"pnlTop";
			this->pnlTop->Size = System::Drawing::Size(800, 25);
			this->pnlTop->TabIndex = 2;
			this->pnlTop->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &CashierForm::pnlTop_MouseDown);
			this->pnlTop->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &CashierForm::pnlTop_MouseMove);
			this->pnlTop->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &CashierForm::pnlTop_MouseUp);
			// 
			// btnExit
			// 
			this->btnExit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExit.BackgroundImage")));
			this->btnExit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnExit->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnExit->FlatAppearance->BorderSize = 0;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExit->Location = System::Drawing::Point(765, 0);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(35, 25);
			this->btnExit->TabIndex = 0;
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &CashierForm::btnExit_Click);
			// 
			// btnLogout
			// 
			this->btnLogout->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->btnLogout->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightGray;
			this->btnLogout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLogout->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogout->Location = System::Drawing::Point(29, 48);
			this->btnLogout->Margin = System::Windows::Forms::Padding(20, 5, 5, 10);
			this->btnLogout->Name = L"btnLogout";
			this->btnLogout->Size = System::Drawing::Size(76, 35);
			this->btnLogout->TabIndex = 15;
			this->btnLogout->Text = L"Logout";
			this->btnLogout->UseVisualStyleBackColor = true;
			this->btnLogout->Click += gcnew System::EventHandler(this, &CashierForm::btnLogout_Click);
			// 
			// tbSearch
			// 
			this->tbSearch->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbSearch->Location = System::Drawing::Point(29, 96);
			this->tbSearch->Name = L"tbSearch";
			this->tbSearch->Size = System::Drawing::Size(240, 25);
			this->tbSearch->TabIndex = 17;
			this->tbSearch->TextChanged += gcnew System::EventHandler(this, &CashierForm::tbSearch_TextChanged);
			// 
			// dgvListItem
			// 
			this->dgvListItem->AllowUserToAddRows = false;
			this->dgvListItem->AllowUserToDeleteRows = false;
			this->dgvListItem->AllowUserToOrderColumns = true;
			this->dgvListItem->AllowUserToResizeRows = false;
			this->dgvListItem->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvListItem->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvListItem->Location = System::Drawing::Point(29, 127);
			this->dgvListItem->Margin = System::Windows::Forms::Padding(20, 3, 10, 10);
			this->dgvListItem->MultiSelect = false;
			this->dgvListItem->Name = L"dgvListItem";
			this->dgvListItem->ReadOnly = true;
			this->dgvListItem->RowHeadersVisible = false;
			this->dgvListItem->Size = System::Drawing::Size(240, 304);
			this->dgvListItem->TabIndex = 18;
			this->dgvListItem->CellMouseClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &CashierForm::dgvListItem_CellMouseClick);
			// 
			// dgvPurchaseItem
			// 
			this->dgvPurchaseItem->AllowUserToAddRows = false;
			this->dgvPurchaseItem->AllowUserToDeleteRows = false;
			this->dgvPurchaseItem->AllowUserToOrderColumns = true;
			this->dgvPurchaseItem->AllowUserToResizeRows = false;
			this->dgvPurchaseItem->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgvPurchaseItem->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvPurchaseItem->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->name,
					this->quantity
			});
			this->dgvPurchaseItem->Location = System::Drawing::Point(531, 127);
			this->dgvPurchaseItem->Margin = System::Windows::Forms::Padding(10, 3, 20, 10);
			this->dgvPurchaseItem->MultiSelect = false;
			this->dgvPurchaseItem->Name = L"dgvPurchaseItem";
			this->dgvPurchaseItem->ReadOnly = true;
			this->dgvPurchaseItem->RowHeadersVisible = false;
			this->dgvPurchaseItem->Size = System::Drawing::Size(240, 304);
			this->dgvPurchaseItem->TabIndex = 19;
			this->dgvPurchaseItem->CellMouseClick += gcnew System::Windows::Forms::DataGridViewCellMouseEventHandler(this, &CashierForm::dgvPurchaseItem_CellMouseClick);
			// 
			// name
			// 
			this->name->HeaderText = L"Name";
			this->name->Name = L"name";
			this->name->ReadOnly = true;
			// 
			// quantity
			// 
			this->quantity->HeaderText = L"Quantity";
			this->quantity->Name = L"quantity";
			this->quantity->ReadOnly = true;
			// 
			// lbTotal
			// 
			this->lbTotal->AutoSize = true;
			this->lbTotal->Dock = System::Windows::Forms::DockStyle::Left;
			this->lbTotal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lbTotal->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTotal->Location = System::Drawing::Point(0, 0);
			this->lbTotal->Name = L"lbTotal";
			this->lbTotal->Size = System::Drawing::Size(57, 25);
			this->lbTotal->TabIndex = 20;
			this->lbTotal->Text = L"Total ";
			// 
			// lbSumPrice
			// 
			this->lbSumPrice->AutoSize = true;
			this->lbSumPrice->BackColor = System::Drawing::Color::Transparent;
			this->lbSumPrice->Dock = System::Windows::Forms::DockStyle::Right;
			this->lbSumPrice->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbSumPrice->Location = System::Drawing::Point(218, 0);
			this->lbSumPrice->Name = L"lbSumPrice";
			this->lbSumPrice->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lbSumPrice->Size = System::Drawing::Size(22, 25);
			this->lbSumPrice->TabIndex = 21;
			this->lbSumPrice->Text = L"0";
			this->lbSumPrice->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// pnlSumPrice
			// 
			this->pnlSumPrice->Controls->Add(this->lbTotal);
			this->pnlSumPrice->Controls->Add(this->lbSumPrice);
			this->pnlSumPrice->Location = System::Drawing::Point(531, 96);
			this->pnlSumPrice->Name = L"pnlSumPrice";
			this->pnlSumPrice->Size = System::Drawing::Size(240, 25);
			this->pnlSumPrice->TabIndex = 22;
			// 
			// pnlDetail
			// 
			this->pnlDetail->Controls->Add(this->nudQty);
			this->pnlDetail->Controls->Add(this->btnAdd);
			this->pnlDetail->Controls->Add(this->btnDelete);
			this->pnlDetail->Controls->Add(this->btnPrint);
			this->pnlDetail->Controls->Add(this->lbPriceItem);
			this->pnlDetail->Controls->Add(this->lbNameItem);
			this->pnlDetail->Location = System::Drawing::Point(282, 96);
			this->pnlDetail->Margin = System::Windows::Forms::Padding(10, 3, 10, 3);
			this->pnlDetail->Name = L"pnlDetail";
			this->pnlDetail->Size = System::Drawing::Size(236, 335);
			this->pnlDetail->TabIndex = 26;
			// 
			// nudQty
			// 
			this->nudQty->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nudQty->Location = System::Drawing::Point(44, 158);
			this->nudQty->Margin = System::Windows::Forms::Padding(3, 3, 3, 10);
			this->nudQty->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->nudQty->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->nudQty->Name = L"nudQty";
			this->nudQty->Size = System::Drawing::Size(148, 27);
			this->nudQty->TabIndex = 30;
			this->nudQty->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// btnAdd
			// 
			this->btnAdd->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->btnAdd->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightGray;
			this->btnAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Location = System::Drawing::Point(44, 200);
			this->btnAdd->Margin = System::Windows::Forms::Padding(20, 5, 5, 10);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(148, 35);
			this->btnAdd->TabIndex = 29;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &CashierForm::btnAdd_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->btnDelete->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightGray;
			this->btnDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelete->Location = System::Drawing::Point(44, 250);
			this->btnDelete->Margin = System::Windows::Forms::Padding(20, 5, 5, 10);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(148, 35);
			this->btnDelete->TabIndex = 28;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &CashierForm::btnDelete_Click);
			// 
			// btnPrint
			// 
			this->btnPrint->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->btnPrint->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightGray;
			this->btnPrint->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPrint->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPrint->Location = System::Drawing::Point(44, 300);
			this->btnPrint->Margin = System::Windows::Forms::Padding(20, 5, 5, 10);
			this->btnPrint->Name = L"btnPrint";
			this->btnPrint->Size = System::Drawing::Size(148, 35);
			this->btnPrint->TabIndex = 27;
			this->btnPrint->Text = L"Print";
			this->btnPrint->UseVisualStyleBackColor = true;
			this->btnPrint->Click += gcnew System::EventHandler(this, &CashierForm::btnPrint_Click);
			// 
			// lbPriceItem
			// 
			this->lbPriceItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbPriceItem->Location = System::Drawing::Point(0, 111);
			this->lbPriceItem->Margin = System::Windows::Forms::Padding(3, 20, 3, 0);
			this->lbPriceItem->Name = L"lbPriceItem";
			this->lbPriceItem->Size = System::Drawing::Size(236, 30);
			this->lbPriceItem->TabIndex = 27;
			this->lbPriceItem->Text = L"100000";
			this->lbPriceItem->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbNameItem
			// 
			this->lbNameItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNameItem->Location = System::Drawing::Point(0, 31);
			this->lbNameItem->Margin = System::Windows::Forms::Padding(3, 20, 3, 0);
			this->lbNameItem->MaximumSize = System::Drawing::Size(236, 65);
			this->lbNameItem->Name = L"lbNameItem";
			this->lbNameItem->Size = System::Drawing::Size(236, 60);
			this->lbNameItem->TabIndex = 27;
			this->lbNameItem->Text = L"Kopi Susu abc 500 ml tanpa gula";
			this->lbNameItem->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblTitle
			// 
			this->lblTitle->AutoSize = true;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle->Location = System::Drawing::Point(329, 48);
			this->lblTitle->Margin = System::Windows::Forms::Padding(3, 20, 3, 0);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(143, 30);
			this->lblTitle->TabIndex = 27;
			this->lblTitle->Text = L"TOKO FLOVER";
			// 
			// CashierForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(800, 450);
			this->Controls->Add(this->lblTitle);
			this->Controls->Add(this->pnlDetail);
			this->Controls->Add(this->pnlSumPrice);
			this->Controls->Add(this->dgvPurchaseItem);
			this->Controls->Add(this->dgvListItem);
			this->Controls->Add(this->tbSearch);
			this->Controls->Add(this->btnLogout);
			this->Controls->Add(this->pnlTop);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"CashierForm";
			this->Text = L"CashierForm";
			this->Load += gcnew System::EventHandler(this, &CashierForm::CashierForm_Load);
			this->pnlTop->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvListItem))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvPurchaseItem))->EndInit();
			this->pnlSumPrice->ResumeLayout(false);
			this->pnlSumPrice->PerformLayout();
			this->pnlDetail->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudQty))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool exitProgram = false;
	public: bool logout = false;
	private: bool dragging;
	private: Point offset;
	private: String^ selectedItem;
	private: String^ selectedPurchaseItem;
	private: String^ selectedPrice;
	private: List<Item^>^ listPurchaseItem = gcnew List<Item^>();
	private: String^ connString = "datasource=127.0.0.1;port=3306;username=root;password=;database=storedb;";
	private: MySqlConnection^ sqlConn = gcnew MySqlConnection(connString);

	private: System::Void refreshDataTable(String^ query) {
		try {
			sqlConn->Open();
			String^ sqlQuery = query;
			MySqlDataAdapter^ sqlDataAdapter = gcnew MySqlDataAdapter(sqlQuery, sqlConn);
			DataTable^ dataTable = gcnew DataTable();
			sqlDataAdapter->Fill(dataTable);
			dgvListItem->DataSource = dataTable;
			sqlConn->Close();
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Failed to Load Data", MessageBoxButtons::OK);
		}
	}

	private: System::Int32 getItemStock(String^ itemName) {
		int stock;
		try {
			sqlConn->Open();
			String^ sqlQuery = "SELECT stock FROM items WHERE name=@name;";
			MySqlCommand^ sqlComm = gcnew MySqlCommand(sqlQuery, sqlConn);
			sqlComm->Parameters->AddWithValue("@name", itemName);
			MySqlDataReader^ sqlReader = sqlComm->ExecuteReader();

			if (sqlReader->Read()) {
				stock = sqlReader->GetInt32(0);
				sqlConn->Close();
				return stock;
			}
			else {
				return -1;
			}
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Failed To Get Stock", MessageBoxButtons::OK);
		}
	}

	private: System::Void updateSelected() {
		if (dgvListItem->RowCount > 0) {
			selectedItem = dgvListItem->CurrentRow->Cells[0]->Value->ToString();
			selectedPrice = dgvListItem->CurrentRow->Cells[1]->Value->ToString();
			lbNameItem->Text = selectedItem;
			lbPriceItem->Text = selectedPrice;
			nudQty->Value = 1;
			nudQty->Maximum = getItemStock(selectedItem);
		}
	}

	private: System::Void updatePurchaseTable(List<Item^>^ data) {
		dgvPurchaseItem->Rows->Clear();
		int sum = 0;
		for (int i = 0; i < data->Count; i++) {
			dgvPurchaseItem->Rows->Add(data[i]->name, data[i]->qty);
			sum += data[i]->qty * data[i]->price;
		}
		lbSumPrice->Text = sum.ToString();
	}

	private: System::Void pnlTop_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		dragging = true;
		offset.X = e->X;
		offset.Y = e->Y;
	}

	private: System::Void pnlTop_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (dragging) {
			Point currentScreenPosition = PointToScreen(Point(e->X, e->Y));
			Location = Point(currentScreenPosition.X - offset.X, currentScreenPosition.Y - offset.Y);
		}
	}

	private: System::Void pnlTop_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		dragging = false;
	}

	private: System::Void btnExit_Click(System::Object^ sender, System::EventArgs^ e) {
		exitProgram = true;
		Close();
	}
	private: System::Void btnLogout_Click(System::Object^ sender, System::EventArgs^ e) {
		logout = true;
		Close();
	}
	private: System::Void CashierForm_Load(System::Object^ sender, System::EventArgs^ e) {
		refreshDataTable("SELECT name, price FROM items;");
		updateSelected();
	}
	private: System::Void dgvListItem_CellMouseClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e) {
		updateSelected();
	}
	private: System::Void tbSearch_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		refreshDataTable("SELECT name, price FROM items WHERE name LIKE '%" + tbSearch->Text + "%';");
		updateSelected();
	}
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		int quantity = Convert::ToInt32(nudQty->Value);
		int sizeOfList = listPurchaseItem->Count;

		if (sizeOfList == 0) {
			Item^ dump = gcnew Item(selectedItem, quantity, Convert::ToInt32(selectedPrice));
			listPurchaseItem->Add(dump);
			updatePurchaseTable(listPurchaseItem);
		}
		else {
			bool duplicate = false;
			int indeksDuplicate = 0;
			for (int i = 0; i < sizeOfList; i++) {
				if (selectedItem == listPurchaseItem[i]->name) {
					duplicate = true;
					indeksDuplicate = i;
					break;
				}
			}

			if (duplicate) {
				int maxPurchase = getItemStock(selectedItem);
				if (listPurchaseItem[indeksDuplicate]->qty + quantity > maxPurchase) {
					MessageBox::Show("Out of Stock", "Out of Stock", MessageBoxButtons::OK);
					return;
				}
				else {
					listPurchaseItem[indeksDuplicate]->qty += quantity;
					updatePurchaseTable(listPurchaseItem);
				}
			}
			else {
				Item^ dump = gcnew Item(selectedItem, quantity, Convert::ToInt32(selectedPrice));
				listPurchaseItem->Add(dump);
				updatePurchaseTable(listPurchaseItem);
			}
		}
	}
	private: System::Void dgvPurchaseItem_CellMouseClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellMouseEventArgs^ e) {
		selectedPurchaseItem = dgvPurchaseItem->CurrentRow->Cells[0]->Value->ToString();
	}
	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < listPurchaseItem->Count; i++) {
			if (listPurchaseItem[i]->name == selectedPurchaseItem) {
				listPurchaseItem->RemoveAt(i);
				updatePurchaseTable(listPurchaseItem);
			}
		}
	}
	private: System::Void btnPrint_Click(System::Object^ sender, System::EventArgs^ e) {
		StreamWriter^ sw = gcnew StreamWriter("Struk.txt");
		sw->WriteLine("------------------------------------");
		sw->WriteLine("####  Struk Mini Market ILKOOM  ####");
		sw->WriteLine("------------------------------------");
		for (int i = 0; i < listPurchaseItem->Count; i++) {
			int itemQty = listPurchaseItem[i]->qty;
			int itemPrice = listPurchaseItem[i]->price;
			sw->WriteLine(String::Format("{0, -50}", listPurchaseItem[i]->name));
			sw->WriteLine(String::Format("{0,-10}X{1,10}{2,12}", itemQty, itemPrice, itemQty * itemPrice));
		}
		sw->WriteLine("------------------------------------");
		sw->WriteLine("{0,-10}={1,10}{2,12}", "Total", "", lbSumPrice->Text);
		sw->Close();
		listPurchaseItem->Clear();
		updatePurchaseTable(listPurchaseItem);
	}
	};
}
