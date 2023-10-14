#pragma once
#include"choices_form.h"
#include"adminform.h"
#include <fstream>
#include <string>
namespace projecttremopo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for signin_form
	/// </summary>
	public ref class signin_form : public System::Windows::Forms::Form
	{
	public:
		signin_form(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~signin_form()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ passwordsigninform;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ emailidsigninfor;

	private: System::Windows::Forms::Button^ save_signinform;


	public:
	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->passwordsigninform = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->emailidsigninfor = (gcnew System::Windows::Forms::TextBox());
			this->save_signinform = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(458, 68);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(232, 47);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Sign in form";
			this->label1->Click += gcnew System::EventHandler(this, &signin_form::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::Snow;
			this->label2->Location = System::Drawing::Point(177, 235);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 33);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Email id :";
			// 
			// passwordsigninform
			// 
			this->passwordsigninform->AccessibleName = L"passwordsigninform";
			this->passwordsigninform->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordsigninform->Location = System::Drawing::Point(325, 388);
			this->passwordsigninform->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->passwordsigninform->Multiline = true;
			this->passwordsigninform->Name = L"passwordsigninform";
			this->passwordsigninform->PasswordChar = '*';
			this->passwordsigninform->Size = System::Drawing::Size(459, 42);
			this->passwordsigninform->TabIndex = 2;
			this->passwordsigninform->TextChanged += gcnew System::EventHandler(this, &signin_form::passwordsigninform_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::Snow;
			this->label3->Location = System::Drawing::Point(177, 341);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(148, 33);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Password :";
			this->label3->Click += gcnew System::EventHandler(this, &signin_form::label3_Click);
			// 
			// emailidsigninfor
			// 
			this->emailidsigninfor->AccessibleName = L"emailidsigninfor";
			this->emailidsigninfor->Location = System::Drawing::Point(325, 285);
			this->emailidsigninfor->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->emailidsigninfor->Multiline = true;
			this->emailidsigninfor->Name = L"emailidsigninfor";
			this->emailidsigninfor->Size = System::Drawing::Size(459, 42);
			this->emailidsigninfor->TabIndex = 2;
			this->emailidsigninfor->TextChanged += gcnew System::EventHandler(this, &signin_form::emailidsigninfor_TextChanged);
			// 
			// save_signinform
			// 
			this->save_signinform->AccessibleName = L"save_signinform";
			this->save_signinform->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->save_signinform->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->save_signinform->Location = System::Drawing::Point(508, 534);
			this->save_signinform->Name = L"save_signinform";
			this->save_signinform->Size = System::Drawing::Size(123, 45);
			this->save_signinform->TabIndex = 3;
			this->save_signinform->Text = L"save";
			this->save_signinform->UseVisualStyleBackColor = true;
			this->save_signinform->Click += gcnew System::EventHandler(this, &signin_form::save_signinform_Click);
			// 
			// signin_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkCyan;
			this->ClientSize = System::Drawing::Size(1119, 748);
			this->Controls->Add(this->save_signinform);
			this->Controls->Add(this->emailidsigninfor);
			this->Controls->Add(this->passwordsigninform);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->Name = L"signin_form";
			this->Text = L"signin_form";
			this->Load += gcnew System::EventHandler(this, &signin_form::signin_form_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void signin_form_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}


	private: System::Void emailidsigninfor_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
		
	}
private: System::Void save_signinform_Click(System::Object^ sender, System::EventArgs^ e) { 
	/*
	System::String^ s2 = this->emailidsigninfor->Text;
	msclr::interop::marshal_context context;
	std::string str2 = context.marshal_as<std::string>(s2);
	System::String^ s1 = this->passwordsigninform->Text;
	msclr::interop::marshal_context context;
	std::string str3 = context.marshal_as<std::string>(s1);*/
	
	System::String^ data = emailidsigninfor->Text;

	// Convert the System::String^ to std::string for easier file manipulation
	std::string dataStr = msclr::interop::marshal_as<std::string>(data);

	System::String^ dataq = passwordsigninform->Text;

	// Convert the System::String^ to std::string for easier file manipulation
	std::string dataStr1 = msclr::interop::marshal_as<std::string>(dataq);
	// Open a file for writing
	std::ofstream outputFile("admin_id.text");

	// Check if the file was opened successfully
	if (outputFile.is_open()) {
		// Write the data to the file
		outputFile << dataStr << std::endl << dataStr1;

		// Close the file
		outputFile.close();

		// Display a message indicating successful save
		MessageBox::Show("Data saved successfully!");
	}
	else {
		// Display an error message if the file couldn't be opened
		MessageBox::Show("Error: Unable to open the file for writing.");
	}

	adminform^ t5 = gcnew adminform();
	t5->Show();
	this->Hide();

	
}
private: System::Void choices_form_page_signinform_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	
	
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void passwordsigninform_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}

