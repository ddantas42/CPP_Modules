/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 22:03:55 by hiper             #+#    #+#             */
/*   Updated: 2023/08/23 00:45:23 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
    std::cout <<
    "I love having extra bacon for my \
7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
    << std::endl;
}

void Harl::info( void )
{
    std::cout <<
    "I cannot believe adding extra bacon costs more money. You didn't put \
enough bacon in my burger! If you did, I wouldn't be asking for more!"
    << std::endl;
}

void Harl::warning( void )
{
    std::cout <<
    "I think I deserve to have some extra bacon for free. I've been coming for \
years whereas you started working here since last month."
    << std::endl;
}

void Harl::error( void )
{
    std::cout <<
    "This is unacceptable! I want to speak to the manager now."
    << std::endl;
}

void Harl::complain( std::string level )
{
    void (Harl::* debugPTR) ( ) = &Harl::debug;
    void (Harl::* infoPTR) ( ) = &Harl::info;
    void (Harl::* warningPTR) ( ) = &Harl::warning;
    void (Harl::* errorPTR) ( ) = &Harl::error;

    void (Harl::*ptr[4]) ();
    ptr[0] = &Harl::debug;
    ptr[1] = &Harl::info;
    ptr[2] = &Harl::warning;
    ptr[3] = &Harl::error;

    std::string compare[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    int n = 0;
    while (n < 4)
    {
        if (level.compare(compare[n]) == 0)
        {
            (this->*ptr[n]) ( );
        }
        n++;
    }
}

Harl::Harl( void )
{
    
}

Harl::~Harl( void )
{
    
}