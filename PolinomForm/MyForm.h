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


	private: System::Windows::Forms::Button^ ExitButton;
	private: System::Windows::Forms::Panel^ panel1;










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
			this->ExitButton = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownMaxDegree))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCountVar))->BeginInit();
			this->panel1->SuspendLayout();
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
			this->buttonReset->Location = System::Drawing::Point(398, 43);
			this->buttonReset->Margin = System::Windows::Forms::Padding(2);
			this->buttonReset->Name = L"buttonReset";
			this->buttonReset->Size = System::Drawing::Size(124, 48);
			this->buttonReset->TabIndex = 9;
			this->buttonReset->TabStop = false;
			this->buttonReset->Text = L"Reset";
			this->buttonReset->UseVisualStyleBackColor = false;
			this->buttonReset->Click += gcnew System::EventHandler(this, &MyForm::buttonReset_Click);
			// 
			// buttonSwapPolinoms
			// 
			this->buttonSwapPolinoms->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->buttonSwapPolinoms->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonSwapPolinoms->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonSwapPolinoms->Location = System::Drawing::Point(595, 181);
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
			this->buttonAdd->Location = System::Drawing::Point(595, 10);
			this->buttonAdd->Margin = System::Windows::Forms::Padding(2);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(143, 48);
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
			this->buttonDiff->Location = System::Drawing::Point(595, 64);
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
			this->buttonMult->Location = System::Drawing::Point(595, 123);
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
			this->labelPolinomOne->Location = System::Drawing::Point(10, 23);
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
			this->textBoxPolinomOne->Location = System::Drawing::Point(14, 48);
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
			this->labelPolinomTwo->Location = System::Drawing::Point(10, 90);
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
			this->textBoxPolinomTwo->Location = System::Drawing::Point(14, 115);
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
			this->labelPolinomResult->Location = System::Drawing::Point(10, 153);
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
			this->textBoxPolinomResult->Location = System::Drawing::Point(14, 181);
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
			this->buttonClearPolinomOne->Location = System::Drawing::Point(36, 366);
			this->buttonClearPolinomOne->Margin = System::Windows::Forms::Padding(2);
			this->buttonClearPolinomOne->Name = L"buttonClearPolinomOne";
			this->buttonClearPolinomOne->Size = System::Drawing::Size(237, 48);
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
			this->buttonClearPolinomTwo->Location = System::Drawing::Point(298, 366);
			this->buttonClearPolinomTwo->Margin = System::Windows::Forms::Padding(2);
			this->buttonClearPolinomTwo->Name = L"buttonClearPolinomTwo";
			this->buttonClearPolinomTwo->Size = System::Drawing::Size(207, 48);
			this->buttonClearPolinomTwo->TabIndex = 7;
			this->buttonClearPolinomTwo->TabStop = false;
			this->buttonClearPolinomTwo->Text = L"Clear Polinom 2";
			this->buttonClearPolinomTwo->UseVisualStyleBackColor = false;
			this->buttonClearPolinomTwo->Click += gcnew System::EventHandler(this, &MyForm::buttonClearPolinomTwo_Click);
			// 
			// ExitButton
			// 
			this->ExitButton->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ExitButton->Font = (gcnew System::Drawing::Font(L"Yu Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ExitButton->Location = System::Drawing::Point(541, 366);
			this->ExitButton->Name = L"ExitButton";
			this->ExitButton->Size = System::Drawing::Size(202, 48);
			this->ExitButton->TabIndex = 12;
			this->ExitButton->Text = L"Exit";
			this->ExitButton->UseVisualStyleBackColor = false;
			this->ExitButton->Click += gcnew System::EventHandler(this, &MyForm::ExitButton_Click);
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->buttonSwapPolinoms);
			this->panel1->Controls->Add(this->buttonAdd);
			this->panel1->Controls->Add(this->buttonDiff);
			this->panel1->Controls->Add(this->buttonMult);
			this->panel1->Controls->Add(this->textBoxPolinomOne);
			this->panel1->Controls->Add(this->textBoxPolinomResult);
			this->panel1->Controls->Add(this->labelPolinomResult);
			this->panel1->Controls->Add(this->textBoxPolinomTwo);
			this->panel1->Controls->Add(this->labelPolinomTwo);
			this->panel1->Controls->Add(this->labelPolinomOne);
			this->panel1->Location = System::Drawing::Point(27, 97);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(767, 256);
			this->panel1->TabIndex = 13;
			this->panel1->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->ClientSize = System::Drawing::Size(819, 465);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->ExitButton);
			this->Controls->Add(this->buttonClearPolinomTwo);
			this->Controls->Add(this->buttonClearPolinomOne);
			this->Controls->Add(this->buttonReset);
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
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownMaxDegree))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCountVar))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
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
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
