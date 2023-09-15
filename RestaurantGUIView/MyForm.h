#pragma once

namespace RestaurantGUIView {
	using namespace System::Windows::Forms;
	
	public ref class MyForm : public Form {
		public:
			MyForm(){
				this->Size = System::Drawing::Size(400,200);
			}
	};
}