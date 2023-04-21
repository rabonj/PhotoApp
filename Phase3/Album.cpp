#include "Album.h"

using namespace System;

using namespace System::Windows::Forms;

[STAThread]

void Album(array<String^>^ args)

{

    Application::EnableVisualStyles();

    Application::SetCompatibleTextRenderingDefault(false);

    Phase3::Album form;

    Application::Run(% form);

}