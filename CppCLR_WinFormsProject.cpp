#include "pch.h"
#include "interface.h"
#include <msclr/marshal_cppstd.h>
#include "choices_form.h"
#include "signin_form.h"
#include"signin_Form_driver.h"
#include"signin_Form_customer.h"
#include "choices_form.h"
#include "adminform.h"
#include "MyForm1 .h"
#include "MyForm.h"
#include"driverform.h"
#include<fstream>
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
int main()
{
	/*Customer obj_customer[15];
	Driver obj_driver[10];
	Vehicle obj_vehicle[20];*/
  Application::EnableVisualStyles();
  Application::SetCompatibleTextRenderingDefault(false);
  Application::Run(gcnew projecttremopo::choices_form());
  return 0;
}
