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
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
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
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(23, 39);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(89, 42);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(158, 46);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(229, 44);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"label5";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 160);
			this->ControlBox = false;
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"Попробуй виключити:)";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &MyForm::MyForm_FormClosed);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
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
				 
				 int x, y, fx,fy;
				 fx = Screen::PrimaryScreen->Bounds.Width;
				 fy = Screen::PrimaryScreen->Bounds.Height;
				 x = rand() % fx-400;
				 y = rand() % fy-400;
				 if (x-300>=0 && y-400>=0)
				 {
					 label2->Text = Convert::ToString(fx);
					 label3->Text = Convert::ToString(fy);
					 label4->Text = Convert::ToString(x);
					 label5->Text = Convert::ToString(y);
					this->Location = Point(x, y);
				 }
				 else
				 {
					 this->Location = Point(25, 40);
				 }
				  
			 
	}
	private: System::Void MyForm_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {


	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				//RegistryKey:: reg->DeleteValue("MyTest");
				 
	}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
			 int x, y, fx, fy;
			 fx = Screen::PrimaryScreen->Bounds.Width;
			 fy = Screen::PrimaryScreen->Bounds.Height;
			 
			 //x = rand() % fx - 200;
			// y = rand() % fy - 310;
			 label2->Text = Convert::ToString(fx);
			 label3->Text = Convert::ToString(fy);
			 //label4->Text = Convert::ToString(x);
			// label5->Text = Convert::ToString(y);
}
};
}
