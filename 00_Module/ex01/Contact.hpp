/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddantas- <ddantas-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:29:44 by ddantas-          #+#    #+#             */
/*   Updated: 2023/08/14 18:16:39 by ddantas-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H


class Contact {

	public:
		Contact ( void );
		~Contact ( void );
		
		char	*first_name;	
		char	*last_name;	
		char	*nickname;	
		int		phone_nbr;
		int		index;
		
	
	
};

#endif