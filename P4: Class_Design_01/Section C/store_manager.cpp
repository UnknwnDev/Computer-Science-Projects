#include "store_manager.h"
#include <iostream>


Item::Item(std::string _name, long _id, double _price, int _stock) {
    name = _name;
    id = _id;
    price = _price;
    stock = _stock;
}

std::string Item::get_name() {
    return name;
}

long Item::get_id() {
    return id;
}

double Item::get_price() {
    return price;
}

int Item::get_stock() {
    return stock;
}

void Order::add_item(Item _item) {
    items.push_back(_item);
}

double Order::get_price() {
    double price = 0;
    
    for(int i = 0; i < items.size(); i++) {
        price += items[i].get_price();
    }
    
    return price;
}


Store::Store(std::vector<Item> _items) {
    items = _items;
}

void Store::print_items() {
    std::cout << "Store: " << std::endl;
    for(int i = 0; i < items.size(); i++) {
        std::cout << items[i].get_name() << " x " << items[i].get_stock() << std::endl;
    }
};