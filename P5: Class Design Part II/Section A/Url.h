#pragma once

#include <string>

class Url {
    private:
     std::string _full_url;
     std::string _scheme;
     std::string _authority;
     std::string _path;

    public:
      void url_braker(std::string url);

      void set_url(std::string url);
      void set_scheme(std::string scheme);
      void set_authority(std::string authority);
      void set_path(std::string path);

      std::string get_url();
      std::string get_scheme();
      std::string get_authority();
      std::string get_path();

};


std::ostream& operator<<(std::ostream& out, Url url);
