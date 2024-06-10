#pragma once

#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <iostream>
#include <msclr/marshal_cppstd.h>
#include <vcclr.h>
#include <opencv2/objdetect/aruco_detector.hpp>
#include <opencv2/objdetect/aruco_dictionary.hpp>
//	#include "Header1.h"
#include <windows.h>
#include <shellapi.h>

using namespace cv;

namespace Warp2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ getBtn;
	private: System::Windows::Forms::Button^ CrtPntBtn;
	private: System::Windows::Forms::Button^ editBtn;
	private: System::Windows::Forms::Panel^ editPanel;
	private: System::Windows::Forms::Label^ xLabel;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ tlUpBtn;

	private: System::Windows::Forms::Label^ yLabel;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ tlRTBtn;
	private: System::Windows::Forms::Button^ tlLFBtn;
	private: System::Windows::Forms::Button^ tlDnBtn;
	private: System::Windows::Forms::Label^ xLabel2;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Button^ trRtBtn;

	private: System::Windows::Forms::Button^ trLfBtn;

	private: System::Windows::Forms::Button^ trDnBtn;

	private: System::Windows::Forms::Button^ trUpBtn;

	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ yLabel2;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ xLabel3;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::Button^ blLfBtn;

	private: System::Windows::Forms::Button^ blDnBtn;

	private: System::Windows::Forms::Button^ blUpBtn;

	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ yLabel3;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ blRtBtn;
	private: System::Windows::Forms::Button^ brRtBtn;

	private: System::Windows::Forms::Button^ brLfBtn;

	private: System::Windows::Forms::Button^ brDnBtn;

	private: System::Windows::Forms::Button^ brUpBtn;

	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ yLabel4;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ xLabel4;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ markerPanel;

	private: System::Windows::Forms::Button^ button3;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::TextBox^ textBox6;

	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::CheckBox^ applyCheck;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ savePanel;
	private: System::Windows::Forms::TextBox^ width;

private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::TextBox^ height;

private: System::Windows::Forms::Label^ label12;

