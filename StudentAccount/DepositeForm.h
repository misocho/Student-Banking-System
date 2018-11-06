#pragma once

namespace StudentAccount {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DepositeForm
	/// </summary>
	public ref class DepositeForm : public System::Windows::Forms::Form
	{

	public: 
		String ^ mainregNo2;
	public:
		DepositeForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	public:
		DepositeForm(String ^ num)
		{
			InitializeComponent();
			mainregNo2 = num;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DepositeForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  deposit;

	private: System::Windows::Forms::TextBox^  deposite_txt;



	protected:


	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  balance_lbl;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  regNo_label;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(DepositeForm::typeid));
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->regNo_label = (gcnew System::Windows::Forms::Label());
			this->deposit = (gcnew System::Windows::Forms::Button());
			this->deposite_txt = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->balance_lbl = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->regNo_label);
			this->groupBox1->Controls->Add(this->deposit);
			this->groupBox1->Controls->Add(this->deposite_txt);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->balance_lbl);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(16, 15);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4);
			this->groupBox1->Size = System::Drawing::Size(472, 338);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			// 
			// regNo_label
			// 
			this->regNo_label->AutoSize = true;
			this->regNo_label->Location = System::Drawing::Point(25, 32);
			this->regNo_label->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->regNo_label->Name = L"regNo_label";
			this->regNo_label->Size = System::Drawing::Size(0, 16);
			this->regNo_label->TabIndex = 5;
			// 
			// deposit
			// 
			this->deposit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->deposit->Location = System::Drawing::Point(141, 241);
			this->deposit->Margin = System::Windows::Forms::Padding(4);
			this->deposit->Name = L"deposit";
			this->deposit->Size = System::Drawing::Size(140, 28);
			this->deposit->TabIndex = 4;
			this->deposit->Text = L"DEPOSITE";
			this->deposit->UseVisualStyleBackColor = true;
			this->deposit->Click += gcnew System::EventHandler(this, &DepositeForm::deposite_Click);
			// 
			// deposite_txt
			// 
			this->deposite_txt->Location = System::Drawing::Point(301, 142);
			this->deposite_txt->Margin = System::Windows::Forms::Padding(4);
			this->deposite_txt->Name = L"deposite_txt";
			this->deposite_txt->Size = System::Drawing::Size(132, 22);
			this->deposite_txt->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(25, 143);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(157, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Enter Amount To Deposit";
			// 
			// balance_lbl
			// 
			this->balance_lbl->AutoSize = true;
			this->balance_lbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->balance_lbl->Location = System::Drawing::Point(297, 79);
			this->balance_lbl->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->balance_lbl->Name = L"balance_lbl";
			this->balance_lbl->Size = System::Drawing::Size(57, 16);
			this->balance_lbl->TabIndex = 1;
			this->balance_lbl->Text = L"balance";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(25, 79);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(145, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Current Balance (KsH) :";
			// 
			// DepositeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(504, 368);
			this->Controls->Add(this->groupBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"DepositeForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Deposit Form";
			this->Load += gcnew System::EventHandler(this, &DepositeForm::DepositeForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void DepositeForm_Load(System::Object^  sender, System::EventArgs^  e) {
		regNo_label->Text = mainregNo2;
		
		MYSQL * conn;
		MYSQL_ROW row;
		MYSQL_RES *res;
		int qstate;
		conn = mysql_init(0);
		conn = mysql_real_connect(conn, "localhost", "root", "scorpion234", "comp203", 3306, NULL, 0);
		if (conn) {
			String ^ query = "SELECT balance FROM account WHERE regNo ='" + regNo_label->Text + "'";
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
	private: System::Void deposite_Click(System::Object^  sender, System::EventArgs^  e) {
		MYSQL * conn;
		MYSQL_ROW row;
		MYSQL_RES *res;
		int qstate;
		int qstate2;
		conn = mysql_init(0);
		conn = mysql_real_connect(conn, "localhost", "root", "scorpion234", "comp203", 3306, NULL, 0);
		if (conn) {
			String ^ query = "SELECT balance FROM account WHERE regNo ='" + regNo_label->Text + "'";
			char* q = (char*)(void*)Marshal::StringToHGlobalAnsi(query);
			qstate = mysql_query(conn, q);
			if (!qstate) {
				res = mysql_store_result(conn);
				row = mysql_fetch_row(res);
				String ^ balance = gcnew String(row[0]);
				balance_lbl->Text = balance;
				int ammount = int::Parse(deposite_txt->Text);
				int current_balance = int::Parse(balance_lbl->Text);
				if (ammount > 0) {
					int new_balance = current_balance + ammount;
					String^ totalBalance = new_balance.ToString();
					balance_lbl->Text = totalBalance;
					MessageBox::Show("DEPOSITE WAS SUCCESSFULL\n YOUR NEW BALANCE IS " + totalBalance);
					String ^ query2 = "UPDATE `comp203`.`account` SET `balance` = '" + totalBalance + "' WHERE(`regNo` = '" + regNo_label->Text + "')";

					char* q2 = (char*)(void*)Marshal::StringToHGlobalAnsi(query2);
					qstate2 = mysql_query(conn, q2);
				}
				else {
					MessageBox::Show("INVALID INPUT!!!");
				}
			}
		}
	}
};
}
