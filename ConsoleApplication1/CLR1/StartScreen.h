#pragma once

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
			this->SuspendLayout();
			// 
			// StartApplicationButton
			// 
			this->StartApplicationButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->StartApplicationButton->Location = System::Drawing::Point(358, 235);
			this->StartApplicationButton->Name = L"StartApplicationButton";
			this->StartApplicationButton->Size = System::Drawing::Size(354, 226);
			this->StartApplicationButton->TabIndex = 0;
			this->StartApplicationButton->Text = L"Start Application";
			this->StartApplicationButton->UseVisualStyleBackColor = true;
			// 
			// StartScreen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1264, 681);
			this->Controls->Add(this->StartApplicationButton);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"StartScreen";
			this->Text = L"StartScreen";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
