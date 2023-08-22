/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 22:04:02 by hiper             #+#    #+#             */
/*   Updated: 2023/08/22 23:24:44 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <stdlib.h>

int main()
{
    Harl instance;
    
    instance.complain("DEBUG");    
    instance.complain("INFO");
    instance.complain("WARNING");
    instance.complain("ERROR");

    return (0);
}