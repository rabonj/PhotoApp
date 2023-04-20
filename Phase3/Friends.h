#pragma once

namespace Phase3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

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
			this->label2->Location = System::Drawing::Point(436, 91);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(46, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Follower";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(551, 91);
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
			// Friends
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(641, 409);
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
			
		String^ firstName = textBox1->Text;
		String^ constr = "Server =127.0.0.1; Uid=root; Pwd=1234;Database=a2";
		MySqlConnection^ con = gcnew MySqlConnection(constr);
		MySqlDataAdapter^ sda = gcnew MySqlDataAdapter("SELECT firstname FROM user WHERE firstname LIKE '" + firstName + "%'", con);
		DataTable^ dt = gcnew DataTable();
		sda->Fill(dt);
		listBox1->Items->Clear();

		for each (DataRow ^ row in dt->Rows)
		{
			listBox1->Items->Add(row["firstname"]->ToString());
		}

	}


		   int currentUserId;

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	// Get the selected first name from listBox1
	String^ selectedName = listBox1->SelectedItem->ToString();

	// Connect to the database
	String^ constr = "Server=127.0.0.1;Uid=root;Pwd=1234;Database=a2";
	MySqlConnection^ con = gcnew MySqlConnection(constr);
	con->Open();

	// Retrieve the user_id of the selected user
	MySqlCommand^ getUserIdCmd = gcnew MySqlCommand("SELECT user_id FROM user WHERE firstname = @firstName", con);
	getUserIdCmd->Parameters->Add("@firstName", MySqlDbType::VarChar)->Value = selectedName;
	int followedId = Convert::ToInt32(getUserIdCmd->ExecuteScalar());
	// Insert the friend record into the database
	MySqlCommand^ insertCmd = gcnew MySqlCommand("INSERT INTO friend (follower, followed) VALUES (@followerId, @followedId)", con);
	insertCmd->Parameters->Add("@followerId", MySqlDbType::Int32)->Value = currentUserId;
	insertCmd->Parameters->Add("@followedId", MySqlDbType::Int32)->Value = followedId;
	insertCmd->ExecuteNonQuery();

	// Close the database connection
	con->Close();
}








};
}
