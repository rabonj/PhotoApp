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
	using namespace System::IO;
	using namespace System::Net;
	using namespace System::Collections::Generic;
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
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button4;





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
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
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
			this->listView2->Location = System::Drawing::Point(814, 115);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(397, 250);
			this->listView2->TabIndex = 9;
			this->listView2->UseCompatibleStateImageBehavior = false;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(952, 83);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Show";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Photo::button3_Click_1);
			// 
			// imageList1
			// 
			this->imageList1->ColorDepth = System::Windows::Forms::ColorDepth::Depth8Bit;
			this->imageList1->ImageSize = System::Drawing::Size(16, 16);
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(811, 83);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(115, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Show All Of My Photos";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(705, 121);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Like";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Photo::button4_Click);
			// 
			// Photo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1245, 465);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label4);
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
		  

private: System::Void button3_Click_1(System::Object^ sender, System::EventArgs^ e) {
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

		// Create a list to store the loaded images
		List<Image^>^ loadedImages = gcnew List<Image^>();

		// Get the list of photos for the current user
		sqlQuery = "SELECT url FROM photo WHERE user_id=@userID;";

		cmd = gcnew MySqlCommand(sqlQuery, con);
		cmd->Parameters->AddWithValue("@userID", currentUserID);
		con->Open();
		MySqlDataReader^ reader = cmd->ExecuteReader();
		while (reader->Read()) {
			String^ url = reader->GetString(0);

			// Load the image from the URL
			System::Net::WebClient^ webClient = gcnew System::Net::WebClient();
			array<Byte>^ imageBytes = webClient->DownloadData(url);
			System::IO::MemoryStream^ stream = gcnew System::IO::MemoryStream(imageBytes);
			Image^ image = Image::FromStream(stream);

			// Add the image to the image list and loaded images list
			imageList1->Images->Add(image);
			loadedImages->Add(image);

			// Create a new ListViewItem and add it to listView2
			ListViewItem^ item = gcnew ListViewItem(gcnew array<String^> { url }, -1);
			item->ImageIndex = imageList1->Images->Count - 1;
			listView2->Items->Add(item);
		}
		reader->Close();
		con->Close();

		// Set the image list for listView2
		listView2->LargeImageList = imageList1;
	}
	catch (MySqlException^ ex) {
		MessageBox::Show(ex->ToString());
	}
}




private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=1234;Database=a2";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		con->Open();

		// Get the ID of the selected photo
		int photo_ID = -1;
		if (listView2->SelectedItems->Count > 0) {
			ListViewItem^ selectedItem = listView2->SelectedItems[0];
			photo_ID = Convert::ToInt32(selectedItem->Tag);
		}

		if (photo_ID == -1) {
			MessageBox::Show("Please select a photo to like.");
			return;
		}

		// Get the ID of the current user
		String^ currentUserEmail = "a"; // replace with actual value
		String^ sqlQuery = "SELECT user_id FROM user WHERE email=@email;";
		MySqlCommand^ cmd = gcnew MySqlCommand(sqlQuery, con);
		cmd->Parameters->AddWithValue("@email", currentUserEmail);
		int currentUserID = Convert::ToInt32(cmd->ExecuteScalar());

		// Insert a new row into the likes table
		sqlQuery = "INSERT INTO likes (user_id, photo_id) VALUES (@user_id, @photo_id);";
		cmd = gcnew MySqlCommand(sqlQuery, con);
		cmd->Parameters->AddWithValue("@user_id", currentUserID);
		cmd->Parameters->AddWithValue("@photo_id", photo_ID);
		cmd->ExecuteNonQuery();

		// Update the number of likes for the selected item in the ListView
		sqlQuery = "SELECT COUNT(*) FROM likes WHERE photo_id=@photo_ID;";
		cmd = gcnew MySqlCommand(sqlQuery, con);
		cmd->Parameters->AddWithValue("@photo_ID", photo_ID);
		int numLikes = Convert::ToInt32(cmd->ExecuteScalar());
		listView2->SelectedItems[0]->SubItems[1]->Text = numLikes.ToString();

		con->Close();
	}
	catch (MySqlException^ ex) {
		MessageBox::Show(ex->ToString());
	}
}

};
}
