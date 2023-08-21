/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 20:24:51 by hiper             #+#    #+#             */
/*   Updated: 2023/08/21 22:17:30 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "please input 3 parameters" << std::endl;
        return (1);
    }

    std::ifstream in_file;
    std::ofstream new_file;

    std::string file;
    file.assign(av[1]);
    
    new_file.open(file + ".replace", std::ios::out);
    in_file.open(file, std::ios::in);

    file.clear();
    
    std::string c;
    while (1)
    {
        in_file >> c;
        new_file << c;
        if (in_file.eof())
            break ;
        std::cout << c;
    }
    
    
    in_file.close();
    new_file.close();
    return (0);
}