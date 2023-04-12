#pragma once

namespace PolinomForm {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::NumericUpDown^ numericUpDownMaxDegree;
	protected:

	protected:


	private: System::Windows::Forms::Label^ labelMaxDegree;
	private: System::Windows::Forms::Label^ labelCountVar;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownCountVar;
	private: System::Windows::Forms::Button^ buttonReset;






































	private: System::Windows::Forms::GroupBox^ groupBoxOperations;


	private: System::Windows::Forms::Button^ buttonAdd;

	private: System::Windows::Forms::Button^ buttonDiff;

	private: System::Windows::Forms::Button^ buttonMult;

	private: System::Windows::Forms::Button^ buttonSwapPolinoms;
	private: System::Windows::Forms::Label^ labelPolinomOne;
	private: System::Windows::Forms::TextBox^ textBoxPolinomOne;
	private: System::Windows::Forms::Label^ labelPolinomTwo;
	private: System::Windows::Forms::TextBox^ textBoxPolinomTwo;
	private: System::Windows::Forms::Label^ labelPolinomResult;
	private: System::Windows::Forms::TextBox^ textBoxPolinomResult;
	private: System::Windows::Forms::Button^ buttonClearPolinomOne;
	private: System::Windows::Forms::Button^ buttonClearPolinomTwo;
	private: System::Windows::Forms::Button^ buttonClearAllPolinoms;
	private: System::Windows::Forms::GroupBox^ groupBoxWorkSpace;
	private: System::Windows::Forms::Button^ ExitButton;









	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->numericUpDownMaxDegree = (gcnew System::Windows::Forms::NumericUpDown());
			this->labelMaxDegree = (gcnew System::Windows::Forms::Label());
			this->labelCountVar = (gcnew System::Windows::Forms::Label());
			this->numericUpDownCountVar = (gcnew System::Windows::Forms::NumericUpDown());
			this->buttonReset = (gcnew System::Windows::Forms::Button());
			this->groupBoxOperations = (gcnew System::Windows::Forms::GroupBox());
			this->buttonSwapPolinoms = (gcnew System::Windows::Forms::Button());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->buttonDiff = (gcnew System::Windows::Forms::Button());
			this->buttonMult = (gcnew System::Windows::Forms::Button());
			this->labelPolinomOne = (gcnew System::Windows::Forms::Label());
			this->textBoxPolinomOne = (gcnew System::Windows::Forms::TextBox());
			this->labelPolinomTwo = (gcnew System::Windows::Forms::Label());
			this->textBoxPolinomTwo = (gcnew System::Windows::Forms::TextBox());
			this->labelPolinomResult = (gcnew System::Windows::Forms::Label());
			this->textBoxPolinomResult = (gcnew System::Windows::Forms::TextBox());
			this->buttonClearPolinomOne = (gcnew System::Windows::Forms::Button());
			this->buttonClearPolinomTwo = (gcnew System::Windows::Forms::Button());
			this->buttonClearAllPolinoms = (gcnew System::Windows::Forms::Button());
			this->groupBoxWorkSpace = (gcnew System::Windows::Forms::GroupBox());
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownMaxDegree))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCountVar))->BeginInit();
			this->groupBoxOperations->SuspendLayout();
			this->groupBoxWorkSpace->SuspendLayout();
			this->SuspendLayout();
			// 
			// numericUpDownMaxDegree
			// 
			this->numericUpDownMaxDegree->Cursor = System::Windows::Forms::Cursors::Hand;
			this->numericUpDownMaxDegree->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDownMaxDegree->Location = System::Drawing::Point(47, 43);
			this->numericUpDownMaxDegree->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDownMaxDegree->Name = L"numericUpDownMaxDegree";
			this->numericUpDownMaxDegree->Size = System::Drawing::Size(109, 22);
			this->numericUpDownMaxDegree->TabIndex = 2;
			this->numericUpDownMaxDegree->TabStop = false;
			this->numericUpDownMaxDegree->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDownMaxDegree->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDownMaxDegree_ValueChanged);
			// 
			// labelMaxDegree
			// 
			this->labelMaxDegree->AutoSize = true;
			this->labelMaxDegree->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelMaxDegree->Location = System::Drawing::Point(53, 69);
			this->labelMaxDegree->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelMaxDegree->Name = L"labelMaxDegree";
			this->labelMaxDegree->Size = System::Drawing::Size(103, 22);
			this->labelMaxDegree->TabIndex = 3;
			this->labelMaxDegree->Text = L"Max power";
			// 
			// labelCountVar
			// 
			this->labelCountVar->AutoSize = true;
			this->labelCountVar->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelCountVar->Location = System::Drawing::Point(240, 69);
			this->labelCountVar->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelCountVar->Name = L"labelCountVar";
			this->labelCountVar->Size = System::Drawing::Size(60, 22);
			this->labelCountVar->TabIndex = 5;
			this->labelCountVar->Text = L"Count";
			// 
			// numericUpDownCountVar
			// 
			this->numericUpDownCountVar->Cursor = System::Windows::Forms::Cursors::Hand;
			this->numericUpDownCountVar->Font = (gcnew System::Drawing::Font(L"Tahoma", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDownCountVar->Location = System::Drawing::Point(220, 43);
			this->numericUpDownCountVar->Margin = System::Windows::Forms::Padding(2);
			this->numericUpDownCountVar->Name = L"numericUpDownCountVar";
			this->numericUpDownCountVar->Size = System::Drawing::Size(109, 22);
			this->numericUpDownCountVar->TabIndex = 4;
			this->numericUpDownCountVar->TabStop = false;
			this->numericUpDownCountVar->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpDownCountVar->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDownCountVar_ValueChanged);
			// 
			// buttonReset
			// 
			this->buttonReset->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->buttonReset->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonReset->Enabled = false;
			this->buttonReset->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonReset->Location = System::Drawing::Point(380, 27);
			this->buttonReset->Margin = System::Windows::Forms::Padding(2);
			this->buttonReset->Name = L"buttonReset";
			this->buttonReset->Size = System::Drawing::Size(124, 48);
			this->buttonReset->TabIndex = 9;
			this->buttonReset->TabStop = false;
			this->buttonReset->Text = L"Reset";
			this->buttonReset->UseVisualStyleBackColor = false;
			this->buttonReset->Click += gcnew System::EventHandler(this, &MyForm::buttonReset_Click);
			// 
			// groupBoxOperations
			// 
			this->groupBoxOperations->Controls->Add(this->buttonSwapPolinoms);
			this->groupBoxOperations->Controls->Add(this->buttonAdd);
			this->groupBoxOperations->Controls->Add(this->buttonDiff);
			this->groupBoxOperations->Controls->Add(this->buttonMult);
			this->groupBoxOperations->Enabled = false;
			this->groupBoxOperations->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBoxOperations->Location = System::Drawing::Point(601, 110);
			this->groupBoxOperations->Margin = System::Windows::Forms::Padding(2);
			this->groupBoxOperations->Name = L"groupBoxOperations";
			this->groupBoxOperations->Padding = System::Windows::Forms::Padding(2);
			this->groupBoxOperations->Size = System::Drawing::Size(207, 288);
			this->groupBoxOperations->TabIndex = 11;
			this->groupBoxOperations->TabStop = false;
			this->groupBoxOperations->Text = L"Operation";
			// 
			// buttonSwapPolinoms
			// 
			this->buttonSwapPolinoms->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->buttonSwapPolinoms->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonSwapPolinoms->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSwapPolinoms->Location = System::Drawing::Point(36, 207);
			this->buttonSwapPolinoms->Margin = System::Windows::Forms::Padding(2);
			this->buttonSwapPolinoms->Name = L"buttonSwapPolinoms";
			this->buttonSwapPolinoms->Size = System::Drawing::Size(143, 50);
			this->buttonSwapPolinoms->TabIndex = 12;
			this->buttonSwapPolinoms->TabStop = false;
			this->buttonSwapPolinoms->Text = L"Swap Polinoms";
			this->buttonSwapPolinoms->UseVisualStyleBackColor = false;
			this->buttonSwapPolinoms->Click += gcnew System::EventHandler(this, &MyForm::buttonSwapPolinoms_Click);
			// 
			// buttonAdd
			// 
			this->buttonAdd->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->buttonAdd->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonAdd->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonAdd->Location = System::Drawing::Point(36, 19);
			this->buttonAdd->Margin = System::Windows::Forms::Padding(2);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(143, 45);
			this->buttonAdd->TabIndex = 11;
			this->buttonAdd->TabStop = false;
			this->buttonAdd->Text = L"Summation";
			this->buttonAdd->UseVisualStyleBackColor = false;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &MyForm::buttonAdd_Click);
			// 
			// buttonDiff
			// 
			this->buttonDiff->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->buttonDiff->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonDiff->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDiff->Location = System::Drawing::Point(36, 77);
			this->buttonDiff->Margin = System::Windows::Forms::Padding(2);
			this->buttonDiff->Name = L"buttonDiff";
			this->buttonDiff->Size = System::Drawing::Size(143, 48);
			this->buttonDiff->TabIndex = 10;
			this->buttonDiff->TabStop = false;
			this->buttonDiff->Text = L"Subtraction";
			this->buttonDiff->UseVisualStyleBackColor = false;
			this->buttonDiff->Click += gcnew System::EventHandler(this, &MyForm::buttonDiff_Click);
			// 
			// buttonMult
			// 
			this->buttonMult->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->buttonMult->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonMult->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonMult->Location = System::Drawing::Point(36, 140);
			this->buttonMult->Margin = System::Windows::Forms::Padding(2);
			this->buttonMult->Name = L"buttonMult";
			this->buttonMult->Size = System::Drawing::Size(143, 52);
			this->buttonMult->TabIndex = 9;
			this->buttonMult->TabStop = false;
			this->buttonMult->Text = L"Multiplication";
			this->buttonMult->UseVisualStyleBackColor = false;
			this->buttonMult->Click += gcnew System::EventHandler(this, &MyForm::buttonMult_Click);
			// 
			// labelPolinomOne
			// 
			this->labelPolinomOne->AutoSize = true;
			this->labelPolinomOne->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPolinomOne->Location = System::Drawing::Point(10, 15);
			this->labelPolinomOne->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelPolinomOne->Name = L"labelPolinomOne";
			this->labelPolinomOne->Size = System::Drawing::Size(92, 22);
			this->labelPolinomOne->TabIndex = 0;
			this->labelPolinomOne->Text = L"Polinom 1";
			// 
			// textBoxPolinomOne
			// 
			this->textBoxPolinomOne->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxPolinomOne->Location = System::Drawing::Point(14, 40);
			this->textBoxPolinomOne->Margin = System::Windows::Forms::Padding(2);
			this->textBoxPolinomOne->Name = L"textBoxPolinomOne";
			this->textBoxPolinomOne->Size = System::Drawing::Size(527, 24);
			this->textBoxPolinomOne->TabIndex = 1;
			// 
			// labelPolinomTwo
			// 
			this->labelPolinomTwo->AutoSize = true;
			this->labelPolinomTwo->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPolinomTwo->Location = System::Drawing::Point(10, 77);
			this->labelPolinomTwo->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelPolinomTwo->Name = L"labelPolinomTwo";
			this->labelPolinomTwo->Size = System::Drawing::Size(92, 22);
			this->labelPolinomTwo->TabIndex = 2;
			this->labelPolinomTwo->Text = L"Polinom 2";
			// 
			// textBoxPolinomTwo
			// 
			this->textBoxPolinomTwo->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxPolinomTwo->Location = System::Drawing::Point(14, 102);
			this->textBoxPolinomTwo->Margin = System::Windows::Forms::Padding(2);
			this->textBoxPolinomTwo->Name = L"textBoxPolinomTwo";
			this->textBoxPolinomTwo->Size = System::Drawing::Size(527, 24);
			this->textBoxPolinomTwo->TabIndex = 3;
			// 
			// labelPolinomResult
			// 
			this->labelPolinomResult->AutoSize = true;
			this->labelPolinomResult->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->labelPolinomResult->Location = System::Drawing::Point(10, 140);
			this->labelPolinomResult->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelPolinomResult->Name = L"labelPolinomResult";
			this->labelPolinomResult->Size = System::Drawing::Size(62, 22);
			this->labelPolinomResult->TabIndex = 4;
			this->labelPolinomResult->Text = L"Result";
			// 
			// textBoxPolinomResult
			// 
			this->textBoxPolinomResult->Cursor = System::Windows::Forms::Cursors::No;
			this->textBoxPolinomResult->Font = (gcnew System::Drawing::Font(L"Tahoma", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxPolinomResult->Location = System::Drawing::Point(14, 168);
			this->textBoxPolinomResult->Margin = System::Windows::Forms::Padding(2);
			this->textBoxPolinomResult->Name = L"textBoxPolinomResult";
			this->textBoxPolinomResult->ReadOnly = true;
			this->textBoxPolinomResult->Size = System::Drawing::Size(527, 24);
			this->textBoxPolinomResult->TabIndex = 5;
			this->textBoxPolinomResult->TabStop = false;
			// 
			// buttonClearPolinomOne
			// 
			this->buttonClearPolinomOne->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->buttonClearPolinomOne->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonClearPolinomOne->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonClearPolinomOne->Location = System::Drawing::Point(47, 339);
			this->buttonClearPolinomOne->Margin = System::Windows::Forms::Padding(2);
			this->buttonClearPolinomOne->Name = L"buttonClearPolinomOne";
			this->buttonClearPolinomOne->Size = System::Drawing::Size(145, 48);
			this->buttonClearPolinomOne->TabIndex = 6;
			this->buttonClearPolinomOne->TabStop = false;
			this->buttonClearPolinomOne->Text = L"Clear Polinom 1";
			this->buttonClearPolinomOne->UseVisualStyleBackColor = false;
			this->buttonClearPolinomOne->Click += gcnew System::EventHandler(this, &MyForm::buttonClearPolinomOne_Click);
			// 
			// buttonClearPolinomTwo
			// 
			this->buttonClearPolinomTwo->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->buttonClearPolinomTwo->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonClearPolinomTwo->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonClearPolinomTwo->Location = System::Drawing::Point(220, 339);
			this->buttonClearPolinomTwo->Margin = System::Windows::Forms::Padding(2);
			this->buttonClearPolinomTwo->Name = L"buttonClearPolinomTwo";
			this->buttonClearPolinomTwo->Size = System::Drawing::Size(145, 48);
			this->buttonClearPolinomTwo->TabIndex = 7;
			this->buttonClearPolinomTwo->TabStop = false;
			this->buttonClearPolinomTwo->Text = L"Clear Polinom 2";
			this->buttonClearPolinomTwo->UseVisualStyleBackColor = false;
			this->buttonClearPolinomTwo->Click += gcnew System::EventHandler(this, &MyForm::buttonClearPolinomTwo_Click);
			// 
			// buttonClearAllPolinoms
			// 
			this->buttonClearAllPolinoms->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->buttonClearAllPolinoms->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonClearAllPolinoms->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonClearAllPolinoms->Location = System::Drawing::Point(391, 339);
			this->buttonClearAllPolinoms->Margin = System::Windows::Forms::Padding(2);
			this->buttonClearAllPolinoms->Name = L"buttonClearAllPolinoms";
			this->buttonClearAllPolinoms->Size = System::Drawing::Size(145, 48);
			this->buttonClearAllPolinoms->TabIndex = 8;
			this->buttonClearAllPolinoms->TabStop = false;
			this->buttonClearAllPolinoms->Text = L"Clear all";
			this->buttonClearAllPolinoms->UseVisualStyleBackColor = false;
			this->buttonClearAllPolinoms->Click += gcnew System::EventHandler(this, &MyForm::buttonClearAllPolinoms_Click);
			// 
			// groupBoxWorkSpace
			// 
			this->groupBoxWorkSpace->Controls->Add(this->textBoxPolinomResult);
			this->groupBoxWorkSpace->Controls->Add(this->labelPolinomResult);
			this->groupBoxWorkSpace->Controls->Add(this->textBoxPolinomTwo);
			this->groupBoxWorkSpace->Controls->Add(this->labelPolinomTwo);
			this->groupBoxWorkSpace->Controls->Add(this->textBoxPolinomOne);
			this->groupBoxWorkSpace->Controls->Add(this->labelPolinomOne);
			this->groupBoxWorkSpace->Enabled = false;
			this->groupBoxWorkSpace->Location = System::Drawing::Point(15, 110);
			this->groupBoxWorkSpace->Margin = System::Windows::Forms::Padding(2);
			this->groupBoxWorkSpace->Name = L"groupBoxWorkSpace";
			this->groupBoxWorkSpace->Padding = System::Windows::Forms::Padding(2);
			this->groupBoxWorkSpace->Size = System::Drawing::Size(565, 211);
			this->groupBoxWorkSpace->TabIndex = 6;
			this->groupBoxWorkSpace->TabStop = false;
			// 
			// ExitButton
			// 
			this->ExitButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ExitButton->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ExitButton->Location = System::Drawing::Point(565, 27);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(124, 48);
			this->ExitButton->TabIndex = 12;
			this->ExitButton->Text = L"Exit";
			this->ExitButton->UseVisualStyleBackColor = false;
			this->ExitButton->Click += gcnew System::EventHandler(this, &MyForm::ExitButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(819, 465);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->buttonClearAllPolinoms);
			this->Controls->Add(this->groupBoxOperations);
			this->Controls->Add(this->buttonClearPolinomTwo);
			this->Controls->Add(this->buttonClearPolinomOne);
			this->Controls->Add(this->buttonReset);
			this->Controls->Add(this->groupBoxWorkSpace);
			this->Controls->Add(this->labelCountVar);
			this->Controls->Add(this->numericUpDownCountVar);
			this->Controls->Add(this->labelMaxDegree);
			this->Controls->Add(this->numericUpDownMaxDegree);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Margin = System::Windows::Forms::Padding(2);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownMaxDegree))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCountVar))->EndInit();
			this->groupBoxOperations->ResumeLayout(false);
			this->groupBoxWorkSpace->ResumeLayout(false);
			this->groupBoxWorkSpace->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void checkNumericMaxDegreeAndCountVar();
private: System::Void numericUpDownMaxDegree_ValueChanged(System::Object^ sender, System::EventArgs^ e);
private: System::Void numericUpDownCountVar_ValueChanged(System::Object^ sender, System::EventArgs^ e);

private: System::Void buttonReset_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void buttonClearPolinomOne_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonClearPolinomTwo_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonClearAllPolinoms_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void buttonAdd_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonDiff_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonMult_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void buttonSwapPolinoms_Click(System::Object^ sender, System::EventArgs^ e);

private: System::Void clearPolOne();
private: System::Void clearPolTwo();
private: System::Void clearPolRes();
private: System::Void clearPolAll();

private: System::Void updPolOne();
private: System::Void updPolTwo();

private: System::Void ExitButton_Click(System::Object^ sender, System::EventArgs^ e);
};
}
