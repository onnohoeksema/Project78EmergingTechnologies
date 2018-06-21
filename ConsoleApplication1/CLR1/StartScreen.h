#pragma once
#include "ActiveScreen.h"

namespace CLR1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StartScreen
	/// </summary>
	public ref class StartScreen : public System::Windows::Forms::Form
	{
	public:
		StartScreen(void)
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
		~StartScreen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  StartApplicationButton;
	private: System::Windows::Forms::Label^  ControlleurLabel1;

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
			this->StartApplicationButton = (gcnew System::Windows::Forms::Button());
			this->ControlleurLabel1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// StartApplicationButton
			// 
			this->StartApplicationButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->StartApplicationButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36));
			this->StartApplicationButton->Location = System::Drawing::Point(256, 144);
			this->StartApplicationButton->Name = L"StartApplicationButton";
			this->StartApplicationButton->Size = System::Drawing::Size(768, 432);
			this->StartApplicationButton->TabIndex = 0;
			this->StartApplicationButton->Text = L"Start Application";
			this->StartApplicationButton->UseVisualStyleBackColor = true;
			this->StartApplicationButton->Click += gcnew System::EventHandler(this, &StartScreen::StartApplicationButton_Click_1);
			// 
			// ControlleurLabel1
			// 
			this->ControlleurLabel1->AutoSize = true;
			this->ControlleurLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 54));
			this->ControlleurLabel1->Location = System::Drawing::Point(190, 36);
			this->ControlleurLabel1->Name = L"ControlleurLabel1";
			this->ControlleurLabel1->Size = System::Drawing::Size(896, 82);
			this->ControlleurLabel1->TabIndex = 3;
			this->ControlleurLabel1->Text = L"De Viespeuken Controlleur";
			// 
			// StartScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->ControlleurLabel1);
			this->Controls->Add(this->StartApplicationButton);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"StartScreen";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StartScreen";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	
	private: System::Void StartApplicationButton_Click_1(System::Object^  sender, System::EventArgs^  e) {
		this->Hide();
		ActiveScreen^ ac1 = gcnew ActiveScreen();
		ac1->ShowDialog();
	}
			 
	};
	
}
