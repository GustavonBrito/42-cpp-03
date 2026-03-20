/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 18:29:00 by gserafio          #+#    #+#             */
/*   Updated: 2026/03/20 08:22:08 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

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

        std::string getName(void) const;
        unsigned int getHitPoints(void) const;
        unsigned int getEnergyPoints(void) const;
        unsigned int getAttackDamage(void) const;

        void setName(const std::string& name);
        void setHitPoints(unsigned int hit_points);
        void setEnergyPoints(unsigned int energy_points);
        void setAttackDamage(unsigned int attack_damage);
      
    protected:
    
        bool _checkLifeAndEnergyPoints(void);
        std::string _name;
        int _energyPoints;
        int _hitPoints;
        int _attackDamage;
};

#endif