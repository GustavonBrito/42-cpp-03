/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <gserafio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 18:29:00 by gserafio          #+#    #+#             */
/*   Updated: 2026/03/16 21:04:03 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class ClapTrap
{
    public:
        ClapTrap(const std::string name);
        ClapTrap(ClapTrap const& class_copy);
        ~ClapTrap(void);
        
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        
    private:
        bool _checkLifeAndEnergyPoints(void);
        std::string _name;
        unsigned int _hit_point;
        unsigned int _energy_points;
        unsigned int _attack_damage;
};