#include "Login.h"


using namespace System;

using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ args)
{
    Application::EnableVisualStyles();

    Application::SetCompatibleTextRenderingDefault(false);

    int globalUID;

    Phase3::Login form;

    Application::Run(% form);

}