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
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Summary for BalanceForm
	/// </summary>
	public ref class BalanceForm : public System::Windows::Forms::Form
	{
	public:
		String ^ mainregNo4;
	public:
		BalanceForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	public:
		BalanceForm(String ^ num)
		{
			InitializeComponent();
			mainregNo4 = num;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~BalanceForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  regNo4_lbl;
	protected:
	private: System::Windows::Forms::Label^  balance_lbl;
	private: System::Windows::Forms::Label^  label1;

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
			this->regNo4_lbl = (gcnew System::Windows::Forms::Label());
			this->balance_lbl = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// regNo4_lbl
			// 
			this->regNo4_lbl->AutoSize = true;
			this->regNo4_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->regNo4_lbl->Location = System::Drawing::Point(37, 31);
			this->regNo4_lbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->regNo4_lbl->Name = L"regNo4_lbl";
			this->regNo4_lbl->Size = System::Drawing::Size(0, 16);
			this->regNo4_lbl->TabIndex = 0;
			// 
			// balance_lbl
			// 
			this->balance_lbl->AutoSize = true;
			this->balance_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->balance_lbl->Location = System::Drawing::Point(268, 105);
			this->balance_lbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->balance_lbl->Name = L"balance_lbl";
			this->balance_lbl->Size = System::Drawing::Size(0, 16);
			this->balance_lbl->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(37, 105);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 16);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Current Balance (KsH) :";
			// 
			// BalanceForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(463, 235);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->balance_lbl);
			this->Controls->Add(this->regNo4_lbl);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"BalanceForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Balance Form";
			this->Load += gcnew System::EventHandler(this, &BalanceForm::BalanceForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BalanceForm_Load(System::Object^  sender, System::EventArgs^  e) {
		regNo4_lbl->Text = mainregNo4;


		MYSQL * conn;
		MYSQL_ROW row;
		MYSQL_RES *res;
		int qstate;
		conn = mysql_init(0);
		conn = mysql_real_connect(conn, "localhost", "root", "scorpion234", "comp203", 3306, NULL, 0);
		if (conn) {
			String ^ query = "SELECT balance FROM account WHERE regNo ='" + regNo4_lbl->Text + "'";
			char* q = (char*)(void*)Marshal::StringToHGlobalAnsi(query);
			qstate = mysql_query(conn, q);
			if (!qstate) {
				res = mysql_store_result(conn);
				row = mysql_fetch_row(res);
				String ^ balance = gcnew String(row[0]);
				balance_lbl->Text = balance;
			}
			else {
				MessageBox::Show("QUERRY ERROR");
			}
		}
		else {
			MessageBox::Show("THERE WAS AN ERROR CONNECTING TO THE DATABASE");
		}
	}
	};
	}
