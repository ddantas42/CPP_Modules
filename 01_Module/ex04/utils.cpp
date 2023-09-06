/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:02:40 by hiper             #+#    #+#             */
/*   Updated: 2023/09/06 18:33:56 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include "sed.hpp"


std::string get_file(std::ifstream *in_file, std::ofstream *new_file, char **av)
{
    std::string file;

    file.assign(av[1]);
    new_file->open((file + ".replace").c_str(), std::ios::out);
    file.clear();

    if (*in_file)
    {
        std::ostringstream ss;
        ss << in_file->rdbuf();
        file = ss.str();    
    }
    
    return (file);
}

int protection(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "please input 3 parameters" << std::endl;
        return (1);
    }
    else if (av[2][0] == '\0' || av[2][0] == '\0')
    {
        std::cout << "string argument invalid" << std::endl;
        return (1);
    }
    std::ifstream in_file(av[1]);
    if (!in_file)
    {
        in_file.close();
        std::cout << av[1] << ": file not found" << std::endl;
        return (1);
    }
    in_file.close();
    return (0);    
}