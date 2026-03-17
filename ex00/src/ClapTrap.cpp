/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <gserafio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 19:42:50 by gserafio          #+#    #+#             */
/*   Updated: 2026/03/16 21:04:25 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::~ClapTrap(void){std::cout << "Destructor dealocated\n";}

ClapTrap::ClapTrap(ClapTrap const& class_copy):
    _name(class_copy._name),
    _hit_point(class_copy._hit_point),
    _energy_points(class_copy._energy_points),
    _attack_damage(class_copy._attack_damage)
{
    std::cout << "Copy constructor called\n";
}

ClapTrap::ClapTrap(const std::string name) : _name(name) , _hit_point(10), _energy_points(10), _attack_damage(10)
{
    std::cout << "Constructor called\n";
}

bool ClapTrap::_checkLifeAndEnergyPoints(void)
{
    if (_hit_point == 0 && _energy_points == 0)
    {
        return true;
    }
    else
    {
        std::cout << "ClapTrap " << _name << " has no hit points or energy points left!\n";
        return false;
    }
}

void ClapTrap::attack(const std::string& target)
{
    if (_checkLifeAndEnergyPoints())
    {
        std::cout << "ClapTrap " <<  _name << "attacks " << target << "causing " << _attack_damage << "points of damage!\n";
        _energy_points--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_checkLifeAndEnergyPoints())
    {
        std::cout << "ClapTrap " <<  _name << "has taken a significant " << amount << "of damage\n";
        _hit_point -= amount;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_checkLifeAndEnergyPoints())
    {
        std::cout << "ClapTrap " <<  _name << "received a " << amount << "of life\n";
        _hit_point += amount;
        _energy_points--;
    }
}