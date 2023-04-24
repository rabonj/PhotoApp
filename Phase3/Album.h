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
	/// <summary>
	/// Summary for Album
	/// </summary>
	public ref class Album : public System::Windows::Forms::Form
	{
	public:
		Album(void)
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
		~Album()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(132, 26);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 31);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Create";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Album::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 32);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(33, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"name";
			// 
			// listView1
			// 
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(1, 132);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(206, 201);
			this->listView1->TabIndex = 3;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(8, 112);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"My Albums";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(104, 107);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Show Albums";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Album::button2_Click_1);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(338, 132);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Delete";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Album::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(391, 310);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 7;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// Album
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(478, 345);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"Album";
			this->Text = L"Album";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=1234;Database=a2";
			MySqlConnection^ con = gcnew MySqlConnection(constr);

			// Get the user_id of the current user
			String^ currentUserEmail = "dblany8@yelp.com"; // replace with actual value
			String^ sqlQuery = "SELECT user_id FROM user WHERE email=@email;";
			MySqlCommand^ cmd = gcnew MySqlCommand(sqlQuery, con);
			cmd->Parameters->AddWithValue("@email", currentUserEmail);
			con->Open();
			int userId = Convert::ToInt32(cmd->ExecuteScalar());
			con->Close();

			// Check if album with same name already exists for current user
			String^ albumName = textBox1->Text;
			sqlQuery = "SELECT COUNT(*) FROM album WHERE user_id=@userId AND name=@name;";
			cmd = gcnew MySqlCommand(sqlQuery, con);
			cmd->Parameters->AddWithValue("@userId", userId);
			cmd->Parameters->AddWithValue("@name", albumName);
			con->Open();
			int count = Convert::ToInt32(cmd->ExecuteScalar());
			con->Close();

			// Insert the new album if no albums with same name exist
			if (count == 0) {
				sqlQuery = "INSERT INTO album (user_id, name) VALUES (@userId, @name);";
				cmd = gcnew MySqlCommand(sqlQuery, con);
				cmd->Parameters->AddWithValue("@userId", userId);
				cmd->Parameters->AddWithValue("@name", albumName);
				con->Open();
				cmd->ExecuteNonQuery();
				con->Close();
				MessageBox::Show("Album added successfully", "Success", MessageBoxButtons::OK);
			}
			else {
				MessageBox::Show("Album with same name already exists for current user", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}

private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	try {
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=1234;Database=a2";
		MySqlConnection^ con = gcnew MySqlConnection(constr);

		// Get the user_id of the current user
		String^ currentUserEmail = "dblany8@yelp.com"; // replace with actual value
		String^ sqlQuery = "SELECT user_id FROM user WHERE email=@email;";
		MySqlCommand^ cmd = gcnew MySqlCommand(sqlQuery, con);
		cmd->Parameters->AddWithValue("@email", currentUserEmail);
		con->Open();
		int userId = Convert::ToInt32(cmd->ExecuteScalar());
		con->Close();

		// Get the list of albums
		sqlQuery = "SELECT name FROM album WHERE user_id=@userId;";
		cmd = gcnew MySqlCommand(sqlQuery, con);
		cmd->Parameters->AddWithValue("@userId", userId);
		con->Open();
		MySqlDataReader^ reader = cmd->ExecuteReader();
		while (reader->Read()) {
			String^ albumName = reader->GetString(0);
			ListViewItem^ item = gcnew ListViewItem(albumName);
			listView1->Items->Add(item);
		}
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

		// Get the ID of the selected album from the ListView
		int albumId = -1;
		if (listView1->SelectedItems->Count > 0) {
			String^ name = listView1->SelectedItems[0]->SubItems[0]->Text;
			String^ sqlQuery = "SELECT album_id FROM album WHERE name=@name;";
			MySqlCommand^ cmd = gcnew MySqlCommand(sqlQuery, con);
			cmd->Parameters->AddWithValue("@name", name);
			con->Open();
			Object^ result = cmd->ExecuteScalar();
			if (result != nullptr) {
				albumId = Convert::ToInt32(result);
			}
			con->Close();
		}

		

		// Delete the likes associated with the selected album
		if (albumId != -1) {
			String^ sqlQuery = "DELETE FROM likes WHERE photo_id IN (SELECT photo_id FROM photo WHERE album_id=@albumId);";
			MySqlCommand^ cmd = gcnew MySqlCommand(sqlQuery, con);
			cmd->Parameters->AddWithValue("@albumId", albumId);
			con->Open();
			cmd->ExecuteNonQuery();
			con->Close();
		}

		// Delete the comments associated with the selected album
		if (albumId != -1) {
			String^ sqlQuery = "DELETE FROM comment WHERE photo_id IN (SELECT photo_id FROM photo WHERE album_id=@albumId);";
			MySqlCommand^ cmd = gcnew MySqlCommand(sqlQuery, con);
			cmd->Parameters->AddWithValue("@albumId", albumId);
			con->Open();
			cmd->ExecuteNonQuery();
			con->Close();
		}
		// Delete the photos associated with the selected album
		if (albumId != -1) {
			String^ sqlQuery = "DELETE FROM photo WHERE album_id=@albumId;";
			MySqlCommand^ cmd = gcnew MySqlCommand(sqlQuery, con);
			cmd->Parameters->AddWithValue("@albumId", albumId);
			con->Open();
			cmd->ExecuteNonQuery();
			con->Close();
		}
		// Delete the selected album from the database
		if (albumId != -1) {
			String^ sqlQuery = "DELETE FROM album WHERE album_id=@albumId;";
			MySqlCommand^ cmd = gcnew MySqlCommand(sqlQuery, con);
			cmd->Parameters->AddWithValue("@albumId", albumId);
			con->Open();
			cmd->ExecuteNonQuery();
			con->Close();
		}

		// Remove the selected album from the ListView
		if (listView1->SelectedItems->Count > 0) {
			listView1->SelectedItems[0]->Remove();
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}


};
}