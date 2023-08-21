/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 20:24:51 by hiper             #+#    #+#             */
/*   Updated: 2023/08/21 23:21:35 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "please input 3 parameters" << std::endl;
        return (1);
    }
    if (av[2][0] == '\0' || av[2][0] == '\0')
    {
        std::cout << "string argument invalid" << std::endl;
        return (1);
    }

    std::ifstream in_file(av[1]);
    if (!in_file)
    {
        std::cout << av[1] << ": file not found" << std::endl;
        return (1);
    }
    
    std::ofstream new_file;

    std::string file;
    file.assign(av[1]);
    new_file.open(file + ".replace", std::ios::out);
    file.clear();
    
    if (in_file)
    {
        std::ostringstream ss;
        ss << in_file.rdbuf();
        file = ss.str();    
    }
    
    std::string *ptr = &file;
    
    new_file << ptr;

    in_file.close();
    new_file.close();
    return (0);
}