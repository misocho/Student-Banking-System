#include <iostream>
#include "stdafx.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int main(cli::array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	StudentAccount::Login form1;
	Application::Run(%form1);

    return 0;
}
