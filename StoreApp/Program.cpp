#include "LoginForm.h"
#include "AdminForm.h"
#include "WarehouseForm.h"
#include "CashierForm.h"

using namespace::System;
using namespace::System::Windows::Forms;

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	while (true) {
		StoreApp::LoginForm loginForm;
		loginForm.ShowDialog();

		if (loginForm.exitProgram) {
			break;
		}

		if (loginForm.switchForm == 1) {
			StoreApp::AdminForm adminForm;
			adminForm.ShowDialog();
			if (adminForm.exitProgram) {
				break;
			}
			if (adminForm.logout) {
				continue;
			}
		}

		if (loginForm.switchForm == 2) {
			StoreApp::WarehouseForm warehouseForm;
			warehouseForm.ShowDialog();

			if (warehouseForm.exitProgram) {
				break;
			}
			if (warehouseForm.logout) {
				continue;
			}
		}

		if (loginForm.switchForm == 3) {
			StoreApp::CashierForm cashierForm;
			cashierForm.ShowDialog();
			if (cashierForm.exitProgram) {
				break;
			}
			if (cashierForm.logout) {
				continue;
			}
		}
	}
}