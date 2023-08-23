/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 22:03:55 by hiper             #+#    #+#             */
/*   Updated: 2023/08/23 02:00:20 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void )
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout <<
    "I love having extra bacon for my \
7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"
    << std::endl;
}

void Harl::info( void )
{
    std::cout << "[ INFO ]" << std::endl;

    std::cout <<
    "I cannot believe adding extra bacon costs more money. You didn't put \
enough bacon in my burger! If you did, I wouldn't be asking for more!"
    << std::endl;
}

void Harl::warning( void )
{
    std::cout << "[ WARNING ]" << std::endl;

    std::cout <<
    "I think I deserve to have some extra bacon for free.\n\
I've been coming for years whereas you started working here since last month."
    << std::endl;
}

void Harl::error( void )
{
    std::cout << "[ ERROR ]" << std::endl;

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
    int level_int = -1;
    while (n < 4)
    {
        if (level.compare(compare[n]) == 0)
            level_int = n + 1;
        n++;
    }
    switch (level_int)
    {
        case  1:
        {
            (this->*debugPTR) ();
            // (this->*infoPTR) ();
            // (this->*warningPTR) ();
            // (this->*errorPTR) ();
        }
        case 2:
        {
            (this->*infoPTR) ();
            // (this->*warningPTR) ();
            // (this->*errorPTR) ();
        }
        case 3:
        {
            (this->*warningPTR) ();
            // (this->*errorPTR) ();
        }
        case 4:
        {
            (this->*errorPTR) ();
            break ;
        }
        default:
        {
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;    
        }
    }
}

Harl::Harl( void )
{
    
}

Harl::~Harl( void )
{
    
}