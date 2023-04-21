#include"Friends.h"
#include"Album.h"
#include"Photo.h"
#pragma once

namespace Phase3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Profile
	/// </summary>
	public ref class Profile : public System::Windows::Forms::Form
	{
	public:
		Profile(void)
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
		~Profile()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(294, 33);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 35);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Friends";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Profile::Friends_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(57, 33);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 35);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Albums";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Profile::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(57, 104);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 42);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Photos";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Profile::button3_Click);
			// 
			// Profile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(459, 360);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Profile";
			this->Text = L"Profile";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Friends_Click(System::Object^ sender, System::EventArgs^ e) {
		// Create a new instance of the Register form
		Friends^ friends = gcnew Friends();

		// Show the Register form
		friends->Show();

		// Hide the current form (MyForm)
		this->Hide();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		// Create a new instance of the Register form
		Album ^ album = gcnew Album();

		// Show the Register form
		album->Show();

		// Hide the current form (MyForm)
		this->Hide();

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		// Create a new instance of the Register form
		Photo^ photo = gcnew Photo();

		// Show the Register form
		photo->Show();

		// Hide the current form (MyForm)
		this->Hide();
	}
};
}
