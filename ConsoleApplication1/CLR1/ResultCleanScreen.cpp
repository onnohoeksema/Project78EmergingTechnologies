#include "ResultCleanScreen.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void ResultCleanScreen1(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CLR1::ResultCleanScreen form;
	Application::Run(%form);
}