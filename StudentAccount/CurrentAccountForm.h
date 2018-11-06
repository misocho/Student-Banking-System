#pragma once
#include "MySql.h"
#include <mysql.h>
#include <iostream>
#include <string>

using namespace std;
using namespace System::Runtime::InteropServices;

namespace StudentAccount {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CurrentAccountForm
	/// </summary>
	public ref class CurrentAccountForm : public System::Windows::Forms::Form
	{
	public:
		CurrentAccountForm(void)
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
		~CurrentAccountForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label3;
	protected:
	private: System::Windows::Forms::Button^  submit;
	private: System::Windows::Forms::TextBox^  yearOfStudy_txt;

	private: System::Windows::Forms::Label^  yearofStudy;
	private: System::Windows::Forms::TextBox^  course_txt;

	private: System::Windows::Forms::Label^  course;
	private: System::Windows::Forms::TextBox^  regNo_txt;

	private: System::Windows::Forms::Label^  regNo;
	private: System::Windows::Forms::TextBox^  secondName_txt;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  physicalAddress;
	private: System::Windows::Forms::TextBox^  telephone_txt;

	private: System::Windows::Forms::Label^  telephone;
	private: System::Windows::Forms::TextBox^  email_txt;

	private: System::Windows::Forms::Label^  email;
	private: System::Windows::Forms::TextBox^  university_txt;

	private: System::Windows::Forms::Label^  university;
	private: System::Windows::Forms::TextBox^  firstName_txt;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::DateTimePicker^  date_txt;
	private: System::Windows::Forms::TextBox^  account_txt;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  confirmpin_txt;

	private: System::Windows::Forms::TextBox^  pin_txt;

	private: System::Windows::Forms::Label^  label5;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(CurrentAccountForm::typeid));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->submit = (gcnew System::Windows::Forms::Button());
			this->yearOfStudy_txt = (gcnew System::Windows::Forms::TextBox());
			this->yearofStudy = (gcnew System::Windows::Forms::Label());
			this->course_txt = (gcnew System::Windows::Forms::TextBox());
			this->course = (gcnew System::Windows::Forms::Label());
			this->regNo_txt = (gcnew System::Windows::Forms::TextBox());
			this->regNo = (gcnew System::Windows::Forms::Label());
			this->secondName_txt = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->physicalAddress = (gcnew System::Windows::Forms::Label());
			this->telephone_txt = (gcnew System::Windows::Forms::TextBox());
			this->telephone = (gcnew System::Windows::Forms::Label());
			this->email_txt = (gcnew System::Windows::Forms::TextBox());
			this->email = (gcnew System::Windows::Forms::Label());
			this->university_txt = (gcnew System::Windows::Forms::TextBox());
			this->university = (gcnew System::Windows::Forms::Label());
			this->firstName_txt = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->confirmpin_txt = (gcnew System::Windows::Forms::TextBox());
			this->pin_txt = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->account_txt = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->date_txt = (gcnew System::Windows::Forms::DateTimePicker());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(276, 25);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(503, 38);
			this->label3->TabIndex = 3;
			this->label3->Text = L"PLEASE PROVIDE THE FOLLOWING DETAILS";
			// 
			// submit
			// 
			this->submit->Location = System::Drawing::Point(373, 519);
			this->submit->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->submit->Name = L"submit";
			this->submit->Size = System::Drawing::Size(149, 27);
			this->submit->TabIndex = 2;
			this->submit->Text = L"SUBMIT";
			this->submit->UseVisualStyleBackColor = true;
			this->submit->Click += gcnew System::EventHandler(this, &CurrentAccountForm::submit_Click);
			// 
			// yearOfStudy_txt
			// 
			this->yearOfStudy_txt->Location = System::Drawing::Point(216, 466);
			this->yearOfStudy_txt->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->yearOfStudy_txt->Name = L"yearOfStudy_txt";
			this->yearOfStudy_txt->Size = System::Drawing::Size(132, 22);
			this->yearOfStudy_txt->TabIndex = 1;
			// 
			// yearofStudy
			// 
			this->yearofStudy->AutoSize = true;
			this->yearofStudy->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->yearofStudy->Location = System::Drawing::Point(23, 470);
			this->yearofStudy->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->yearofStudy->Name = L"yearofStudy";
			this->yearofStudy->Size = System::Drawing::Size(88, 16);
			this->yearofStudy->TabIndex = 0;
			this->yearofStudy->Text = L"Year of Study";
			// 
			// course_txt
			// 
			this->course_txt->Location = System::Drawing::Point(216, 306);
			this->course_txt->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->course_txt->Name = L"course_txt";
			this->course_txt->Size = System::Drawing::Size(132, 22);
			this->course_txt->TabIndex = 1;
			// 
			// course
			// 
			this->course->AutoSize = true;
			this->course->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->course->Location = System::Drawing::Point(23, 310);
			this->course->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->course->Name = L"course";
			this->course->Size = System::Drawing::Size(51, 16);
			this->course->TabIndex = 0;
			this->course->Text = L"Course";
			// 
			// regNo_txt
			// 
			this->regNo_txt->Location = System::Drawing::Point(216, 215);
			this->regNo_txt->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->regNo_txt->Name = L"regNo_txt";
			this->regNo_txt->Size = System::Drawing::Size(132, 22);
			this->regNo_txt->TabIndex = 1;
			// 
			// regNo
			// 
			this->regNo->AutoSize = true;
			this->regNo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->regNo->Location = System::Drawing::Point(23, 219);
			this->regNo->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->regNo->Name = L"regNo";
			this->regNo->Size = System::Drawing::Size(88, 16);
			this->regNo->TabIndex = 0;
			this->regNo->Text = L"Reg. Number";
			// 
			// secondName_txt
			// 
			this->secondName_txt->Location = System::Drawing::Point(216, 132);
			this->secondName_txt->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->secondName_txt->Name = L"secondName_txt";
			this->secondName_txt->Size = System::Drawing::Size(132, 22);
			this->secondName_txt->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(23, 135);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 16);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Second Name";
			// 
			// physicalAddress
			// 
			this->physicalAddress->AutoSize = true;
			this->physicalAddress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->physicalAddress->Location = System::Drawing::Point(23, 386);
			this->physicalAddress->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->physicalAddress->Name = L"physicalAddress";
			this->physicalAddress->Size = System::Drawing::Size(82, 16);
			this->physicalAddress->TabIndex = 0;
			this->physicalAddress->Text = L"Date Of Birth";
			// 
			// telephone_txt
			// 
			this->telephone_txt->Location = System::Drawing::Point(693, 137);
			this->telephone_txt->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->telephone_txt->Name = L"telephone_txt";
			this->telephone_txt->Size = System::Drawing::Size(132, 22);
			this->telephone_txt->TabIndex = 1;
			// 
			// telephone
			// 
			this->telephone->AutoSize = true;
			this->telephone->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->telephone->Location = System::Drawing::Point(500, 137);
			this->telephone->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->telephone->Name = L"telephone";
			this->telephone->Size = System::Drawing::Size(74, 16);
			this->telephone->TabIndex = 0;
			this->telephone->Text = L"Telephone";
			// 
			// email_txt
			// 
			this->email_txt->Location = System::Drawing::Point(693, 210);
			this->email_txt->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->email_txt->Name = L"email_txt";
			this->email_txt->Size = System::Drawing::Size(132, 22);
			this->email_txt->TabIndex = 1;
			// 
			// email
			// 
			this->email->AutoSize = true;
			this->email->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email->Location = System::Drawing::Point(520, 215);
			this->email->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->email->Name = L"email";
			this->email->Size = System::Drawing::Size(42, 16);
			this->email->TabIndex = 0;
			this->email->Text = L"Email";
			// 
			// university_txt
			// 
			this->university_txt->Location = System::Drawing::Point(693, 44);
			this->university_txt->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->university_txt->Name = L"university_txt";
			this->university_txt->Size = System::Drawing::Size(132, 22);
			this->university_txt->TabIndex = 1;
			// 
			// university
			// 
			this->university->AutoSize = true;
			this->university->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->university->Location = System::Drawing::Point(500, 50);
			this->university->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->university->Name = L"university";
			this->university->Size = System::Drawing::Size(67, 16);
			this->university->TabIndex = 0;
			this->university->Text = L"University";
			// 
			// firstName_txt
			// 
			this->firstName_txt->Location = System::Drawing::Point(216, 46);
			this->firstName_txt->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->firstName_txt->Name = L"firstName_txt";
			this->firstName_txt->Size = System::Drawing::Size(132, 22);
			this->firstName_txt->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(23, 49);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"First Name";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->confirmpin_txt);
			this->groupBox1->Controls->Add(this->pin_txt);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->account_txt);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->date_txt);
			this->groupBox1->Controls->Add(this->submit);
			this->groupBox1->Controls->Add(this->yearOfStudy_txt);
			this->groupBox1->Controls->Add(this->yearofStudy);
			this->groupBox1->Controls->Add(this->course_txt);
			this->groupBox1->Controls->Add(this->course);
			this->groupBox1->Controls->Add(this->regNo_txt);
			this->groupBox1->Controls->Add(this->regNo);
			this->groupBox1->Controls->Add(this->secondName_txt);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->physicalAddress);
			this->groupBox1->Controls->Add(this->telephone_txt);
			this->groupBox1->Controls->Add(this->telephone);
			this->groupBox1->Controls->Add(this->email_txt);
			this->groupBox1->Controls->Add(this->email);
			this->groupBox1->Controls->Add(this->university_txt);
			this->groupBox1->Controls->Add(this->university);
			this->groupBox1->Controls->Add(this->firstName_txt);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(53, 58);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Size = System::Drawing::Size(907, 571);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(517, 466);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(75, 16);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Confirm Pin";
			// 
			// confirmpin_txt
			// 
			this->confirmpin_txt->Location = System::Drawing::Point(693, 465);
			this->confirmpin_txt->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->confirmpin_txt->MaxLength = 4;
			this->confirmpin_txt->Name = L"confirmpin_txt";
			this->confirmpin_txt->PasswordChar = '*';
			this->confirmpin_txt->Size = System::Drawing::Size(132, 22);
			this->confirmpin_txt->TabIndex = 8;
			// 
			// pin_txt
			// 
			this->pin_txt->Location = System::Drawing::Point(693, 382);
			this->pin_txt->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pin_txt->MaxLength = 4;
			this->pin_txt->Name = L"pin_txt";
			this->pin_txt->PasswordChar = '*';
			this->pin_txt->Size = System::Drawing::Size(132, 22);
			this->pin_txt->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(517, 386);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(27, 16);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Pin";
			// 
			// account_txt
			// 
			this->account_txt->Location = System::Drawing::Point(693, 311);
			this->account_txt->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->account_txt->Name = L"account_txt";
			this->account_txt->ReadOnly = true;
			this->account_txt->Size = System::Drawing::Size(132, 22);
			this->account_txt->TabIndex = 5;
			this->account_txt->Text = L"Current Account";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(513, 311);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 16);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Account Type";
			// 
			// date_txt
			// 
			this->date_txt->CustomFormat = L"MM/dd/yyyy";
			this->date_txt->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->date_txt->Location = System::Drawing::Point(216, 382);
			this->date_txt->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->date_txt->MaxDate = System::DateTime(2000, 12, 31, 0, 0, 0, 0);
			this->date_txt->MinDate = System::DateTime(1921, 1, 1, 0, 0, 0, 0);
			this->date_txt->Name = L"date_txt";
			this->date_txt->Size = System::Drawing::Size(152, 22);
			this->date_txt->TabIndex = 3;
			this->date_txt->Value = System::DateTime(1989, 12, 25, 0, 0, 0, 0);
			// 
			// CurrentAccountForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1013, 638);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->groupBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"CurrentAccountForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Current Account Form";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void submit_Click(System::Object^  sender, System::EventArgs^  e) {
		MYSQL * conn;
		MYSQL_ROW row;
		MYSQL_RES *res;
		int qstate;
		int qstate2;
		int qstate3;
		String ^ accountNumber;
		conn = mysql_init(0);
		conn = mysql_real_connect(conn, "localhost", "root", "scorpion234", "comp203", 3306, NULL, 0);
		if (conn) {

			String ^ regNo = regNo_txt->Text; String ^ firstName = firstName_txt->Text; String ^ secondName = secondName_txt->Text; String ^ course = course_txt->Text; String ^ yearOfStudy = yearOfStudy_txt->Text; String ^ university = university_txt->Text;
			String ^ telephone = telephone_txt->Text; String ^ email = email_txt->Text; String ^ date = date_txt->Text; String ^ account = account_txt->Text;
			String ^ pin = pin_txt->Text; String ^ confirmpin = confirmpin_txt->Text;
			
			if (pin == confirmpin) {

				String ^ query = "INSERT INTO `comp203`.`student` (`regNo`, `firstName`, `secondName`, `course`, `yearOfStudy`, `university`, `telephone`, `email`, `dateOfBirth`, `accountType`,`pin`) VALUES ('" + regNo + "','" + firstName + "','" + secondName + "','" + course + "','" + yearOfStudy + "','" + university + "','" + telephone + "','" + email + "','" + date + "','" + account + "','" + pin + "')";

				char* q = (char*)(void*)Marshal::StringToHGlobalAnsi(query);
				qstate = mysql_query(conn, q);
				if (!qstate) {

					MessageBox::Show("RECORDS INSERTED SUCCESSFULLY...");
					String ^ accountn = telephone->Substring(4, 9);
					accountNumber = "0345" + accountn;
					MessageBox::Show("Your Account Number is\n" + accountNumber);
					MessageBox::Show("CHEQUE BOOK ISSUED");
					String ^ query2 = "INSERT INTO `comp203`.`account` (`accountNumber`, `regNo`, `balance`) VALUES ('" + accountNumber + "','" + regNo + "','" + "0')";
					char* q2 = (char*)(void*)Marshal::StringToHGlobalAnsi(query2);
					qstate2 = mysql_query(conn, q2);
					String ^ query3 = "UPDATE `comp203`.`student` SET `accountNumber` = '" + accountNumber + "' WHERE (`regNo` = '" + regNo + "') and (`accountType` = '" + account + "')";

					char* q3 = (char*)(void*)Marshal::StringToHGlobalAnsi(query3);
					qstate3 = mysql_query(conn, q3);
					if (!qstate2) {

						MessageBox::Show("RECORDS INSERTED SUCCESSFULLY...");
					}
					else {
						MessageBox::Show("QUERRY ERROR");
					}
					if (!qstate3) {

						MessageBox::Show("RECORDS UPDATED SUCCESSFULLY...");
					}
					else {
						MessageBox::Show("QUERRY ERROR");
					}
					
				}
				else {
					MessageBox::Show("QUERRY ERROR");
				}
			}
			else {
				MessageBox::Show("PIN DONT MATCH");
			}
		}
		
	else {
			MessageBox::Show("THERE WAS A PROBLEM WITH THE CONNECTION!!!!");
		}
	}

};
}
