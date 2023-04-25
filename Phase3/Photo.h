
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

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::ListView^ listView4;
	private: System::Windows::Forms::Button^ button13;
	private: System::Windows::Forms::Button^ button14;
	private: System::Windows::Forms::ListView^ listView5;
	private: System::Windows::Forms::Label^ label12;








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
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->listView4 = (gcnew System::Windows::Forms::ListView());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->listView5 = (gcnew System::Windows::Forms::ListView());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->Location = System::Drawing::Point(148, 201);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Add Photo";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Photo::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(61, 43);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(175, 20);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(61, 76);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(175, 20);
			this->textBox2->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Caption";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(19, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"URL";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 117);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(36, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Album";
			// 
			// listView1
			// 
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(15, 138);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(127, 86);
			this->listView1->TabIndex = 7;
			this->listView1->UseCompatibleStateImageBehavior = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(67, 112);
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
			this->listView2->Location = System::Drawing::Point(651, 162);
			this->listView2->Name = L"listView2";
			this->listView2->Size = System::Drawing::Size(330, 198);
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
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(649, 110);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(141, 20);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Show My Photos";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(211, 297);
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
			this->button6->Location = System::Drawing::Point(286, 40);
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
			this->listView3->Location = System::Drawing::Point(292, 69);
			this->listView3->Name = L"listView3";
			this->listView3->Size = System::Drawing::Size(303, 240);
			this->listView3->TabIndex = 15;
			this->listView3->UseCompatibleStateImageBehavior = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(282, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(139, 20);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Show All Photos";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(487, 39);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(98, 20);
			this->textBox3->TabIndex = 17;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(591, 35);
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
			this->label6->Location = System::Drawing::Point(406, 45);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(75, 13);
			this->label6->TabIndex = 19;
			this->label6->Text = L"Show by Tags";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(201, 400);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(56, 13);
			this->label7->TabIndex = 20;
			this->label7->Text = L"Comments";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(201, 567);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(263, 20);
			this->textBox4->TabIndex = 22;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(470, 565);
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
			this->label8->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label8->Location = System::Drawing::Point(745, 363);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(142, 13);
			this->label8->TabIndex = 24;
			this->label8->Text = L"Select a Photo to Add a Tag";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(718, 390);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(175, 20);
			this->textBox5->TabIndex = 25;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label9->Location = System::Drawing::Point(158, 281);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(128, 13);
			this->label9->TabIndex = 26;
			this->label9->Text = L"Select a Photo to Interact";
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(12, 442);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(157, 23);
			this->button9->TabIndex = 27;
			this->button9->Text = L"Search All Photo Comments";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Photo::listView3_SelectedIndexChanged);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(12, 416);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(164, 20);
			this->textBox6->TabIndex = 28;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(201, 416);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(309, 147);
			this->listBox1->TabIndex = 29;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(12, 471);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(166, 23);
			this->button10->TabIndex = 30;
			this->button10->Text = L"Search My Photo Comments";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Photo::button10_Clicked);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button11->Location = System::Drawing::Point(899, 390);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(56, 23);
			this->button11->TabIndex = 31;
			this->button11->Text = L"Add ";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Photo::button11_Clicked);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->label10->Location = System::Drawing::Point(19, 574);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(167, 13);
			this->label10->TabIndex = 32;
			this->label10->Text = L"Select a Photo to Add a Comment";
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(308, 328);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(156, 69);
			this->listBox2->TabIndex = 33;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(470, 328);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 23);
			this->button12->TabIndex = 34;
			this->button12->Text = L"Show";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Photo::button12_Clicked);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label11->Location = System::Drawing::Point(306, 312);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(142, 13);
			this->label11->TabIndex = 36;
			this->label11->Text = L"Select a Photo to View Tags";
			this->label11->TextAlign = System::Drawing::ContentAlignment::BottomCenter;
			// 
			// listView4
			// 
			this->listView4->HideSelection = false;
			this->listView4->Location = System::Drawing::Point(211, 107);
			this->listView4->Name = L"listView4";
			this->listView4->Size = System::Drawing::Size(75, 49);
			this->listView4->TabIndex = 37;
			this->listView4->UseCompatibleStateImageBehavior = false;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(211, 162);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(75, 23);
			this->button13->TabIndex = 38;
			this->button13->Text = L"Show Likes";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Photo::button13_Click);
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(906, 565);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(75, 23);
			this->button14->TabIndex = 39;
			this->button14->Text = L"Show";
			this->button14->UseVisualStyleBackColor = true;
			this->button14->Click += gcnew System::EventHandler(this, &Photo::button14_Click);
			// 
			// listView5
			// 
			this->listView5->HideSelection = false;
			this->listView5->Location = System::Drawing::Point(666, 453);
			this->listView5->Name = L"listView5";
			this->listView5->Size = System::Drawing::Size(234, 143);
			this->listView5->TabIndex = 40;
			this->listView5->UseCompatibleStateImageBehavior = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(748, 434);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(41, 13);
			this->label12->TabIndex = 41;
			this->label12->Text = L"Photo Suggestions";
			// 
			// Photo
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(993, 608);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->listView5);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->listView4);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->textBox4);
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
			this->Name = L"Photo";
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
				sqlQuery = "INSERT INTO photo (user_id, album_id, caption, url) VALUES (@userId, @albumId, @caption, @url);";
				cmd = gcnew MySqlCommand(sqlQuery, con);
				cmd->Parameters->AddWithValue("@userId", this->userId);
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



		   // like functionality
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			String^ constr = "Server=127.0.0.1;Uid=root;Pwd=1234;Database=a2";
			MySqlConnection^ con = gcnew MySqlConnection(constr);
			con->Open();

			// Get the ID of the selected photo
			int photo_id = -1;
			if (listView3->SelectedItems->Count > 0) {
				String^ url = listView3->SelectedItems[0]->SubItems[0]->Text;
				String^ sqlQuery = "SELECT photo_id FROM photo WHERE url=@url;";
				MySqlCommand^ cmd = gcnew MySqlCommand(sqlQuery, con);
				cmd->Parameters->AddWithValue("@url", url);
				Object^ result = cmd->ExecuteScalar();
				if (result != nullptr) {
					photo_id = Convert::ToInt32(result);
				}
			}

			if (photo_id == -1) {
				MessageBox::Show("Please select a photo to like.");
				return;
			}

			// Check if the user has already liked this photo
			String^ sqlQuery = "SELECT COUNT(*) FROM likes WHERE user_id=@user_id AND photo_id=@photo_id;";
			MySqlCommand^ cmd = gcnew MySqlCommand(sqlQuery, con);
			cmd->Parameters->AddWithValue("@user_id", this->userId);
			cmd->Parameters->AddWithValue("@photo_id", photo_id);
			int numLikes = Convert::ToInt32(cmd->ExecuteScalar());
			if (numLikes > 0) {
				MessageBox::Show("You have already liked this photo.");
				con->Close();
				return;
			}

			// Insert a new row into the likes table
			sqlQuery = "INSERT INTO likes (user_id, photo_id) VALUES (@user_id, @photo_id);";
			cmd = gcnew MySqlCommand(sqlQuery, con);
			cmd->Parameters->AddWithValue("@user_id", this->userId);
			cmd->Parameters->AddWithValue("@photo_id", photo_id);
			cmd->ExecuteNonQuery();


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

			// Get the ID of the selected photo
			sqlQuery = "SELECT photo_id FROM photo WHERE user_id=@user_id AND url=@url;";
			cmd = gcnew MySqlCommand(sqlQuery, con);
			cmd->Parameters->AddWithValue("@user_id", userId);
			cmd->Parameters->AddWithValue("@url", photoURL);
			int photoID = Convert::ToInt32(cmd->ExecuteScalar());


			/// Delete associated comments
			sqlQuery = "DELETE FROM comment WHERE photo_id=@photo_id;";
			cmd = gcnew MySqlCommand(sqlQuery, con);
			cmd->Parameters->AddWithValue("@photo_id", photoID);
			cmd->ExecuteNonQuery();

			// Delete associated likes
			sqlQuery = "DELETE FROM likes WHERE photo_id=@photo_id;";
			cmd = gcnew MySqlCommand(sqlQuery, con);
			cmd->Parameters->AddWithValue("@photo_id", photoID);
			cmd->ExecuteNonQuery();

			// Delete the selected photo from the database
			sqlQuery = "DELETE FROM photo WHERE user_id=@user_id AND url=@url;";
			cmd = gcnew MySqlCommand(sqlQuery, con);
			cmd->Parameters->AddWithValue("@user_id", userId);
			cmd->Parameters->AddWithValue("@url", photoURL);

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
			String^ sqlQuery = "SELECT url FROM photo INNER JOIN tag WHERE tag.tag_name LIKE @tags AND tag.photo_id=photo.photo_id;";
			MySqlCommand^ cmd = gcnew MySqlCommand(sqlQuery, con);
			cmd->Parameters->AddWithValue("@tags", textBox3->Text + "%");
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
			if (listView3->SelectedItems->Count > 0) {
				String^ url = listView3->SelectedItems[0]->SubItems[0]->Text;
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

		// Connect to the database
		MySqlConnection^ con = gcnew MySqlConnection("Server=127.0.0.1;Uid=root;Pwd=1234;Database=a2");
		con->Open();

		try {
			MySqlCommand^ cmd = gcnew MySqlCommand("SELECT user.firstname, user.lastname, comment.text, comment.date FROM comment INNER JOIN user ON comment.user_id=user.user_id AND comment.text LIKE @text;", con);
			cmd->Parameters->AddWithValue("@text", textBox6->Text + "%");
			MySqlDataReader^ reader = cmd->ExecuteReader();

			listBox1->Items->Clear();

			while (reader->Read()) {
				String^ firstname = reader->GetString(0);
				String^ lastname = reader->GetString(1);
				String^ comment = reader->GetString(2);
				String^ date = reader->GetString(3);
				String^ output = firstname + " " + lastname + " \' " + comment + "\' " + date;

				// Add each comment to the ListBox
				listBox1->Items->Add(output);
			}
		}
		catch (Exception^ ex) {
			// Handle any exceptions thrown during execution
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		// Close the database connection
		con->Close();
	}
	private: System::Void button10_Clicked(System::Object^ sender, System::EventArgs^ e) {

		// Connect to the database
		MySqlConnection^ con = gcnew MySqlConnection("Server=127.0.0.1;Uid=root;Pwd=1234;Database=a2");
		con->Open();

		try {
			MySqlCommand^ cmd = gcnew MySqlCommand("SELECT DISTINCT user.firstname, user.lastname, comment.text, comment.date FROM comment INNER JOIN user ON comment.user_id=user.user_id INNER JOIN photo ON photo.user_id = @user_id AND comment.text LIKE @text;", con);
			cmd->Parameters->AddWithValue("@user_id", this->userId);
			cmd->Parameters->AddWithValue("@text", textBox6->Text + "%");
			MySqlDataReader^ reader = cmd->ExecuteReader();

			listBox1->Items->Clear();

			while (reader->Read()) {
				String^ firstname = reader->GetString(0);
				String^ lastname = reader->GetString(1);
				String^ comment = reader->GetString(2);
				String^ date = reader->GetString(3);
				String^ output = firstname + " " + lastname + " \' " + comment + "\' " + date;

				// Add each comment to the ListBox
				listBox1->Items->Add(output);
			}
		}
		catch (Exception^ ex) {
			// Handle any exceptions thrown during execution
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		// Close the database connection
		con->Close();
	}


	private: System::Void button11_Clicked(System::Object^ sender, System::EventArgs^ e) {

		// Connect to the database
		MySqlConnection^ con = gcnew MySqlConnection("Server=127.0.0.1;Uid=root;Pwd=1234;Database=a2");
		con->Open();

		try {
			int photo_id = -1;
			if (listView2->SelectedItems->Count > 0) {
				String^ url = listView2->SelectedItems[0]->SubItems[0]->Text;
				String^ sqlQuery = "SELECT photo_id FROM photo WHERE url=@url;";
				MySqlCommand^ cmd = gcnew MySqlCommand(sqlQuery, con);
				cmd->Parameters->AddWithValue("@url", url);
				Object^ result = cmd->ExecuteScalar();
				if (result != nullptr) {
					photo_id = Convert::ToInt32(result);
				}
			}

			MySqlCommand^ cmd = gcnew MySqlCommand("INSERT INTO tag (tag_name, user_id, photo_id) VALUES (@tag_name, @user_id, @photo_id);", con);
			cmd->Parameters->AddWithValue("@tag_name", textBox5->Text);
			cmd->Parameters->AddWithValue("@user_id", this->userId);
			cmd->Parameters->AddWithValue("@photo_id", photo_id);
			//con->Open();
			cmd->ExecuteNonQuery();
			con->Close();

			MessageBox::Show("Tag Added");
		}
		catch (Exception^ ex) {
			// Handle any exceptions thrown during execution
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}

	private: System::Void button12_Clicked(System::Object^ sender, System::EventArgs^ e) {

		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=1234;Database=a2";
		MySqlConnection^ con = gcnew MySqlConnection(constr);

		try {
			int photo_id = -1;
			if (listView3->SelectedItems->Count > 0) {
				String^ url = listView3->SelectedItems[0]->SubItems[0]->Text;
				//MessageBox::Show(url); // add this line to display the url value
				String^ sqlQuery = "SELECT photo_id FROM photo WHERE url=@url;";
				MySqlCommand^ cmd = gcnew MySqlCommand(sqlQuery, con);
				cmd->Parameters->AddWithValue("@url", url);
				con->Open();
				Object^ result = cmd->ExecuteScalar();
				if (result != nullptr) {
					photo_id = Convert::ToInt32(result);
					//MessageBox::Show(Convert::ToString(photo_id)); // add this line to display the photoId value
				}
				con->Close();
			}
			// Get the user_id of the current user
			//String^ currentUserEmail = "a"; // replace with actual value
			String^ sqlQuery = "SELECT DISTINCT tag_name FROM tag INNER JOIN photo WHERE tag.photo_id=@photo_id;";
			MySqlCommand^ cmd = gcnew MySqlCommand(sqlQuery, con);
			cmd->Parameters->AddWithValue("@photo_id", photo_id);
			con->Open();
			MySqlDataReader^ reader = cmd->ExecuteReader();

			listBox2->Items->Clear();

			String^ tag = "";
			while (reader->Read()) {
				tag = reader->GetString(0);
				listBox2->Items->Add(tag);
			}

		}
		catch (Exception^ ex) {
			// Handle any exceptions thrown during execution
			MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		// Close the database connection
		con->Close();

	}

private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e) {
		   listView4->Clear();

		   try {
			   String^ constr = "Server=127.0.0.1;Uid=root;Pwd=1234;Database=a2";
			   MySqlConnection^ con = gcnew MySqlConnection(constr);

			   // Get the photo_id of the selected photo
			   int photoId = -1;
			   String^ photoUrl;

			   if (listView3->SelectedItems->Count > 0) {
				   photoUrl = listView3->SelectedItems[0]->SubItems[0]->Text;

				   String^ sqlQuery = "SELECT photo_id FROM photo WHERE url=@photoUrl;";
				   MySqlCommand^ cmd = gcnew MySqlCommand(sqlQuery, con);
				   cmd->Parameters->AddWithValue("@photoUrl", photoUrl);
				   con->Open();
				   Object^ result = cmd->ExecuteScalar();
				   if (result != nullptr) {
					   photoId = Convert::ToInt32(result);

				   }
				   con->Close();
			   }

			   // Get the total likes for the selected photo
			   String^ sqlQuery = "SELECT COUNT(*) FROM likes WHERE photo_id = @photoId;";
			   MySqlCommand^ cmd = gcnew MySqlCommand(sqlQuery, con);
			   cmd->Parameters->AddWithValue("@photoId", photoId);
			   con->Open();
			   Object^ result = cmd->ExecuteScalar();
			   int totalLikes = Convert::ToInt32(result);
			   con->Close();

			   // Add columns to the ListView
			   listView4->Columns->Add("First Name");
			   listView4->Columns->Add("Last Name");

			   // Get the likes and user details for the selected photo
			   sqlQuery = "SELECT user.firstname, user.lastname "
				   "FROM likes "
				   "INNER JOIN user ON likes.user_id = user.user_id "
				   "WHERE likes.photo_id = @photoId;";
			   cmd = gcnew MySqlCommand(sqlQuery, con);
			   cmd->Parameters->AddWithValue("@photoId", photoId);
			   con->Open();
			   MySqlDataReader^ reader = cmd->ExecuteReader();

			   // Add the likes details to the ListView
			   while (reader->Read()) {
				   String^ firstName = reader->GetString(0);
				   String^ lastName = reader->GetString(1);

				   listView4->Items->Add(gcnew ListViewItem(gcnew array<String^>{ firstName + " " + lastName }));
			   }

			   reader->Close();
			   con->Close();

			   // Display the total likes
			   MessageBox::Show("Total Likes: " + totalLikes);
		   }

		   catch (Exception^ ex) {
			   MessageBox::Show(ex->Message);
		   }
}





private: System::Void button14_Click(System::Object^ sender, System::EventArgs^ e) {
	try {
		String^ constr = "Server=127.0.0.1;Uid=root;Pwd=1234;Database=a2";
		MySqlConnection^ con = gcnew MySqlConnection(constr);

		// Get the user_id of the current user
		String^ sqlQuery = "SELECT email FROM user WHERE user_id=@user_id;";
		MySqlCommand^ cmd = gcnew MySqlCommand(sqlQuery, con);
		cmd->Parameters->AddWithValue("@user_id", userId);
		con->Open();
		String^ currentUserEmail = cmd->ExecuteScalar()->ToString();
		con->Close();

		// Display message box to confirm user ID
		String^ message = "Is this the correct user ID: " + userId + "?";
		String^ caption = "Confirm User ID";
		System::Windows::Forms::DialogResult result;
		result = MessageBox::Show(this, message, caption);
		if (result == System::Windows::Forms::DialogResult::No) {
			return;
		}

		// Get a list of suggested photos based on the user's tags
		List<String^>^ suggestedPhotos = gcnew List<String^>();
		sqlQuery = "SELECT photo.url, COUNT(*) AS tagCount "
			"FROM photo "
			"INNER JOIN tag ON photo.photo_id = tag.photo_id "
			"WHERE tag.tag_name IN "
			"(SELECT DISTINCT tag.tag_name FROM tag "
			"INNER JOIN photo ON tag.photo_id = photo.photo_id "
			"WHERE photo.user_id = @userId) "
			"GROUP BY photo.photo_id "
			"ORDER BY tagCount DESC;";

		cmd = gcnew MySqlCommand(sqlQuery, con);
		cmd->Parameters->AddWithValue("@userId", userId);
		con->Open();
		MySqlDataReader^ reader = cmd->ExecuteReader();

		// Create a new ImageList object to store the images
		ImageList^ imageList1 = gcnew ImageList();
		imageList1->ImageSize = System::Drawing::Size(64, 64);
		imageList1->ColorDepth = ColorDepth::Depth32Bit;

		while (reader->Read()) {
			String^ url = reader->GetString(0);

			// Load the image from the URL
			System::Net::WebClient^ webClient = gcnew System::Net::WebClient();
			array<Byte>^ imageBytes = webClient->DownloadData(url);
			System::IO::MemoryStream^ stream = gcnew System::IO::MemoryStream(imageBytes);
			Image^ image = Image::FromStream(stream);

			// Add the image to the image list
			imageList1->Images->Add(image);

			// Create a new ListViewItem and add it to listView5
			ListViewItem^ item = gcnew ListViewItem(gcnew array<String^> { url }, -1);
			item->ImageIndex = imageList1->Images->Count - 1;
			listView5->Items->Add(item);
		}
		reader->Close();
		con->Close();

		// Set the image list for listView5
		listView5->LargeImageList = imageList1;
	}
	catch (Exception^ ex) {
		MessageBox::Show(ex->Message);
	}
}


};
}
