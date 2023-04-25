#include "Register.h"
#include"User.h"
#include"Profile.h"


#pragma once

namespace Phase3 {
	extern int globalUID = 0;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ loginButton;
	private: System::Windows::Forms::Button^ createButton;
	protected:

	protected:


	private: System::Windows::Forms::Label^ PhotoApp;
	private: System::Windows::Forms::TextBox^ password;

	private: System::Windows::Forms::TextBox^ username;
	private: System::Windows::Forms::Label^ usernameLabel;
	private: System::Windows::Forms::Label^ passwordLabel;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->createButton = (gcnew System::Windows::Forms::Button());
			this->PhotoApp = (gcnew System::Windows::Forms::Label());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->username = (gcnew System::Windows::Forms::TextBox());
			this->usernameLabel = (gcnew System::Windows::Forms::Label());
			this->passwordLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// loginButton
			// 
			this->loginButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginButton->Location = System::Drawing::Point(180, 185);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(73, 26);
			this->loginButton->TabIndex = 0;
			this->loginButton->Text = L"login";
			this->loginButton->UseVisualStyleBackColor = true;
			this->loginButton->Click += gcnew System::EventHandler(this, &Login::loginButton_Click);
			// 
			// createButton
			// 
			this->createButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->createButton->Location = System::Drawing::Point(169, 263);
			this->createButton->Name = L"createButton";
			this->createButton->Size = System::Drawing::Size(105, 53);
			this->createButton->TabIndex = 1;
			this->createButton->Text = L"Create Account";
			this->createButton->UseVisualStyleBackColor = true;
			this->createButton->Click += gcnew System::EventHandler(this, &Login::createButton_Click);

			// 
			// PhotoApp
			// 
			this->PhotoApp->AutoSize = true;
			this->PhotoApp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->PhotoApp->Location = System::Drawing::Point(82, 22);
			this->PhotoApp->Name = L"PhotoApp";
			this->PhotoApp->Size = System::Drawing::Size(279, 29);
			this->PhotoApp->TabIndex = 4;
			this->PhotoApp->Text = L"Welcome to PhotoApp!";
			// 
			// password
			// 
			this->password->Location = System::Drawing::Point(195, 140);
			this->password->Name = L"password";
			this->password->Size = System::Drawing::Size(152, 20);
			this->password->TabIndex = 5;
			this->password->TextChanged += gcnew System::EventHandler(this, &Login::password_TextChanged);
			// 
			// username
			// 
			this->username->Location = System::Drawing::Point(195, 96);
			this->username->Name = L"username";
			this->username->Size = System::Drawing::Size(152, 20);
			this->username->TabIndex = 6;
			this->username->TextChanged += gcnew System::EventHandler(this, &Login::textBox2_TextChanged);
			// 
			// usernameLabel
			// 
			this->usernameLabel->AutoSize = true;
			this->usernameLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->usernameLabel->Location = System::Drawing::Point(86, 96);
			this->usernameLabel->Name = L"usernameLabel";
			this->usernameLabel->Size = System::Drawing::Size(84, 20);
			this->usernameLabel->TabIndex = 7;
			this->usernameLabel->Text = L"username:";
			// 
			// passwordLabel
			// 
			this->passwordLabel->AutoSize = true;
			this->passwordLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->passwordLabel->Location = System::Drawing::Point(86, 140);
			this->passwordLabel->Name = L"passwordLabel";
			this->passwordLabel->Size = System::Drawing::Size(81, 20);
			this->passwordLabel->TabIndex = 8;
			this->passwordLabel->Text = L"password:";
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(429, 377);
			this->Controls->Add(this->passwordLabel);
			this->Controls->Add(this->usernameLabel);
			this->Controls->Add(this->username);
			this->Controls->Add(this->password);
			this->Controls->Add(this->PhotoApp);
			this->Controls->Add(this->createButton);
			this->Controls->Add(this->loginButton);
			this->Name = L"Login";
			this->Text = L"Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void password_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	public:User^ user = nullptr;

	private: static int userId;

	private: System::Void loginButton_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ email = this->username->Text;
		String^ password = this->password->Text;

		if (email->Length == 0 || password->Length == 0) {
			MessageBox::Show("Please enter email and password",
				"Email or Password Empty", MessageBoxButtons::OK);
			return;
		}

		try {
			String^ constr = "Server =127.0.0.1; Uid=root; Pwd=1234;Database=a2";
			MySqlConnection^ con = gcnew MySqlConnection(constr);

			String^ sqlQuery = "SELECT user_id FROM user WHERE email=@email AND password=@password;";
			MySqlCommand^ cmd = gcnew MySqlCommand(sqlQuery, con);
			cmd->Parameters->AddWithValue("@email", email);
			cmd->Parameters->AddWithValue("@password", password);
			con->Open();

			MySqlDataReader^ reader = cmd->ExecuteReader();
			if (reader->Read()) {
				globalUID = Convert::ToInt32(reader["user_id"]);

				// Create a new instance of the Register form
				Profile^ profile = gcnew Profile(globalUID);

				// Show the Register form
				profile->Show();

				// Hide the current form (Login)
				//this->Hide();

			}
			else {
				MessageBox::Show("Email or password is incorrect",
					"Email or Password Error", MessageBoxButtons::OK);
			}

			con->Close();

		}
		catch (Exception^ ex) {

			MessageBox::Show(ex->Message);

		}

	}

	private: System::Void createButton_Click(System::Object^ sender, System::EventArgs^ e) {
		// Create a new instance of the Register form
		Register^ registerForm = gcnew Register();

		// Show the Register form
		registerForm->Show();

		// Hide the current form (Login)
		//this->Hide();
	}

	};
}