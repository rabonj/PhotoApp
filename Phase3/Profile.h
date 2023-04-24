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
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(306, 33);
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
			this->button3->Location = System::Drawing::Point(176, 33);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 35);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Photos";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Profile::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(54, 132);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Top 10 Users";
			// 
			// listView1
			// 
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(37, 160);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(164, 289);
			this->listView1->TabIndex = 4;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(37, 455);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Profile::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(473, 455);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 6;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// Profile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(574, 533);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Profile";
			this->Text = L"Profile";
			this->ResumeLayout(false);
			this->PerformLayout();

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

	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		listView1->Clear();
		listView1->Columns->Clear();
		listView1->Columns->Add("Email");
		listView1->Columns->Add("Contribution Score");

		try {
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=1234;Database=a2";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			con->Open();
			String^ sqlQuery = "SELECT u.email, SUM(num_photos) + SUM(num_comments) AS contribution_score "
	"FROM ( "
	"SELECT user_id, COUNT(*) AS num_photos, 0 AS num_comments "
	"FROM photo "
	"GROUP BY user_id "
	"UNION ALL "
	"SELECT user_id, 0 AS num_photos, COUNT(*) AS num_comments "
	"FROM comment "
	"GROUP BY user_id "
	") AS t "
	"INNER JOIN user u ON u.user_id = t.user_id "
	"GROUP BY t.user_id "
	"ORDER BY contribution_score DESC "
	"LIMIT 10;";


			MySqlCommand^ cmd = gcnew MySqlCommand(sqlQuery, con);
			MySqlDataReader^ reader = cmd->ExecuteReader();

			while (reader->Read()) {
				String^ email = reader->GetString(0);
				String^ contributionScore = reader->GetInt32(1).ToString();

				ListViewItem^ item = gcnew ListViewItem(gcnew array<String^> { email, contributionScore });
				listView1->Items->Add(item);
			}

			reader->Close();
			con->Close();
		}
		catch (MySqlException^ ex) {
			MessageBox::Show(ex->ToString());
		}
	}




};
}
