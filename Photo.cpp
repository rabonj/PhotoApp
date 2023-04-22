#include "Photo.h"

using namespace System;

using namespace System::Windows::Forms;

[STAThread]

void Photo(array<String^>^ args)

{

    Application::EnableVisualStyles();

    Application::SetCompatibleTextRenderingDefault(false);

    Phase3::Photo form;

    Application::Run(% form);

}