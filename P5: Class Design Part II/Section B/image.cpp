#include "image.h"
#include <string>
#include <iostream>

Image::Image(std::string file_name, std::string image_type, std::string date_created, double size, std::string author_name, int width, int height, std::string aperture_size, std::string exposure_time, int iso_value, bool flash_enabled):
            file_name { file_name }, image_type { image_type }, date_created { date_created }, size { size }, author_name { author_name }, width { width }, height { height },
                      aperture_size { aperture_size }, exposure_time { exposure_time }, iso_value { iso_value }, flash_enabled { flash_enabled } {

    set_file_name(file_name);
    set_image_type(image_type);
    set_date_created(date_created);
    set_size(size);
    set_author_name(author_name);
    set_width(width);
    set_height(height);
    set_aperture_size(aperture_size);
    set_exposure_time(exposure_time);
    set_iso_value(iso_value);
    set_flash_enabled(flash_enabled);
};

std::string Image::get_file_name() {
    return file_name;
}
void Image::set_file_name(std::string name) {
    file_name = name;
}

std::string Image::get_image_type() {
    return image_type;
}
void Image::set_image_type(std::string type) {
    if(type != "PNG" && type != "GIF" && type != "JPEG") {
        throw std::invalid_argument("Invalid image type");
    }
    else {
        image_type = type;
    }
}

std::string  Image::get_date_created() {
    return date_created;
}
void Image::set_date_created(std::string date) {
    date_created = date;
}

double Image::get_size() {
    return size;
}
void Image::set_size(double _size) {
    size = _size;
}

std::string Image::get_author_name() {
    return author_name;
}
void Image::set_author_name(std::string author) {
    author_name = author;
}

int Image::get_width() {
    return width;
}
void Image::set_width(int _width) {
    width = _width;
}

int Image::get_height() {
    return height;
}
void Image::set_height(int _height) {
    height = _height;
}

std::string Image::get_aperture_size() {
    return aperture_size;
}
void Image::set_aperture_size(std::string _aperture_size) {
    aperture_size = _aperture_size;
}

std::string Image::get_exposure_time() {
    return exposure_time;
}
void Image::set_exposure_time(std::string _exposure_time) {
    exposure_time = _exposure_time;
}

int Image::get_iso_value() {
    return iso_value;
}
void Image::set_iso_value(int _iso_value) {
    iso_value = _iso_value;
}

bool Image::get_flash_enabled() {
    return flash_enabled;
}
void Image::set_flash_enabled(bool _flash_enabled) {
    flash_enabled = _flash_enabled;
}



std::ostream& operator<<(std::ostream& out, Image& img) {
    out << "File Name: " + img.get_file_name() << std::endl;
    out << "Image Type: " + img.get_image_type() << std::endl;
    out << "Date Created " + img.get_date_created() << std::endl;
    out << "Size (MB): " + std::to_string(img.get_size()) << std::endl;
    out << "Author: " + img.get_author_name() << std::endl;
    out << "Width: " + std::to_string(img.get_width()) << std::endl;
    out << "Height: " + std::to_string(img.get_height()) << std::endl;
    out << "Aperture Size: " + img.get_aperture_size() << std::endl;
    out << "Exposure Time: " + img.get_exposure_time() << std::endl;
    out << "ISO Value: " + std::to_string(img.get_iso_value()) << std::endl;
    out << "Flash Enabled: " + std::string(img.get_flash_enabled() == true ? "True" : "False") << std::endl;
    
    return out;
}
