#include "ramrod/console/printer.h"

#include <iostream>
#include <regex>

namespace ramrod {
  namespace console {
    void printer::add_style(const int parameter){
      std::cout << "\033[" << parameter << "m";
      if(parameter != ramrod::console::color::style::reset)
        add_format(parameter);
      else
        current_format_ = "\033[0m";
    }

    void printer::attention(const std::string &text){
      std::cout << "\033[1;30;46m Attention: \033[0;1;38;5;195m ";
      std::cout << text << current_format_ << std::endl;
    }

    void printer::attention(const char *text){
      std::cout << "\033[1;30;46m Attention: \033[0;1;38;5;195m ";
      std::cout << text << current_format_ << std::endl;
    }

    void printer::attention(const bool boolean){
      std::cout << "\033[1;30;46m Attention: \033[0;1;38;5;195m ";
      std::cout << boolean << current_format_ << std::endl;
    }

    void printer::attention(const char character){
      std::cout << "\033[1;30;46m Attention: \033[0;1;38;5;195m ";
      std::cout << character << current_format_ << std::endl;
    }

    void printer::attention(const unsigned char character){
      std::cout << "\033[1;30;46m Attention: \033[0;1;38;5;195m ";
      std::cout << character << current_format_ << std::endl;
    }

    void printer::attention(const signed char character){
      std::cout << "\033[1;30;46m Attention: \033[0;1;38;5;195m ";
      std::cout << character << current_format_ << std::endl;
    }

    void printer::attention(const int integer_number){
      std::cout << "\033[1;30;46m Attention: \033[0;1;38;5;195m ";
      std::cout << integer_number << current_format_ << std::endl;
    }

    void printer::attention(const unsigned int unsigend_integer_number){
      std::cout << "\033[1;30;46m Attention: \033[0;1;38;5;195m ";
      std::cout << unsigend_integer_number << current_format_ << std::endl;
    }

    void printer::attention(const short short_integer_number){
      std::cout << "\033[1;30;46m Attention: \033[0;1;38;5;195m ";
      std::cout << short_integer_number << current_format_ << std::endl;
    }

    void printer::attention(const unsigned short unsigned_short_integer_number){
      std::cout << "\033[1;30;46m Attention: \033[0;1;38;5;195m ";
      std::cout << unsigned_short_integer_number << current_format_ << std::endl;
    }

    void printer::attention(const long long_integer_number){
      std::cout << "\033[1;30;46m Attention: \033[0;1;38;5;195m ";
      std::cout << long_integer_number << current_format_ << std::endl;
    }

    void printer::attention(const unsigned long unsigned_long_integer_number){
      std::cout << "\033[1;30;46m Attention: \033[0;1;38;5;195m ";
      std::cout << unsigned_long_integer_number << current_format_ << std::endl;
    }

    void printer::attention(const float float_number){
      std::cout << "\033[1;30;46m Attention: \033[0;1;38;5;195m ";
      std::cout << float_number << current_format_ << std::endl;
    }

    void printer::attention(const double double_number){
      std::cout << "\033[1;30;46m Attention: \033[0;1;38;5;195m ";
      std::cout << double_number << current_format_ << std::endl;
    }

    void printer::attention(const long double long_double_number){
      std::cout << "\033[1;30;46m Attention: \033[0;1;38;5;195m ";
      std::cout << long_double_number << current_format_ << std::endl;
    }

    void printer::clean(const bool force){
      if(force)
        std::cout << "\033[2J\033[H\033[3J";
      else
        std::cout << "\033[2J\033[H";
    }

    void printer::colorize(const int color, const int usage){
      if(usage == ramrod::console::color::style::background
         || usage == ramrod::console::color::style::foreground){
        const std::string settings("\033[" + std::to_string(usage) + ";5;"
                                   + std::to_string(color) + "m");
        std::cout << settings;
        add_format(usage, settings);
      }else
        add_style(usage);
    }

    void printer::colorize(const int red, const int green, const int blue, const int usage){
      if(usage == ramrod::console::color::style::background
         || usage == ramrod::console::color::style::foreground){
        const std::string settings("\033[" + std::to_string(usage) + ";2;"
                                   + std::to_string(red) + ";" + std::to_string(green)
                                   + ";" + std::to_string(blue) + "m");
        std::cout << settings;
        add_format(usage, settings);
      }else
        add_style(usage);
    }

    void printer::error(const std::string &text){
      std::cout << "\033[1;41m Error: \033[0;1;38;5;174m ";
      std::cout << text << current_format_ << std::endl;
    }

