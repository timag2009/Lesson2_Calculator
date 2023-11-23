#include "MyForm.h"
#include <Windows.h>
using namespace System;
using namespace System::Windows::Forms;
using namespace Lesson2Calculator;
[STAThreadAttribute]
int main(array <String^>^ Args) {
	FreeConsole();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();

	Lesson2Calculator::MyForm form;
	
	Application::Run(% form);
	return 0;
}


