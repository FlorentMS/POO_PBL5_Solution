# POO_PBL5_Solution

## Architecture extraite du code erroné

> **HCI** (Human-Computing Interaction)\
> &nbsp;&nbsp;&nbsp; MyForm


> **Services**\
> &nbsp;&nbsp;&nbsp; CLserviceFichier\
> &nbsp;&nbsp;&nbsp; CLserviceImage


> **Components**\
> &nbsp;&nbsp;&nbsp; CLfichier\
> &nbsp;&nbsp;&nbsp; Climage

## Diagrams

### Use case diagram

### Class diagram

### Sequence diagram

## Main corrected errors

"private: System::Void btn_source_Click {"     **->**     "private: System::Void btn_source_Click(System::Object^ sender, System::EventArgs^ e) {"\
"CLexplorateur.h"                              **->**     "CLfichier.h"\
"array<String^>"                               **->**     "array<String^>^ "\
"public ref class MyForm {"                    **->**     "public ref class MyForm : public System::Windows::Forms::Form {"\
"return file;"                                 **->**     "return Directory::GetFiles(dossier);"
"testWin::MyForm monFormulaire;"               **->**     "POO_PBL5_Solution::MyForm monFormulaire;  Application::Run(% monFormulaire);"
"namespace testWin"                            **->**     "namespace POO_PBL5_Solution"
point d'entré : Main                           **->**     WinMain
