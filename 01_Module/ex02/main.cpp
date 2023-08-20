/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 23:00:17 by hiper             #+#    #+#             */
/*   Updated: 2023/08/20 23:20:48 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main ()
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;
    
    
    std::cout << "string adress = " << &string << std::endl;
    std::cout << "stringPTR adress = " << &stringPTR << std::endl;
    std::cout << "stringREF adress = " << &stringREF << std::endl << std::endl;
    
    std::cout << "string value = " << string << std::endl;
    std::cout << "stringPTR value = " << stringPTR << std::endl;
    std::cout << "stringREF value = " << stringREF << std::endl;

    return (0);
}