#pragma once
#define _CRT_SECURE_NO_WARNINGS

//#include "stdafx.h"
// #include <cv.h>
//#include <highgui.h>
#include <Windows.h>
#include <vector>
<<<<<<< HEAD

int Compare(const void* x1, const void* x2)
{
	return *(UCHAR*)x1 - *(UCHAR*)x2;
}
=======
int compare(const void *arg1, const void *arg2);
>>>>>>> origin/master

namespace CLR {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для mainform
	/// </summary>
	public ref class mainform : public System::Windows::Forms::Form
	{
	public:
		mainform(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		Bitmap^ imageBitmap;
		Bitmap^ imageSmooth;
		Bitmap^ imageSmoothMedian;
		Bitmap^ imageSmoothLinear;
		Bitmap^ imageSmoothSobel;
		Bitmap^ imageBin;
		Bitmap^ imageGray;
		Bitmap^ imageLinear;
		Bitmap^ imageMedian;
		int height, width;







	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::HScrollBar^  hScrollBar1;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button4;







	public:
	private: System::Windows::Forms::Button^  button3;
	public:

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~mainform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:

	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Button^  button2;



	

	private:
		/// <summary>
		/// Требуется переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Обязательный метод для поддержки конструктора - не изменяйте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->hScrollBar1 = (gcnew System::Windows::Forms::HScrollBar());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Загрузить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &mainform::button1_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(529, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Размер маски";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(722, 17);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"3";
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(82, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Серое";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &mainform::button2_Click);
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(163, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Отсу";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &mainform::button3_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(5, 41);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(843, 620);
			this->tabControl1->TabIndex = 16;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button6);
			this->tabPage1->Controls->Add(this->button5);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->pictureBox4);
			this->tabPage1->Controls->Add(this->pictureBox5);
			this->tabPage1->Controls->Add(this->pictureBox6);
			this->tabPage1->Controls->Add(this->pictureBox3);
			this->tabPage1->Controls->Add(this->pictureBox2);
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(835, 594);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Фильтрация";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Location = System::Drawing::Point(5, 313);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(272, 271);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox4->TabIndex = 14;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Location = System::Drawing::Point(283, 313);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(272, 271);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox5->TabIndex = 13;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->Location = System::Drawing::Point(561, 312);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(272, 271);
			this->pictureBox6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox6->TabIndex = 12;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Location = System::Drawing::Point(561, 6);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(272, 271);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 11;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(283, 6);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(272, 271);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 10;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(5, 6);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(272, 271);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 9;
			this->pictureBox1->TabStop = false;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->listBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(835, 560);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(281, 22);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(272, 264);
			this->listBox1->TabIndex = 16;
			// 
			// hScrollBar1
			// 
			this->hScrollBar1->LargeChange = 2;
			this->hScrollBar1->Location = System::Drawing::Point(613, 13);
			this->hScrollBar1->Maximum = 10;
			this->hScrollBar1->Minimum = 3;
			this->hScrollBar1->Name = L"hScrollBar1";
			this->hScrollBar1->Size = System::Drawing::Size(106, 17);
			this->hScrollBar1->SmallChange = 2;
			this->hScrollBar1->TabIndex = 18;
			this->hScrollBar1->Value = 3;
			this->hScrollBar1->Scroll += gcnew System::Windows::Forms::ScrollEventHandler(this, &mainform::hScrollBar1_Scroll);
			// 
			// button6
			// 
			this->button6->Enabled = false;
			this->button6->Location = System::Drawing::Point(6, 283);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 24;
			this->button6->Text = L"Медианный";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &mainform::button6_Click);
			// 
			// button5
			// 
			this->button5->Enabled = false;
			this->button5->Location = System::Drawing::Point(283, 283);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 23;
			this->button5->Text = L"Линейный";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &mainform::button5_Click);
			// 
			// button4
			// 
			this->button4->Enabled = false;
			this->button4->Location = System::Drawing::Point(561, 283);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 22;
			this->button4->Text = L"Собел";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &mainform::button4_Click_1);
			// 
			// mainform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(860, 662);
			this->Controls->Add(this->hScrollBar1);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"mainform";
			this->Text = L"123";
			this->Load += gcnew System::EventHandler(this, &mainform::mainform_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
					 this->Text = openFileDialog1->FileName;
					 this->pictureBox1->Load(openFileDialog1->FileName);
					 // Bitmap^ Bitmap_src = gcnew Bitmap(openFileDialog1->FileName);
					 width = pictureBox1->Image->Width;
					 height = pictureBox1->Image->Height;

					 String^ h = Convert::ToString(height);
					 String^ w = Convert::ToString(width);;

					 //this->label1->Text = w;
					 //this->label2->Text = h;

					 
					 

					imageBitmap = gcnew Bitmap(pictureBox1->Image);
					button2->Enabled = true;
					button3->Enabled = false;
					button4->Enabled = false;
					button5->Enabled = false;
					button6->Enabled = false;
					 
				 }
	}
	private: System::Void mainform_Load(System::Object^  sender, System::EventArgs^  e) {
	}
