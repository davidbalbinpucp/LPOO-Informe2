#pragma once

#include "LoginForm.h"
#include "RobotWaiterForm.h"

namespace RestaurantGUIView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de RestaurantMainForm
	/// </summary>
	public ref class RestaurantMainForm : public System::Windows::Forms::Form
	{
	public:
		//Método constructor de RestaurantMainForm
		RestaurantMainForm(void)
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
		~RestaurantMainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ operacionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ enviarPlatosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ robotMeseroToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mesasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ayudaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ chatDeAyudaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ acercaDeToolStripMenuItem;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->operacionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->enviarPlatosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->robotMeseroToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mesasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ayudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->chatDeAyudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->acercaDeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->archivoToolStripMenuItem,
					this->operacionesToolStripMenuItem, this->mantenimientoToolStripMenuItem, this->ayudaToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(984, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salirToolStripMenuItem });
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(96, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &RestaurantMainForm::salirToolStripMenuItem_Click);
			// 
			// operacionesToolStripMenuItem
			// 
			this->operacionesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->enviarPlatosToolStripMenuItem });
			this->operacionesToolStripMenuItem->Name = L"operacionesToolStripMenuItem";
			this->operacionesToolStripMenuItem->Size = System::Drawing::Size(85, 20);
			this->operacionesToolStripMenuItem->Text = L"Operaciones";
			// 
			// enviarPlatosToolStripMenuItem
			// 
			this->enviarPlatosToolStripMenuItem->Name = L"enviarPlatosToolStripMenuItem";
			this->enviarPlatosToolStripMenuItem->Size = System::Drawing::Size(141, 22);
			this->enviarPlatosToolStripMenuItem->Text = L"Enviar platos";
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->robotMeseroToolStripMenuItem,
					this->mesasToolStripMenuItem
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(101, 20);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			// 
			// robotMeseroToolStripMenuItem
			// 
			this->robotMeseroToolStripMenuItem->Name = L"robotMeseroToolStripMenuItem";
			this->robotMeseroToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->robotMeseroToolStripMenuItem->Text = L"Robots meseros";
			this->robotMeseroToolStripMenuItem->Click += gcnew System::EventHandler(this, &RestaurantMainForm::robotMeseroToolStripMenuItem_Click);
			// 
			// mesasToolStripMenuItem
			// 
			this->mesasToolStripMenuItem->Name = L"mesasToolStripMenuItem";
			this->mesasToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->mesasToolStripMenuItem->Text = L"Mesas";
			// 
			// ayudaToolStripMenuItem
			// 
			this->ayudaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->chatDeAyudaToolStripMenuItem,
					this->acercaDeToolStripMenuItem
			});
			this->ayudaToolStripMenuItem->Name = L"ayudaToolStripMenuItem";
			this->ayudaToolStripMenuItem->Size = System::Drawing::Size(53, 20);
			this->ayudaToolStripMenuItem->Text = L"Ayuda";
			// 
			// chatDeAyudaToolStripMenuItem
			// 
			this->chatDeAyudaToolStripMenuItem->Name = L"chatDeAyudaToolStripMenuItem";
			this->chatDeAyudaToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->chatDeAyudaToolStripMenuItem->Text = L"Chat de ayuda";
			// 
			// acercaDeToolStripMenuItem
			// 
			this->acercaDeToolStripMenuItem->Name = L"acercaDeToolStripMenuItem";
			this->acercaDeToolStripMenuItem->Size = System::Drawing::Size(150, 22);
			this->acercaDeToolStripMenuItem->Text = L"Acerca de";
			// 
			// RestaurantMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(984, 548);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"RestaurantMainForm";
			this->Text = L"Sistema de Navegación de Robots Meseros en un Restaurante";
			this->Load += gcnew System::EventHandler(this, &RestaurantMainForm::RestaurantMainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}

	private: System::Void RestaurantMainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		LoginForm^ loginForm = gcnew LoginForm();
		loginForm->ShowDialog(); //Se muestra como un diálogo, es decir, como  una ventana modal.
	}
private: System::Void robotMeseroToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	RobotWaiterForm^ robotWaiterForm = gcnew RobotWaiterForm();
	robotWaiterForm->MdiParent = this;
	robotWaiterForm->Show(); //Se muestra como una ventana amodal.
}
};
}
