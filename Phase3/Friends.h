#pragma once


namespace Phase3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::Windows::Forms;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for Friends
	/// </summary>
	public ref class Friends : public System::Windows::Forms::Form
	{
	public:
		Friends(void)
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
		~Friends()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::BindingSource^ bindingSource1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ListView^ listView2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;


	private: System::Windows::Forms::Label^ label4;


	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->bindingSource1 = (gcnew System::Windows::Forms::BindingSource(this->components));
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(32, 32);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(197, 32);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Look Up";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Friends::searchFriend_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(32, 91);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(145, 82);
			this->listBox1->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(29, 75);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Search Result";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(560, 65);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Follower";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(437, 65);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(49, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Followed";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(197, 150);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Add";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Friends::button2_Click);
			// 
			// listView1
			// 
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(415, 107);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(96, 251);
			this->listView1->TabIndex = 8;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// listView2
			// 
			this->listView2->HideSelection = false;
			this->listView2->Location = System::Drawing::Point(536, 107);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(93, 251);
			this->listView2->TabIndex = 9;
			this->listView2->UseCompatibleStateImageBehavior = false;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(425, 81);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Show";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Friends::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(545, 81);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 11;
			this->button4->Text = L"Show";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Friends::button4_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(32, 242);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(117, 13);
			this->label4->TabIndex = 14;
			this->label4->Text = L"\tFriend recommendation";
			// 
			// Friends
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(641, 409);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->listView2);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Name = L"Friends";
			this->Text = L"Friends";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bindingSource1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void searchFriend_Click(System::Object^ sender, System::EventArgs^ e) {
			
		String^ email = textBox1->Text;
		String^ constr = "Server =127.0.0.1; Uid=root; Pwd=1234;Database=a2";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("SELECT email FROM user WHERE email LIKE '" + email + "%'", con);
		DataTable^ dt = gcnew DataTable();
		sda->Fill(dt);
		listBox1->Items->Clear();

		for each (DataRow ^ row in dt->Rows)
		{
			listBox1->Items->Add(row["email"]->ToString());
		}

	}


		   int currentUserId;


private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// Get the selected user email from the listbox
	String^ selectedUserEmail = listBox1->SelectedItem->ToString();

	// Get the current user's email
	String^ currentUserEmail = "a"; // replace with actual value

	try {
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=1234;Database=a2";
		MySqlConnection^ con = gcnew MySqlConnection(constr);

		// Get the user_id of the selected user
		String^ sqlQuery = "SELECT user_id FROM user WHERE email=@email;";
		MySqlCommand^ cmd = gcnew MySqlCommand(sqlQuery, con);
		cmd->Parameters->AddWithValue("@email", selectedUserEmail);
		con->Open();
		int followedId = Convert::ToInt32(cmd->ExecuteScalar());
		con->Close();

		// Get the user_id of the current user
		sqlQuery = "SELECT user_id FROM user WHERE email=@email;";
		cmd = gcnew MySqlCommand(sqlQuery, con);
		cmd->Parameters->AddWithValue("@email", currentUserEmail);
		con->Open();
		int followerId = Convert::ToInt32(cmd->ExecuteScalar());
		con->Close();

		// Check if the friend relationship already exists
		sqlQuery = "SELECT COUNT(*) FROM friends WHERE currentUser=@currentUser AND addedUser=@addedUser;";
		cmd = gcnew MySqlCommand(sqlQuery, con);
		cmd->Parameters->AddWithValue("@currentUser", followerId);
		cmd->Parameters->AddWithValue("@addedUser", followedId);
		con->Open();
		int count = Convert::ToInt32(cmd->ExecuteScalar());
		con->Close();


		// Insert the friend record
		if (count == 0) {
		sqlQuery = "INSERT INTO friends (currentUser, addedUser) VALUES (@currentUser, @addedUser);";
		cmd = gcnew MySqlCommand(sqlQuery, con);
		cmd->Parameters->AddWithValue("@currentUser", followerId);
		cmd->Parameters->AddWithValue("@addedUser", followedId);
		con->Open();
		cmd->ExecuteNonQuery();
		con->Close();
		MessageBox::Show("Friend added successfully", "Success", MessageBoxButtons::OK);
		}
		else {
			MessageBox::Show("Friend relationship already exists", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		// Retrieve all the friends of the current user
		sqlQuery = "SELECT u.email FROM friends f INNER JOIN user u ON f.addedUser=u.user_id WHERE f.currentUser=@currentUser;";
		cmd = gcnew MySqlCommand(sqlQuery, con);
		cmd->Parameters->AddWithValue("@currentUser", followerId);
		con->Open();
		MySqlDataReader^ reader = cmd->ExecuteReader();

		

		reader->Close();
		con->Close();


	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}


private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=1234;Database=a2";
		MySqlConnection^ con = gcnew MySqlConnection(constr);

		// Get the user_id of the current user
		String^ currentUserEmail = "a"; // replace with actual value
		String^ sqlQuery = "SELECT user_id FROM user WHERE email=@email;";
		MySqlCommand^ cmd = gcnew MySqlCommand(sqlQuery, con);
		cmd->Parameters->AddWithValue("@email", currentUserEmail);
		con->Open();
		int followerId = Convert::ToInt32(cmd->ExecuteScalar());
		con->Close();

		// Get the list of added users
		sqlQuery = "SELECT user.email FROM friends INNER JOIN user ON friends.addedUser=user.user_id WHERE friends.currentUser=@followerId;";
		cmd = gcnew MySqlCommand(sqlQuery, con);
		cmd->Parameters->AddWithValue("@followerId", followerId);
		con->Open();
		MySqlDataReader^ reader = cmd->ExecuteReader();
		listView1->Items->Clear();
		while (reader->Read()) {
			String^ addedUserEmail = reader->GetString(0);
			ListViewItem^ item = gcnew ListViewItem(addedUserEmail);
			listView1->Items->Add(item);
		}
		reader->Close();
		con->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	try {
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=1234;Database=a2";
		MySqlConnection^ con = gcnew MySqlConnection(constr);

		// Get the user_id of the current user
		String^ currentUserEmail = "a"; // replace with actual value
		String^ sqlQuery = "SELECT user_id FROM user WHERE email=@email;";
		MySqlCommand^ cmd = gcnew MySqlCommand(sqlQuery, con);
		cmd->Parameters->AddWithValue("@email", currentUserEmail);
		con->Open();
		int currentUserID = Convert::ToInt32(cmd->ExecuteScalar());
		con->Close();

		// Get the list of followers
		sqlQuery = "SELECT DISTINCT user.email FROM friends INNER JOIN user ON friends.currentUser=user.user_id WHERE friends.addedUser=@currentUserID;";
		cmd = gcnew MySqlCommand(sqlQuery, con);
		cmd->Parameters->AddWithValue("@currentUserID", currentUserID);
		con->Open();
		MySqlDataReader^ reader = cmd->ExecuteReader();
		while (reader->Read()) {
			String^ followerEmail = reader->GetString(0);
			ListViewItem^ item = gcnew ListViewItem(followerEmail);
			listView2->Items->Add(item);
		}
		reader->Close();
		con->Close();
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}
	



};
}
