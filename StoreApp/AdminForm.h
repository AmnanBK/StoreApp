#pragma once

namespace StoreApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminForm
	/// </summary>
	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public:
		AdminForm(void)
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
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pnlTop;
	protected:
	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Panel^ pnlAdd;

	private: System::Windows::Forms::Button^ btnLogin;
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::PictureBox^ pbPassword;
	private: System::Windows::Forms::Label^ lbPassword;

	private: System::Windows::Forms::TextBox^ tbUsername;
	private: System::Windows::Forms::PictureBox^ pbUsername;
	private: System::Windows::Forms::Label^ lbUsername;

	private: System::Windows::Forms::Label^ lbTitle;

	private: System::Windows::Forms::RadioButton^ rbGudang;
	private: System::Windows::Forms::Label^ lbRole;
	private: System::Windows::Forms::RadioButton^ rbKasir;
	private: System::Windows::Forms::DataGridView^ dgvUsers;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Panel^ pnlList;
	private: System::Windows::Forms::Button^ btnLogout;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AdminForm::typeid));
			this->pnlTop = (gcnew System::Windows::Forms::Panel());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->pnlAdd = (gcnew System::Windows::Forms::Panel());
			this->lbRole = (gcnew System::Windows::Forms::Label());
			this->rbKasir = (gcnew System::Windows::Forms::RadioButton());
			this->rbGudang = (gcnew System::Windows::Forms::RadioButton());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->pbPassword = (gcnew System::Windows::Forms::PictureBox());
			this->lbPassword = (gcnew System::Windows::Forms::Label());
			this->tbUsername = (gcnew System::Windows::Forms::TextBox());
			this->pbUsername = (gcnew System::Windows::Forms::PictureBox());
			this->lbUsername = (gcnew System::Windows::Forms::Label());
			this->lbTitle = (gcnew System::Windows::Forms::Label());
			this->dgvUsers = (gcnew System::Windows::Forms::DataGridView());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->pnlList = (gcnew System::Windows::Forms::Panel());
			this->btnLogout = (gcnew System::Windows::Forms::Button());
			this->pnlTop->SuspendLayout();
			this->pnlAdd->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPassword))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbUsername))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvUsers))->BeginInit();
			this->pnlList->SuspendLayout();
			this->SuspendLayout();
			// 
			// pnlTop
			// 
			this->pnlTop->BackColor = System::Drawing::Color::DodgerBlue;
			this->pnlTop->Controls->Add(this->btnExit);
			this->pnlTop->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlTop->Location = System::Drawing::Point(0, 0);
			this->pnlTop->Name = L"pnlTop";
			this->pnlTop->Size = System::Drawing::Size(650, 25);
			this->pnlTop->TabIndex = 1;
			this->pnlTop->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminForm::pnlTop_MouseDown);
			this->pnlTop->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminForm::pnlTop_MouseMove);
			this->pnlTop->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &AdminForm::pnlTop_MouseUp);
			// 
			// btnExit
			// 
			this->btnExit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExit.BackgroundImage")));
			this->btnExit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnExit->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnExit->FlatAppearance->BorderSize = 0;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExit->Location = System::Drawing::Point(615, 0);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(35, 25);
			this->btnExit->TabIndex = 0;
			this->btnExit->UseVisualStyleBackColor = true;
			this->btnExit->Click += gcnew System::EventHandler(this, &AdminForm::btnExit_Click);
			// 
			// pnlAdd
			// 
			this->pnlAdd->BackColor = System::Drawing::Color::Transparent;
			this->pnlAdd->Controls->Add(this->lbRole);
			this->pnlAdd->Controls->Add(this->rbKasir);
			this->pnlAdd->Controls->Add(this->rbGudang);
			this->pnlAdd->Controls->Add(this->btnLogin);
			this->pnlAdd->Controls->Add(this->tbPassword);
			this->pnlAdd->Controls->Add(this->pbPassword);
			this->pnlAdd->Controls->Add(this->lbPassword);
			this->pnlAdd->Controls->Add(this->tbUsername);
			this->pnlAdd->Controls->Add(this->pbUsername);
			this->pnlAdd->Controls->Add(this->lbUsername);
			this->pnlAdd->Location = System::Drawing::Point(24, 78);
			this->pnlAdd->Margin = System::Windows::Forms::Padding(15, 15, 20, 15);
			this->pnlAdd->Name = L"pnlAdd";
			this->pnlAdd->Size = System::Drawing::Size(250, 265);
			this->pnlAdd->TabIndex = 2;
			// 
			// lbRole
			// 
			this->lbRole->AutoSize = true;
			this->lbRole->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbRole->Location = System::Drawing::Point(15, 143);
			this->lbRole->Name = L"lbRole";
			this->lbRole->Size = System::Drawing::Size(34, 17);
			this->lbRole->TabIndex = 11;
			this->lbRole->Text = L"Role";
			// 
			// rbKasir
			// 
			this->rbKasir->AutoSize = true;
			this->rbKasir->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbKasir->Location = System::Drawing::Point(147, 166);
			this->rbKasir->Margin = System::Windows::Forms::Padding(3, 6, 3, 3);
			this->rbKasir->Name = L"rbKasir";
			this->rbKasir->Size = System::Drawing::Size(85, 21);
			this->rbKasir->TabIndex = 10;
			this->rbKasir->TabStop = true;
			this->rbKasir->Text = L"Staff Kasir";
			this->rbKasir->UseVisualStyleBackColor = true;
			// 
			// rbGudang
			// 
			this->rbGudang->AutoSize = true;
			this->rbGudang->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->rbGudang->Location = System::Drawing::Point(18, 166);
			this->rbGudang->Margin = System::Windows::Forms::Padding(3, 6, 3, 3);
			this->rbGudang->Name = L"rbGudang";
			this->rbGudang->Size = System::Drawing::Size(102, 21);
			this->rbGudang->TabIndex = 9;
			this->rbGudang->TabStop = true;
			this->rbGudang->Text = L"Staff Gudang";
			this->rbGudang->UseVisualStyleBackColor = true;
			// 
			// btnLogin
			// 
			this->btnLogin->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->btnLogin->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightGray;
			this->btnLogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLogin->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogin->Location = System::Drawing::Point(87, 210);
			this->btnLogin->Margin = System::Windows::Forms::Padding(3, 20, 3, 20);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(76, 35);
			this->btnLogin->TabIndex = 8;
			this->btnLogin->Text = L"Add";
			this->btnLogin->UseVisualStyleBackColor = true;
			// 
			// tbPassword
			// 
			this->tbPassword->BackColor = System::Drawing::Color::White;
			this->tbPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbPassword->Location = System::Drawing::Point(47, 109);
			this->tbPassword->Margin = System::Windows::Forms::Padding(3, 6, 18, 3);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(185, 18);
			this->tbPassword->TabIndex = 7;
			// 
			// pbPassword
			// 
			this->pbPassword->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbPassword.BackgroundImage")));
			this->pbPassword->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pbPassword->Location = System::Drawing::Point(18, 109);
			this->pbPassword->Margin = System::Windows::Forms::Padding(3, 6, 6, 3);
			this->pbPassword->Name = L"pbPassword";
			this->pbPassword->Size = System::Drawing::Size(20, 20);
			this->pbPassword->TabIndex = 6;
			this->pbPassword->TabStop = false;
			// 
			// lbPassword
			// 
			this->lbPassword->AutoSize = true;
			this->lbPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbPassword->Location = System::Drawing::Point(15, 86);
			this->lbPassword->Name = L"lbPassword";
			this->lbPassword->Size = System::Drawing::Size(64, 17);
			this->lbPassword->TabIndex = 5;
			this->lbPassword->Text = L"Password";
			// 
			// tbUsername
			// 
			this->tbUsername->BackColor = System::Drawing::Color::White;
			this->tbUsername->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbUsername->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbUsername->Location = System::Drawing::Point(47, 53);
			this->tbUsername->Margin = System::Windows::Forms::Padding(3, 6, 18, 3);
			this->tbUsername->Name = L"tbUsername";
			this->tbUsername->Size = System::Drawing::Size(185, 18);
			this->tbUsername->TabIndex = 4;
			// 
			// pbUsername
			// 
			this->pbUsername->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbUsername.BackgroundImage")));
			this->pbUsername->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pbUsername->Location = System::Drawing::Point(18, 53);
			this->pbUsername->Margin = System::Windows::Forms::Padding(3, 6, 6, 3);
			this->pbUsername->Name = L"pbUsername";
			this->pbUsername->Size = System::Drawing::Size(20, 20);
			this->pbUsername->TabIndex = 3;
			this->pbUsername->TabStop = false;
			// 
			// lbUsername
			// 
			this->lbUsername->AutoSize = true;
			this->lbUsername->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbUsername->Location = System::Drawing::Point(15, 30);
			this->lbUsername->Name = L"lbUsername";
			this->lbUsername->Size = System::Drawing::Size(67, 17);
			this->lbUsername->TabIndex = 1;
			this->lbUsername->Text = L"Username";
			// 
			// lbTitle
			// 
			this->lbTitle->AutoSize = true;
			this->lbTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTitle->Location = System::Drawing::Point(258, 48);
			this->lbTitle->Margin = System::Windows::Forms::Padding(3, 20, 3, 20);
			this->lbTitle->Name = L"lbTitle";
			this->lbTitle->Size = System::Drawing::Size(134, 30);
			this->lbTitle->TabIndex = 0;
			this->lbTitle->Text = L"Register User";
			// 
			// dgvUsers
			// 
			this->dgvUsers->AllowUserToAddRows = false;
			this->dgvUsers->AllowUserToDeleteRows = false;
			this->dgvUsers->AllowUserToOrderColumns = true;
			this->dgvUsers->AllowUserToResizeColumns = false;
			this->dgvUsers->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dgvUsers->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvUsers->Location = System::Drawing::Point(0, 31);
			this->dgvUsers->Margin = System::Windows::Forms::Padding(15, 15, 20, 15);
			this->dgvUsers->Name = L"dgvUsers";
			this->dgvUsers->ReadOnly = true;
			this->dgvUsers->Size = System::Drawing::Size(312, 157);
			this->dgvUsers->TabIndex = 3;
			// 
			// btnDelete
			// 
			this->btnDelete->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->btnDelete->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightGray;
			this->btnDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnDelete->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnDelete->Location = System::Drawing::Point(118, 210);
			this->btnDelete->Margin = System::Windows::Forms::Padding(3, 20, 3, 20);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(76, 35);
			this->btnDelete->TabIndex = 12;
			this->btnDelete->Text = L"Delete";
			this->btnDelete->UseVisualStyleBackColor = true;
			// 
			// pnlList
			// 
			this->pnlList->BackColor = System::Drawing::Color::Transparent;
			this->pnlList->Controls->Add(this->dgvUsers);
			this->pnlList->Controls->Add(this->btnDelete);
			this->pnlList->Location = System::Drawing::Point(309, 78);
			this->pnlList->Margin = System::Windows::Forms::Padding(15, 15, 20, 15);
			this->pnlList->Name = L"pnlList";
			this->pnlList->Size = System::Drawing::Size(312, 265);
			this->pnlList->TabIndex = 12;
			// 
			// btnLogout
			// 
			this->btnLogout->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->btnLogout->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightGray;
			this->btnLogout->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLogout->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogout->Location = System::Drawing::Point(42, 43);
			this->btnLogout->Margin = System::Windows::Forms::Padding(5);
			this->btnLogout->Name = L"btnLogout";
			this->btnLogout->Size = System::Drawing::Size(76, 35);
			this->btnLogout->TabIndex = 13;
			this->btnLogout->Text = L"Logout";
			this->btnLogout->UseVisualStyleBackColor = true;
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(650, 366);
			this->Controls->Add(this->btnLogout);
			this->Controls->Add(this->pnlList);
			this->Controls->Add(this->lbTitle);
			this->Controls->Add(this->pnlAdd);
			this->Controls->Add(this->pnlTop);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AdminForm";
			this->Text = L"AdminForm";
			this->pnlTop->ResumeLayout(false);
			this->pnlAdd->ResumeLayout(false);
			this->pnlAdd->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPassword))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbUsername))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvUsers))->EndInit();
			this->pnlList->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool exitProgram = false;
	private: bool dragging;
	private: Point offset;
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
};
}
