#include "juego.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Boogle::juego form; // Nombre del proyecto::Nombre de forma
	Application::Run(%form);
}
