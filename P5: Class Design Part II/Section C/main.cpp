#include <iostream>
#include "store_manager.h"
#include "store_manager.cpp"


int main(){
    std::vector<Item> books;
    books.push_back(Item{ "Books", 1, 5, 12 });
    books.push_back(Item{ "Colored Pencils", 2, 15, 15 });
    books.push_back(Item{ "Coloring Paper", 3, 10, 20 });
    books.push_back(Item{ "Markers", 4, 2, 50 });
    books.push_back(Item{ "Staples", 5, 6, 7 });
    Store bookStore(books);

    Order booksOrder{};
    booksOrder.add_item(Item{ "Book", 1, 5, 1 });
    booksOrder.add_item(Item{ "Pencils", 2, 30, 2 });
    booksOrder.add_item(Item{ "Coloring", 3, 30, 3 });
    booksOrder.add_item(Item{ "Markers", 4, 12, 6 });
    booksOrder.add_item(Item{ "Staples", 5, 18, 3 });

    std::cout << bookStore << std::endl;

    std::cout << std::endl << "Order:" << std::endl;
    for(Item i: booksOrder.get_items()) {
        std::cout << i << "\n            \n";
    }
    bookStore.process_order(booksOrder);

    std::cout << bookStore << std::endl;

    return 0;
}
