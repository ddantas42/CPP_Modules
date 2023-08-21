/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 20:24:51 by hiper             #+#    #+#             */
/*   Updated: 2023/08/21 23:06:41 by hiper            ###   ########.fr       */
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

    std::ifstream in_file(av[1]);
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
    
    new_file << file;

    in_file.close();
    new_file.close();
    return (0);
}