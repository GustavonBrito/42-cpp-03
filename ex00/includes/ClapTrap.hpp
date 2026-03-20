/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 18:29:00 by gserafio          #+#    #+#             */
/*   Updated: 2026/03/20 08:15:02 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP1_HPP
#define CLAPTRAP1_HPP

#include <iostream>

class ClapTrap
{
    public:
        ClapTrap(void);
        ClapTrap(const std::string name);
        ClapTrap(ClapTrap const& class_copy);
        ClapTrap& operator=(const ClapTrap& scavTrap);
        ~ClapTrap(void);
        
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        
    private:
        bool _checkLifeAndEnergyPoints(void);
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;
};

#endif
