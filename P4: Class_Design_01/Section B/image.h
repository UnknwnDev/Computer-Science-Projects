#pragma once
#include <string>


class Image
{

private:
    std::string file_name;
    std::string image_type;
    std::string date_created;
    double size;
    std::string author_name;
    int width;
    int height;
    std::string aperture_size;
    std::string exposure_time;
    int iso_value;
    bool flash_enabled;

public:
    Image(std::string name, std::string type, std::string date, 
    double size, std::string author, int width, int height, std::string apeture_size, std::string exposure_time, int iso_value, bool flash_enabled);
    
    // Getters
    std::string get_file_name();
    std::string get_image_type();
    std::string get_date_created();
    double get_size();
    std::string get_author_name();
    int get_width();
    int get_height();
    std::string get_aperture_size();
    std::string get_exposure_time();
    int get_iso_value();
    bool get_flash_enabled();
    
    // Setters
    void set_file_name(std::string name);
    void set_image_type(std::string type);
    void set_date_created(std::string date);
    void set_size(double size);
    void set_author_name(std::string author);
    void set_width(int width);
    void set_height(int height);
    void set_aperture_size(std::string apeture_size);
    void set_exposure_time(std::string exposure_size);
    void set_iso_value(int iso_value);
    void set_flash_enabled(bool flash_enabled);
};

void print_image_metadata(Image img);
