#pragma once
#include "StartScreen.h"

namespace CLR1 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ResultDirtyScreen
	/// </summary>
	public ref class ResultDirtyScreen : public System::Windows::Forms::Form
	{
	public:
		ResultDirtyScreen(void)
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
		~ResultDirtyScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  CorrectButton2;
	protected:

	internal: System::Windows::Forms::Button^  IncorrectButton2;
	private:

	private: System::Windows::Forms::Label^  ControlleurLabel5;
	private: System::Windows::Forms::Label^  ViesLabel1;


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
			this->CorrectButton2 = (gcnew System::Windows::Forms::Button());
			this->IncorrectButton2 = (gcnew System::Windows::Forms::Button());
			this->ControlleurLabel5 = (gcnew System::Windows::Forms::Label());
			this->ViesLabel1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// CorrectButton2
			// 
			this->CorrectButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
			this->CorrectButton2->Location = System::Drawing::Point(128, 360);
			this->CorrectButton2->Name = L"CorrectButton2";
			this->CorrectButton2->Size = System::Drawing::Size(384, 216);
			this->CorrectButton2->TabIndex = 2;
			this->CorrectButton2->Text = L"Correct";
			this->CorrectButton2->UseVisualStyleBackColor = true;
			this->CorrectButton2->Click += gcnew System::EventHandler(this, &ResultDirtyScreen::CorrectButton1_Click);
			// 
			// IncorrectButton2
			// 
			this->IncorrectButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
			this->IncorrectButton2->Location = System::Drawing::Point(768, 360);
			this->IncorrectButton2->Name = L"IncorrectButton2";
			this->IncorrectButton2->Size = System::Drawing::Size(384, 216);
			this->IncorrectButton2->TabIndex = 3;
			this->IncorrectButton2->Text = L"Incorrect";
			this->IncorrectButton2->UseVisualStyleBackColor = true;
			this->IncorrectButton2->Click += gcnew System::EventHandler(this, &ResultDirtyScreen::IncorrectButton2_Click);
			// 
			// ControlleurLabel5
			// 
			this->ControlleurLabel5->AutoSize = true;
			this->ControlleurLabel5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 54));
			this->ControlleurLabel5->Location = System::Drawing::Point(190, 36);
			this->ControlleurLabel5->Name = L"ControlleurLabel5";
			this->ControlleurLabel5->Size = System::Drawing::Size(896, 82);
			this->ControlleurLabel5->TabIndex = 4;
			this->ControlleurLabel5->Text = L"De Viespeuken Controlleur";
			// 
			// ViesLabel1
			// 
			this->ViesLabel1->AutoSize = true;
			this->ViesLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
			this->ViesLabel1->Location = System::Drawing::Point(450, 196);
			this->ViesLabel1->Name = L"ViesLabel1";
			this->ViesLabel1->Size = System::Drawing::Size(391, 55);
			this->ViesLabel1->TabIndex = 7;
			this->ViesLabel1->Text = L"De kamer is vies!";
			// 
			// ResultDirtyScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->ViesLabel1);
			this->Controls->Add(this->ControlleurLabel5);
			this->Controls->Add(this->IncorrectButton2);
			this->Controls->Add(this->CorrectButton2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"ResultDirtyScreen";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ResultDirtyScreen";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void CorrectButton1_Click(System::Object^  sender, System::EventArgs^  e) {
		
	}
	private: System::Void IncorrectButton2_Click(System::Object^  sender, System::EventArgs^  e) {
		
	}
};
}