private: System::Void pictureBox1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

			 /*int x = System::Windows::Forms::Cursor::Position.X;
			 int y = System::Windows::Forms::Cursor::Position.Y;
			 String^ xp = Convert::ToString(x);
			 String^ yp = Convert::ToString(y);
			 this->label1->Text = xp;
			 this->label2->Text = yp;
			 */
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

			 for (int i = 0; i < width; i++)
			 for (int j = 0; j < height; j++)
			 {
				 //imageGray = gcnew Bitmap(pictureBox1->Image);
				 //Color pixelColour = Color::Black;
				 Color pixelColour = imageBitmap->GetPixel(i, j);
				 float S, R, G, B;

				 R = pixelColour.R;
				 G = pixelColour.G;
				 B = pixelColour.B;
				 // S = (R * 30 + G * 59 + B * 11) / 10;
				 S = (R*0.299 + G*0.587 + B*0.114);

				 //listBox1->Items->Add(Convert::ToString(S));

				 // Set a pixel to black
				 //imageBitmap->SetPixel(i, j, pixelColour);
				 imageBitmap->SetPixel(i, j, Color::FromArgb(255, S, S, S));

				 // Get the pixel's colour again
				 //pixelColour = imageBitmap->GetPixel(x, y);

				 //S=(R*30+G*59+B*11)/10
			 }
			 pictureBox2->Image = imageBitmap;
			 button2->Enabled = false;
			 button3->Enabled = true;
			 button4->Enabled = true;
			 button5->Enabled = true;
			 button6->Enabled = true;

}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 int hist[256] = { 0 };
			 int min = 0;
			 int max = min;

			 imageBin = gcnew Bitmap(pictureBox2->Image);
			 for (int y = 0; y < height; ++y)
			 {
				 for (int x = 0; x < width; ++x)
				 {
					 int val = imageBin->GetPixel(x, y).R;
					 ++hist[val];

					 if (val < min)
						 min = val;
					 else if (val > max)
						 max = val;
				 }
			 }

			 int m = 0;
			 int n = width * height;

			 for (int i = 0; i <= max - min; ++i)
				 m += i * hist[i + min];

			 int alpha = 0;
			 int beta = 0;
			 double w;
			 double a;
			 double sigma;
			 double sigma_max = 0;
			 int threshold = 0;

			 for (int i = 0; i < max - min; ++i)
			 {
				 alpha += i * hist[i + min];
				 beta += hist[i + min];

				 w = (double)beta / n;
				 a = (double)alpha / beta - (double)(m - alpha) / (n - beta);
				 sigma = w * (1 - w) * a * a;

				 if (sigma > sigma_max)
				 {
					 sigma_max = sigma;
					 threshold = i;
				 }
			 }

			 threshold += min;

			 for (int y = 0; y < height; ++y)
			 {
				 for (int x = 0; x < width; ++x)
				 {
					 if (imageBin->GetPixel(x, y).R > threshold)
						 imageBin->SetPixel(x, y, Color::FromArgb(255, 255, 255, 255)); 
					 else
						 imageBin->SetPixel(x, y, Color::FromArgb(255, 0, 0, 0));
				 }
			 }
			 pictureBox3->Image = imageBin;
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
}

		 int compare(const void *arg1, const void *arg2)
		 {
			 /* Compare all of both strings: */
			 return _stricmp(*(char**)arg1, *(char**)arg2);
		 }

private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
<<<<<<< HEAD
			 int mask_size = Convert::ToInt64(label2->Text);