private: System::Windows::Forms::Button^ applyBtn;
private: System::Windows::Forms::Panel^ OpenglPanel;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::TextBox^ ObjPath;
private: System::Windows::Forms::Button^ OpenglBtn;
private: System::Windows::Forms::Button^ button6;





	private: System::Windows::Forms::Label^ label3;	

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->getBtn = (gcnew System::Windows::Forms::Button());
			this->CrtPntBtn = (gcnew System::Windows::Forms::Button());
			this->editBtn = (gcnew System::Windows::Forms::Button());
			this->editPanel = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->brRtBtn = (gcnew System::Windows::Forms::Button());
			this->brLfBtn = (gcnew System::Windows::Forms::Button());
			this->brDnBtn = (gcnew System::Windows::Forms::Button());
			this->brUpBtn = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->yLabel4 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->xLabel4 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->blRtBtn = (gcnew System::Windows::Forms::Button());
			this->blLfBtn = (gcnew System::Windows::Forms::Button());
			this->blDnBtn = (gcnew System::Windows::Forms::Button());
			this->blUpBtn = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->yLabel3 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->xLabel3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->trRtBtn = (gcnew System::Windows::Forms::Button());
			this->trLfBtn = (gcnew System::Windows::Forms::Button());
			this->trDnBtn = (gcnew System::Windows::Forms::Button());
			this->trUpBtn = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->yLabel2 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->xLabel2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->tlRTBtn = (gcnew System::Windows::Forms::Button());
			this->tlLFBtn = (gcnew System::Windows::Forms::Button());
			this->tlDnBtn = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->yLabel = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->xLabel = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tlUpBtn = (gcnew System::Windows::Forms::Button());
			this->savePanel = (gcnew System::Windows::Forms::Panel());
			this->applyBtn = (gcnew System::Windows::Forms::Button());
			this->width = (gcnew System::Windows::Forms::TextBox());
			this->height = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->markerPanel = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->applyCheck = (gcnew System::Windows::Forms::CheckBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->OpenglPanel = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->ObjPath = (gcnew System::Windows::Forms::TextBox());
			this->OpenglBtn = (gcnew System::Windows::Forms::Button());
			this->editPanel->SuspendLayout();
			this->savePanel->SuspendLayout();
			this->markerPanel->SuspendLayout();
			this->OpenglPanel->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Image Directory";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(99, 19);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(314, 20);
			this->textBox1->TabIndex = 1;
			// 
			// getBtn
			// 
			this->getBtn->Location = System::Drawing::Point(419, 16);
			this->getBtn->Name = L"getBtn";
			this->getBtn->Size = System::Drawing::Size(75, 23);
			this->getBtn->TabIndex = 2;
			this->getBtn->Text = L"Get Image";
			this->getBtn->UseVisualStyleBackColor = true;
			this->getBtn->Click += gcnew System::EventHandler(this, &MyForm::getBtn_Click);
			// 
			// CrtPntBtn
			// 
			this->CrtPntBtn->Location = System::Drawing::Point(15, 56);
			this->CrtPntBtn->Name = L"CrtPntBtn";
			this->CrtPntBtn->Size = System::Drawing::Size(75, 23);
			this->CrtPntBtn->TabIndex = 3;
			this->CrtPntBtn->Text = L"Creat Points";
			this->CrtPntBtn->UseVisualStyleBackColor = true;
			this->CrtPntBtn->Click += gcnew System::EventHandler(this, &MyForm::CrtPntBtn_Click);
			// 
			// editBtn
			// 
			this->editBtn->Enabled = false;
			this->editBtn->Location = System::Drawing::Point(118, 55);
			this->editBtn->Name = L"editBtn";
			this->editBtn->Size = System::Drawing::Size(75, 23);
			this->editBtn->TabIndex = 4;
			this->editBtn->Text = L"Edit Points";
			this->editBtn->UseVisualStyleBackColor = true;
			this->editBtn->Click += gcnew System::EventHandler(this, &MyForm::editBtn_Click);
			// 
			// editPanel
			// 
			this->editPanel->Controls->Add(this->button2);
			this->editPanel->Controls->Add(this->button1);
			this->editPanel->Controls->Add(this->brRtBtn);
			this->editPanel->Controls->Add(this->brLfBtn);
			this->editPanel->Controls->Add(this->brDnBtn);
			this->editPanel->Controls->Add(this->brUpBtn);
			this->editPanel->Controls->Add(this->textBox5);
			this->editPanel->Controls->Add(this->yLabel4);
			this->editPanel->Controls->Add(this->label10);
			this->editPanel->Controls->Add(this->xLabel4);
			this->editPanel->Controls->Add(this->label7);
			this->editPanel->Controls->Add(this->checkBox4);
			this->editPanel->Controls->Add(this->blRtBtn);
			this->editPanel->Controls->Add(this->blLfBtn);
			this->editPanel->Controls->Add(this->blDnBtn);
			this->editPanel->Controls->Add(this->blUpBtn);
			this->editPanel->Controls->Add(this->textBox4);
			this->editPanel->Controls->Add(this->yLabel3);
			this->editPanel->Controls->Add(this->label8);
			this->editPanel->Controls->Add(this->xLabel3);
			this->editPanel->Controls->Add(this->label5);
			this->editPanel->Controls->Add(this->checkBox3);
			this->editPanel->Controls->Add(this->trRtBtn);
			this->editPanel->Controls->Add(this->trLfBtn);
			this->editPanel->Controls->Add(this->trDnBtn);
			this->editPanel->Controls->Add(this->trUpBtn);
			this->editPanel->Controls->Add(this->textBox3);
			this->editPanel->Controls->Add(this->yLabel2);
			this->editPanel->Controls->Add(this->label6);
			this->editPanel->Controls->Add(this->xLabel2);
			this->editPanel->Controls->Add(this->label4);
			this->editPanel->Controls->Add(this->checkBox2);
			this->editPanel->Controls->Add(this->checkBox1);
			this->editPanel->Controls->Add(this->tlRTBtn);
			this->editPanel->Controls->Add(this->tlLFBtn);
			this->editPanel->Controls->Add(this->tlDnBtn);
			this->editPanel->Controls->Add(this->textBox2);
			this->editPanel->Controls->Add(this->yLabel);
			this->editPanel->Controls->Add(this->label3);
			this->editPanel->Controls->Add(this->xLabel);
			this->editPanel->Controls->Add(this->label2);
			this->editPanel->Controls->Add(this->tlUpBtn);
			this->editPanel->Location = System::Drawing::Point(15, 86);
			this->editPanel->Name = L"editPanel";
			this->editPanel->Size = System::Drawing::Size(587, 259);
			this->editPanel->TabIndex = 5;
			this->editPanel->Visible = false;
			this->editPanel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::editPanel_Paint);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(281, 217);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(117, 23);
			this->button2->TabIndex = 41;
			this->button2->Text = L"Generate Markers";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(84, 217);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 23);
			this->button1->TabIndex = 40;
			this->button1->Text = L"Save and warp";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// brRtBtn
			// 
			this->brRtBtn->Enabled = false;
			this->brRtBtn->Location = System::Drawing::Point(461, 148);
			this->brRtBtn->Name = L"brRtBtn";
			this->brRtBtn->Size = System::Drawing::Size(30, 23);
			this->brRtBtn->TabIndex = 39;
			this->brRtBtn->Text = L"RT";
			this->brRtBtn->UseVisualStyleBackColor = true;
			this->brRtBtn->Click += gcnew System::EventHandler(this, &MyForm::brRtBtn_Click);
			// 
			// brLfBtn
			// 
			this->brLfBtn->Enabled = false;
			this->brLfBtn->Location = System::Drawing::Point(425, 148);
			this->brLfBtn->Name = L"brLfBtn";
			this->brLfBtn->Size = System::Drawing::Size(30, 23);
			this->brLfBtn->TabIndex = 38;
			this->brLfBtn->Text = L"LF";
			this->brLfBtn->UseVisualStyleBackColor = true;
			this->brLfBtn->Click += gcnew System::EventHandler(this, &MyForm::brLfBtn_Click);
			// 
			// brDnBtn
			// 
			this->brDnBtn->Enabled = false;
			this->brDnBtn->Location = System::Drawing::Point(386, 147);
			this->brDnBtn->Name = L"brDnBtn";
			this->brDnBtn->Size = System::Drawing::Size(33, 23);
			this->brDnBtn->TabIndex = 37;
			this->brDnBtn->Text = L"DN";
			this->brDnBtn->UseVisualStyleBackColor = true;
			this->brDnBtn->Click += gcnew System::EventHandler(this, &MyForm::brDnBtn_Click);
			// 
			// brUpBtn
			// 
			this->brUpBtn->Enabled = false;
			this->brUpBtn->Location = System::Drawing::Point(350, 148);
			this->brUpBtn->Name = L"brUpBtn";
			this->brUpBtn->Size = System::Drawing::Size(30, 23);
			this->brUpBtn->TabIndex = 36;
			this->brUpBtn->Text = L"UP";
			this->brUpBtn->UseVisualStyleBackColor = true;
			this->brUpBtn->Click += gcnew System::EventHandler(this, &MyForm::brUpBtn_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(308, 150);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(36, 20);
			this->textBox5->TabIndex = 35;
			this->textBox5->Text = L"100";
			// 
			// yLabel4
			// 
			this->yLabel4->AutoSize = true;
			this->yLabel4->Location = System::Drawing::Point(269, 152);
			this->yLabel4->Name = L"yLabel4";
			this->yLabel4->Size = System::Drawing::Size(12, 13);
			this->yLabel4->TabIndex = 34;
			this->yLabel4->Text = L"y";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(224, 151);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(39, 13);
			this->label10->TabIndex = 33;
			this->label10->Text = L"y-axis: ";
			// 
			// xLabel4
			// 
			this->xLabel4->AutoSize = true;
			this->xLabel4->Location = System::Drawing::Point(168, 151);
			this->xLabel4->Name = L"xLabel4";
			this->xLabel4->Size = System::Drawing::Size(12, 13);
			this->xLabel4->TabIndex = 32;
			this->xLabel4->Text = L"x";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(123, 151);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(39, 13);
			this->label7->TabIndex = 31;
			this->label7->Text = L"x-axis: ";
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(15, 150);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(102, 17);
			this->checkBox4->TabIndex = 30;
			this->checkBox4->Text = L"Edit bottom right";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox4_CheckedChanged);
			// 
			// blRtBtn
			// 
			this->blRtBtn->Enabled = false;
			this->blRtBtn->Location = System::Drawing::Point(461, 108);
			this->blRtBtn->Name = L"blRtBtn";
			this->blRtBtn->Size = System::Drawing::Size(30, 23);
			this->blRtBtn->TabIndex = 29;
			this->blRtBtn->Text = L"RT";
			this->blRtBtn->UseVisualStyleBackColor = true;
			this->blRtBtn->Click += gcnew System::EventHandler(this, &MyForm::blRtBtn_Click);
			// 
			// blLfBtn
			// 
			this->blLfBtn->Enabled = false;
			this->blLfBtn->Location = System::Drawing::Point(425, 108);
			this->blLfBtn->Name = L"blLfBtn";
			this->blLfBtn->Size = System::Drawing::Size(30, 23);
			this->blLfBtn->TabIndex = 28;
			this->blLfBtn->Text = L"LF";
			this->blLfBtn->UseVisualStyleBackColor = true;
			this->blLfBtn->Click += gcnew System::EventHandler(this, &MyForm::blLfBtn_Click);
			// 
			// blDnBtn
			// 
			this->blDnBtn->Enabled = false;
			this->blDnBtn->Location = System::Drawing::Point(386, 109);
			this->blDnBtn->Name = L"blDnBtn";
			this->blDnBtn->Size = System::Drawing::Size(33, 23);
			this->blDnBtn->TabIndex = 27;
			this->blDnBtn->Text = L"DN";
			this->blDnBtn->UseVisualStyleBackColor = true;
			this->blDnBtn->Click += gcnew System::EventHandler(this, &MyForm::blDnBtn_Click);
			// 
			// blUpBtn
			// 
			this->blUpBtn->Enabled = false;
			this->blUpBtn->Location = System::Drawing::Point(350, 109);
			this->blUpBtn->Name = L"blUpBtn";
			this->blUpBtn->Size = System::Drawing::Size(30, 23);
			this->blUpBtn->TabIndex = 26;
			this->blUpBtn->Text = L"UP";
			this->blUpBtn->UseVisualStyleBackColor = true;
			this->blUpBtn->Click += gcnew System::EventHandler(this, &MyForm::blUpBtn_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(308, 111);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(36, 20);
			this->textBox4->TabIndex = 25;
			this->textBox4->Text = L"100";
			// 
			// yLabel3
			// 
			this->yLabel3->AutoSize = true;
			this->yLabel3->Location = System::Drawing::Point(269, 113);
			this->yLabel3->Name = L"yLabel3";
			this->yLabel3->Size = System::Drawing::Size(12, 13);
			this->yLabel3->TabIndex = 24;
			this->yLabel3->Text = L"y";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(224, 113);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(39, 13);
			this->label8->TabIndex = 23;
			this->label8->Text = L"y-axis: ";
			// 
			// xLabel3
			// 
			this->xLabel3->AutoSize = true;
			this->xLabel3->Location = System::Drawing::Point(163, 114);
			this->xLabel3->Name = L"xLabel3";
			this->xLabel3->Size = System::Drawing::Size(12, 13);
			this->xLabel3->TabIndex = 22;
			this->xLabel3->Text = L"x";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(119, 114);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(39, 13);
			this->label5->TabIndex = 21;
			this->label5->Text = L"x-axis: ";
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(15, 113);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(96, 17);
			this->checkBox3->TabIndex = 20;
			this->checkBox3->Text = L"Edit bottom left";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox3_CheckedChanged);
			// 
			// trRtBtn
			// 
			this->trRtBtn->Enabled = false;
			this->trRtBtn->Location = System::Drawing::Point(404, 53);
			this->trRtBtn->Name = L"trRtBtn";
			this->trRtBtn->Size = System::Drawing::Size(30, 23);
			this->trRtBtn->TabIndex = 19;
			this->trRtBtn->Text = L"RT";
			this->trRtBtn->UseVisualStyleBackColor = true;
			this->trRtBtn->Click += gcnew System::EventHandler(this, &MyForm::trRtBtn_Click);
			// 
			// trLfBtn
			// 
			this->trLfBtn->Enabled = false;
			this->trLfBtn->Location = System::Drawing::Point(368, 53);
			this->trLfBtn->Name = L"trLfBtn";
			this->trLfBtn->Size = System::Drawing::Size(30, 23);
			this->trLfBtn->TabIndex = 18;
			this->trLfBtn->Text = L"LF";
			this->trLfBtn->UseVisualStyleBackColor = true;
			this->trLfBtn->Click += gcnew System::EventHandler(this, &MyForm::trLfBtn_Click);
			// 
			// trDnBtn
			// 
			this->trDnBtn->Enabled = false;
			this->trDnBtn->Location = System::Drawing::Point(333, 53);
			this->trDnBtn->Name = L"trDnBtn";
			this->trDnBtn->Size = System::Drawing::Size(33, 23);
			this->trDnBtn->TabIndex = 17;
			this->trDnBtn->Text = L"DN";
			this->trDnBtn->UseVisualStyleBackColor = true;
			this->trDnBtn->Click += gcnew System::EventHandler(this, &MyForm::trDnBtn_Click);
			// 
			// trUpBtn
			// 
			this->trUpBtn->Enabled = false;
			this->trUpBtn->Location = System::Drawing::Point(297, 53);
			this->trUpBtn->Name = L"trUpBtn";
			this->trUpBtn->Size = System::Drawing::Size(30, 23);
			this->trUpBtn->TabIndex = 16;
			this->trUpBtn->Text = L"UP";
			this->trUpBtn->UseVisualStyleBackColor = true;
			this->trUpBtn->Click += gcnew System::EventHandler(this, &MyForm::trUpBtn_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(255, 55);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(36, 20);
			this->textBox3->TabIndex = 15;
			this->textBox3->Text = L"100";
			// 
			// yLabel2
			// 
			this->yLabel2->AutoSize = true;
			this->yLabel2->Location = System::Drawing::Point(224, 59);
			this->yLabel2->Name = L"yLabel2";
			this->yLabel2->Size = System::Drawing::Size(12, 13);
			this->yLabel2->TabIndex = 14;
			this->yLabel2->Text = L"y";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(183, 59);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(39, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"y-axis: ";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// xLabel2
			// 
			this->xLabel2->AutoSize = true;
			this->xLabel2->Location = System::Drawing::Point(146, 59);
			this->xLabel2->Name = L"xLabel2";
			this->xLabel2->Size = System::Drawing::Size(12, 13);
			this->xLabel2->TabIndex = 12;
			this->xLabel2->Text = L"x";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(106, 56);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(39, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"x-axis: ";
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(15, 55);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(90, 17);
			this->checkBox2->TabIndex = 10;
			this->checkBox2->Text = L"Edit top Right";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox2_CheckedChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(17, 19);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(83, 17);
			this->checkBox1->TabIndex = 9;
			this->checkBox1->Text = L"Edit top Left";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// tlRTBtn
			// 
			this->tlRTBtn->Enabled = false;
			this->tlRTBtn->Location = System::Drawing::Point(404, 17);
			this->tlRTBtn->Name = L"tlRTBtn";
			this->tlRTBtn->Size = System::Drawing::Size(30, 23);
			this->tlRTBtn->TabIndex = 8;
			this->tlRTBtn->Text = L"RT";
			this->tlRTBtn->UseVisualStyleBackColor = true;
			this->tlRTBtn->Click += gcnew System::EventHandler(this, &MyForm::tlRTBtn_Click);
			// 
			// tlLFBtn
			// 
			this->tlLFBtn->Enabled = false;
			this->tlLFBtn->Location = System::Drawing::Point(368, 17);
			this->tlLFBtn->Name = L"tlLFBtn";
			this->tlLFBtn->Size = System::Drawing::Size(30, 23);
			this->tlLFBtn->TabIndex = 7;
			this->tlLFBtn->Text = L"LF";
			this->tlLFBtn->UseVisualStyleBackColor = true;
			this->tlLFBtn->Click += gcnew System::EventHandler(this, &MyForm::tlLFBtn_Click);
			// 
			// tlDnBtn
			// 
			this->tlDnBtn->Enabled = false;
			this->tlDnBtn->Location = System::Drawing::Point(333, 17);
			this->tlDnBtn->Name = L"tlDnBtn";
			this->tlDnBtn->Size = System::Drawing::Size(33, 23);
			this->tlDnBtn->TabIndex = 6;
			this->tlDnBtn->Text = L"DN";
			this->tlDnBtn->UseVisualStyleBackColor = true;
			this->tlDnBtn->Click += gcnew System::EventHandler(this, &MyForm::tlDnBtn_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(255, 17);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(36, 20);
			this->textBox2->TabIndex = 5;
			this->textBox2->Text = L"100";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// yLabel
			// 
			this->yLabel->AutoSize = true;
			this->yLabel->Location = System::Drawing::Point(224, 20);
			this->yLabel->Name = L"yLabel";
			this->yLabel->Size = System::Drawing::Size(12, 13);
			this->yLabel->TabIndex = 4;
			this->yLabel->Text = L"y";
			this->yLabel->Click += gcnew System::EventHandler(this, &MyForm::yLabel_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(183, 20);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(39, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"y-axis: ";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// xLabel
			// 
			this->xLabel->AutoSize = true;
			this->xLabel->Location = System::Drawing::Point(146, 20);
			this->xLabel->Name = L"xLabel";
			this->xLabel->Size = System::Drawing::Size(12, 13);
			this->xLabel->TabIndex = 2;
			this->xLabel->Text = L"x";
			this->xLabel->Click += gcnew System::EventHandler(this, &MyForm::xLabel_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(106, 20);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"x-axis: ";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// tlUpBtn
			// 
			this->tlUpBtn->Enabled = false;
			this->tlUpBtn->Location = System::Drawing::Point(297, 17);
			this->tlUpBtn->Name = L"tlUpBtn";
			this->tlUpBtn->Size = System::Drawing::Size(30, 23);
			this->tlUpBtn->TabIndex = 0;
			this->tlUpBtn->Text = L"UP";
			this->tlUpBtn->UseVisualStyleBackColor = true;
			this->tlUpBtn->Click += gcnew System::EventHandler(this, &MyForm::tlBtn_Click);
			// 
			// savePanel
			// 
			this->savePanel->Controls->Add(this->applyBtn);
			this->savePanel->Controls->Add(this->width);
			this->savePanel->Controls->Add(this->height);
			this->savePanel->Controls->Add(this->label12);
			this->savePanel->Controls->Add(this->label11);
			this->savePanel->Location = System::Drawing::Point(10, 92);
			this->savePanel->Name = L"savePanel";
			this->savePanel->Size = System::Drawing::Size(385, 230);
			this->savePanel->TabIndex = 42;
			this->savePanel->Visible = false;
			// 
			// applyBtn
			// 
			this->applyBtn->Location = System::Drawing::Point(166, 26);
			this->applyBtn->Name = L"applyBtn";
			this->applyBtn->Size = System::Drawing::Size(75, 23);
			this->applyBtn->TabIndex = 52;
			this->applyBtn->Text = L"apply";
			this->applyBtn->UseVisualStyleBackColor = true;
			this->applyBtn->Click += gcnew System::EventHandler(this, &MyForm::applyBtn_Click);
			// 
			// width
			// 
			this->width->Location = System::Drawing::Point(44, 16);
			this->width->Name = L"width";
			this->width->Size = System::Drawing::Size(100, 20);
			this->width->TabIndex = 0;
			this->width->Text = L"300";
			// 
			// height
			// 
			this->height->Location = System::Drawing::Point(50, 44);
			this->height->Name = L"height";
			this->height->Size = System::Drawing::Size(100, 20);
			this->height->TabIndex = 51;
			this->height->Text = L"382";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(6, 50);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(38, 13);
			this->label12->TabIndex = 1;
			this->label12->Text = L"Height";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(3, 19);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(35, 13);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Width";
			// 
			// markerPanel
			// 
			this->markerPanel->Controls->Add(this->button5);
			this->markerPanel->Controls->Add(this->applyCheck);
			this->markerPanel->Controls->Add(this->textBox7);
			this->markerPanel->Controls->Add(this->button4);
			this->markerPanel->Controls->Add(this->textBox6);
			this->markerPanel->Controls->Add(this->label9);
			this->markerPanel->Controls->Add(this->button3);
			this->markerPanel->Location = System::Drawing::Point(146, 89);
			this->markerPanel->Name = L"markerPanel";
			this->markerPanel->Size = System::Drawing::Size(299, 259);
			this->markerPanel->TabIndex = 42;
			this->markerPanel->Visible = false;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(90, 169);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 50;
			this->button5->Text = L"apply";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click_1);
			// 
			// applyCheck
			// 
			this->applyCheck->AutoSize = true;
			this->applyCheck->Location = System::Drawing::Point(90, 145);
			this->applyCheck->Name = L"applyCheck";
			this->applyCheck->Size = System::Drawing::Size(59, 17);
			this->applyCheck->TabIndex = 49;
			this->applyCheck->Text = L"Enable";
			this->applyCheck->UseVisualStyleBackColor = true;
			this->applyCheck->CheckedChanged += gcnew System::EventHandler(this, &MyForm::applyCheck_CheckedChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(80, 53);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(100, 20);
			this->textBox7->TabIndex = 48;
			this->textBox7->Visible = false;
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(90, 100);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 46;
			this->button4->Text = L"generate";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click_1);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(97, 47);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(51, 20);
			this->textBox6->TabIndex = 45;
			this->textBox6->Text = L"200";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(18, 50);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(56, 13);
			this->label9->TabIndex = 44;
			this->label9->Text = L"side Pixels";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(8, 233);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(41, 23);
			this->button3->TabIndex = 43;
			this->button3->Text = L"back";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// OpenglPanel
			// 
			this->OpenglPanel->Controls->Add(this->button6);
			this->OpenglPanel->Controls->Add(this->label13);
			this->OpenglPanel->Controls->Add(this->ObjPath);
			this->OpenglPanel->Location = System::Drawing::Point(16, 352);
			this->OpenglPanel->Name = L"OpenglPanel";
			this->OpenglPanel->Size = System::Drawing::Size(583, 236);
			this->OpenglPanel->TabIndex = 43;
			this->OpenglPanel->Visible = false;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(460, 16);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 2;
			this->button6->Text = L"Get Object";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(11, 21);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(93, 13);
			this->label13->TabIndex = 1;
			this->label13->Text = L"input the .obj Path";
			// 
			// ObjPath
			// 
			this->ObjPath->Location = System::Drawing::Point(108, 18);
			this->ObjPath->Name = L"ObjPath";
			this->ObjPath->Size = System::Drawing::Size(346, 20);
			this->ObjPath->TabIndex = 0;
			// 
			// OpenglBtn
			// 
			this->OpenglBtn->Location = System::Drawing::Point(218, 55);
			this->OpenglBtn->Name = L"OpenglBtn";
			this->OpenglBtn->Size = System::Drawing::Size(75, 23);
			this->OpenglBtn->TabIndex = 44;
			this->OpenglBtn->Text = L"Edit Opengl";
			this->OpenglBtn->UseVisualStyleBackColor = true;
			this->OpenglBtn->Click += gcnew System::EventHandler(this, &MyForm::OpenglBtn_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(611, 600);
			this->Controls->Add(this->OpenglBtn);
			this->Controls->Add(this->OpenglPanel);
			this->Controls->Add(this->savePanel);
			this->Controls->Add(this->markerPanel);
			this->Controls->Add(this->editPanel);
			this->Controls->Add(this->editBtn);
			this->Controls->Add(this->CrtPntBtn);
			this->Controls->Add(this->getBtn);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->editPanel->ResumeLayout(false);
			this->editPanel->PerformLayout();
			this->savePanel->ResumeLayout(false);
			this->savePanel->PerformLayout();
			this->markerPanel->ResumeLayout(false);
			this->markerPanel->PerformLayout();
			this->OpenglPanel->ResumeLayout(false);
			this->OpenglPanel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		// default top left point
		int tlx = 0;
		int tl_y = 279;

		// default top right point
		int trx = 0;
		int tr_y = tl_y + 50;

		// default bottom left point
		int blx = 0;
		int bl_y = tr_y + 50;

		// default bottom right point
		int brx = 0;
		int br_y = bl_y + 50;

		//System::String^ pixels;
		//pixels = this->label11->Text;
		//int pixData = Convert::ToInt32(pixels);

		/*System::String^ pixels = this->textBox6->Text;
		int pixData = Convert::ToInt32(pixels);*/

		



	private: System::Void getBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ input = this->textBox1->Text;
		std::string stdInput = msclr::interop::marshal_as<std::string>(input);
		//Mat i	mg = imread(stdInput);
		cv::String cvInput = stdInput;
		Mat img = imread(cvInput);
		if (img.empty())
		{
			//MessageBox::Show("Error loading image please check the path");
			MessageBox::Show("Error loading image", "invalid path", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		else
		{
			MessageBox::Show("Image Gotten"); 
		}
		/*imshow("image", img);
		waitKey(0);*/
	}
	private: System::Void CrtPntBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		if (this->editBtn->Enabled == false)
		{
			this->editBtn->Enabled = true;
		}

		// Getting the image directory
		System::String^ input = this->textBox1->Text;
		std::string stdInput = msclr::interop::marshal_as<std::string>(input);
		//Mat i	mg = imread(stdInput);
		cv::String cvInput = stdInput;
		Mat img = imread(cvInput);

		// Creating four Circles in the image aka points
		circle(img, cv::Point(tlx, tl_y), 5, Scalar(0, 0, 255), FILLED); // top left 
		circle(img, cv::Point(trx, tr_y), 5, Scalar(255, 0, 0), FILLED); // top right
		circle(img, cv::Point(blx, bl_y), 5, Scalar(0, 255, 0), FILLED); // bottom left
		circle(img, cv::Point(brx, br_y), 5, Scalar(255, 255, 255), FILLED); // bottom right

		cv::namedWindow("image", 1);

		imshow("image", img);
		waitKey(0);
	}
private: System::Void editBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->editPanel->Visible == false)
	{
		this->editPanel->Visible = true;
	}

}

private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tlBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ incrVal = this->textBox2->Text;
	int val = Convert::ToInt32(incrVal);


	if (this->textBox2->Text == "" || val < 1)
	{
		tl_y = tl_y--;
	}
	else
	{
		tl_y = tl_y - val;
	}

	System::String^ outCrVal;
	System::String^ outCrValy;
	System::String^ sVal_tl = Convert::ToString(tl_y);
	System::String^ sxVal_tl = Convert::ToString(tlx);
	outCrValy = sVal_tl;
	outCrVal = sxVal_tl;

	this->xLabel->Text = outCrVal;
	this->yLabel->Text = outCrValy;

	// Getting the image directory
	System::String^ input = this->textBox1->Text; 
	std::string stdInput = msclr::interop::marshal_as<std::string>(input);
	//Mat i	mg = imread(stdInput);
	cv::String cvInput = stdInput; 
	Mat img = imread(cvInput); 

	// Creating four Circles in the image aka points
	circle(img, cv::Point(tlx, tl_y), 5, Scalar(0, 0, 255), FILLED); // top left 
	circle(img, cv::Point(trx, tr_y), 5, Scalar(255, 0, 0), FILLED); // top right
	circle(img, cv::Point(blx, bl_y), 5, Scalar(0, 255, 0), FILLED); // bottom left
	circle(img, cv::Point(brx, br_y), 5, Scalar(255, 255, 255), FILLED); // bottom right	

	imshow("image", img);
	waitKey(0);
}
private: System::Void tlLFBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	System::String^ incrVal = this->textBox2->Text;
	int val = Convert::ToInt32(incrVal);


	if (this->textBox2->Text == "" || val < 1)
	{
		tlx = tlx--;
	}
	else
	{
		tlx = tlx - val;
	}

	System::String^ outCrVal;
	System::String^ outCrValy;
	System::String^ sVal_tl = Convert::ToString(tl_y);
	System::String^ sxVal_tl = Convert::ToString(tlx);
	outCrValy = sVal_tl;
	outCrVal = sxVal_tl;

	this->xLabel->Text = outCrVal;
	this->yLabel->Text = outCrValy;

	// Getting the image directory
	System::String^ input = this->textBox1->Text;
	std::string stdInput = msclr::interop::marshal_as<std::string>(input);
	//Mat i	mg = imread(stdInput);
	cv::String cvInput = stdInput;
	Mat img = imread(cvInput);

	// Creating four Circles in the image aka points
	circle(img, cv::Point(tlx, tl_y), 5, Scalar(0, 0, 255), FILLED); // top left 
	circle(img, cv::Point(trx, tr_y), 5, Scalar(255, 0, 0), FILLED); // top right
	circle(img, cv::Point(blx, bl_y), 5, Scalar(0, 255, 0), FILLED); // bottom left
	circle(img, cv::Point(brx, br_y), 5, Scalar(255, 255, 255), FILLED); // bottom right	

	imshow("image", img);
	waitKey(0);
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox1->Checked == true)
	{
		this->tlUpBtn->Enabled = true;
		this->tlDnBtn->Enabled = true;
		this->tlLFBtn->Enabled = true;
		this->tlRTBtn->Enabled = true;
	}
	else
	{
		this->tlUpBtn->Enabled = false;
		this->tlDnBtn->Enabled = false;
		this->tlLFBtn->Enabled = false;
		this->tlRTBtn->Enabled = false;
	}
}
private: System::Void yLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tlRTBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	System::String^ incrVal = this->textBox2->Text;
	int val = Convert::ToInt32(incrVal);


	if (this->textBox2->Text == "" || val < 1)
	{
		tlx = tlx++;
	}
	else
	{
		tlx = tlx + val;
	}

	System::String^ outCrVal;
	System::String^ outCrValy;
	System::String^ sVal_tl = Convert::ToString(tl_y);
	System::String^ sxVal_tl = Convert::ToString(tlx);
	outCrValy = sVal_tl;
	outCrVal = sxVal_tl;

	this->xLabel->Text = outCrVal;
	this->yLabel->Text = outCrValy;

	// Getting the image directory
	System::String^ input = this->textBox1->Text;
	std::string stdInput = msclr::interop::marshal_as<std::string>(input);
	//Mat i	mg = imread(stdInput);
	cv::String cvInput = stdInput;
	Mat img = imread(cvInput);

	// Creating four Circles in the image aka points
	circle(img, cv::Point(tlx, tl_y), 5, Scalar(0, 0, 255), FILLED); // top left 
	circle(img, cv::Point(trx, tr_y), 5, Scalar(255, 0, 0), FILLED); // top right
	circle(img, cv::Point(blx, bl_y), 5, Scalar(0, 255, 0), FILLED); // bottom left
	circle(img, cv::Point(brx, br_y), 5, Scalar(255, 255, 255), FILLED); // bottom right	

	imshow("image", img);
	waitKey(0);
}
private: System::Void xLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tlDnBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	System::String^ incrVal = this->textBox2->Text;
	int val = Convert::ToInt32(incrVal);


	if (this->textBox2->Text == "" || val < 1)
	{
		tl_y = tl_y++;
	}
	else
	{
		tl_y = tl_y + val;
	}

	System::String^ outCrVal;
	System::String^ outCrValy;
	System::String^ sVal_tl = Convert::ToString(tl_y);
	System::String^ sxVal_tl = Convert::ToString(tlx);
	outCrValy = sVal_tl;
	outCrVal = sxVal_tl;

	this->xLabel->Text = outCrVal;
	this->yLabel->Text = outCrValy;

	// Getting the image directory
	System::String^ input = this->textBox1->Text;
	std::string stdInput = msclr::interop::marshal_as<std::string>(input);
	//Mat i	mg = imread(stdInput);
	cv::String cvInput = stdInput;
	Mat img = imread(cvInput);

	// Creating four Circles in the image aka points
	circle(img, cv::Point(tlx, tl_y), 5, Scalar(0, 0, 255), FILLED); // top left 
	circle(img, cv::Point(trx, tr_y), 5, Scalar(255, 0, 0), FILLED); // top right
	circle(img, cv::Point(blx, bl_y), 5, Scalar(0, 255, 0), FILLED); // bottom left
	circle(img, cv::Point(brx, br_y), 5, Scalar(255, 255, 255), FILLED); // bottom right	

	imshow("image", img);
	waitKey(0);
}
private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox2->Checked == true)
	{
		this->trUpBtn->Enabled = true;
		this->trDnBtn->Enabled = true;
		this->trLfBtn->Enabled = true;
		this->trRtBtn->Enabled = true;
	}
	else
	{
		this->trUpBtn->Enabled = false;
		this->trDnBtn->Enabled = false;
		this->trLfBtn->Enabled = false;
		this->trRtBtn->Enabled = false;
	}
}
private: System::Void trUpBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		
	System::String^ incrVal = this->textBox3->Text;
	int val = Convert::ToInt32(incrVal);


	if (this->textBox3->Text == "" || val < 1)
	{
		tr_y = tr_y--;
	}
	else
	{
		tr_y = tr_y - val;
	}

	System::String^ outCrVal;
	System::String^ outCrValy; 
	System::String^ sVal_tl = Convert::ToString(tr_y);
	System::String^ sxVal_tl = Convert::ToString(trx);
	outCrValy = sVal_tl; 
	outCrVal = sxVal_tl; 

	this->xLabel2->Text = outCrVal;
	this->yLabel2->Text = outCrValy;

	// Getting the image directory
	System::String^ input = this->textBox1->Text;
	std::string stdInput = msclr::interop::marshal_as<std::string>(input);
	//Mat i	mg = imread(stdInput);
	cv::String cvInput = stdInput;
	Mat img = imread(cvInput);

	// Creating four Circles in the image aka points
	circle(img, cv::Point(tlx, tl_y), 5, Scalar(0, 0, 255), FILLED); // top left 
	circle(img, cv::Point(trx, tr_y), 5, Scalar(255, 0, 0), FILLED); // top right
	circle(img, cv::Point(blx, bl_y), 5, Scalar(0, 255, 0), FILLED); // bottom left
	circle(img, cv::Point(brx, br_y), 5, Scalar(255, 255, 255), FILLED); // bottom right	

	imshow("image", img);
	waitKey(0);
}
private: System::Void trDnBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ incrVal = this->textBox3->Text;
	int val = Convert::ToInt32(incrVal);


	if (this->textBox3->Text == "" || val < 1)
	{
		tr_y = tr_y++;
	}
	else
	{
		tr_y = tr_y + val;
	}

	System::String^ outCrVal;
	System::String^ outCrValy;
	System::String^ sVal_tl = Convert::ToString(tr_y);
	System::String^ sxVal_tl = Convert::ToString(trx);
	outCrValy = sVal_tl;
	outCrVal = sxVal_tl;

	this->xLabel2->Text = outCrVal;
	this->yLabel2->Text = outCrValy;

	// Getting the image directory
	System::String^ input = this->textBox1->Text;
	std::string stdInput = msclr::interop::marshal_as<std::string>(input);
	//Mat i	mg = imread(stdInput);
	cv::String cvInput = stdInput;
	Mat img = imread(cvInput);

	// Creating four Circles in the image aka points
	circle(img, cv::Point(tlx, tl_y), 5, Scalar(0, 0, 255), FILLED); // top left 
	circle(img, cv::Point(trx, tr_y), 5, Scalar(255, 0, 0), FILLED); // top right
	circle(img, cv::Point(blx, bl_y), 5, Scalar(0, 255, 0), FILLED); // bottom left
	circle(img, cv::Point(brx, br_y), 5, Scalar(255, 255, 255), FILLED); // bottom right	

	imshow("image", img);
	waitKey(0);
}
private: System::Void trLfBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ incrVal = this->textBox3->Text;
	int val = Convert::ToInt32(incrVal);


	if (this->textBox3->Text == "" || val < 1)
	{
		trx = trx--;
	}
	else
	{
		trx = trx - val;
	}

	System::String^ outCrVal;
	System::String^ outCrValy;
	System::String^ sVal_tl = Convert::ToString(tr_y);
	System::String^ sxVal_tl = Convert::ToString(trx);
	outCrValy = sVal_tl;
	outCrVal = sxVal_tl;

	this->xLabel2->Text = outCrVal;
	this->yLabel2->Text = outCrValy;

	// Getting the image directory
	System::String^ input = this->textBox1->Text;
	std::string stdInput = msclr::interop::marshal_as<std::string>(input);
	//Mat i	mg = imread(stdInput);
	cv::String cvInput = stdInput;
	Mat img = imread(cvInput);

	// Creating four Circles in the image aka points
	circle(img, cv::Point(tlx, tl_y), 5, Scalar(0, 0, 255), FILLED); // top left 
	circle(img, cv::Point(trx, tr_y), 5, Scalar(255, 0, 0), FILLED); // top right
	circle(img, cv::Point(blx, bl_y), 5, Scalar(0, 255, 0), FILLED); // bottom left
	circle(img, cv::Point(brx, br_y), 5, Scalar(255, 255, 255), FILLED); // bottom right	

	imshow("image", img);
	waitKey(0);
}
private: System::Void trRtBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ incrVal = this->textBox3->Text;
	int val = Convert::ToInt32(incrVal);


	if (this->textBox3->Text == "" || val < 1)
	{
		trx = trx++;
	}
	else
	{
		trx = trx + val; 
	}

	System::String^ outCrVal; 
	System::String^ outCrValy; 
	System::String^ sVal_tl = Convert::ToString(tr_y);
	System::String^ sxVal_tl = Convert::ToString(trx);
	outCrValy = sVal_tl; 
	outCrVal = sxVal_tl;

	this->xLabel2->Text = outCrVal; 
	this->yLabel2->Text = outCrValy;

	// Getting the image directory
	System::String^ input = this->textBox1->Text;
	std::string stdInput = msclr::interop::marshal_as<std::string>(input);
	//Mat i	mg = imread(stdInput);
	cv::String cvInput = stdInput;
	Mat img = imread(cvInput);

	// Creating four Circles in the image aka points
	circle(img, cv::Point(tlx, tl_y), 5, Scalar(0, 0, 255), FILLED); // top left 
	circle(img, cv::Point(trx, tr_y), 5, Scalar(255, 0, 0), FILLED); // top right
	circle(img, cv::Point(blx, bl_y), 5, Scalar(0, 255, 0), FILLED); // bottom left
	circle(img, cv::Point(brx, br_y), 5, Scalar(255, 255, 255), FILLED); // bottom right	

	imshow("image", img);
	waitKey(0);
}
private: System::Void editPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void blUpBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	System::String^ incrVal = this->textBox4->Text;
	int val = Convert::ToInt32(incrVal);


	if (this->textBox4->Text == "" || val < 1)
	{
		bl_y = bl_y--;
	}
	else
	{
		bl_y = bl_y - val;
	}

	System::String^ outCrVal;
	System::String^ outCrValy;
	System::String^ sVal_tl = Convert::ToString(bl_y);
	System::String^ sxVal_tl = Convert::ToString(blx);
	outCrValy = sVal_tl;
	outCrVal = sxVal_tl;

	this->xLabel3->Text = outCrVal;
	this->yLabel3->Text = outCrValy;

	// Getting the image directory
	System::String^ input = this->textBox1->Text;
	std::string stdInput = msclr::interop::marshal_as<std::string>(input);
	//Mat i	mg = imread(stdInput);
	cv::String cvInput = stdInput;
	Mat img = imread(cvInput);

	// Creating four Circles in the image aka points
	circle(img, cv::Point(tlx, tl_y), 5, Scalar(0, 0, 255), FILLED); // top left 
	circle(img, cv::Point(trx, tr_y), 5, Scalar(255, 0, 0), FILLED); // top right
	circle(img, cv::Point(blx, bl_y), 5, Scalar(0, 255, 0), FILLED); // bottom left
	circle(img, cv::Point(brx, br_y), 5, Scalar(255, 255, 255), FILLED); // bottom right	

	imshow("image", img);
	waitKey(0);
}
private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox3->Checked == true)
	{
		this->blUpBtn->Enabled = true;
		this->blDnBtn->Enabled = true;
		this->blLfBtn->Enabled = true;
		this->blRtBtn->Enabled = true;
	}
	else
	{
		this->blUpBtn->Enabled = false;
		this->blDnBtn->Enabled = false;
		this->blLfBtn->Enabled = false;
		this->blRtBtn->Enabled = false;
	}
	
}
private: System::Void blDnBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ incrVal = this->textBox4->Text;
	int val = Convert::ToInt32(incrVal);


	if (this->textBox4->Text == "" || val < 1)
	{
		bl_y = bl_y++;
	}
	else
	{
		bl_y = bl_y + val;
	}

	System::String^ outCrVal;
	System::String^ outCrValy;
	System::String^ sVal_tl = Convert::ToString(bl_y);
	System::String^ sxVal_tl = Convert::ToString(blx);
	outCrValy = sVal_tl;
	outCrVal = sxVal_tl;

	this->xLabel3->Text = outCrVal;
	this->yLabel3->Text = outCrValy;

	// Getting the image directory
	System::String^ input = this->textBox1->Text;
	std::string stdInput = msclr::interop::marshal_as<std::string>(input);
	//Mat i	mg = imread(stdInput);
	cv::String cvInput = stdInput;
	Mat img = imread(cvInput);

	// Creating four Circles in the image aka points
	circle(img, cv::Point(tlx, tl_y), 5, Scalar(0, 0, 255), FILLED); // top left 
	circle(img, cv::Point(trx, tr_y), 5, Scalar(255, 0, 0), FILLED); // top right
	circle(img, cv::Point(blx, bl_y), 5, Scalar(0, 255, 0), FILLED); // bottom left
	circle(img, cv::Point(brx, br_y), 5, Scalar(255, 255, 255), FILLED); // bottom right	

	imshow("image", img);
	waitKey(0);
}
private: System::Void blLfBtn_Click(System::Object^ sender, System::EventArgs^ e) {

	System::String^ incrVal = this->textBox4->Text;
	int val = Convert::ToInt32(incrVal);


	if (this->textBox4->Text == "" || val < 1)
	{
		blx = blx--;
	}
	else
	{
		blx = blx - val;
	}

	System::String^ outCrVal;
	System::String^ outCrValy;
	System::String^ sVal_tl = Convert::ToString(bl_y);
	System::String^ sxVal_tl = Convert::ToString(blx);
	outCrValy = sVal_tl;
	outCrVal = sxVal_tl;

	this->xLabel3->Text = outCrVal;
	this->yLabel3->Text = outCrValy;

	// Getting the image directory
	System::String^ input = this->textBox1->Text;
	std::string stdInput = msclr::interop::marshal_as<std::string>(input);
	//Mat i	mg = imread(stdInput);
	cv::String cvInput = stdInput;
	Mat img = imread(cvInput);

	// Creating four Circles in the image aka points
	circle(img, cv::Point(tlx, tl_y), 5, Scalar(0, 0, 255), FILLED); // top left 
	circle(img, cv::Point(trx, tr_y), 5, Scalar(255, 0, 0), FILLED); // top right
	circle(img, cv::Point(blx, bl_y), 5, Scalar(0, 255, 0), FILLED); // bottom left
	circle(img, cv::Point(brx, br_y), 5, Scalar(255, 255, 255), FILLED); // bottom right	

	imshow("image", img);
	waitKey(0);
}
private: System::Void blRtBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ incrVal = this->textBox4->Text;
	int val = Convert::ToInt32(incrVal);


	if (this->textBox4->Text == "" || val < 1)
	{
		blx = blx++;
	}
	else
	{
		blx = blx + val;
	}

	System::String^ outCrVal;
	System::String^ outCrValy;
	System::String^ sVal_tl = Convert::ToString(bl_y);
	System::String^ sxVal_tl = Convert::ToString(blx);
	outCrValy = sVal_tl;
	outCrVal = sxVal_tl;

	this->xLabel3->Text = outCrVal;
	this->yLabel3->Text = outCrValy;

	// Getting the image directory
	System::String^ input = this->textBox1->Text;
	std::string stdInput = msclr::interop::marshal_as<std::string>(input);
	//Mat i	mg = imread(stdInput);
	cv::String cvInput = stdInput;
	Mat img = imread(cvInput);

	// Creating four Circles in the image aka points
	circle(img, cv::Point(tlx, tl_y), 5, Scalar(0, 0, 255), FILLED); // top left 
	circle(img, cv::Point(trx, tr_y), 5, Scalar(255, 0, 0), FILLED); // top right
	circle(img, cv::Point(blx, bl_y), 5, Scalar(0, 255, 0), FILLED); // bottom left
	circle(img, cv::Point(brx, br_y), 5, Scalar(255, 255, 255), FILLED); // bottom right	

	imshow("image", img);
	waitKey(0);
}
private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->checkBox4->Checked == true)
	{
		this->brUpBtn->Enabled = true;
		this->brDnBtn->Enabled = true;
		this->brLfBtn->Enabled = true;
		this->brRtBtn->Enabled = true;
	}
	else
	{
		this->brUpBtn->Enabled = false;
		this->brDnBtn->Enabled = false;
		this->brLfBtn->Enabled = false;
		this->brRtBtn->Enabled = false;
	}
}
private: System::Void brUpBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ incrVal = this->textBox5->Text;
	int val = Convert::ToInt32(incrVal);


	if (this->textBox5->Text == "" || val < 1)
	{
		br_y = br_y--;
	}
	else
	{
		br_y = br_y - val;
	}

	System::String^ outCrVal;
	System::String^ outCrValy;
	System::String^ sVal_tl = Convert::ToString(br_y);
	System::String^ sxVal_tl = Convert::ToString(brx);
	outCrValy = sVal_tl;
	outCrVal = sxVal_tl;

	this->xLabel4->Text = outCrVal;
	this->yLabel4->Text = outCrValy;

	// Getting the image directory
	System::String^ input = this->textBox1->Text;
	std::string stdInput = msclr::interop::marshal_as<std::string>(input);
	//Mat i	mg = imread(stdInput);
	cv::String cvInput = stdInput;
	Mat img = imread(cvInput);

	// Creating four Circles in the image aka points
	circle(img, cv::Point(tlx, tl_y), 5, Scalar(0, 0, 255), FILLED); // top left 
	circle(img, cv::Point(trx, tr_y), 5, Scalar(255, 0, 0), FILLED); // top right
	circle(img, cv::Point(blx, bl_y), 5, Scalar(0, 255, 0), FILLED); // bottom left
	circle(img, cv::Point(brx, br_y), 5, Scalar(255, 255, 255), FILLED); // bottom right	

	imshow("image", img);
	waitKey(0);
}
private: System::Void brDnBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ incrVal = this->textBox5->Text;
	int val = Convert::ToInt32(incrVal);


	if (this->textBox5->Text == "" || val < 1)
	{
		br_y = br_y++;
	}
	else
	{
		br_y = br_y + val;
	}

	System::String^ outCrVal;
	System::String^ outCrValy;
	System::String^ sVal_tl = Convert::ToString(br_y);
	System::String^ sxVal_tl = Convert::ToString(brx);
	outCrValy = sVal_tl;
	outCrVal = sxVal_tl;

	this->xLabel4->Text = outCrVal;
	this->yLabel4->Text = outCrValy;

	// Getting the image directory
	System::String^ input = this->textBox1->Text;
	std::string stdInput = msclr::interop::marshal_as<std::string>(input);
	//Mat i	mg = imread(stdInput);
	cv::String cvInput = stdInput;
	Mat img = imread(cvInput);

	// Creating four Circles in the image aka points
	circle(img, cv::Point(tlx, tl_y), 5, Scalar(0, 0, 255), FILLED); // top left 
	circle(img, cv::Point(trx, tr_y), 5, Scalar(255, 0, 0), FILLED); // top right
	circle(img, cv::Point(blx, bl_y), 5, Scalar(0, 255, 0), FILLED); // bottom left
	circle(img, cv::Point(brx, br_y), 5, Scalar(255, 255, 255), FILLED); // bottom right	

	imshow("image", img);
	waitKey(0);
}
private: System::Void brLfBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ incrVal = this->textBox5->Text;
	int val = Convert::ToInt32(incrVal);


	if (this->textBox5->Text == "" || val < 1)
	{
		brx = brx--;
	}
	else
	{
		brx = brx - val;
	}

	System::String^ outCrVal;
	System::String^ outCrValy;
	System::String^ sVal_tl = Convert::ToString(br_y);
	System::String^ sxVal_tl = Convert::ToString(brx);
	outCrValy =  sVal_tl;
	outCrVal = sxVal_tl;

	this->xLabel4->Text = outCrVal;
	this->yLabel4->Text = outCrValy;

	// Getting the image directory
	System::String^ input = this->textBox1->Text;
	std::string stdInput = msclr::interop::marshal_as<std::string>(input);
	//Mat i	mg = imread(stdInput);
	cv::String cvInput = stdInput;
	Mat img = imread(cvInput);

	// Creating four Circles in the image aka points
	circle(img, cv::Point(tlx, tl_y), 5, Scalar(0, 0, 255), FILLED); // top left 
	circle(img, cv::Point(trx, tr_y), 5, Scalar(255, 0, 0), FILLED); // top right
	circle(img, cv::Point(blx, bl_y), 5, Scalar(0, 255, 0), FILLED); // bottom left
	circle(img, cv::Point(brx, br_y), 5, Scalar(255, 255, 255), FILLED); // bottom right	

	imshow("image", img);
	waitKey(0);
}
private: System::Void brRtBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ incrVal = this->textBox5->Text;
	int val = Convert::ToInt32(incrVal);


	if (this->textBox5->Text == "" || val < 1)
	{
		brx = brx++;
	}
	else
	{
		brx = brx + val;
	}

	System::String^ outCrVal;
	System::String^ outCrValy;
	System::String^ sVal_tl = Convert::ToString(br_y);
	System::String^ sxVal_tl = Convert::ToString(brx);
	outCrValy = sVal_tl;
	outCrVal = sxVal_tl;

	this->xLabel4->Text = outCrVal;
	this->yLabel4->Text = outCrValy;

	// Getting the image directory
	System::String^ input = this->textBox1->Text;
	std::string stdInput = msclr::interop::marshal_as<std::string>(input);
	//Mat i	mg = imread(stdInput);
	cv::String cvInput = stdInput;
	Mat img = imread(cvInput);

	// Creating four Circles in the image aka points
	circle(img, cv::Point(tlx, tl_y), 5, Scalar(0, 0, 255), FILLED); // top left 
	circle(img, cv::Point(trx, tr_y), 5, Scalar(255, 0, 0), FILLED); // top right
	circle(img, cv::Point(blx, bl_y), 5, Scalar(0, 255, 0), FILLED); // bottom left
	circle(img, cv::Point(brx, br_y), 5, Scalar(255, 255, 255), FILLED); // bottom right	

	imshow("image", img);
	waitKey(0);
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->savePanel->Visible == false)
	{
		this->savePanel->Visible = true;
		this->editPanel->Visible = false;
	}
	else
	{
		this->savePanel->Visible = false;
		this->editPanel->Visible = true;
	}
	
	
	System::String^ input = this->textBox1->Text;
	std::string stdInput = msclr::interop::marshal_as<std::string>(input);
	//Mat i	mg = imread(stdInput);
	cv::String cvInput = stdInput;
	Mat img = imread(cvInput);
}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

	if (this->markerPanel->Visible == false)
	{
		this->markerPanel->Visible = true;
		this->editPanel->Visible = false;
	}
	else
	{
		this->markerPanel->Visible = false;
		this->editPanel->Visible = true;
	}

	//System::String^ input = this->textBox1->Text;
	//std::string stdInput = msclr::interop::marshal_as<std::string>(input);
	////Mat i	mg = imread(stdInput);
	//cv::String cvInput = stdInput;
	//Mat img = imread(cvInput);

	///*System::String^ pixels = this->label11->Text;
	//int pixData = Convert::ToInt32(pixels);*/

	//Mat marker;
	//aruco::Dictionary dictionary = aruco::getPredefinedDictionary(aruco::DICT_4X4_100);
	//aruco::generateImageMarker(dictionary, 23, 200, marker, 1);
	//imshow("marker", marker);
	//waitKey(0);
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->editPanel->Visible == false)
	{
		this->editPanel->Visible = true;
		this->markerPanel->Visible = false;
	}
	else
	{
		this->editPanel->Visible = false;
		this->markerPanel->Visible = true;
	}
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void button4_Click_1(System::Object^ sender, System::EventArgs^ e) {
	//System::String^ input = this->textBox1->Text;
	//std::string stdInput = msclr::interop::marshal_as<std::string>(input);
	////Mat i	mg = imread(stdInput);
	//cv::String cvInput = stdInput;
	//Mat img = imread(cvInput);

	// This Button code only generates markers

	System::String^ pixels = this->textBox6->Text;
	int pixData = Convert::ToInt32(pixels);

	Mat marker;
	aruco::Dictionary dictionary = aruco::getPredefinedDictionary(aruco::DICT_4X4_100);
	aruco::generateImageMarker(dictionary, 23, pixData, marker, 1);
	imwrite("marker.jpg", marker);
	imshow("marker", marker);
	waitKey(0);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	
	System::String^ dir = this->textBox7->Text;
	std::string stdInput = msclr::interop::marshal_as<std::string>(dir);
	Mat imgWarp = imread(stdInput); 

	imshow("output", imgWarp);
	waitKey(0);
}
private: System::Void applyCheck_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->textBox6->Visible == true)
	{
		this->textBox6->Visible = false;
		this->textBox7->Visible = true;
		this->label9->Text = "Enter image dir";
	}
	else
	{
		this->textBox6->Visible = true;
		this->textBox7->Visible = false;
		this->label9->Text = "side Pixels";
	}

	this->button5->Visible = true;

	System::String^ dir = this->textBox7->Text;
	std::string stdInput = msclr::interop::marshal_as<std::string>(dir);
	Mat imgWarp = imread(stdInput);

}
private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e) {
	System::String^ dir = this->textBox7->Text;
	std::string stdInput = msclr::interop::marshal_as<std::string>(dir);
	cv::String cvDir = stdInput;
	Mat imgWarp = imread(cvDir); 
	Mat marker = imread("marker.jpg"); //// this is a bookmark
	if (marker.empty())
	{
		MessageBox::Show("unable to get Image", "invalid Path", MessageBoxButtons::OK);
	}

	//this is a bookmark
	// this is a bookmark
	// this is a bookmark
	// this is a book mark
	//

	System::String^ width = this->width->Text;
	System::String^ height = this->height->Text;

	float w = Convert::ToDouble(width), h = Convert::ToDouble(height);
	/*int x = Convert::ToInt32(w);
	int y = Convert::ToInt32(h);*/

	cv::Point2f dst[4] = {
		{0.0f, 0.0f},
		{w, 0.0f},
		{0.0f, h},
		{w, h}
	};

	Mat ov = imread("marker.jpg");
	/*aruco::Dictionary dictionary = aruco::getPredefinedDictionary(aruco::DICT_4X4_100);
	aruco::generateImageMarker(dictionary, 23, 50, ov, 1);
	imwrite("marker.jpg", ov);*/



	// Specify the position (x, y) for overlay (adjust as needed)
	int x = 12;  // X-coordinate
	int y = 12;   // Y-coordinate

	//Overlay the images at the specified point Top LEFT
	for (int row = 0; row < ov.rows; ++row) {
		for (int col = 0; col < ov.cols; ++col) {
			// Check if the overlay pixel is within the background bounds
			if (x + col < imgWarp.cols && y + row < imgWarp.rows) {
				imgWarp.at<cv::Vec3b>(x + row, y + col) = ov.at<cv::Vec3b>(row, col);
			}
		}
	}


	std::vector<int> markerIds;
	std::vector<std::vector<Point2f>> markerCorners, rejectedCandidates;
	cv::aruco::DetectorParameters detectorParams;
	cv::aruco::Dictionary dictionary = getPredefinedDictionary(cv::aruco::DICT_4X4_100);
	cv::aruco::ArucoDetector detector(dictionary, detectorParams);
	detector.detectMarkers(imgWarp, markerCorners, markerIds, rejectedCandidates);

	Mat outImg = imgWarp.clone();
	cv::aruco::drawDetectedMarkers(outImg, markerCorners, markerIds);

	imshow("marker", ov);
	imshow("ove", outImg);

	waitKey(0);
}
private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void applyBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->savePanel->Visible == true)
	{
		this->savePanel->Visible = false;
	}
	
	System::String^ input = this->textBox1->Text;
	std::string stdInput = msclr::interop::marshal_as<std::string>(input);
	//Mat i	mg = imread(stdInput);
	cv::String cvInput = stdInput;
	Mat img = imread(cvInput);

	System::String^ filename = "Position.configx";
	/*int redPosVal_x;
	int redPosVal_y;
	int bluePosVal_x;
	int bluePosVal_y;
	int greenPosVal_x;
	int greenPosVal_y;
	int whitePosVal_x;
	int whitePosVal_y;*/

	System::String^ rpVx = this->xLabel->Text;
	System::String^ rpVy = this->yLabel->Text;

	System::String^ bpVx = this->xLabel2->Text;
	System::String^ bpVy = this->yLabel2->Text;

	System::String^ gpVx = this->xLabel3->Text;
	System::String^ gpVy = this->yLabel3->Text;

	System::String^ wpVx = this->xLabel4->Text;
	System::String^ wpVy = this->yLabel4->Text;

	//redPosVal_x = Convert::ToInt16(rpVx);
	//redPosVal_y = Convert::ToInt16(rpVy);

	//bluePosVal_x = Convert::ToInt16(bpVx);
	//bluePosVal_y = Convert::ToInt16(bpVy);

	//greenPosVal_x = Convert::ToInt16(gpVx);
	//greenPosVal_y = Convert::ToInt16(gpVy);

	//whitePosVal_x = Convert::ToInt16(wpVx);
	//whitePosVal_y = Convert::ToInt16(wpVy);

	System::String^ width = this->width->Text;
	System::String^ height = this->height->Text;

	float w = Convert::ToDouble(width), h = Convert::ToDouble(height);

	Mat imgWarp;

	double redPosVal_x = Convert::ToDouble(rpVx);
	float frpVx = static_cast<float>(redPosVal_x);
	double redPosVal_y = Convert::ToDouble(rpVy);
	float frpVy = static_cast<float>(redPosVal_y);

	double bluePosVal_x = Convert::ToDouble(bpVx);
	float fbrpVx = static_cast<float>(bluePosVal_x);
	double bluePosVal_y = Convert::ToDouble(bpVy);
	float fbrpVy = static_cast<float>(bluePosVal_y);

	double greenPosVal_x = Convert::ToDouble(gpVx);
	float fgrpVx = static_cast<float>(greenPosVal_x);
	double greenPosVal_y = Convert::ToDouble(gpVy);
	float fgrpVy = static_cast<float>(greenPosVal_y);

	double whitePosVal_x = Convert::ToDouble(wpVx);
	float fwrpVx = static_cast<float>(whitePosVal_x);
	double whitePosVal_y = Convert::ToDouble(wpVy);
	float fwrpVy = static_cast<float>(whitePosVal_y);

	// The Perspective warping of the parts
	// Storing points in an array
	cv::Point2f src[4] = {
		{frpVx, frpVy}, // top Left
		{fbrpVx, fbrpVy}, // top right
		{fgrpVx, fgrpVy}, // bottom left
		{fwrpVx, fwrpVy} // bottom right
	};

	// Declaring the points where the image would be displayed
	cv::Point2f dst[4] = {
		{0.0f, 0.0f},
		{w, 0.0f},
		{0.0f, h},
		{w, h}
	};


	Mat matrix = getPerspectiveTransform(src, dst);
	warpPerspective(img, imgWarp, matrix, cv::Point(w, h));
	rectangle(imgWarp, cv::Point(0.0f, 0.0f), cv::Point(w, h), Scalar(67, 21, 255), 5);
	line(img, cv::Point(frpVx, frpVy), cv::Point(fgrpVx, fgrpVy), Scalar(67, 21, 255), 2);
		line(img, cv::Point(frpVx, frpVy), cv::Point(fbrpVx, fbrpVy), Scalar(67, 21, 255), 2);
	line(img, cv::Point(fbrpVx, fbrpVy), cv::Point(fwrpVx, fwrpVy), Scalar(67, 21, 255), 2);
	line(img, cv::Point(fgrpVx, fgrpVy), cv::Point(fwrpVx, fwrpVy), Scalar(67, 21, 255), 2);

	StreamWriter^ sw = gcnew StreamWriter(filename);
	sw->WriteLine("rpVx:" + rpVx);
	sw->WriteLine("rpVy:" + rpVy);
	sw->WriteLine("bpvx:" + bpVx);
	sw->WriteLine("bpVy:" + bpVy);
	sw->WriteLine("gpVx:" + gpVx);
	sw->WriteLine("gpVy:" + gpVy);
	sw->WriteLine("wpVx:" + wpVx);
	sw->WriteLine("wpVy:" + wpVy);
	sw->Close();

	imwrite("warped_image.jpg", imgWarp);
	imshow("WarpedImage", imgWarp);
	imshow("image", img);
	waitKey(0);
}
private: System::Void OpenglBtn_Click(System::Object^ sender, System::EventArgs^ e) {
	if (this->OpenglPanel->Visible == false)
	{
		this->OpenglPanel->Visible = true;
	}
	else
	{
		this->OpenglPanel->Visible = false;
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ input = this->ObjPath->Text;
	std::string stdInput = msclr::interop::marshal_as<std::string>(input);
	System::String^ filename = "objectives.txt";
	StreamWriter^ Writer = gcnew StreamWriter(filename);
	Writer->WriteLine(input);
	Writer->WriteLine("mapped.jpg");
	Writer->Close();

	//ShellExecuteW(NULL, "open", "D:\\Final Year Project Executables\\FYProject Opengl\\OPenGL.exe", NULL, NULL, SW_SHOWDEFAULT);
	system("explore C:\\Users\\King Xander\\3D Objects\\New folder (2)\\OpenGL\\x64\\Debug\\OpenGL.exe");
}
};
}
