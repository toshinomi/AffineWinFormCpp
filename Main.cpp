#include "FormMain.h"

using namespace System;
using namespace System::Windows::Forms;

namespace AffineWinFormCpp
{
	[STAThread]
	void Main(array<String^>^ args)
	{
		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);

		Application::Run(gcnew FormMain());
	}
}