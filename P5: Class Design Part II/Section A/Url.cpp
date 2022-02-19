using namespace std;
#include "Url.h"
#include <iostream>


void Url::url_braker(string url){
    
    Url::set_url(url);

    string scheme;
    string authority;
    string path;

    string temp;
    // Gets Scheme
    for (int i = 0; i < url.length(); i++){
        if (url[i] != ':'){
            temp += url[i];
            if (url[i + 1] == ':'){
                scheme = temp;
            }
        }
    }

    url.erase(0, scheme.size() + 3);
    temp = "//";

    //Gets Authority
    for (int i = 0; i < url.length(); i++){
        temp += url[i];
        if (url[i + 1] == '/'){
            authority = temp;
            break;
        }
    }

    url.erase(0, authority.size() - 1);
    path = url;

    Url::set_scheme(scheme);
    Url::set_authority(authority);
    Url::set_path(path);
}

string Url::get_url(){
    return _full_url;
}

void Url::set_url(std::string url){
    _full_url = url;
}

string Url::get_scheme(){
    return _scheme;
}

void Url::set_scheme(std::string scheme){
    _scheme = scheme;
}

string Url::get_authority(){
    return _authority;
}

void Url::set_authority(std::string authroity){
    _authority = authroity;
}

string Url::get_path(){
    return _path;
}

void Url::set_path(std::string path){
    _path = path;
}



ostream& operator<<(std::ostream& out, Url url){
    out << "URL: " << url.get_url() << "\n";
    out << "    SCHEME: " << url.get_scheme() << ":\n";
    out << "    AUTHORITY: " << url.get_authority() << "\n";
    out << "    PATH: " << url.get_path() << "\n";
    return out;
}
