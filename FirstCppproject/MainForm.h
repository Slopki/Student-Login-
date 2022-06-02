  #pragma once

namespace FirstCppproject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ tbFirstName;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbLastName;
	private: System::Windows::Forms::Label^ lbWelcome;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnClear;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tbFirstName = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbLastName = (gcnew System::Windows::Forms::TextBox());
			this->lbWelcome = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(31, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 28);
			this->label1->TabIndex = 0;
			this->label1->Text = L"First Name";
			this->label1->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// tbFirstName
			// 
			this->tbFirstName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbFirstName->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbFirstName->Location = System::Drawing::Point(36, 61);
			this->tbFirstName->Name = L"tbFirstName";
			this->tbFirstName->Size = System::Drawing::Size(531, 36);
			this->tbFirstName->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label2->Location = System::Drawing::Point(31, 131);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(97, 28);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Last Name";
			this->label2->Click += gcnew System::EventHandler(this, &MainForm::label2_Click);
			// 
			// tbLastName
			// 
			this->tbLastName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tbLastName->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tbLastName->Location = System::Drawing::Point(36, 162);
			this->tbLastName->Name = L"tbLastName";
			this->tbLastName->Size = System::Drawing::Size(531, 36);
			this->tbLastName->TabIndex = 4;
			// 
			// lbWelcome
			// 
			this->lbWelcome->AutoSize = true;
			this->lbWelcome->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->lbWelcome->Location = System::Drawing::Point(31, 226);
			this->lbWelcome->Name = L"lbWelcome";
			this->lbWelcome->Size = System::Drawing::Size(60, 28);
			this->lbWelcome->TabIndex = 5;
			this->lbWelcome->Text = L"label3";
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->btnClear, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->btnOK, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(36, 383);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(531, 69);
			this->tableLayoutPanel1->TabIndex = 6;
			this->tableLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainForm::tableLayoutPanel1_Paint);
			// 
			// btnClear
			// 
			this->btnClear->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnClear->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnClear->Location = System::Drawing::Point(268, 3);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(260, 63);
			this->btnClear->TabIndex = 8;
			this->btnClear->Text = L"Clear";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &MainForm::btnClear_Click);
			// 
			// btnOK
			// 
			this->btnOK->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->btnOK->Font = (gcnew System::Drawing::Font(L"Segoe Print", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->btnOK->Location = System::Drawing::Point(3, 3);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(259, 63);
			this->btnOK->TabIndex = 7;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &MainForm::OK_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::HotTrack;
			this->ClientSize = System::Drawing::Size(579, 464);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->lbWelcome);
			this->Controls->Add(this->tbLastName);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->tbFirstName);
			this->Controls->Add(this->label1);
			this->MinimumSize = System::Drawing::Size(595, 503);
			this->Name = L"MainForm";
			this->Text = L"Student Login";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tableLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->lbWelcome->Text = "";
    }
private: System::Void OK_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ firstname = this->tbFirstName->Text;
	String^ lastName = this->tbLastName->Text;
	this->lbWelcome->Text = "Hello " + firstname + " " + lastName;
     }
private: System::Void btnClear_Click(System::Object^ sender, System::EventArgs^ e) {
	this->tbFirstName->Text = "";
	this->tbLastName->Text = "";
	this->lbWelcome->Text = "";
    }
};
}
