#pragma once

namespace virtual_travel {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ViewItems
	/// </summary>
	public ref class ViewItems : public System::Windows::Forms::Form
	{
	public:
		String ^place;
		ViewItems(String ^name)
		{
			InitializeComponent();
			this->place = name;
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ViewItems()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  panel1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	public: System::Windows::Forms::ImageList^  imageList1;
	private:

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Panel^  panel2;

	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	public: System::Windows::Forms::ImageList^  imageList2;
	public: System::Windows::Forms::ImageList^  imageList3;
	public: System::Windows::Forms::ImageList^  imageList4;
	public: System::Windows::Forms::ImageList^  imageList5;
	private:









	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(ViewItems::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->imageList2 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->imageList3 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->imageList4 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->imageList5 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1098, 47);
			this->panel1->TabIndex = 2;
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ViewItems::panel1_MouseDown);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &ViewItems::panel1_MouseMove);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &ViewItems::panel1_MouseUp);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(452, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(169, 36);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Place name";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::DimGray;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::DarkGray;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(1044, 10);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(42, 33);
			this->button1->TabIndex = 0;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &ViewItems::button1_Click);
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"6c4ddccaf0_medium.jpg");
			this->imageList1->Images->SetKeyName(1, L"64352_500r.jpg");
			this->imageList1->Images->SetKeyName(2, L"img1.jpg");
			this->imageList1->Images->SetKeyName(3, L"jU3929y2VBvx-oOK0rXe1E7Ml4rpCHz3-xl.jpg");
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(54, 72);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(751, 603);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 5000;
			this->timer1->Tick += gcnew System::EventHandler(this, &ViewItems::timer1_Tick);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.InitialImage")));
			this->pictureBox2->Location = System::Drawing::Point(16, 30);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(205, 131);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 4;
			this->pictureBox2->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->pictureBox4);
			this->panel2->Controls->Add(this->pictureBox5);
			this->panel2->Controls->Add(this->pictureBox2);
			this->panel2->Controls->Add(this->pictureBox3);
			this->panel2->Location = System::Drawing::Point(847, 72);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(239, 619);
			this->panel2->TabIndex = 5;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(21, 319);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(205, 131);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox4->TabIndex = 7;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(21, 472);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(210, 131);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 8;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(16, 172);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(210, 131);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 6;
			this->pictureBox3->TabStop = false;
			// 
			// imageList2
			// 
			this->imageList2->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList2.ImageStream")));
			this->imageList2->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList2->Images->SetKeyName(0, L"20180915181953.jpg");
			this->imageList2->Images->SetKeyName(1, L"20221206114620.png");
			this->imageList2->Images->SetKeyName(2, L"photo0jpg.jpg");
			this->imageList2->Images->SetKeyName(3, L"sight_image_621424_500.jpg");
			// 
			// imageList3
			// 
			this->imageList3->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList3.ImageStream")));
			this->imageList3->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList3->Images->SetKeyName(0, L"7d59551694_medium.jpg");
			this->imageList3->Images->SetKeyName(1, L"a54e8f8228_medium.jpg");
			this->imageList3->Images->SetKeyName(2, L"exterior-view.jpg");
			this->imageList3->Images->SetKeyName(3, L"tn_984e9e9a-2838-42f0-b64a-b988eb6e3b6d.jpg");
			// 
			// imageList4
			// 
			this->imageList4->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList4.ImageStream")));
			this->imageList4->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList4->Images->SetKeyName(0, L"1644581_500r.jpg");
			this->imageList4->Images->SetKeyName(1, L"8987314_500r.jpg");
			this->imageList4->Images->SetKeyName(2, L"196096831.jpg");
			this->imageList4->Images->SetKeyName(3, L"caption.jpg");
			// 
			// imageList5
			// 
			this->imageList5->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList5.ImageStream")));
			this->imageList5->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList5->Images->SetKeyName(0, L"3Oa2qhofkyM.jpg");
			this->imageList5->Images->SetKeyName(1, L"4959495.jpg");
			this->imageList5->Images->SetKeyName(2, L"25111916480133733347.jpg");
			this->imageList5->Images->SetKeyName(3, L"photo.jpg");
			// 
			// ViewItems
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1098, 723);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"ViewItems";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ViewItems";
			this->Load += gcnew System::EventHandler(this, &ViewItems::ViewItems_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ViewItems_Load(System::Object^  sender, System::EventArgs^  e) {
		label1->Text = this->place;		
		nextImageHandler();

	}

	private: bool dragging = false;
	private: Point dragCursorPoint;
	private: Point dragFormpoint;
	private: System::Void panel1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		dragging = true;
		dragCursorPoint = Cursor->Position;
		dragFormpoint = this->Location;
	}
	private: System::Void panel1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (dragging) {
			Point dif = Point::Subtract(Cursor->Position, System::Drawing::Size(dragCursorPoint));
			this->Location = Point::Add(dragFormpoint, System::Drawing::Size(dif));
		}
	}
	private: System::Void panel1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		dragging = false;
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

	int itemInterval = 0;
	private: System::Void nextImageHandler() {
		if (this->place == "Samarqand") {
			this->pictureBox1->Image = this->imageList1->Images[itemInterval];
			this->pictureBox2->Image = this->imageList1->Images[0];
			this->pictureBox3->Image = this->imageList1->Images[1];
			this->pictureBox4->Image = this->imageList1->Images[2];
			this->pictureBox5->Image = this->imageList1->Images[3];
		}
		else {
			if (this->place == "Tashkent") {
				this->pictureBox1->Image = this->imageList3->Images[itemInterval];
				this->pictureBox2->Image = this->imageList3->Images[0];
				this->pictureBox3->Image = this->imageList3->Images[1];
				this->pictureBox4->Image = this->imageList3->Images[2];
				this->pictureBox5->Image = this->imageList3->Images[3];
			}
			else
			{
				if (this->place == "Bukhara") {
					this->pictureBox1->Image = this->imageList2->Images[itemInterval];
					this->pictureBox2->Image = this->imageList2->Images[0];
					this->pictureBox3->Image = this->imageList2->Images[1];
					this->pictureBox4->Image = this->imageList2->Images[2];
					this->pictureBox5->Image = this->imageList2->Images[3];
				}
				else {
					if (this->place == "Khiva") {
						this->pictureBox1->Image = this->imageList4->Images[itemInterval];
						this->pictureBox2->Image = this->imageList4->Images[0];
						this->pictureBox3->Image = this->imageList4->Images[1];
						this->pictureBox4->Image = this->imageList4->Images[2];
						this->pictureBox5->Image = this->imageList4->Images[3];
					}
					else
					{
						this->pictureBox1->Image = this->imageList5->Images[itemInterval];
						this->pictureBox2->Image = this->imageList5->Images[0];
						this->pictureBox3->Image = this->imageList5->Images[1];
						this->pictureBox4->Image = this->imageList5->Images[2];
						this->pictureBox5->Image = this->imageList5->Images[3];
					}
				}
			}
		}




		if (this->imageList1->Images->Count == itemInterval + 1) {
			itemInterval = 0;
		}
		else {
			itemInterval++;
		}
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		nextImageHandler();
	}
};
}
