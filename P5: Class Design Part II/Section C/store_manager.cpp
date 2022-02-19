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

void Item::set_stock(int _stock) {
    stock = _stock;
}


std::vector<Item> Order::get_items(){
    return items;
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

std::vector<Item> Store::get_items(){
    return items;
}

void Store::process_order(Order& order) {
    std::vector<Item> order_items = order.get_items();

    for(Item item: order_items) {
        for(Item& in_stock: items) {
            if(in_stock.get_id() == item.get_id()) {
                in_stock.set_stock(in_stock.get_stock() - item.get_stock());
            }
        }
    }
}

std::ostream& operator<<(std::ostream& out, Store& store) {
    out << std::string("Store: \n");
    for(int i = 0; i < store.get_items().size(); i++) {
        out << store.get_items()[i].get_name() << std::string(" x ") << std::to_string(store.get_items()[i].get_stock()) << std::string("\n");
    }
    return out;
};

std::ostream& operator<<(std::ostream& out, Item& item) {
    out << std::string("Name: ") << item.get_name() << std::string("\nID: ") << std::to_string(item.get_id()) << std::string("\nPrice: $") << std::to_string(item.get_price()) << std::string("\nStock: ") << std::to_string(item.get_stock());
    return out;
};