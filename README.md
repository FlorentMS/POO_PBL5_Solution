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

### Class diagram
![/chemin/access/image.jpg "Titre de l'image"](https://github.com/FlorentMS/POO_PBL5_Solution/blob/ec9f93bab2e7b932e3f515cfd8a6e7780ead359c/POO_PBL5_Class.drawio%20(1).png)

### Sequence diagrams
![/chemin/access/image.jpg "Diagram of the main part (launch)"](https://github.com/FlorentMS/POO_PBL5_Solution/blob/ec9f93bab2e7b932e3f515cfd8a6e7780ead359c/POO_PBL5_Sequence_principal.drawio.png)  
*Diagram of the main part (launch)*


![/chemin/access/image.jpg "Titre de l'image"](https://github.com/FlorentMS/POO_PBL5_Solution/blob/138969e5489d301b13cf36ca79947b9b80f464ff/POO_PBL5_Sequence_btn_source.drawio%20(1).png)  
*Diagram of a case for one of the button (source button)*


Others case is similar but their is nothing yet in it.

### Activities diagrams
![/chemin/access/image.jpg "Titre de l'image"](https://github.com/FlorentMS/POO_PBL5_Solution/blob/138969e5489d301b13cf36ca79947b9b80f464ff/POO_PBL5_Activities-Main.drawio%20(1).png)  
*Diagram of the main part (launch)*


![/chemin/access/image.jpg "Titre de l'image"](https://github.com/FlorentMS/POO_PBL5_Solution/blob/ec9f93bab2e7b932e3f515cfd8a6e7780ead359c/POO_PBL5_Activities-btn_proceder_Click.drawio.png)  
*Diagram of a particular case : procede button*


Others case is similar but their is nothing yet in it.



## Main corrected errors        
|                  Code erronné                 |      |                                  Code corrigé                                                 |
|:----------------------------------------------|:----:|----------------------------------------------------------------------------------------------:|
|"private: System::Void btn_source_Click {"     |**->**|     "private: System::Void btn_source_Click(System::Object^ sender, System::EventArgs^ e) {"  |
|"CLexplorateur.h"                              |**->**|     "CLfichier.h"                                                                             |
|"array<String^>"                               |**->**|     "array<String^>^ "                                                                        |
|"public ref class MyForm {"                    |**->**|     "public ref class MyForm : public System::Windows::Forms::Form {"                         |
|"return file;"                                 |**->**|     "return Directory::GetFiles(dossier);"                                                    |
|"testWin::MyForm monFormulaire;"               |**->**|     "POO_PBL5_Solution::MyForm monFormulaire;  Application::Run(% monFormulaire);"            |
|"namespace testWin"                            |**->**|     "namespace POO_PBL5_Solution"                                                             |
|point d'entré : Main                           |**->**|     WinMain                                                                                   |
