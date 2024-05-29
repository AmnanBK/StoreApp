#pragma once

namespace StoreApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::IO::Ports;
	using namespace System::Threading;

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
	private: System::Windows::Forms::Label^ lbTitle;
	private: System::Windows::Forms::Label^ lbUsername;




	private: System::Windows::Forms::TextBox^ tbUsername;

	private: System::Windows::Forms::PictureBox^ pbUsername;
	private: System::Windows::Forms::TextBox^ tbPassword;

	private: System::Windows::Forms::PictureBox^ pbPassword;
	private: System::Windows::Forms::Label^ lbPassword;

	private: System::Windows::Forms::Button^ btnLogin;
	private: System::Windows::Forms::Timer^ tmrLogin;
	private: System::ComponentModel::IContainer^ components;

	protected:

	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->pnlTop = (gcnew System::Windows::Forms::Panel());
			this->btnExit = (gcnew System::Windows::Forms::Button());
			this->pnlLogin = (gcnew System::Windows::Forms::Panel());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->pbPassword = (gcnew System::Windows::Forms::PictureBox());
			this->lbPassword = (gcnew System::Windows::Forms::Label());
			this->tbUsername = (gcnew System::Windows::Forms::TextBox());
			this->pbUsername = (gcnew System::Windows::Forms::PictureBox());
			this->lbUsername = (gcnew System::Windows::Forms::Label());
			this->lbTitle = (gcnew System::Windows::Forms::Label());
			this->tmrLogin = (gcnew System::Windows::Forms::Timer(this->components));
			this->pnlTop->SuspendLayout();
			this->pnlLogin->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPassword))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbUsername))->BeginInit();
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
			this->pnlTop->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &LoginForm::pnlTop_MouseDown);
			this->pnlTop->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &LoginForm::pnlTop_MouseMove);
			this->pnlTop->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &LoginForm::pnlTop_MouseUp);
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
			this->btnExit->Click += gcnew System::EventHandler(this, &LoginForm::btnExit_Click);
			// 
			// pnlLogin
			// 
			this->pnlLogin->BackColor = System::Drawing::Color::Transparent;
			this->pnlLogin->Controls->Add(this->btnLogin);
			this->pnlLogin->Controls->Add(this->tbPassword);
			this->pnlLogin->Controls->Add(this->pbPassword);
			this->pnlLogin->Controls->Add(this->lbPassword);
			this->pnlLogin->Controls->Add(this->tbUsername);
			this->pnlLogin->Controls->Add(this->pbUsername);
			this->pnlLogin->Controls->Add(this->lbUsername);
			this->pnlLogin->Controls->Add(this->lbTitle);
			this->pnlLogin->Location = System::Drawing::Point(12, 53);
			this->pnlLogin->Name = L"pnlLogin";
			this->pnlLogin->Size = System::Drawing::Size(225, 200);
			this->pnlLogin->TabIndex = 1;
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
			this->btnLogin->Click += gcnew System::EventHandler(this, &LoginForm::btnLogin_Click);
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
			// lbPassword
			// 
			this->lbPassword->AutoSize = true;
			this->lbPassword->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbPassword->Location = System::Drawing::Point(15, 102);
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
			this->tbUsername->Location = System::Drawing::Point(47, 73);
			this->tbUsername->Margin = System::Windows::Forms::Padding(3, 6, 18, 3);
			this->tbUsername->Name = L"tbUsername";
			this->tbUsername->Size = System::Drawing::Size(140, 18);
			this->tbUsername->TabIndex = 4;
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
			// lbUsername
			// 
			this->lbUsername->AutoSize = true;
			this->lbUsername->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbUsername->Location = System::Drawing::Point(15, 50);
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
			this->lbTitle->Location = System::Drawing::Point(75, 11);
			this->lbTitle->Name = L"lbTitle";
			this->lbTitle->Size = System::Drawing::Size(74, 30);
			this->lbTitle->TabIndex = 0;
			this->lbTitle->Text = L"LOGIN";
			// 
			// tmrLogin
			// 
			this->tmrLogin->Enabled = true;
			//this->tmrLogin->Tick += gcnew System::EventHandler(this, &LoginForm::tmrLogin_Tick);
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
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->pnlTop->ResumeLayout(false);
			this->pnlLogin->ResumeLayout(false);
			this->pnlLogin->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPassword))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbUsername))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	public: bool exitProgram = false;
	public: int switchForm = 0;
	private: bool dragging;
	private: Point offset;
	private: String^ connString = "datasource=127.0.0.1;port=3306;username=root;password=;database=storedb;";
	private: MySqlConnection^ sqlConn = gcnew MySqlConnection(connString);
	private: SerialPort^ serialPort = gcnew SerialPort("COM6", 9600);
	private: delegate System::Void UpdateVariableDelegate(int value);
	private: Thread^ serialReadThread = gcnew Thread(gcnew ThreadStart(this, &LoginForm::ContinuousSerialRead));

	private: System::Void UpdateVariable(int value) {
		switchForm = value;
		Hide();
	}

	private: System::Void ContinuousSerialRead() {
		while (switchForm == 0) {
			array<String^>^ portNames = SerialPort::GetPortNames();
			for each (String ^ portName in portNames) {
				if (portName->Equals("COM6", StringComparison::OrdinalIgnoreCase)) {
					try {
						serialPort->Open();
						String^ scanned = serialPort->ReadLine()->Trim();
						UpdateVariableDelegate^ updateDelegate = gcnew UpdateVariableDelegate(this, &LoginForm::UpdateVariable);
						if (scanned == "179546548") {
							this->Invoke(updateDelegate, 1);
						}
						else if (scanned == "131243748") {
							this->Invoke(updateDelegate, 2);
						}
						else if (scanned == "147992242") {
							this->Invoke(updateDelegate, 3);
						}
						serialPort->Close();
					}
					catch (Exception^ e) {
						//MessageBox::Show(e->Message, "Error Read Serial Port", MessageBoxButtons::OK);
						continue;
					}
					Thread::Sleep(100);
				}
			}
		}
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

	private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ username = tbUsername->Text;
		String^ password = tbPassword->Text;

		if (username->Length == 0 || password->Length == 0) {
			MessageBox::Show("Please fill username and password", "Username or Password Empty", MessageBoxButtons::OK);
			return;
		}

		try {
			sqlConn->Open();
			String^ sqlQuery = "SELECT username, password, role FROM users WHERE username=@username AND password=@password;";
			MySqlCommand^ sqlComm = gcnew MySqlCommand(sqlQuery, sqlConn);
			sqlComm->Parameters->AddWithValue("@username", username);
			sqlComm->Parameters->AddWithValue("@password", password);

			MySqlDataReader^ sqlReader = sqlComm->ExecuteReader();
			if (sqlReader->Read()) {
				String^ role = sqlReader->GetString(2);
				if (role == "Admin") {
					switchForm = 1;
				}
				else if (role == "Staff Gudang") {
					switchForm = 2;
				}
				else if (role == "Staff Kasir") {
					switchForm = 3;
				}
			}
			else {
				MessageBox::Show("Username or password is incorrect", "Login Failed", MessageBoxButtons::OK);
				sqlConn->Close();
				serialPort->Close();
				return;
			}
			sqlConn->Close();
			serialPort->Close();
			Hide();
		}
		catch (Exception^ e) {
			MessageBox::Show(e->Message, "Failed to Connect", MessageBoxButtons::OK);
		}
	}

	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
		serialReadThread->IsBackground = true;
		serialReadThread->Start();
	}

	};
}
