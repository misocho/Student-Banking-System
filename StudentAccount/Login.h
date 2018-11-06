#pragma once
#include "MySql.h"
#include <mysql.h>
#include <iostream>
#include <string>


namespace StudentAccount {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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
	private: System::Windows::Forms::Label^  regNo;
	protected:
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  regText;
	private: System::Windows::Forms::TextBox^  pinText;
	private: System::Windows::Forms::Button^  loginButton;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  newAccountButton;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::GroupBox^  loginGroupBox;
	private: System::Windows::Forms::Button^  button1;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->regNo = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->regText = (gcnew System::Windows::Forms::TextBox());
			this->pinText = (gcnew System::Windows::Forms::TextBox());
			this->loginButton = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->newAccountButton = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->loginGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->loginGroupBox->SuspendLayout();
			this->SuspendLayout();
			// 
			// regNo
			// 
			this->regNo->AutoSize = true;
			this->regNo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->regNo->Location = System::Drawing::Point(27, 52);
			this->regNo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->regNo->Name = L"regNo";
			this->regNo->Size = System::Drawing::Size(146, 16);
			this->regNo->TabIndex = 0;
			this->regNo->Text = L"Regisration Number";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(39, 107);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(33, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"PIN";
			// 
			// regText
			// 
			this->regText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->regText->Location = System::Drawing::Point(316, 50);
			this->regText->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->regText->Name = L"regText";
			this->regText->Size = System::Drawing::Size(251, 22);
			this->regText->TabIndex = 2;
			// 
			// pinText
			// 
			this->pinText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pinText->Location = System::Drawing::Point(316, 102);
			this->pinText->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pinText->MaxLength = 4;
			this->pinText->Name = L"pinText";
			this->pinText->PasswordChar = '*';
			this->pinText->Size = System::Drawing::Size(132, 22);
			this->pinText->TabIndex = 3;
			// 
			// loginButton
			// 
			this->loginButton->BackColor = System::Drawing::SystemColors::Control;
			this->loginButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->loginButton->Location = System::Drawing::Point(255, 161);
			this->loginButton->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->loginButton->Name = L"loginButton";
			this->loginButton->Size = System::Drawing::Size(112, 37);
			this->loginButton->TabIndex = 4;
			this->loginButton->Text = L"Login";
			this->loginButton->UseVisualStyleBackColor = false;
			this->loginButton->Click += gcnew System::EventHandler(this, &Login::loginButton_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(288, 217);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(28, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"OR";
			// 
			// newAccountButton
			// 
			this->newAccountButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->newAccountButton->Location = System::Drawing::Point(179, 247);
			this->newAccountButton->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->newAccountButton->Name = L"newAccountButton";
			this->newAccountButton->Size = System::Drawing::Size(252, 28);
			this->newAccountButton->TabIndex = 6;
			this->newAccountButton->Text = L"CREATE NEW ACCOUNT";
			this->newAccountButton->UseVisualStyleBackColor = true;
			this->newAccountButton->Click += gcnew System::EventHandler(this, &Login::newAccountButton_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(169, 74);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(325, 43);
			this->label3->TabIndex = 7;
			this->label3->Text = L"WELCOME TO SUN BANK ";
			// 
			// loginGroupBox
			// 
			this->loginGroupBox->Controls->Add(this->regText);
			this->loginGroupBox->Controls->Add(this->regNo);
			this->loginGroupBox->Controls->Add(this->newAccountButton);
			this->loginGroupBox->Controls->Add(this->pinText);
			this->loginGroupBox->Controls->Add(this->label2);
			this->loginGroupBox->Controls->Add(this->label1);
			this->loginGroupBox->Controls->Add(this->loginButton);
			this->loginGroupBox->Location = System::Drawing::Point(69, 110);
			this->loginGroupBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->loginGroupBox->Name = L"loginGroupBox";
			this->loginGroupBox->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->loginGroupBox->Size = System::Drawing::Size(597, 319);
			this->loginGroupBox->TabIndex = 8;
			this->loginGroupBox->TabStop = false;
			this->loginGroupBox->Enter += gcnew System::EventHandler(this, &Login::loginGroupBox_Enter);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(567, 465);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 9;
			this->button1->Text = L"EXIT";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(703, 518);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->loginGroupBox);
			this->Controls->Add(this->label3);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Login";
			this->loginGroupBox->ResumeLayout(false);
			this->loginGroupBox->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void newAccountButton_Click(System::Object^  sender, System::EventArgs^  e) {
	MYSQL * conn;
	MYSQL_ROW row;
	MYSQL_RES *res;
	int qstate;
	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "localhost", "root", "scorpion234", "comp203", 3306, NULL, 0);

	if (conn) {
		MessageBox::Show("CONNECTION TO DATABASE WAS SUCCESFULL!");
		this->Hide();
		StudentAccount::SelectAccount form2;
		form2.ShowDialog();
		this->Show();
	}
	else {
		MessageBox::Show("CONNECTION TO DATABASE FAILED!");
	}
}
private: System::Void loginButton_Click(System::Object^  sender, System::EventArgs^  e) {
	String ^ regNo = regText->Text;
	String ^ pin = pinText->Text;

	MYSQL * conn;
	MYSQL_ROW row;
	MYSQL_RES *res;
	int qstate;
	conn = mysql_init(0);
	conn = mysql_real_connect(conn, "localhost", "root", "scorpion234", "comp203", 3306, NULL, 0);
	if (conn) {
		MessageBox::Show("CONNECTION TO DATABASE WAS SUCCESFULL!");
		String ^ query = "SELECT pin FROM student WHERE regNo = '" + regNo + "'";
		char* q = (char*)(void*)Marshal::StringToHGlobalAnsi(query);
		qstate = mysql_query(conn, q);
		if (!qstate) {
			res = mysql_store_result(conn);
			row = mysql_fetch_row(res);
			String ^ pin2 = gcnew String(row[0]);
			if (pin == pin2) {
				MessageBox::Show("LOGIN WAS SUCCESSFULL...");

				StudentAccount::SelectActionForm ^form3 = gcnew SelectActionForm(regNo);
				this->Hide();
				form3->ShowDialog();
				this->Show();
			}
			else {
				MessageBox::Show("INVALID USENAME OR PASSWORD!!");
			}
		}
		else {
			MessageBox::Show("THERE WAS A PROBLEM WHLIE CONNECTING TO THE DATABASE!!");
		}
	}
	else {
		MessageBox::Show("CONNECTION TO DATABASE FAILED!");
	}
}
private: System::Void loginGroupBox_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	exit(0);
}
};
}
