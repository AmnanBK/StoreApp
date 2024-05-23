#include "LoginForm.h"
#include "AdminForm.h"
#include "WarehouseForm.h"
#include "UpdateItemForm.h"
#include "CashierForm.h"

using namespace::System;
using namespace::System::Windows::Forms;

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	//StoreApp::LoginForm loginForm;
	//loginForm.ShowDialog();

	//StoreApp::AdminForm adminForm;
	//adminForm.ShowDialog();

	//StoreApp::WarehouseForm warehouseForm;
	//warehouseForm.ShowDialog();

	//StoreApp::UpdateItemForm updateItemForm;
	//updateItemForm.ShowDialog();

	StoreApp::CashierForm cashierForm;
	cashierForm.ShowDialog();
}