=======
			
	
	int posR[] = { -1, -1, -1, 0, 0, 0, 1, 1, 1 };
	int posC[] = { -1, 0, 1, -1, 0, 1, -1, 0, 1 };
	int coefs[] = { 1, 2, 1, 2, 4, 2, 1, 2, 1 };
	double norm = 16;
	imageLinear = gcnew Bitmap(pictureBox2->Image);
	for (int r = 1; r < height - 1; ++r)
	{
		for (int c = 1; c < width - 1; ++c)
		{
			int sum = 0;

			for (int i = 0; i < 9; ++i)
				//sum += *cvPtr2D(src, r + posR[i], c + posC[i]) * coefs[i];
				sum += imageLinear->GetPixel(c + posC[i], r + posR[i]).R * coefs[i];
			imageLinear->SetPixel(c, r, Color::FromArgb(255, (int)round(sum / norm), (int)round(sum / norm), (int)round(sum / norm)));
			 
		}
	}
	//pictureBox4->Image = imageLinear;
	
	/*//median
	int mask_size = 3;
	size_t val_amount = mask_size * mask_size;
	int* values = new int[val_amount];

	imageMedian = gcnew Bitmap(pictureBox2->Image);
	for (int r = mask_size / 2; r < height - mask_size / 2; ++r)
	{
		for (int c = mask_size / 2; c < width - mask_size / 2; ++c)
		{
			int idx = 0;

			for (int j = 0; j < mask_size; ++j)
			{
				for (int i = 0; i < mask_size; ++i)
				{
					values[idx++] = imageMedian->GetPixel(c + i - mask_size / 2, r + j - mask_size / 2).R;       //*cvPtr2D(src, r + j - mask_size / 2, c + i - mask_size / 2);
				}
			}

			qsort(values, val_amount, sizeof(int), CLR::mainform::compare);
			imageMedian->SetPixel(c, r, Color::FromArgb(255, values[val_amount / 2], values[val_amount / 2], values[val_amount / 2]));
			//*cvPtr2D(dst, r, c) = values[val_amount / 2];
		}
	}
	pictureBox4->Image = imageMedian;
	/* int mask_size = 3;
>>>>>>> origin/master
			 size_t val_amount = mask_size * mask_size;
			 UCHAR* values = new UCHAR[val_amount];
			 imageSmooth = gcnew Bitmap(pictureBox2->Image);
			 imageSmoothMedian = gcnew Bitmap(pictureBox2->Image);

			 for (int r = mask_size / 2; r < height - (mask_size / 2) - 1; ++r)
			 {
				 for (int c = mask_size / 2; c < width - (mask_size / 2) - 1; ++c)
				 {
					 int idx = 0;

					 for (int j = 0; j < mask_size; ++j)
					 {
						 for (int i = 0; i < mask_size; ++i)
						 {
							 values[idx++] = UCHAR(imageSmooth->GetPixel((c + j - mask_size / 2), (r + i - mask_size / 2)).R);
						 }
					 }
					 qsort(values, val_amount, sizeof(UCHAR), Compare);
					 
					 imageSmoothMedian->SetPixel(c, r, Color::FromArgb(255, values[val_amount / 2], values[val_amount / 2], values[val_amount / 2]));
				 }
			 }
			 pictureBox4->Image = imageSmoothMedian;

}
private: System::Void hScrollBar1_Scroll(System::Object^  sender, System::Windows::Forms::ScrollEventArgs^  e) {
			 this->label2->Text = Convert::ToString(hScrollBar1->Value);
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

			 imageSmooth = gcnew Bitmap(pictureBox2->Image);
			 imageSmoothLinear = gcnew Bitmap(pictureBox2->Image);
			 
			 int posR[] = { -1, -1, -1, 0, 0, 0, 1, 1, 1 };
			 int posC[] = { -1, 0, 1, -1, 0, 1, -1, 0, 1 };
			 int coefs[] = { 1, 2, 1, 2, 4, 2, 1, 2, 1 };
			 double norm = 16;

			 for (int r = 1; r < height - 1; ++r)
			 {
				 for (int c = 1; c < width - 1; ++c)
				 {
					 int sum = 0;

					 for (int i = 0; i < 9; ++i)
						 sum += imageSmooth->GetPixel((c + posC[i]), (r + posR[i])).R * coefs[i];

					 //*cvPtr2D(dst, r, c) = (uchar)round(sum / norm);
					 imageSmoothLinear->SetPixel(c, r, Color::FromArgb(255, (UCHAR)round(sum / norm), (UCHAR)round(sum / norm), (UCHAR)round(sum / norm)));
				 }
			 }
			 pictureBox5->Image = imageSmoothLinear;

}



private: System::Void button4_Click_1(System::Object^  sender, System::EventArgs^  e) {

			 imageSmooth = gcnew Bitmap(pictureBox2->Image);
			 imageSmoothSobel = gcnew Bitmap(pictureBox2->Image);

			 for (int r = 1; r < height - 1; ++r)
			 {
				 for (int c = 1; c < width - 1; ++c)
				 {

					// imageSmooth->GetPixel(c + 1, r - 1).R

					 /*int temp = (int)round(sqrt(pow(imageSmooth->GetPixel(c - 1, r - 1).R + 2 * imageSmooth->GetPixel(c, r - 1).R + imageSmooth->GetPixel(c + 1, r - 1).R -
						 imageSmooth->GetPixel(c - 1, r + 1).R - 2 * imageSmooth->GetPixel(c, r + 1).R - imageSmooth->GetPixel(c + 1, r + 1).R, 2)
						 +
						 pow(imageSmooth->GetPixel(c - 1, r - 1).R - imageSmooth->GetPixel(c + 1, r - 1).R +
						 2 * imageSmooth->GetPixel(c - 1, r).R - 2 * imageSmooth->GetPixel(c + 1, r).R +
						 imageSmooth->GetPixel(c - 1, r + 1).R - imageSmooth->GetPixel(c + 1, r + 1).R, 2)));

						 
					 int temp = (int)round(sqrt(pow(imageSmooth->GetPixel(c + 1, r - 1).R + 2 * imageSmooth->GetPixel(c + 1, r).R +
						 imageSmooth->GetPixel(c + 1, r + 1).R - imageSmooth->GetPixel(c - 1, r - 1).R -
						 2 * imageSmooth->GetPixel(c - 1, r).R - imageSmooth->GetPixel(c - 1, r + 1).R, 2) +
						 pow(imageSmooth->GetPixel(c - 1, r + 1).R + 2 * imageSmooth->GetPixel(c, r + 1).R +
						 imageSmooth->GetPixel(c + 1, r + 1).R - imageSmooth->GetPixel(c - 1, r - 1).R -
						 imageSmooth->GetPixel(c, r - 1).R - imageSmooth->GetPixel(c + 1, r - 1).R, 2)));
						*/ 
					 int temp = (int)round(sqrt(pow(-1 * imageSmooth->GetPixel(c - 1, r - 1).R - 2 * imageSmooth->GetPixel(c, r - 1).R - imageSmooth->GetPixel(c + 1, r - 1).R +
						 imageSmooth->GetPixel(c - 1, r + 1).R + 2 * imageSmooth->GetPixel(c, r + 1).R + imageSmooth->GetPixel(c + 1, r + 1).R, 2)
						 +
						 pow(-1 * imageSmooth->GetPixel(c - 1, r - 1).R + imageSmooth->GetPixel(c + 1, r - 1).R +
						 -2 * imageSmooth->GetPixel(c - 1, r).R + 2 * imageSmooth->GetPixel(c + 1, r).R -
						 imageSmooth->GetPixel(c - 1, r + 1).R + imageSmooth->GetPixel(c + 1, r + 1).R, 2)));
					 //imageSmooth->SetPixel(c, r, Color::FromArgb(255, (temp + imageSmooth->GetPixel(c, r).R / 2), (temp + imageSmooth->GetPixel(c, r).R / 2), (temp + imageSmooth->GetPixel(c, r).R / 2)));
					 // imageSmooth->SetPixel(c, r, Color::FromArgb(255, (temp + imageSmooth->GetPixel(c, r).R) / 2, (temp + imageSmooth->GetPixel(c, r).R) / 2, (temp + imageSmooth->GetPixel(c, r).R) / 2));
					 
					 /*int temp = (int)round(sqrt(pow(-1 * imageSmooth->GetPixel(r - 1, c - 1).R - 2 * imageSmooth->GetPixel(r, c - 1).R - imageSmooth->GetPixel(r + 1, c - 1).R +
						 imageSmooth->GetPixel(r - 1, c + 1).R + 2 * imageSmooth->GetPixel(r, c + 1).R + imageSmooth->GetPixel(r + 1, c + 1).R, 2)
						 +
						 pow(-1 * imageSmooth->GetPixel(r - 1, c - 1).R + imageSmooth->GetPixel(r + 1, c - 1).R +
						 -2 * imageSmooth->GetPixel(r - 1, c).R + 2 * imageSmooth->GetPixel(r + 1, c).R -
						 imageSmooth->GetPixel(r - 1, c + 1).R + imageSmooth->GetPixel(r + 1, c + 1).R, 2)));*/
					 
					 if (temp > 255)
						 temp = 255;
					 imageSmoothSobel->SetPixel(c, r, Color::FromArgb(255, (temp + imageSmooth->GetPixel(c, r).R) / 2, (temp + imageSmooth->GetPixel(c, r).R) / 2, (temp + imageSmooth->GetPixel(c, r).R) / 2));
					 //imageSmooth->SetPixel(c, r, Color::FromArgb(255, temp, temp, temp));
					 
					// *cvPtr2D(dst, r, c) = (temp + *cvPtr2D(src, r, c)) / 2;
				 }
			 }
			 pictureBox6->Image = imageSmoothSobel;

}
};
}
