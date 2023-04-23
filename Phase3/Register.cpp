#include "Register.h"
#include "Register.h"

using namespace System;

using namespace System::Windows::Forms;

[STAThread]

void registerMain(array<String^>^ args)

{

    Application::EnableVisualStyles();

    Application::SetCompatibleTextRenderingDefault(false);

    Phase3::Register form;

    Application::Run(% form);

}