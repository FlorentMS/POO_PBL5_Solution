#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int __clrcall WinMain(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    //Nom de projet::NomForm
    POO_PBL5_Solution::MyForm monFormulaire;
    //Lancer l'interface
    Application::Run(% monFormulaire);
}