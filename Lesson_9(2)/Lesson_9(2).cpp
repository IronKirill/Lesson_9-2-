#include "Product.h"
#include "Book.h"
#include "SportEquipment.h"

int main()
{
	Products::Fun::Book a("Book 1", 100.5, "Bob", 25, "Alex", "Genre 1", 500);
	a.show();
	cout << "Total price: " << a.calcPrice() << endl;

	Products::Sport::SportEquipment b("Ball", 200.5, "Jason", 20, "Football", 70);
	b.show();
	cout << "Total price: " << b.calcPrice() << endl;
}