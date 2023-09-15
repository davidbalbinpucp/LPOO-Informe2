#pragma once

namespace RestaurantGUIView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace RestaurantModel;
	using namespace RestaurantController;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de RobotWaiterForm
	/// </summary>
	public ref class RobotWaiterForm : public System::Windows::Forms::Form
	{
	public:
		RobotWaiterForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~RobotWaiterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::TextBox^ txtFactoryCode;
	private: System::Windows::Forms::TextBox^ txtSerialNumber;
	private: System::Windows::Forms::TextBox^ txtBatteryAvailableTime;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::DataGridView^ dgvRobots;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ RobotId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ RobotName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ RobotSerialNumber;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ RobotFactoryCode;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ RobotBatteryAvailable;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nuevoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ editarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->txtFactoryCode = (gcnew System::Windows::Forms::TextBox());
			this->txtSerialNumber = (gcnew System::Windows::Forms::TextBox());
			this->txtBatteryAvailableTime = (gcnew System::Windows::Forms::TextBox());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->dgvRobots = (gcnew System::Windows::Forms::DataGridView());
			this->RobotId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->RobotName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->RobotSerialNumber = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->RobotFactoryCode = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->RobotBatteryAvailable = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvRobots))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(107, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(19, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Id:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(376, 83);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Factory code:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(52, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(74, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Serial number:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(33, 119);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(115, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Battery Available Time:";
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(178, 39);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(100, 20);
			this->txtId->TabIndex = 4;
			// 
			// txtFactoryCode
			// 
			this->txtFactoryCode->Location = System::Drawing::Point(465, 76);
			this->txtFactoryCode->Name = L"txtFactoryCode";
			this->txtFactoryCode->Size = System::Drawing::Size(171, 20);
			this->txtFactoryCode->TabIndex = 5;
			// 
			// txtSerialNumber
			// 
			this->txtSerialNumber->Location = System::Drawing::Point(178, 76);
			this->txtSerialNumber->Name = L"txtSerialNumber";
			this->txtSerialNumber->Size = System::Drawing::Size(171, 20);
			this->txtSerialNumber->TabIndex = 6;
			// 
			// txtBatteryAvailableTime
			// 
			this->txtBatteryAvailableTime->Location = System::Drawing::Point(178, 111);
			this->txtBatteryAvailableTime->Name = L"txtBatteryAvailableTime";
			this->txtBatteryAvailableTime->Size = System::Drawing::Size(171, 20);
			this->txtBatteryAvailableTime->TabIndex = 7;
			// 
			// btnAdd
			// 
			this->btnAdd->Enabled = false;
			this->btnAdd->Location = System::Drawing::Point(76, 202);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(105, 23);
			this->btnAdd->TabIndex = 8;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &RobotWaiterForm::btnAdd_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Enabled = false;
			this->btnUpdate->Location = System::Drawing::Point(277, 202);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(109, 23);
			this->btnUpdate->TabIndex = 9;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &RobotWaiterForm::btnUpdate_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Enabled = false;
			this->btnDelete->Location = System::Drawing::Point(468, 202);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(127, 23);
			this->btnDelete->TabIndex = 10;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &RobotWaiterForm::btnDelete_Click);
			// 
			// dgvRobots
			// 
			this->dgvRobots->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvRobots->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->RobotId, this->RobotName,
					this->RobotSerialNumber, this->RobotFactoryCode, this->RobotBatteryAvailable
			});
			this->dgvRobots->Location = System::Drawing::Point(39, 246);
			this->dgvRobots->Name = L"dgvRobots";
			this->dgvRobots->Size = System::Drawing::Size(600, 226);
			this->dgvRobots->TabIndex = 11;
			this->dgvRobots->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &RobotWaiterForm::dgvRobots_CellClick);
			// 
			// RobotId
			// 
			this->RobotId->HeaderText = L"Id";
			this->RobotId->Name = L"RobotId";
			this->RobotId->Width = 20;
			// 
			// RobotName
			// 
			this->RobotName->HeaderText = L"Nombre";
			this->RobotName->Name = L"RobotName";
			this->RobotName->Width = 230;
			// 
			// RobotSerialNumber
			// 
			this->RobotSerialNumber->HeaderText = L"Núm. serie";
			this->RobotSerialNumber->Name = L"RobotSerialNumber";
			// 
			// RobotFactoryCode
			// 
			this->RobotFactoryCode->HeaderText = L"Cód. de fábrica";
			this->RobotFactoryCode->Name = L"RobotFactoryCode";
			// 
			// RobotBatteryAvailable
			// 
			this->RobotBatteryAvailable->HeaderText = L"Batería disponible";
			this->RobotBatteryAvailable->Name = L"RobotBatteryAvailable";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(376, 119);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(159, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Completar los demás atributos ...";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(379, 46);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(47, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"Nombre:";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(465, 38);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(171, 20);
			this->txtName->TabIndex = 14;
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->archivoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(688, 24);
			this->menuStrip1->TabIndex = 15;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->nuevoToolStripMenuItem,
					this->editarToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// nuevoToolStripMenuItem
			// 
			this->nuevoToolStripMenuItem->Name = L"nuevoToolStripMenuItem";
			this->nuevoToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->nuevoToolStripMenuItem->Text = L"Nuevo";
			this->nuevoToolStripMenuItem->Click += gcnew System::EventHandler(this, &RobotWaiterForm::nuevoToolStripMenuItem_Click);
			// 
			// editarToolStripMenuItem
			// 
			this->editarToolStripMenuItem->Name = L"editarToolStripMenuItem";
			this->editarToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->editarToolStripMenuItem->Text = L"Editar";
			this->editarToolStripMenuItem->Click += gcnew System::EventHandler(this, &RobotWaiterForm::editarToolStripMenuItem_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &RobotWaiterForm::salirToolStripMenuItem_Click);
			// 
			// RobotWaiterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(688, 517);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dgvRobots);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->txtBatteryAvailableTime);
			this->Controls->Add(this->txtSerialNumber);
			this->Controls->Add(this->txtFactoryCode);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"RobotWaiterForm";
			this->Text = L"Mantenimiento de Robots";
			this->Load += gcnew System::EventHandler(this, &RobotWaiterForm::RobotWaiterForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvRobots))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
	//Paso 1: Recogemos los datos del formulario en un objeto del tipo RobotWaiter
	RobotWaiter^ robot = gcnew RobotWaiter();
	robot->Id = Int32::Parse(txtId->Text);
	robot->SerialNumber = txtSerialNumber->Text;
	robot->FactoryCode = txtFactoryCode->Text;
	robot->Name = txtName->Text;
	robot->BatteryAvailableTime = Int32::Parse(txtBatteryAvailableTime->Text);
	//Paso 2: Invocamos al método estático AddRobotWaiter de la clase Controller y le pasamos el objeto robot.
	Controller::AddRobotWaiter(robot);
	
	RefreshRobotWaiterGrid();
}
	   void RefreshRobotWaiterGrid() {
		   List<RobotWaiter^>^ robotList = Controller::QueryAllRobotWaiters();
		   dgvRobots->Rows->Clear();
		   for (int i = 0; i < robotList->Count; i++) {
			   dgvRobots->Rows->Add(gcnew array<String^>{
				   "" + robotList[i]->Id,
					   robotList[i]->Name,
					   robotList[i]->SerialNumber,
					   robotList[i]->FactoryCode,
					  "" + robotList[i]->BatteryAvailableTime
			   });
		   }
	   }
