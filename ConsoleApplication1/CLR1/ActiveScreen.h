#pragma once
#include "ResultCleanScreen.h"


namespace CLR1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ActiveScreen
	/// </summary>
	public ref class ActiveScreen : public System::Windows::Forms::Form
	{
	public:
		ActiveScreen(void)
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
		~ActiveScreen()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  VerlaatButton1;
	private: System::Windows::Forms::Label^  ControlleurLabel2;
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
			this->VerlaatButton1 = (gcnew System::Windows::Forms::Button());
			this->ControlleurLabel2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// VerlaatButton1
			// 
			this->VerlaatButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
			this->VerlaatButton1->Location = System::Drawing::Point(256, 144);
			this->VerlaatButton1->Name = L"VerlaatButton1";
			this->VerlaatButton1->Size = System::Drawing::Size(768, 432);
			this->VerlaatButton1->TabIndex = 1;
			this->VerlaatButton1->Text = L"Verlaten";
			this->VerlaatButton1->UseVisualStyleBackColor = true;
			this->VerlaatButton1->Click += gcnew System::EventHandler(this, &ActiveScreen::VerlaatButton1_Click);
			// 
			// ControlleurLabel2
			// 
			this->ControlleurLabel2->AutoSize = true;
			this->ControlleurLabel2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 54));
			this->ControlleurLabel2->Location = System::Drawing::Point(190, 36);
			this->ControlleurLabel2->Name = L"ControlleurLabel2";
			this->ControlleurLabel2->Size = System::Drawing::Size(896, 82);
			this->ControlleurLabel2->TabIndex = 2;
			this->ControlleurLabel2->Text = L"De Viespeuken Controlleur";
			this->ControlleurLabel2->Click += gcnew System::EventHandler(this, &ActiveScreen::ControlleurLabel2_Click);
			// 
			// ActiveScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->ControlleurLabel2);
			this->Controls->Add(this->VerlaatButton1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"ActiveScreen";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L" ";
			this->Load += gcnew System::EventHandler(this, &ActiveScreen::ActiveScreen_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void VerlaatButton1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		ResultCleanScreen^ rcc1 = gcnew ResultCleanScreen();
		rcc1->ShowDialog();

	}
	private: System::Void ControlleurLabel2_Click(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void ActiveScreen_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
