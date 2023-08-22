/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiper <hiper@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 17:03:14 by hiper             #+#    #+#             */
/*   Updated: 2023/08/22 17:54:25 by hiper            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_H
# define SED_H

#include <iostream>
#include <fstream>
#include <sstream>

int protection(int ac, char **av);
std::string get_file(std::ifstream *in_file, std::ofstream *new_file, char **av);

#endif