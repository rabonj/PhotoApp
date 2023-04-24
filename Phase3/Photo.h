
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
		int userId;
		Photo()
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
		}
		Photo(int userId)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			this->userId = userId;
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
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::ListView^ listView3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ListView^ listView4;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::ColumnHeader^ Name;
	private: System::Windows::Forms::ColumnHeader^ Comment;
	private: System::Windows::Forms::ColumnHeader^ Date;





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
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->listView3 = (gcnew System::Windows::Forms::ListView());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->listView4 = (gcnew System::Windows::Forms::ListView());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->Name = (gcnew System::Windows::Forms::ColumnHeader());
			this->Comment = (gcnew System::Windows::Forms::ColumnHeader());
			this->Date = (gcnew System::Windows::Forms::ColumnHeader());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(145, 259);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Add Photo";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Photo::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(76, 44);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(175, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(76, 76);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(175, 20);
			this->textBox2->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 50);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Caption";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"URL";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(51, 167);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(36, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Album";
			// 
			// listView1
			// 
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(93, 167);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(127, 86);
			this->listView1->TabIndex = 7;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(15, 183);
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
			this->listView2->Location = System::Drawing::Point(644, 167);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(330, 213);
			this->listView2->TabIndex = 9;
			this->listView2->UseCompatibleStateImageBehavior = false;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(644, 133);
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
			this->label4->Location = System::Drawing::Point(641, 117);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(115, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Show All Of My Photos";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(281, 415);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 12;
			this->button4->Text = L"Like";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Photo::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(899, 138);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 13;
			this->button5->Text = L"Delete";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Photo::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(286, 65);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 14;
			this->button6->Text = L"Show";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Photo::button6_Click);
			// 
			// listView3
			// 
			this->listView3->HideSelection = false;
			this->listView3->Location = System::Drawing::Point(286, 93);
			this->listView3->Name = L"listView3";
			this->listView3->Size = System::Drawing::Size(303, 240);
			this->listView3->TabIndex = 15;
			this->listView3->UseCompatibleStateImageBehavior = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(283, 44);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(177, 13);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Show All of the photos in the sytsem";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(491, 71);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(98, 20);
			this->textBox3->TabIndex = 17;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(595, 69);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 18;
			this->button7->Text = L"Submit";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Photo::button7_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(410, 74);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(75, 13);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Show by Tags";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(300, 392);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(56, 13);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Comments";
			// 
			// listView4
			// 
			this->listView4->Alignment = System::Windows::Forms::ListViewAlignment::Left;
			this->listView4->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->Name, this->Comment,
					this->Date
			});
			this->listView4->HideSelection = false;
			this->listView4->Location = System::Drawing::Point(360, 415);
			this->listView4->Name = L"listView4";
			this->listView4->Size = System::Drawing::Size(344, 145);
			this->listView4->Sorting = System::Windows::Forms::SortOrder::Descending;
			this->listView4->TabIndex = 21;
			this->listView4->UseCompatibleStateImageBehavior = false;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(360, 566);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(263, 20);
			this->textBox4->TabIndex = 22;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(629, 563);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 23;
			this->button8->Text = L"Add";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Photo::button8_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 124);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(31, 13);
			this->label8->TabIndex = 24;
			this->label8->Text = L"Tags";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(76, 117);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(175, 20);
			this->textBox5->TabIndex = 25;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label9->Location = System::Drawing::Point(242, 347);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(128, 13);
			this->label9->TabIndex = 26;
			this->label9->Text = L"Select a Photo to Interact";
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(532, 386);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(129, 23);
			this->button9->TabIndex = 27;
			this->button9->Text = L"Search Comments";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Photo::listView3_SelectedIndexChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(362, 389);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(164, 20);
			this->textBox6->TabIndex = 28;
			// 
			// Photo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(993, 608);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->listView4);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->listView3);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
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
			//this->Name = L"Photo";
			//this->Text = L"Photo";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=1234;Database=a2";
			MySqlConnection^ con = gcnew MySqlConnection(constr);

			// Get the user_id of the current user
			//String^ currentUserEmail = "a"; // replace with actual value
			String^ sqlQuery = "SELECT * FROM user WHERE user_id=@user_id;";
			MySqlCommand^ cmd = gcnew MySqlCommand(sqlQuery, con);
			cmd->Parameters->AddWithValue("@user_id", this->userId);
			con->Open();
			int userId = Convert::ToInt32(cmd->ExecuteScalar());
			con->Close();

			// Get the album_id of the selected album
			int albumId = -1;
			if (listView1->SelectedItems->Count > 0) {
				String^ albumName = listView1->SelectedItems[0]->Text;
				sqlQuery = "SELECT album_id FROM album WHERE user_id=@userId AND name=@albumName;";
				cmd = gcnew MySqlCommand(sqlQuery, con);
				cmd->Parameters->AddWithValue("@userId", this->userId);
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
				String^ tags = textBox5->Text;
				sqlQuery = "INSERT INTO photo (user_id, album_id, caption, url, tags) VALUES (@userId, @albumId, @caption, @url, @tags);";
				cmd = gcnew MySqlCommand(sqlQuery, con);
				cmd->Parameters->AddWithValue("@userId", this->userId);
				cmd->Parameters->AddWithValue("@albumId", albumId);
				cmd->Parameters->AddWithValue("@caption", photoCaption);
				cmd->Parameters->AddWithValue("@url", photoUrl);
				cmd->Parameters->AddWithValue("@tags", tags);
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
			//String^ currentUserEmail = "a"; // replace with actual value
			//String^ sqlQuery = "SELECT * FROM user WHERE user_id=@user_id;";
			//MySqlCommand^ cmd = gcnew MySqlCommand(sqlQuery, con);
			//cmd->Parameters->AddWithValue("@user_id", this->userId);
			//con->Open();
			//int currentUserEmail = cmd->;
			//con->Close();

			// Get the list of albums
			String^ sqlQuery = "SELECT name FROM album WHERE user_id=@userId;";
			MySqlCommand^ cmd = gcnew MySqlCommand(sqlQuery, con);
			cmd->Parameters->AddWithValue("@userId", this->userId);
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
		listView2->Clear();

		try {
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=1234;Database=a2";
			MySqlConnection^ con = gcnew MySqlConnection(constr);

			// Get the user_id of the current user
			//String^ currentUserEmail = "a"; // replace with actual value
			//String^ sqlQuery = "SELECT * FROM user WHERE user_id=@user_id;";
			//MySqlCommand^ cmd = gcnew MySqlCommand(sqlQuery, con);
			//cmd->Parameters->AddWithValue("@user_id", this->userId);
			//con->Open();
			//int current
				//= Convert::ToInt32(cmd->ExecuteScalar());
			//con->Close();

			// Create a new ImageList object to store the images
			ImageList^ imageList1 = gcnew ImageList();
			imageList1->ImageSize = System::Drawing::Size(64, 64);
			imageList1->ColorDepth = ColorDepth::Depth32Bit;

			// Create a list to store the loaded images
			List<Image^>^ loadedImages = gcnew List<Image^>();

			// Get the list of photos for the current user
			String^ sqlQuery = "SELECT url FROM photo WHERE user_id=@userID;";

			MySqlCommand^ cmd = gcnew MySqlCommand(sqlQuery, con);
			cmd->Parameters->AddWithValue("@userID", this->userId);
			con->Open();
			//con->Close();

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
			// Get the ID of the selected photo
			int photo_ID = -1;
			if (listView2->SelectedItems->Count > 0) {
				ListViewItem^ selectedItem = listView2->SelectedItems[0];
				if (selectedItem->Tag != nullptr) {
					photo_ID = Convert::ToInt32(selectedItem->Tag);
					MessageBox::Show("Selected photo ID: " + photo_ID);
				}
			}


			if (photo_ID == -1) {
				MessageBox::Show("Please select a photo to like.");
				return;
			}

			// Get the ID of the current user
			//String^ currentUserEmail = "a"; // replace with actual value
			String^ sqlQuery = "SELECT * FROM user WHERE user_id=@userId;";
			MySqlCommand^ cmd = gcnew MySqlCommand(sqlQuery, con);
			cmd->Parameters->AddWithValue("@user_id", this->userId);
			//int currentUserID = Convert::ToInt32(cmd->ExecuteScalar());

			// Insert a new row into the likes table
			sqlQuery = "INSERT INTO likes (user_id, photo_id) VALUES (@user_id, @photo_id);";
			cmd = gcnew MySqlCommand(sqlQuery, con);
			cmd->Parameters->AddWithValue("@user_id", this->userId);
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

	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=1234;Database=a2";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			con->Open();

			// Get the URL of the selected photo
			String^ photoURL = "";
			String^ albumID = "";
			String^ photoCaption = "";
			if (listView2->SelectedItems->Count > 0) {
				ListViewItem^ selectedItem = listView2->SelectedItems[0];
				if (selectedItem->SubItems->Count >= 1) {
					photoURL = selectedItem->SubItems[0]->Text;
				}
			}

			if (photoURL == "") {
				MessageBox::Show("Please select a photo to delete.");
				return;
			}

			// Get the ID of the current user
			//String^ currentUserEmail = "a"; // replace with actual value
			String^ sqlQuery = "SELECT * FROM user WHERE user_id=@user_id;";
			MySqlCommand^ cmd = gcnew MySqlCommand(sqlQuery, con);
			cmd->Parameters->AddWithValue("@user_id", this->userId);
			//int currentUserID = Convert::ToInt32(cmd->ExecuteScalar());

			// Delete the selected photo from the database
			sqlQuery = "DELETE FROM photo WHERE user_id=@user_id AND url=@url;";
			cmd = gcnew MySqlCommand(sqlQuery, con);
			cmd->Parameters->AddWithValue("@user_id", this->userId);
			cmd->Parameters->AddWithValue("@url", photoURL);
			cmd->ExecuteNonQuery();

			// Remove the selected photo from the ListView
			listView2->SelectedItems[0]->Remove();

			con->Close();
		}
		catch (MySqlException^ ex) {
			MessageBox::Show(ex->ToString());
		}
	}


	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		listView3->Clear();

		try {
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=1234;Database=a2";
			MySqlConnection^ con = gcnew MySqlConnection(constr);

			// Create a new ImageList object to store the images
			ImageList^ imageList1 = gcnew ImageList();
			imageList1->ImageSize = System::Drawing::Size(64, 64);
			imageList1->ColorDepth = ColorDepth::Depth32Bit;

			// Create a list to store the loaded images
			List<Image^>^ loadedImages = gcnew List<Image^>();

			// Get the list of all photos
			String^ sqlQuery = "SELECT url FROM photo;";

			MySqlCommand^ cmd = gcnew MySqlCommand(sqlQuery, con);
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
				listView3->Items->Add(item);
			}
			reader->Close();
			con->Close();

			// Set the image list for listView2
			listView3->LargeImageList = imageList1;
		}
		catch (MySqlException^ ex) {
			MessageBox::Show(ex->ToString());
		}
	}


	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		listView3->Clear();
		try {
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=1234;Database=a2";
			MySqlConnection^ con = gcnew MySqlConnection(constr);

			// Create a new ImageList object to store the images
			ImageList^ imageList1 = gcnew ImageList();
			imageList1->ImageSize = System::Drawing::Size(64, 64);
			imageList1->ColorDepth = ColorDepth::Depth32Bit;

			// Create a list to store the loaded images
			List<Image^>^ loadedImages = gcnew List<Image^>();

			// Get the list of photos with the same caption
			String^ sqlQuery = "SELECT url FROM photo WHERE tags LIKE @tags;";
			MySqlCommand^ cmd = gcnew MySqlCommand(sqlQuery, con);
			cmd->Parameters->AddWithValue("@tags", "%" + textBox3->Text + "%");
			con->Open();
			MySqlDataReader^ reader = cmd->ExecuteReader();
			while (reader->Read()) {
				String^ url = reader->GetString(0);
				//String^ caption = reader->GetString(1);

				// Load the image from the URL
				System::Net::WebClient^ webClient = gcnew System::Net::WebClient();
				array<Byte>^ imageBytes = webClient->DownloadData(url);
				System::IO::MemoryStream^ stream = gcnew System::IO::MemoryStream(imageBytes);
				Image^ image = Image::FromStream(stream);

				// Add the image to the image list and loaded images list
				imageList1->Images->Add(image);
				loadedImages->Add(image);

				// Create a new ListViewItem and add it to listView3
				ListViewItem^ item = gcnew ListViewItem(gcnew array<String^> { url }, -1);
				item->ImageIndex = imageList1->Images->Count - 1;
				listView3->Items->Add(item);
			}
			reader->Close();
			con->Close();

			// Set the image list for listView3
			listView3->LargeImageList = imageList1;
		}
		catch (MySqlException^ ex) {
			MessageBox::Show(ex->ToString());
		}
	}





	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=1234;Database=a2";
			MySqlConnection^ con = gcnew MySqlConnection(constr);

			// Get the user_id of the current user
			//String^ currentUserEmail = "a"; // replace with actual value
			String^ sqlQuery = "SELECT * FROM user WHERE user_id=@user_id;";
			MySqlCommand^ cmd = gcnew MySqlCommand(sqlQuery, con);
			cmd->Parameters->AddWithValue("@user_id", this->userId);

			con->Open();
			Object^ result = cmd->ExecuteScalar();
			int currentUserID = -1;
			if (result != nullptr) {
				currentUserID = Convert::ToInt32(result);
			}
			con->Close();

			// Get the photo_id and album_id of the selected photo
			int photo_id = -1;
			if (listView2->SelectedItems->Count > 0) {
				String^ url = listView2->SelectedItems[0]->SubItems[0]->Text;
				MessageBox::Show(url); // add this line to display the url value
				String^ sqlQuery = "SELECT photo_id FROM photo WHERE url=@url;";
				MySqlCommand^ cmd = gcnew MySqlCommand(sqlQuery, con);
				cmd->Parameters->AddWithValue("@url", url);
				con->Open();
				Object^ result = cmd->ExecuteScalar();
				if (result != nullptr) {
					photo_id = Convert::ToInt32(result);
					MessageBox::Show(Convert::ToString(photo_id)); // add this line to display the photoId value
				}
				con->Close();
			}

			// Insert the comment into the database
			if (photo_id != -1) {
				String^ commentText = textBox4->Text;
				DateTime now = DateTime::Now;
				String^ sqlQuery = "INSERT INTO comment (user_id, date, text, photo_id) VALUES (@user_id, @date, @text, @photo_id);";
				MySqlCommand^ cmd = gcnew MySqlCommand(sqlQuery, con);
				cmd->Parameters->AddWithValue("@user_id", this->userId);
				cmd->Parameters->AddWithValue("@date", now);
				cmd->Parameters->AddWithValue("@text", commentText);
				cmd->Parameters->AddWithValue("@photo_id", photo_id);
				con->Open();
				cmd->ExecuteNonQuery();
				con->Close();
				MessageBox::Show("Comment Added");
			}

		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void listView3_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		//if (listView3->SelectedItems->Count > 0) {
			// Get the selected image ID
			//int imageId = Convert::ToInt32(listView3->SelectedItems[0]->SubItems[0]->Text);

			// Connect to the database
		MySqlConnection^ connection = gcnew MySqlConnection("Server=127.0.0.1;Uid=root;Pwd=1234;Database=a2");
		connection->Open();

		try {
			// Query comments for the selected image
			MySqlCommand^ cmd = gcnew MySqlCommand("SELECT user.firstname, user.lastname, comment.text, comment.date FROM comment INNER JOIN user ON comment.user_id=user.user_id AND comment.text LIKE @text", connection);
			//MySqlCommand^ command = gcnew MySqlCommand("SELECT comment.text, comment.date FROM comment INNER JOIN photo ON comment.photo_id=photo.photo_id WHERE photo.photo_id=" + imageId, connection);
			cmd->Parameters->AddWithValue("@text", textBox6->Text + "%");
			MySqlDataReader^ reader = cmd->ExecuteReader();

			// Clear ListView4
			listView4->Items->Clear();

			// Add comments to ListView4
			while (reader->Read()) {
				String^ firstname = reader->GetString(0);
				String^ lastname = reader->GetString(1);
				String^ comment = reader->GetString(2);
				String^ date = reader->GetString(3);
				String^ output = firstname + " " + lastname + " \' " + comment + "\' " + date;
				listView4->Items->Add(gcnew ListViewItem( output ));
			}

			// Close the reader
			reader->Close();
		}
		catch (Exception^ ex) {
			// Handle any exceptions thrown during execution
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

		// Close the database connection
		connection->Close();
		
	}



	};
}

