#pragma once

namespace StoreApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pnlTop;
	protected:

	private: System::Windows::Forms::Button^ btnExit;
	private: System::Windows::Forms::Panel^ pnlLogin;

	private: System::Windows::Forms::Label^ lblTitle;

	private: System::Windows::Forms::Label^ lblUsername;
	private: System::Windows::Forms::TextBox^ tbUsername;

	private: System::Windows::Forms::PictureBox^ pbUsername;
	private: System::Windows::Forms::TextBox^ tbPassword;

	private: System::Windows::Forms::PictureBox^ pbPassword;
	private: System::Windows::Forms::Label^ lblPassword;
	private: System::Windows::Forms::Button^ btnLogin;
	protected:

	protected:


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->pnlTop = (gcnew System::Windows::Forms::Panel());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->pnlLogin = (gcnew System::Windows::Forms::Panel());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->lblUsername = (gcnew System::Windows::Forms::Label());
			this->pbUsername = (gcnew System::Windows::Forms::PictureBox());
			this->tbUsername = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->pbPassword = (gcnew System::Windows::Forms::PictureBox());
			this->lblPassword = (gcnew System::Windows::Forms::Label());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->pnlTop->SuspendLayout();
			this->pnlLogin->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbUsername))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPassword))->BeginInit();
			this->SuspendLayout();
			// 
			// pnlTop
			// 
			this->pnlTop->BackColor = System::Drawing::Color::DodgerBlue;
			this->pnlTop->Controls->Add(this->btnExit);
			this->pnlTop->Dock = System::Windows::Forms::DockStyle::Top;
			this->pnlTop->Location = System::Drawing::Point(0, 0);
			this->pnlTop->Name = L"pnlTop";
			this->pnlTop->Size = System::Drawing::Size(500, 25);
			this->pnlTop->TabIndex = 0;
			// 
			// btnExit
			// 
			this->btnExit->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnExit.BackgroundImage")));
			this->btnExit->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->btnExit->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnExit->FlatAppearance->BorderSize = 0;
			this->btnExit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnExit->Location = System::Drawing::Point(465, 0);
			this->btnExit->Name = L"btnExit";
			this->btnExit->Size = System::Drawing::Size(35, 25);
			this->btnExit->TabIndex = 0;
			this->btnExit->UseVisualStyleBackColor = true;
			// 
			// pnlLogin
			// 
			this->pnlLogin->BackColor = System::Drawing::Color::Transparent;
			this->pnlLogin->Controls->Add(this->btnLogin);
			this->pnlLogin->Controls->Add(this->tbPassword);
			this->pnlLogin->Controls->Add(this->pbPassword);
			this->pnlLogin->Controls->Add(this->lblPassword);
			this->pnlLogin->Controls->Add(this->tbUsername);
			this->pnlLogin->Controls->Add(this->pbUsername);
			this->pnlLogin->Controls->Add(this->lblUsername);
			this->pnlLogin->Controls->Add(this->lblTitle);
			this->pnlLogin->Location = System::Drawing::Point(12, 53);
			this->pnlLogin->Name = L"pnlLogin";
			this->pnlLogin->Size = System::Drawing::Size(225, 200);
			this->pnlLogin->TabIndex = 1;
			// 
			// lblTitle
			// 
			this->lblTitle->AutoSize = true;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitle->Location = System::Drawing::Point(75, 11);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(74, 30);
			this->lblTitle->TabIndex = 0;
			this->lblTitle->Text = L"LOGIN";
			// 
			// lblUsername
			// 
			this->lblUsername->AutoSize = true;
			this->lblUsername->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblUsername->Location = System::Drawing::Point(15, 50);
			this->lblUsername->Name = L"lblUsername";
			this->lblUsername->Size = System::Drawing::Size(67, 17);
			this->lblUsername->TabIndex = 1;
			this->lblUsername->Text = L"Username";
			// 
			// pbUsername
			// 
			this->pbUsername->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbUsername.BackgroundImage")));
			this->pbUsername->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pbUsername->Location = System::Drawing::Point(18, 73);
			this->pbUsername->Margin = System::Windows::Forms::Padding(3, 6, 6, 3);
			this->pbUsername->Name = L"pbUsername";
			this->pbUsername->Size = System::Drawing::Size(20, 20);
			this->pbUsername->TabIndex = 3;
			this->pbUsername->TabStop = false;
			// 
			// tbUsername
			// 
			this->tbUsername->BackColor = System::Drawing::Color::White;
			this->tbUsername->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbUsername->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbUsername->Location = System::Drawing::Point(47, 73);
			this->tbUsername->Margin = System::Windows::Forms::Padding(3, 6, 18, 3);
			this->tbUsername->Name = L"tbUsername";
			this->tbUsername->Size = System::Drawing::Size(140, 18);
			this->tbUsername->TabIndex = 4;
			// 
			// tbPassword
			// 
			this->tbPassword->BackColor = System::Drawing::Color::White;
			this->tbPassword->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbPassword->Location = System::Drawing::Point(47, 125);
			this->tbPassword->Margin = System::Windows::Forms::Padding(3, 6, 18, 3);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(140, 18);
			this->tbPassword->TabIndex = 7;
			// 
			// pbPassword
			// 
			this->pbPassword->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbPassword.BackgroundImage")));
			this->pbPassword->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pbPassword->Location = System::Drawing::Point(18, 125);
			this->pbPassword->Margin = System::Windows::Forms::Padding(3, 6, 6, 3);
			this->pbPassword->Name = L"pbPassword";
			this->pbPassword->Size = System::Drawing::Size(20, 20);
			this->pbPassword->TabIndex = 6;
			this->pbPassword->TabStop = false;
			// 
			// lblPassword
			// 
			this->lblPassword->AutoSize = true;
			this->lblPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblPassword->Location = System::Drawing::Point(15, 102);
			this->lblPassword->Name = L"lblPassword";
			this->lblPassword->Size = System::Drawing::Size(64, 17);
			this->lblPassword->TabIndex = 5;
			this->lblPassword->Text = L"Password";
			// 
			// btnLogin
			// 
			this->btnLogin->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DarkGray;
			this->btnLogin->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightGray;
			this->btnLogin->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLogin->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLogin->Location = System::Drawing::Point(74, 161);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(76, 35);
			this->btnLogin->TabIndex = 8;
			this->btnLogin->Text = L"Login";
			this->btnLogin->UseVisualStyleBackColor = true;
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(500, 281);
			this->Controls->Add(this->pnlLogin);
			this->Controls->Add(this->pnlTop);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->pnlTop->ResumeLayout(false);
			this->pnlLogin->ResumeLayout(false);
			this->pnlLogin->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbUsername))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPassword))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
