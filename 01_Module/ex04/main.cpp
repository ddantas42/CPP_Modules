/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 20:24:51 by hiper             #+#    #+#             */
/*   Updated: 2023/08/22 18:30:56 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main(int ac, char **av)
{
    if (protection(ac, av) > 0)
        return (1);

    std::ifstream in_file(av[1]);
    std::ofstream new_file;
    std::string file;
    file = get_file(&in_file, &new_file, av);
    
    
    
    std::string::iterator iterator = file.begin();
    int n = 0;
    int i = 0;
    
    while (iterator[n] != '\0')
    {
        iterator[n] = 'a';
        n++;
    }

    new_file << file;
    in_file.close();
    new_file.close();
    return (0);
}