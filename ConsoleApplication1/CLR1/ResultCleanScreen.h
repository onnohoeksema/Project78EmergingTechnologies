#pragma once

namespace CLR1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ResultCleanScreen
	/// </summary>
	public ref class ResultCleanScreen : public System::Windows::Forms::Form
	{
	public:
		ResultCleanScreen(void)
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
		~ResultCleanScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  CorrectButton1;
	private: System::Windows::Forms::Button^  IncorrectButton1;

	private: System::Windows::Forms::Label^  ControlleurLabel4;

	private: System::Windows::Forms::Label^  SchoonLabel1;


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
			this->CorrectButton1 = (gcnew System::Windows::Forms::Button());
			this->IncorrectButton1 = (gcnew System::Windows::Forms::Button());
			this->ControlleurLabel4 = (gcnew System::Windows::Forms::Label());
			this->SchoonLabel1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// CorrectButton1
			// 
			this->CorrectButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
			this->CorrectButton1->Location = System::Drawing::Point(128, 360);
			this->CorrectButton1->Name = L"CorrectButton1";
			this->CorrectButton1->Size = System::Drawing::Size(384, 216);
			this->CorrectButton1->TabIndex = 2;
			this->CorrectButton1->Text = L"Correct";
			this->CorrectButton1->UseVisualStyleBackColor = true;
			this->CorrectButton1->Click += gcnew System::EventHandler(this, &ResultCleanScreen::CorrectButton1_Click);
			// 
			// IncorrectButton1
			// 
			this->IncorrectButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
			this->IncorrectButton1->Location = System::Drawing::Point(768, 360);
			this->IncorrectButton1->Name = L"IncorrectButton1";
			this->IncorrectButton1->Size = System::Drawing::Size(384, 216);
			this->IncorrectButton1->TabIndex = 3;
			this->IncorrectButton1->Text = L"Incorrect";
			this->IncorrectButton1->UseVisualStyleBackColor = true;
			this->IncorrectButton1->Click += gcnew System::EventHandler(this, &ResultCleanScreen::IncorrectButton2_Click);
			// 
			// ControlleurLabel4
			// 
			this->ControlleurLabel4->AutoSize = true;
			this->ControlleurLabel4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 54));
			this->ControlleurLabel4->Location = System::Drawing::Point(190, 36);
			this->ControlleurLabel4->Name = L"ControlleurLabel4";
			this->ControlleurLabel4->Size = System::Drawing::Size(896, 82);
			this->ControlleurLabel4->TabIndex = 4;
			this->ControlleurLabel4->Text = L"De Viespeuken Controlleur";
			// 
			// SchoonLabel1
			// 
			this->SchoonLabel1->AutoSize = true;
			this->SchoonLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
			this->SchoonLabel1->Location = System::Drawing::Point(420, 196);
			this->SchoonLabel1->Name = L"SchoonLabel1";
			this->SchoonLabel1->Size = System::Drawing::Size(462, 55);
			this->SchoonLabel1->TabIndex = 6;
			this->SchoonLabel1->Text = L"De kamer is schoon!";
			// 
			// ResultCleanScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->SchoonLabel1);
			this->Controls->Add(this->ControlleurLabel4);
			this->Controls->Add(this->IncorrectButton1);
			this->Controls->Add(this->CorrectButton1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"ResultCleanScreen";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ResultCleanScreen";
			this->Load += gcnew System::EventHandler(this, &ResultCleanScreen::ResultCleanScreen_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CorrectButton1_Click(System::Object^  sender, System::EventArgs^  e) {
		
	}
	private: System::Void IncorrectButton2_Click(System::Object^  sender, System::EventArgs^  e) {
		
	}
private: System::Void ResultCleanScreen_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
