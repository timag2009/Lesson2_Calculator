#pragma once

namespace Lesson2Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ val1;
	private: System::Windows::Forms::TextBox^ val2;
	private: System::Windows::Forms::Button^ Raschet;
	private: System::Windows::Forms::Label^ Ravno;


	private: System::Windows::Forms::Label^ Otvet;

	private: System::Windows::Forms::Button^ Sbros;
	private: System::Windows::Forms::RadioButton^ sum;
	private: System::Windows::Forms::RadioButton^ sub;
	private: System::Windows::Forms::RadioButton^ mult;
	private: System::Windows::Forms::RadioButton^ div;





	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->val1 = (gcnew System::Windows::Forms::TextBox());
			this->val2 = (gcnew System::Windows::Forms::TextBox());
			this->Raschet = (gcnew System::Windows::Forms::Button());
			this->Ravno = (gcnew System::Windows::Forms::Label());
			this->Otvet = (gcnew System::Windows::Forms::Label());
			this->Sbros = (gcnew System::Windows::Forms::Button());
			this->sum = (gcnew System::Windows::Forms::RadioButton());
			this->sub = (gcnew System::Windows::Forms::RadioButton());
			this->mult = (gcnew System::Windows::Forms::RadioButton());
			this->div = (gcnew System::Windows::Forms::RadioButton());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::DarkViolet;
			this->label1->Location = System::Drawing::Point(57, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(156, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Калькулятор";
			// 
			// val1
			// 
			this->val1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->val1->Location = System::Drawing::Point(62, 64);
			this->val1->Name = L"val1";
			this->val1->Size = System::Drawing::Size(140, 32);
			this->val1->TabIndex = 1;
			// 
			// val2
			// 
			this->val2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->val2->Location = System::Drawing::Point(62, 128);
			this->val2->Name = L"val2";
			this->val2->Size = System::Drawing::Size(140, 32);
			this->val2->TabIndex = 2;
			// 
			// Raschet
			// 
			this->Raschet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Raschet->Location = System::Drawing::Point(62, 175);
			this->Raschet->Name = L"Raschet";
			this->Raschet->Size = System::Drawing::Size(140, 36);
			this->Raschet->TabIndex = 3;
			this->Raschet->Text = L"Расчет";
			this->Raschet->UseVisualStyleBackColor = true;
			this->Raschet->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Ravno
			// 
			this->Ravno->AutoSize = true;
			this->Ravno->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Ravno->Location = System::Drawing::Point(168, 99);
			this->Ravno->Name = L"Ravno";
			this->Ravno->Size = System::Drawing::Size(21, 24);
			this->Ravno->TabIndex = 4;
			this->Ravno->Text = L"=";
			// 
			// Otvet
			// 
			this->Otvet->AutoSize = true;
			this->Otvet->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Otvet->Location = System::Drawing::Point(199, 99);
			this->Otvet->Name = L"Otvet";
			this->Otvet->Size = System::Drawing::Size(67, 24);
			this->Otvet->TabIndex = 5;
			this->Otvet->Text = L"Ответ";
			// 
			// Sbros
			// 
			this->Sbros->BackColor = System::Drawing::Color::Salmon;
			this->Sbros->Cursor = System::Windows::Forms::Cursors::Default;
			this->Sbros->FlatAppearance->BorderColor = System::Drawing::Color::Red;
			this->Sbros->FlatAppearance->BorderSize = 3;
			this->Sbros->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Sbros->Location = System::Drawing::Point(62, 217);
			this->Sbros->Name = L"Sbros";
			this->Sbros->Size = System::Drawing::Size(140, 36);
			this->Sbros->TabIndex = 7;
			this->Sbros->Text = L"Сброс";
			this->Sbros->UseVisualStyleBackColor = false;
			this->Sbros->Click += gcnew System::EventHandler(this, &MyForm::Sbros_Click);
			// 
			// sum
			// 
			this->sum->AutoSize = true;
			this->sum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sum->Location = System::Drawing::Point(18, 103);
			this->sum->Name = L"sum";
			this->sum->Size = System::Drawing::Size(34, 21);
			this->sum->TabIndex = 8;
			this->sum->TabStop = true;
			this->sum->Text = L"+";
			this->sum->UseVisualStyleBackColor = true;
			this->sum->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// sub
			// 
			this->sub->AutoSize = true;
			this->sub->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sub->Location = System::Drawing::Point(58, 103);
			this->sub->Name = L"sub";
			this->sub->Size = System::Drawing::Size(31, 21);
			this->sub->TabIndex = 9;
			this->sub->TabStop = true;
			this->sub->Text = L"-";
			this->sub->UseVisualStyleBackColor = true;
			this->sub->CheckedChanged += gcnew System::EventHandler(this, &MyForm::sub_CheckedChanged);
			// 
			// mult
			// 
			this->mult->AutoSize = true;
			this->mult->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->mult->Location = System::Drawing::Point(95, 103);
			this->mult->Name = L"mult";
			this->mult->Size = System::Drawing::Size(31, 21);
			this->mult->TabIndex = 10;
			this->mult->TabStop = true;
			this->mult->Text = L"*";
			this->mult->UseVisualStyleBackColor = true;
			this->mult->CheckedChanged += gcnew System::EventHandler(this, &MyForm::mult_CheckedChanged);
			// 
			// div
			// 
			this->div->AutoSize = true;
			this->div->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->div->Location = System::Drawing::Point(132, 103);
			this->div->Name = L"div";
			this->div->Size = System::Drawing::Size(30, 21);
			this->div->TabIndex = 11;
			this->div->TabStop = true;
			this->div->Text = L"/";
			this->div->UseVisualStyleBackColor = true;
			this->div->CheckedChanged += gcnew System::EventHandler(this, &MyForm::div_CheckedChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->div);
			this->Controls->Add(this->mult);
			this->Controls->Add(this->sub);
			this->Controls->Add(this->sum);
			this->Controls->Add(this->Sbros);
			this->Controls->Add(this->Otvet);
			this->Controls->Add(this->Ravno);
			this->Controls->Add(this->Raschet);
			this->Controls->Add(this->val2);
			this->Controls->Add(this->val1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Первый калькулятор";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			if (bool(sum->Checked)) {
				//Do the sum operation
				double v1 = Convert::ToDouble(val1->Text);
				double v2 = Convert::ToDouble(val2->Text);
				double rez = v1 + v2;
				Otvet->Text = System::Convert::ToString(rez);
			}
			if (bool(sub->Checked)) {
				//Do the sub operation
				double v1 = Convert::ToDouble(val1->Text);
				double v2 = Convert::ToDouble(val2->Text);
				double rez = v1 - v2;
				Otvet->Text = System::Convert::ToString(rez);
			}
			if (bool(mult->Checked)) {
				//Do the sub operation
				double v1 = Convert::ToDouble(val1->Text);
				double v2 = Convert::ToDouble(val2->Text);
				double rez = v1 * v2;
				Otvet->Text = System::Convert::ToString(rez);
			}
			if (bool(div->Checked)) {
				//Do the sub operation
				double v1 = Convert::ToDouble(val1->Text);
				double v2 = Convert::ToDouble(val2->Text);
				double rez = v1 / v2;
				Otvet->Text = System::Convert::ToString(rez);
			}
		}
		catch (...) {
			this->Otvet->Text = "Ошибка !";
		}	
	}
	private: System::Void Sbros_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Otvet->Text = "";
		this->val1->Text = "";
		this->val2->Text = "";
		this->sum->Checked = false;
		this->sub->Checked = false;
		this->mult->Checked = false;
		this->div->Checked = false;
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if ((bool)sum->Checked == false) {
			this->Otvet->Text = "Ответ";
		}
		else {
			this->Otvet->Text = "Сумма";
		}		
	}
	private: System::Void sub_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if ((bool)sub->Checked == false)
			this->Otvet->Text = "Ответ";
		else
			this->Otvet->Text = "Разность";
	}
	private: System::Void mult_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if ((bool)mult->Checked == false)
			this->Otvet->Text = "Ответ";
		else
			this->Otvet->Text = "Произв";
	}
	private: System::Void div_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if ((bool)div->Checked == false)
			this->Otvet->Text = "Ответ";
		else
			this->Otvet->Text = "Частное";
	}

};
}
