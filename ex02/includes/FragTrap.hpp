/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <gserafio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 22:00:22 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/18 18:54:31 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class   FragTrap : public ClapTrap 
{
    public:
        FragTrap(void);
        FragTrap(const std::string name);
        FragTrap(const FragTrap& fragTrap);
        
        FragTrap& operator=(const FragTrap& fragTrap);

        ~FragTrap();

        bool get_highFivesGuys(void) const;
        void set_highFivesGuys(bool _isHighFive);

        void highFivesGuys(void);
    
    private:
        bool _isHighFive;
};

#endif