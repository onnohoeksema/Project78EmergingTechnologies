#include "ResultDirtyScreen.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void ResulDirtyScreen1(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	CLR1::ResultDirtyScreen form;
	Application::Run(%form);
}