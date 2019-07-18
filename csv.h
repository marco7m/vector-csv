/* Classe criada com o intuito de facilitar a manupulação de dados do tipo CSV.
 *
 * data 17/02/2017
 *
 * autor: Marco Aurélio 
 */

#ifndef CSV_H
#define CSV_H

#include <fstream>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>


class Csv{
public:
    Csv();
    static std::vector<std::vector<std::string> > get_string_data(std::string name, char sc = ',');
    static std::vector<std::vector<double> > get_double_data(std::string name, char sc = ',');
    static void save_data(std::vector<std::vector<std::string> > all_data, std::string name, char sc);
    static void save_data(std::vector<std::vector<double> > all_data, std::string name, char sc);
    static void print_data(std::vector<std::vector<std::string> > data);
    static void print_data(std::vector<std::vector<double> > data);
    static std::vector<std::vector<double> > transpose(std::vector<std::vector<double> > data);
};

#endif 
