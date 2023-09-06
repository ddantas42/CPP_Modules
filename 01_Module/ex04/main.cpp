/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 20:24:51 by hiper             #+#    #+#             */
/*   Updated: 2023/09/06 18:40:43 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"
#include <unistd.h>

int main(int ac, char **av)
{
    if (protection(ac, av) > 0)
        return (1);

    std::ifstream in_file(av[1]);
    std::ofstream new_file;
    std::string file;
    file = get_file(&in_file, &new_file, av);
    
    std::string::iterator iterator = file.begin();
    std::string temp;
    std::string temp2;
    int n = 0;
    int av2 = 0;
    
    while (iterator[n] != '\0')
    {
        if (iterator[n] == av[2][0])
        {
            av2 = 0;
            while (iterator[n] == av[2][av2] && iterator[n] != '\0' && av[2][av2] != '\0')
            {
                n++; av2++;            
            }
            if (av[2][av2] == '\0')
            {
                temp = file.substr(0, n - av2);
                temp.append(av[3]);
                temp2 = file.substr(n, file.size());
                file.clear();
                file = temp + temp2;
                iterator = file.begin();
                temp.clear(); temp2.clear();
                n--;
            }
            else
                n = n - av2;
            
        }
        n++;
    }

    new_file << file;
    in_file.close();
    new_file.close();
    return (0);
}