    void printer::error(const char *text){
      std::cout << "\033[1;41m Error: \033[0;1;38;5;174m ";
      std::cout << text << current_format_ << std::endl;
    }

    void printer::error(const bool boolean){
      std::cout << "\033[1;41m Error: \033[0;1;38;5;174m ";
      std::cout << boolean << current_format_ << std::endl;
    }

    void printer::error(const char character){
      std::cout << "\033[1;41m Error: \033[0;1;38;5;174m ";
      std::cout << character << current_format_ << std::endl;
    }

    void printer::error(const unsigned char character){
      std::cout << "\033[1;41m Error: \033[0;1;38;5;174m ";
      std::cout << character << current_format_ << std::endl;
    }

    void printer::error(const signed char character){
      std::cout << "\033[1;41m Error: \033[0;1;38;5;174m ";
      std::cout << character << current_format_ << std::endl;
    }

    void printer::error(const int integer_number){
      std::cout << "\033[1;41m Error: \033[0;1;38;5;174m ";
      std::cout << integer_number << current_format_ << std::endl;
    }

    void printer::error(const unsigned int unsigend_integer_number){
      std::cout << "\033[1;41m Error: \033[0;1;38;5;174m ";
      std::cout << unsigend_integer_number << current_format_ << std::endl;
    }

    void printer::error(const short short_integer_number){
      std::cout << "\033[1;41m Error: \033[0;1;38;5;174m ";
      std::cout << short_integer_number << current_format_ << std::endl;
    }

    void printer::error(const unsigned short unsigned_short_integer_number){
      std::cout << "\033[1;41m Error: \033[0;1;38;5;174m ";
      std::cout << unsigned_short_integer_number << current_format_ << std::endl;
    }

    void printer::error(const long long_integer_number){
      std::cout << "\033[1;41m Error: \033[0;1;38;5;174m ";
      std::cout << long_integer_number << current_format_ << std::endl;
    }

    void printer::error(const unsigned long unsigned_long_integer_number){
      std::cout << "\033[1;41m Error: \033[0;1;38;5;174m ";
      std::cout << unsigned_long_integer_number << current_format_ << std::endl;
    }

    void printer::error(const float float_number){
      std::cout << "\033[1;41m Error: \033[0;1;38;5;174m ";
      std::cout << float_number << current_format_ << std::endl;
    }

    void printer::error(const double double_number){
      std::cout << "\033[1;41m Error: \033[0;1;38;5;174m ";
      std::cout << double_number << current_format_ << std::endl;
    }

    void printer::error(const long double long_double_number){
      std::cout << "\033[1;41m Error: \033[0;1;38;5;174m ";
      std::cout << long_double_number << current_format_ << std::endl;
    }

    void printer::formatted(const char *format, const ramrod::message::message_type type, ...){
      typify(type);

      va_list arg;
      va_start(arg, type);
      std::vprintf(format, arg);
      va_end(arg);
      std::cout << current_format_;
      std::flush(std::cout);
    }

    void printer::message(const std::string &text, const ramrod::message::message_type type){
      typify(type);
      std::cout << text << current_format_ << std::endl;
    }

    void printer::message(const char *text, const ramrod::message::message_type type){
      typify(type);
      std::cout << text << current_format_ << std::endl;
    }

    void printer::message(const bool boolean, const ramrod::message::message_type type){
      typify(type);
      std::cout << boolean << current_format_ << std::endl;
    }

    void printer::message(const char character, const ramrod::message::message_type type){
      typify(type);
      std::cout << character << current_format_ << std::endl;
    }

    void printer::message(const unsigned char character,
                          const ramrod::message::message_type type){
      typify(type);
      std::cout << character << current_format_ << std::endl;
    }

    void printer::message(const signed char character, const ramrod::message::message_type type){
      typify(type);
      std::cout << character << current_format_ << std::endl;
    }

    void printer::message(const int integer_number, const ramrod::message::message_type type){
      typify(type);
      std::cout << integer_number << current_format_ << std::endl;
    }

    void printer::message(const unsigned int unsigend_integer_number,
                          const ramrod::message::message_type type){
      typify(type);
      std::cout << unsigend_integer_number << current_format_ << std::endl;
    }

    void printer::message(const short short_integer_number,
                          const ramrod::message::message_type type){
      typify(type);
      std::cout << short_integer_number << current_format_ << std::endl;
    }

    void printer::message(const unsigned short unsigned_short_integer_number,
                          const ramrod::message::message_type type){
      typify(type);
      std::cout << unsigned_short_integer_number << current_format_ << std::endl;
    }

