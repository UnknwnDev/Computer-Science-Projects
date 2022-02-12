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

};

class Order {
    private:
        std::vector<Item> items;
    
    public:
        void add_item(Item _item);
        double get_price();
};

class Store{
    private:
        std::vector<Item> items;
    public:
        Store(std::vector<Item> _items);

        void print_items();

};