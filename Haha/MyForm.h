#pragma once
#include <random>
#include <stdlib.h>
#include <stdio.h>

namespace Haha {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Microsoft::Win32;
	
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			RegistryKey^ reg;
			String^ ExePath = System::Windows::Forms::Application::ExecutablePath;
			reg = Registry::CurrentUser->CreateSubKey("Software\\Microsoft\\Windows\\CurrentVersion\\Run\\");
			reg->SetValue("MyTest", ExePath);
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(101, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(79, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Привіт, Юзер:)";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(85, 68);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 27);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Вихід";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 160);
			this->ControlBox = false;
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"Попробуй виключити:)";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm::MyForm_FormClosed);
			this->DragOver += gcnew System::Windows::Forms::DragEventHandler(this, &MyForm::MyForm_DragOver);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void MyForm_DragOver(System::Object^  sender, System::Windows::Forms::DragEventArgs^  e) {
				 label1->Text = "1";
	}
	private: System::Void MyForm_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
				 
				 int x, y;
				 x = rand() % 702;
				 y = rand() % 1300;
				 if (x<500 && y<1000)
				 {
					 this->Location = Point(x, y);
				 }
				 else
				 {
					 this->Location = Point(20, 25);
				 }

				 
	}
	private: System::Void MyForm_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
				 int x, y;
				 x = rand() % 702;
				 y = rand() % 1300;
				 if (x<500 && y<1000)
				 {
					 this->Location = Point(x, y);
				 }
				 else
				 {
					 this->Location = Point(20, 25);
				 }

	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				//RegistryKey:: reg->DeleteValue("MyTest");
				 
	}
};
}