    void printer::message(const long long_integer_number,
                          const ramrod::message::message_type type){
      typify(type);
      std::cout << long_integer_number << current_format_ << std::endl;
    }

    void printer::message(const unsigned long unsigned_long_integer_number,
                          const ramrod::message::message_type type){
      typify(type);
      std::cout << unsigned_long_integer_number << current_format_ << std::endl;
    }

    void printer::message(const float float_number, const ramrod::message::message_type type){
      typify(type);
      std::cout << float_number << current_format_ << std::endl;
    }

    void printer::message(const double double_number, const ramrod::message::message_type type){
      typify(type);
      std::cout << double_number << current_format_ << std::endl;
    }

    void printer::message(const long double long_double_number,
                          const ramrod::message::message_type type){
      typify(type);
      std::cout << long_double_number << current_format_ << std::endl;
    }

    void printer::normal(const std::string &text){
      std::cout << "\033[1;30;42m Message: \033[0;1;38;5;193m ";
      std::cout << text << current_format_ << std::endl;
    }

    void printer::normal(const char *text){
      std::cout << "\033[1;30;42m Message: \033[0;1;38;5;193m ";
      std::cout << text << current_format_ << std::endl;
    }

    void printer::normal(const bool boolean){
      std::cout << "\033[1;30;42m Message: \033[0;1;38;5;193m ";
      std::cout << boolean << current_format_ << std::endl;
    }

    void printer::normal(const char character){
      std::cout << "\033[1;30;42m Message: \033[0;1;38;5;193m ";
      std::cout << character << current_format_ << std::endl;
    }

    void printer::normal(const unsigned char character){
      std::cout << "\033[1;30;42m Message: \033[0;1;38;5;193m ";
      std::cout << character << current_format_ << std::endl;
    }

    void printer::normal(const signed char character){
      std::cout << "\033[1;30;42m Message: \033[0;1;38;5;193m ";
      std::cout << character << current_format_ << std::endl;
    }

    void printer::normal(const int integer_number){
      std::cout << "\033[1;30;42m Message: \033[0;1;38;5;193m ";
      std::cout << integer_number << current_format_ << std::endl;
    }

    void printer::normal(const unsigned int unsigend_integer_number){
      std::cout << "\033[1;30;42m Message: \033[0;1;38;5;193m ";
      std::cout << unsigend_integer_number << current_format_ << std::endl;
    }

    void printer::normal(const short short_integer_number){
      std::cout << "\033[1;30;42m Message: \033[0;1;38;5;193m ";
      std::cout << short_integer_number << current_format_ << std::endl;
    }

    void printer::normal(const unsigned short unsigned_short_integer_number){
      std::cout << "\033[1;30;42m Message: \033[0;1;38;5;193m ";
      std::cout << unsigned_short_integer_number << current_format_ << std::endl;
    }

    void printer::normal(const long long_integer_number){
      std::cout << "\033[1;30;42m Message: \033[0;1;38;5;193m ";
      std::cout << long_integer_number << current_format_ << std::endl;
    }

    void printer::normal(const unsigned long unsigned_long_integer_number){
      std::cout << "\033[1;30;42m Message: \033[0;1;38;5;193m ";
      std::cout << unsigned_long_integer_number << current_format_ << std::endl;
    }

    void printer::normal(const float float_number){
      std::cout << "\033[1;30;42m Message: \033[0;1;38;5;193m ";
      std::cout << float_number << current_format_ << std::endl;
    }

    void printer::normal(const double double_number){
      std::cout << "\033[1;30;42m Message: \033[0;1;38;5;193m ";
      std::cout << double_number << current_format_ << std::endl;
    }

    void printer::normal(const long double long_double_number){
      std::cout << "\033[1;30;42m Message: \033[0;1;38;5;193m ";
      std::cout << long_double_number << current_format_ << std::endl;
    }

    void printer::reset(){
      std::cout << (current_format_ = "\033[0m");
    }

    void printer::warning(const std::string &text){
      std::cout << "\033[1;30;48;5;11m Warning: \033[0;1;38;5;229m ";
      std::cout << text << current_format_ << std::endl;
    }

    void printer::warning(const char *text){
      std::cout << "\033[1;30;48;5;11m Warning: \033[0;1;38;5;229m ";
      std::cout << text << current_format_ << std::endl;
    }

    void printer::warning(const bool boolean){
      std::cout << "\033[1;30;48;5;11m Warning: \033[0;1;38;5;229m ";
      std::cout << boolean << current_format_ << std::endl;
    }

