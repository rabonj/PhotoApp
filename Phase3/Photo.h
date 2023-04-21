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
	/// Summary for Photo
	/// </summary>
	public ref class Photo : public System::Windows::Forms::Form
	{
	public:
		Photo(void)
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
		~Photo()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ListView^ listView2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ImageList^ imageList1;
	private: System::ComponentModel::IContainer^ components;
	protected:

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->listView2 = (gcnew System::Windows::Forms::ListView());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(102, 171);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Add Photo";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Photo::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(102, 31);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(102, 76);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(40, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Caption";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(40, 79);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"URL";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(43, 116);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(36, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Album";
			// 
			// listView1
			// 
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(102, 115);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(121, 29);
			this->listView1->TabIndex = 7;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(251, 116);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Show Albums";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Photo::button2_Click);
			// 
			// listView2
			// 
			this->listView2->HideSelection = false;
			this->listView2->Location = System::Drawing::Point(373, 31);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(163, 195);
			this->listView2->TabIndex = 9;
			this->listView2->UseCompatibleStateImageBehavior = false;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(421, 232);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Show";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 16);
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// Photo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(548, 322);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->listView2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"Photo";
			this->Text = L"Photo";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=1234;Database=a2";
		MySqlConnection^ con = gcnew MySqlConnection(constr);

		// Get the user_id of the current user
		String^ currentUserEmail = "a"; // replace with actual value
		String^ sqlQuery = "SELECT user_id FROM user WHERE email=@email;";
		MySqlCommand^ cmd = gcnew MySqlCommand(sqlQuery, con);
		cmd->Parameters->AddWithValue("@email", currentUserEmail);
		con->Open();
		int userId = Convert::ToInt32(cmd->ExecuteScalar());
		con->Close();

		// Get the album_id of the selected album
		int albumId = -1;
		if (listView1->SelectedItems->Count > 0) {
			String^ albumName = listView1->SelectedItems[0]->Text;
			sqlQuery = "SELECT album_id FROM album WHERE user_id=@userId AND name=@albumName;";
			cmd = gcnew MySqlCommand(sqlQuery, con);
			cmd->Parameters->AddWithValue("@userId", userId);
			cmd->Parameters->AddWithValue("@albumName", albumName);
			con->Open();
			Object^ result = cmd->ExecuteScalar();
			if (result != nullptr) {
				albumId = Convert::ToInt32(result);
			}
			con->Close();
		}

		// Insert the photo into the database
		if (albumId != -1) {
			String^ photoCaption = textBox1->Text;
			String^ photoUrl = textBox2->Text; // replace with actual photo URL
			sqlQuery = "INSERT INTO photo (user_id, album_id, caption, url) VALUES (@userId, @albumId, @caption, @url);";
			cmd = gcnew MySqlCommand(sqlQuery, con);
			cmd->Parameters->AddWithValue("@userId", userId);
			cmd->Parameters->AddWithValue("@albumId", albumId);
			cmd->Parameters->AddWithValue("@caption", photoCaption);
			cmd->Parameters->AddWithValue("@url", photoUrl);
			con->Open();
			cmd->ExecuteNonQuery();
			con->Close();
			MessageBox::Show("Photo Added");

		}
		
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}



	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=1234;Database=a2";
			MySqlConnection^ con = gcnew MySqlConnection(constr);

			// Get the user_id of the current user
			String^ currentUserEmail = "a"; // replace with actual value
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

		// Get the user_id of the current user
		String^ currentUserEmail = "a"; // replace with actual value
		String^ sqlQuery = "SELECT user_id FROM user WHERE email=@email;";
		MySqlCommand^ cmd = gcnew MySqlCommand(sqlQuery, con);
		cmd->Parameters->AddWithValue("@email", currentUserEmail);
		con->Open();
		int currentUserID = Convert::ToInt32(cmd->ExecuteScalar());
		con->Close();

		// Create a new ImageList object to store the images
		ImageList^ imageList1 = gcnew ImageList();
		imageList1->ImageSize = System::Drawing::Size(64, 64);
		imageList1->ColorDepth = ColorDepth::Depth32Bit;

		// Get the list of albums for the current user
		sqlQuery = "SELECT album_id, name FROM album WHERE user_id=@userID;";
		cmd = gcnew MySqlCommand(sqlQuery, con);
		cmd->Parameters->AddWithValue("@userID", currentUserID);
		con->Open();
		MySqlDataReader^ reader = cmd->ExecuteReader();
		while (reader->Read()) {
			int albumID = reader->GetInt32(0);
			String^ albumName = reader->GetString(1);

			// Get the list of photos for the current album
			sqlQuery = "SELECT caption, url FROM photo WHERE user_id=@userID AND album_id=@albumID;";
			MySqlCommand^ cmd2 = gcnew MySqlCommand(sqlQuery, con);
			cmd2->Parameters->AddWithValue("@userID", currentUserID);
			cmd2->Parameters->AddWithValue("@albumID", albumID);
			MySqlDataReader^ reader2 = cmd2->ExecuteReader();
			while (reader2->Read()) {
				String^ caption = reader2->GetString(0);
				String^ url = reader2->GetString(1);

				// Load the image from the URL
				System::Net::WebClient^ webClient = gcnew System::Net::WebClient();
				System::IO::MemoryStream^ stream = gcnew System::IO::MemoryStream(webClient->DownloadData(url));
				Image^ image = Image::FromStream(stream);

				imageList1->Images->Add(image);
				listView2->LargeImageList = imageList1;
				listView2->View = View::LargeIcon;

				// Create a new ListViewItem and add it to listView2
				ListViewItem^ item = gcnew ListViewItem(gcnew array<String^> { albumName, caption }, -1);
				item->ImageIndex = imageList1->Images->Count - 1;
				listView2->Items->Add(item);
			}
			reader2->Close();
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
