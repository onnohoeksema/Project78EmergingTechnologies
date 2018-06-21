#include "ActiveScreen.h"


using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void ActiveScreen1(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CLR1::ActiveScreen form;
	Application::Run(%form);
}