    void printer::warning(const char character){
      std::cout << "\033[1;30;48;5;11m Warning: \033[0;1;38;5;229m ";
      std::cout << character << current_format_ << std::endl;
    }

    void printer::warning(const unsigned char character){
      std::cout << "\033[1;30;48;5;11m Warning: \033[0;1;38;5;229m ";
      std::cout << character << current_format_ << std::endl;
    }

    void printer::warning(const signed char character){
      std::cout << "\033[1;30;48;5;11m Warning: \033[0;1;38;5;229m ";
      std::cout << character << current_format_ << std::endl;
    }

    void printer::warning(const int integer_number){
      std::cout << "\033[1;30;48;5;11m Warning: \033[0;1;38;5;229m ";
      std::cout << integer_number << current_format_ << std::endl;
    }

    void printer::warning(const unsigned int unsigend_integer_number){
      std::cout << "\033[1;30;48;5;11m Warning: \033[0;1;38;5;229m ";
      std::cout << unsigend_integer_number << current_format_ << std::endl;
    }

    void printer::warning(const short short_integer_number){
      std::cout << "\033[1;30;48;5;11m Warning: \033[0;1;38;5;229m ";
      std::cout << short_integer_number << current_format_ << std::endl;
    }

    void printer::warning(const unsigned short unsigned_short_integer_number){
      std::cout << "\033[1;30;48;5;11m Warning: \033[0;1;38;5;229m ";
      std::cout << unsigned_short_integer_number << current_format_ << std::endl;
    }

    void printer::warning(const long long_integer_number){
      std::cout << "\033[1;30;48;5;11m Warning: \033[0;1;38;5;229m ";
      std::cout << long_integer_number << current_format_ << std::endl;
    }

    void printer::warning(const unsigned long unsigned_long_integer_number){
      std::cout << "\033[1;30;48;5;11m Warning: \033[0;1;38;5;229m ";
      std::cout << unsigned_long_integer_number << current_format_ << std::endl;
    }

    void printer::warning(const float float_number){
      std::cout << "\033[1;30;48;5;11m Warning: \033[0;1;38;5;229m ";
      std::cout << float_number << current_format_ << std::endl;
    }

    void printer::warning(const double double_number){
      std::cout << "\033[1;30;48;5;11m Warning: \033[0;1;38;5;229m ";
      std::cout << double_number << current_format_ << std::endl;
    }

    void printer::warning(const long double long_double_number){
      std::cout << "\033[1;30;48;5;11m Warning: \033[0;1;38;5;229m ";
      std::cout << long_double_number << current_format_ << std::endl;
    }

    // ::::::::::::::::::::::::::::::::::::: PRIVATE FUNCTIONS ::::::::::::::::::::::::::::::::::::::

    void printer::add_format(const int parameter, const std::string &settings){
      std::string parameter_string(std::to_string(parameter));

      // Cleaning special cases where a certaing code represents the cancelation of others
      if(parameter == 5 || parameter == 6)
        // Blinking cancellation
        parameter_string += "5|6";
      else if(parameter == 53 || parameter == 55)
        // Overline cancellation
        parameter_string += "53|55";
      else if(parameter > 0 && parameter < 10)
        // General style cancellations
        parameter_string += '|' + std::to_string(parameter + 20);
      else if(parameter > 20 && parameter < 30)
        // Same general style cancellation but, inverted
        parameter_string += '|' + std::to_string(parameter - 20);
      else if(parameter > 9 && parameter < 21)
        // Font selection cancellation
        parameter_string = "1[0-9]|20";

      current_format_ = std::regex_replace(current_format_,
                                           std::regex("\u001B\\[(" + parameter_string
                                                      + ")([0-9\\[;])+m"),
                                           "")
                        + settings;
    }

    void printer::typify(const message::message_type type){
      switch(type){
        case ramrod::message::error:
          std::cout << "\033[1;41m Error: \033[0;1;38;5;174m ";
        break;
        case ramrod::message::warning:
          std::cout << "\033[1;30;48;5;11m Warning: \033[0;1;38;5;229m ";
        break;
        case ramrod::message::attention:
          std::cout << "\033[1;30;46m Attention: \033[0;1;38;5;195m ";
        break;
        default:
          std::cout << "\033[1;30;42m Message: \033[0;1;38;5;193m ";
        break;
      }
    }

    // ::::::::::::::::::::::::::::::: INITIALIZING STATIC VARIABLES ::::::::::::::::::::::::::::::::

    std::string printer::current_format_("\033[0m");
  }
}
