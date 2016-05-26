#pragma once
#include <msclr\marshal_cppstd.h>

namespace CppWinForm1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;
	using namespace std;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

	public: MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TextBox^  textBox1;
	public: System::Windows::Forms::TextBox^  textBox2;
	public: System::Windows::Forms::TextBox^  textBox3;


	public:
		String^ str;
	public: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::Label^  label2;
	public: System::Windows::Forms::Label^  label3;
	public:		 int N, N1;
	private: System::Windows::Forms::Button^  button2;
	public:
	private: System::Windows::Forms::Button^  button3;

	public:


	public:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

	public: string Cezar()
		{
			string s = msclr::interop::marshal_as<std::string>(textBox1->Text); //перевод введенной строки из типа String^ (system) в тип string (std)
			char ch[100];
			int i, n, N2;
			
			//N2 = N1 % 26; //сдвиг

			n = s.length(); //длина введенной строки
			
			for (i = 0; i < n; i++)
			{
				
				if (N1 >= 0)
				{
					if (s[i] >= 'a' && s[i] <= 'z')
					{
						s[i] = s[i] - N1 % 26;
						if (s[i] < 'a')
						{
							s[i] = 'z' - ('a' - s[i]) + 1;
						}
					}
					if (s[i] >= 'A' && s[i] <= 'Z')
					{
						s[i] = s[i] - N1 % 26;
						if (s[i] < 'A')
						{
							s[i] = 'Z' - ('A' - s[i]) + 1;
						}
					}
				}
				//N1<0
				else
				{
					if (s[i] >= 'a' && s[i] <= 'z')
					{
						s[i] = s[i] - N1 % 26;
						if (s[i] > 'z')
						{
							s[i] = 'a' - ('z' - s[i]) - 1;
						}
					}
					if (s[i] >= 'A' && s[i] <= 'Z')
					{
						s[i] = s[i] - N1 % 26;
						if (s[i] > 'Z')
						{
							s[i] = 'A' - ('Z' - s[i]) - 1;
						}
					}
				}
			}

			return s;
		}

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
	public: void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(22, 39);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(245, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(22, 90);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(75, 20);
			this->textBox2->TabIndex = 1;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(22, 151);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(245, 20);
			this->textBox3->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::SystemColors::Control;
			this->label1->Location = System::Drawing::Point(19, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Шифр";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(19, 74);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Сдвиг";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::SystemColors::Control;
			this->label3->Location = System::Drawing::Point(19, 135);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(134, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Расшифрованная строка";
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button2->Location = System::Drawing::Point(109, 87);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(76, 25);
			this->button2->TabIndex = 8;
			this->button2->Text = L"Влево";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click_1);
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button3->Location = System::Drawing::Point(191, 87);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(76, 25);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Вправо";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::SystemColors::Desktop;
			this->ClientSize = System::Drawing::Size(296, 206);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Шифр Цезаря";
			this->ResumeLayout(false);
			this->PerformLayout();

	}

#pragma endregion
	public: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		str = (textBox1->Text);
	}
	public: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		N = Convert::ToInt32(textBox2->Text);
	}

	private: System::Void button2_Click_1(System::Object^  sender, System::EventArgs^  e) {
		//сдвиг влево
		N1 = N;
		string st;
		st = Cezar();
		textBox3->Text = gcnew System::String(st.c_str());
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		//сдвиг вправо
		N1 = N*(-1);
		string st;
		st = Cezar();
		textBox3->Text = gcnew System::String(st.c_str());
	}
	public: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox3->Text = Convert::ToString(Convert::ToString(str) + " " + Convert::ToString(N));
	}
};
}
