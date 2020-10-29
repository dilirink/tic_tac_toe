
#include <Windows.h>
//char mas[3][3] = { '\0' }; //поле для игры 
int first = 0; //переменная для выборы x\0

#pragma once
namespace Project4 {

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

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::TextBox^ textBox1;












	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button1->ForeColor = System::Drawing::Color::FloralWhite;
			this->button1->Location = System::Drawing::Point(12, 310);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(238, 43);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Выход";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(12, 44);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 68);
			this->button2->TabIndex = 2;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(93, 44);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 68);
			this->button3->TabIndex = 2;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(174, 44);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 68);
			this->button4->TabIndex = 2;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(174, 118);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 68);
			this->button7->TabIndex = 2;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(93, 118);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 68);
			this->button6->TabIndex = 2;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(12, 118);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 68);
			this->button5->TabIndex = 2;
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(12, 192);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 68);
			this->button8->TabIndex = 2;
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(93, 192);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 68);
			this->button9->TabIndex = 2;
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button10->Location = System::Drawing::Point(174, 192);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 68);
			this->button10->TabIndex = 2;
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15));
			this->button11->ForeColor = System::Drawing::Color::FloralWhite;
			this->button11->Location = System::Drawing::Point(12, 266);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(237, 38);
			this->button11->TabIndex = 3;
			this->button11->Text = L"Перезапустить";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Control;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11));
			this->textBox1->Location = System::Drawing::Point(13, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(237, 24);
			this->textBox1->TabIndex = 5;
			this->textBox1->Text = L"Первыми ходят нолики";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged_2);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->CausesValidation = false;
			this->ClientSize = System::Drawing::Size(261, 365);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"крестики нолики";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {

			Close();
	}
	private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		if (first == 0 && button8->Text == "")
		{
			button8->Text = L"0";
			//mas[2][0] = '0';
			first = 1;
		}
		if (first == 1 && button8->Text == "")
		{
			button8->Text = L"x";
			//mas[2][0] = 'x';
			first = 0;
		}
		cheak_win();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (first == 0 && button3->Text == "")
		{
			button3->Text = L"0";
			//mas[0][1] = '0';
			first = 1;
		}
		if (first == 1 && button3->Text == "")
		{
			button3->Text = L"x";
			//mas[0][1] = 'x';
			first = 0;
		}
		cheak_win();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		if (first == 0 && button4->Text == "")
		{
			button4->Text = L"0";
			//mas[0][2] = '0';
			first = 1;
		}
		if (first == 1 && button4->Text == "")
		{
			button4->Text = L"x";
			//mas[0][2] = 'x';
			first = 0;
		}
		cheak_win();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		if (first == 0 && button5->Text == "")
		{
			button5->Text = L"0";
			//mas[1][0] = '0';
			first = 1;
		}
		if (first == 1 && button5->Text == "")
		{
			button5->Text = L"x";
			//mas[1][0] = 'x';
			first = 0;
		}
		cheak_win();
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		if (first == 0 && button6->Text == "")
		{
			button6->Text = L"0";
			//mas[1][1] = '0';
			first = 1;
		}
		if (first == 1 && button6->Text == "")
		{
			button6->Text = L"x";
			//mas[1][1] = 'x';
			first = 0;
		}
		cheak_win();
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		if (first == 0 && button7->Text == "")
		{
			button7->Text = L"0";
			//mas[1][2] = '0';
			first = 1;
		}
		if (first == 1 && button7->Text == "")
		{
			button7->Text = L"x";
			//mas[1][2] = 'x';
			first = 0;
		}
		cheak_win();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		if (first == 0 && button2->Text == "")
		{
			button2->Text = L"0";
			//mas[0][0] = '0';
			first = 1;
		}
		if (first == 1 && button2->Text == "")
		{
			button2->Text = L"x";
			//mas[0][0] = 'x';
			first = 0;
		}
		cheak_win();
	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
		if (first == 0 && button9->Text == "")
		{
			button9->Text = L"0";
			//mas[2][1] = '0';
			first = 1;
		}
		if (first == 1 && button9->Text == "")
		{
			button9->Text = L"x";
			//mas[2][1] = 'x';
			first = 0;
		}
		cheak_win();
	}
	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
		if (first == 0&& button10->Text=="")
		{
			button10->Text = L"0";
			//mas[2][2] = '0';
			first = 1;
		}
		if (first == 1 && button10->Text == "")
		{
			button10->Text = L"x";
			//mas[2][2] = 'x';
			first = 0;
		}
		cheak_win();
	}

	private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
		first = 0;
		button2->Text = L"";
		button3->Text = L"";
		button4->Text = L"";
		button5->Text = L"";
		button6->Text = L"";
		button7->Text = L"";
		button8->Text = L"";
		button9->Text = L"";
		button10->Text = L"";
		textBox1->Text = L"Первыми ходят нолики";
	}

	private: System::Void textBox1_TextChanged_2(System::Object^ sender, System::EventArgs^ e) {
	
	}
	void cheak_win()
	{
		if (button2->Text == button3->Text && button2->Text == button4->Text && (button2->Text == "x" || button2->Text == "0")) //первая сторка по вертикали
		{
			if(button2->Text=="x")
				textBox1->Text = L"победили крестики";
			else
				textBox1->Text = L"победили нолики";
		}
		else if (button5->Text == button6->Text && button5->Text == button7->Text && (button5->Text == "x" || button5->Text == "0"))//вторая  сторка по вертикали
		{
			if (button5->Text == "x")
				textBox1->Text = L"победили крестики";
			else
				textBox1->Text = L"победили нолики";
		}
		else if (button8->Text == button9->Text && button8->Text == button10->Text && (button8->Text == "x" || button8->Text == "0"))//третья сторка по вертикали
		{
			if (button8->Text == "x")
				textBox1->Text = L"победили крестики";
			else
				textBox1->Text = L"победили нолики";
		}
		else if (button2->Text == button5->Text && button2->Text == button8->Text && (button2->Text == "x" || button2->Text == "0")) //первая  по горизонтале
		{
			if (button2->Text == "x")
				textBox1->Text = L"победили крестики";
			else
				textBox1->Text = L"победили нолики";
		}
		else if (button3->Text == button6->Text && button3->Text == button9->Text && (button3->Text == "x" || button3->Text == "0"))//вторая  по горизонтале
		{
			if (button3->Text == "x")
				textBox1->Text = L"победили крестики";
			else
				textBox1->Text = L"победили нолики";
		}
		else if (button4->Text == button7->Text && button4->Text == button10->Text && (button4->Text == "x" || button4->Text == "0"))//третья  по горизонтале
		{
			if (button4->Text == "x")
				textBox1->Text = L"победили крестики";
			else
				textBox1->Text = L"победили нолики";
		}
		else if (button2->Text == button6->Text && button2->Text == button10->Text && (button2->Text == "x" || button2->Text == "0")) //косая слевого верхнего в нижний правый
		{
			if (button2->Text == "x")
				textBox1->Text = L"победили крестики";
			else
				textBox1->Text = L"победили нолики";
		}
		else if (button8->Text == button6->Text && button8->Text == button4->Text && (button8->Text == "x"|| button8->Text =="0")) //косая слвевого нижнего в верхний правый
		{
			if (button8->Text == "x")
				textBox1->Text = L"победили крестики";
			else
				textBox1->Text = L"победили нолики";
		}
	
	}
};
}
