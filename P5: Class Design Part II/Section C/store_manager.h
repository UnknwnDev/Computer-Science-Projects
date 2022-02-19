#pragma once

#include <vector>
#include <string>

class Item{
    private:
        std::string name;
        long id;
        double price;
        int stock;

    public:
        Item(std::string _name, long _id, double _price, int _stock);
        
        std::string get_name();
        long get_id();
        double get_price();
        int get_stock();

        void set_stock(int _stock);

};

class Order {
    private:
        std::vector<Item> items;
    
    public:
        void add_item(Item _item);
        std::vector<Item> get_items();
        double get_price();
        
};

class Store{
    private:
        std::vector<Item> items;
    public:
        Store(std::vector<Item> _items);
        std::vector<Item> get_items();
        void process_order(Order& order);
};

std::ostream& operator<<(std::ostream& out, Item& item);

std::ostream& operator<<(std::ostream& out, Store& store);