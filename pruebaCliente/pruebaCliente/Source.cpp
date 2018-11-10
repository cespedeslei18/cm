/*#include <iostream>
#include "MenuPrincipal.h";

using namespace std;

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

int main() {
	
	
	cout << "Funciona" << endl;
	cin.get();
	return 0;
}*/

#include "MenuPrincipal.h";

using namespace System;
using namespace System::Windows::Forms;

[STAThread] // Pode Ser int main Ou void main
int main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	pruebaCliente::MenuPrincipal form;
	Application::Run(%form);
}

