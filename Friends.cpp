#include "Friends.h"


using namespace System;

using namespace System::Windows::Forms;

[STAThread]

void Friends(array<String^>^ args)

{

    Application::EnableVisualStyles();

    Application::SetCompatibleTextRenderingDefault(false);

    Phase3::Friends form;

    Application::Run(% form);

}