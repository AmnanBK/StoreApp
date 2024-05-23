#pragma once

namespace StoreApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::DataGridView^ dgvBuyItem;





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






	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

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
			this->dgvBuyItem = (gcnew System::Windows::Forms::DataGridView());
			this->lbTotal = (gcnew System::Windows::Forms::Label());
			this->lbSumPrice = (gcnew System::Windows::Forms::Label());
			this->pnlSumPrice = (gcnew System::Windows::Forms::Panel());
			this->pnlDetail = (gcnew System::Windows::Forms::Panel());
			this->lbNameItem = (gcnew System::Windows::Forms::Label());
			this->lbPriceItem = (gcnew System::Windows::Forms::Label());
			this->btnPrint = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->nudQty = (gcnew System::Windows::Forms::NumericUpDown());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->pnlTop->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvListItem))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvBuyItem))->BeginInit();
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
			// 
			// tbSearch
			// 
			this->tbSearch->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbSearch->Location = System::Drawing::Point(29, 96);
			this->tbSearch->Name = L"tbSearch";
			this->tbSearch->Size = System::Drawing::Size(240, 25);
			this->tbSearch->TabIndex = 17;
			// 
			// dgvListItem
			// 
			this->dgvListItem->AllowUserToAddRows = false;
			this->dgvListItem->AllowUserToDeleteRows = false;
			this->dgvListItem->AllowUserToOrderColumns = true;
			this->dgvListItem->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvListItem->Location = System::Drawing::Point(29, 127);
			this->dgvListItem->Margin = System::Windows::Forms::Padding(20, 3, 10, 10);
			this->dgvListItem->Name = L"dgvListItem";
			this->dgvListItem->ReadOnly = true;
			this->dgvListItem->Size = System::Drawing::Size(240, 304);
			this->dgvListItem->TabIndex = 18;
			// 
			// dgvBuyItem
			// 
			this->dgvBuyItem->AllowUserToAddRows = false;
			this->dgvBuyItem->AllowUserToDeleteRows = false;
			this->dgvBuyItem->AllowUserToOrderColumns = true;
			this->dgvBuyItem->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvBuyItem->Location = System::Drawing::Point(531, 127);
			this->dgvBuyItem->Margin = System::Windows::Forms::Padding(10, 3, 20, 10);
			this->dgvBuyItem->Name = L"dgvBuyItem";
			this->dgvBuyItem->ReadOnly = true;
			this->dgvBuyItem->Size = System::Drawing::Size(240, 304);
			this->dgvBuyItem->TabIndex = 19;
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
			this->lbSumPrice->Location = System::Drawing::Point(168, 0);
			this->lbSumPrice->Name = L"lbSumPrice";
			this->lbSumPrice->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lbSumPrice->Size = System::Drawing::Size(72, 25);
			this->lbSumPrice->TabIndex = 21;
			this->lbSumPrice->Text = L"100000";
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
			// 
			// nudQty
			// 
			this->nudQty->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->nudQty->Location = System::Drawing::Point(44, 158);
			this->nudQty->Margin = System::Windows::Forms::Padding(3, 3, 3, 10);
			this->nudQty->Name = L"nudQty";
			this->nudQty->Size = System::Drawing::Size(148, 27);
			this->nudQty->TabIndex = 30;
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
			this->Controls->Add(this->dgvBuyItem);
			this->Controls->Add(this->dgvListItem);
			this->Controls->Add(this->tbSearch);
			this->Controls->Add(this->btnLogout);
			this->Controls->Add(this->pnlTop);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"CashierForm";
			this->Text = L"CashierForm";
			this->pnlTop->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvListItem))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvBuyItem))->EndInit();
			this->pnlSumPrice->ResumeLayout(false);
			this->pnlSumPrice->PerformLayout();
			this->pnlDetail->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->nudQty))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