private: System::Void dgvRobots_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int selectedRowIndex = dgvRobots->SelectedCells[0]->RowIndex;
	int robotId = Int32::Parse(dgvRobots->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
	RobotWaiter^ robot = Controller::QueryRobotWaiterById(robotId);
	txtId->Text = "" + robot->Id;
	txtFactoryCode->Text = robot->FactoryCode;
	txtName->Text = robot->Name;
	txtSerialNumber->Text = robot->SerialNumber;
	txtBatteryAvailableTime->Text = ""+robot->BatteryAvailableTime;
}
private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
	//Paso 1: Recogemos los datos del formulario en un objeto del tipo RobotWaiter
	RobotWaiter^ robot = gcnew RobotWaiter();
	robot->Id = Int32::Parse(txtId->Text);
	robot->SerialNumber = txtSerialNumber->Text;
	robot->FactoryCode = txtFactoryCode->Text;
	robot->Name = txtName->Text;
	robot->BatteryAvailableTime = Int32::Parse(txtBatteryAvailableTime->Text);
	//Paso 2: Invocamos al método estático AddRobotWaiter de la clase Controller y le pasamos el objeto robot.
	Controller::UpdateRobotWaiter(robot);

	RefreshRobotWaiterGrid();
}

private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
	Controller::DeleteRobotWaiter(Int32::Parse(txtId->Text));
	RefreshRobotWaiterGrid();
}
private: System::Void nuevoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	btnAdd->Enabled = true;
	btnUpdate->Enabled = false;
	btnDelete->Enabled = false;
	CleanControls();
}
	   void CleanControls() {
		   txtId->Text = "";
		   txtBatteryAvailableTime->Text = "";
		   txtFactoryCode->Text = "";
		   txtName->Text = "";
		   txtSerialNumber->Text = "";
	   }
private: System::Void editarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	btnAdd->Enabled = false;
	btnUpdate->Enabled = true;
	btnDelete->Enabled = true;
}
private: System::Void RobotWaiterForm_Load(System::Object^ sender, System::EventArgs^ e) {
	RefreshRobotWaiterGrid();
}
};
}
