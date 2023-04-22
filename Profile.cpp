#include "Profile.h"

using namespace System;

using namespace System::Windows::Forms;

[STAThread]

void profileMain(array<String^>^ args)

{

    Application::EnableVisualStyles();

    Application::SetCompatibleTextRenderingDefault(false);

    Phase3::Profile form;

    Application::Run(% form);

}