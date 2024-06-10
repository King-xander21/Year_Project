#include "MyForm1.h"

using namespace System;
using namespace System::Windows::Forms;

//void main(array<System::String^>^ args)
//{
//	Application::EnableVisualStyles();
//	Application::SetCompatibleTextRenderingDefault(false);
//	Warp2::MyForm form;
//	Application::Run(% form);
//}

[STAThread] // This attribute is needed for Windows Forms applications
int main(/*array<System::String^>^ args*/ )
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Warp2::MyForm^ form = gcnew Warp2::MyForm(); // Create the form pointer with gcnew
	Application::Run(form); // Pass the form pointer to Application::Run
	return 0; // Return 0 to indicate successful program execution
}