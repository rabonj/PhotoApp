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
		int userId;
		Profile()
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Profile(int userId)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->userId = userId;
			//globalUID = userId;
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
	private: System::Windows::Forms::ListView^ listView2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
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
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button1->Location = System::Drawing::Point(309, 52);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 35);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Friends";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Profile::Friends_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button2->Location = System::Drawing::Point(55, 52);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 35);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Albums";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Profile::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->button3->Location = System::Drawing::Point(179, 52);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 35);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Photos";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Profile::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Location = System::Drawing::Point(150, 149);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 15);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Top 10 Users";
			// 
			// listView1
			// 
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(113, 165);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(147, 175);
			this->listView1->TabIndex = 4;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// listView2
			// 
			this->listView2->HideSelection = false;
			this->listView2->Location = System::Drawing::Point(309, 165);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(157, 175);
			this->listView2->TabIndex = 5;
			this->listView2->UseCompatibleStateImageBehavior = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Location = System::Drawing::Point(349, 149);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 15);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Trending Tags";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->button4->Location = System::Drawing::Point(437, 52);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(105, 35);
			this->button4->TabIndex = 7;
			this->button4->Text = L"Logout";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Profile::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button5->Location = System::Drawing::Point(143, 346);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(80, 35);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Refresh";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Profile::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button6->Location = System::Drawing::Point(347, 346);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(80, 35);
			this->button6->TabIndex = 9;
			this->button6->Text = L"Refresh";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Profile::tagRefresh_Click);
			// 
			// Profile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(571, 401);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listView2);
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
		Friends^ friends = gcnew Friends(this->userId);

		// Show the Register form
		friends->Show();

		// Hide the current form (Login)
		//this->Hide();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		// Create a new instance of the Register form
		Album ^ album = gcnew Album(this->userId);

		// Show the Register form
		album->Show();

		// Hide the current form (Login)
		//this->Hide();

	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		// Create a new instance of the Register form
		Photo^ photo = gcnew Photo(this->userId);

		// Show the Register form
		photo->Show();

		// Hide the current form (Login)
		//this->Hide();
	}


	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		listView1->Clear();
		listView1->Columns->Clear();
		listView1->Columns->Add("Email");
		listView1->Columns->Add("Contribution Score");

		try {
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=1234;Database=a2";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			con->Open();
			String^ sqlQuery = "SELECT u.email, SUM(num_photos) + SUM(num_comments) AS contribution_score "
				"FROM ( " +
				"SELECT user_id, COUNT(*) AS num_photos, 0 AS num_comments " +
				"FROM photo " +
				"GROUP BY user_id " +
				"UNION ALL "
				"SELECT user_id, 0 AS num_photos, COUNT(*) AS num_comments " +
				"FROM comment " +
				"GROUP BY user_id " +
				") AS t "
				"INNER JOIN user u ON u.user_id = t.user_id " +
				"GROUP BY t.user_id " +
				"ORDER BY contribution_score DESC " +
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

	private: System::Void tagRefresh_Click(System::Object^ sender, System::EventArgs^ e) {
		listView2->Clear();
		listView2->Columns->Clear();
		listView2->Columns->Add("Tags");

		try {
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=1234;Database=a2";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			con->Open();
			String^ sqlQuery = "SELECT DISTINCT tag_name FROM tag INNER JOIN photo WHERE photo.photo_id=tag.photo_id LIMIT 10; ";

			MySqlCommand^ cmd = gcnew MySqlCommand(sqlQuery, con);
			MySqlDataReader^ reader = cmd->ExecuteReader();

			while (reader->Read()) {
				String^ tags = reader->GetString(0);

				ListViewItem^ item = gcnew ListViewItem(gcnew array<String^> { tags });
				listView2->Items->Add(item);
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
