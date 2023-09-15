#include "pch.h"
#include "LoginForm.h"

System::Void RestaurantGUIView::LoginForm::btnOK_Click(System::Object^ sender, System::EventArgs^ e)
{
    if ((txtUsername->Text == "jbaldeon") && (txtPassword->Text == "password")) {
        MessageBox::Show("Bienvenido Johan");
        this->Close();
    }
    else {
        MessageBox::Show("Usuario y contraseña incorrectos.");
    }
}
