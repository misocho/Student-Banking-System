#pragma once

namespace StudentAccount {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SelectAccount
	/// </summary>
	public ref class SelectAccount : public System::Windows::Forms::Form
	{
	public:
		SelectAccount(void)
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
		~SelectAccount()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  savingsAccount;
	private: System::Windows::Forms::Button^  currentAccount;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	protected:


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(SelectAccount::typeid));
			this->savingsAccount = (gcnew System::Windows::Forms::Button());
			this->currentAccount = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// savingsAccount
			// 
			this->savingsAccount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->savingsAccount->Location = System::Drawing::Point(8, 43);
			this->savingsAccount->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->savingsAccount->Name = L"savingsAccount";
			this->savingsAccount->Size = System::Drawing::Size(195, 46);
			this->savingsAccount->TabIndex = 0;
			this->savingsAccount->Text = L"Savings Account";
			this->savingsAccount->UseVisualStyleBackColor = true;
			this->savingsAccount->Click += gcnew System::EventHandler(this, &SelectAccount::savingsAccount_Click);
			// 
			// currentAccount
			// 
			this->currentAccount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->currentAccount->Location = System::Drawing::Point(263, 43);
			this->currentAccount->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->currentAccount->Name = L"currentAccount";
			this->currentAccount->Size = System::Drawing::Size(195, 46);
			this->currentAccount->TabIndex = 1;
			this->currentAccount->Text = L"Current Account";
			this->currentAccount->UseVisualStyleBackColor = true;
			this->currentAccount->Click += gcnew System::EventHandler(this, &SelectAccount::currentAccount_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->savingsAccount);
			this->groupBox1->Controls->Add(this->currentAccount);
			this->groupBox1->Location = System::Drawing::Point(16, 60);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox1->Size = System::Drawing::Size(463, 121);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(101, 26);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(284, 38);
			this->label1->TabIndex = 3;
			this->label1->Text = L"SELECT ACCOUNT TYPE";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(379, 207);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 28);
			this->button1->TabIndex = 4;
			this->button1->Text = L"EXIT";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &SelectAccount::button1_Click);
			// 
			// SelectAccount
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(505, 261);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"SelectAccount";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SelectAccount";
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void savingsAccount_Click(System::Object^  sender, System::EventArgs^  e) {
			this->Hide();
			StudentAccount::SavingsAccountForm form3;
			form3.ShowDialog();
			this->Show();
}
private: System::Void currentAccount_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Hide();
	StudentAccount::CurrentAccountForm  form4;
	form4.ShowDialog();
	this->Show();
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	exit(0);
}
};
}
