#include <iostream>

int get_database_size();
void remove_element_at_index();
std::string modify_data_at_index(int index, std::string &data);
void enter_new_data_at_index(int index, double amount, std::string &data);
void read_db(bool = false);
std::string get_element_from_db(int = 0);
void write_to_db(const std::string &item_data);
