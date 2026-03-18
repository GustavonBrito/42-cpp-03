/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 19:42:50 by gserafio          #+#    #+#             */
/*   Updated: 2026/03/18 02:05:08 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ClapTrap.hpp"

ClapTrap::~ClapTrap(void){std::cout << "ClapTrap: Destructor dealocated" << std::endl;}

ClapTrap::ClapTrap(ClapTrap const& class_copy):
    _name(class_copy._name),
    _energyPoints(class_copy._energyPoints),
    _hitPoints(class_copy._hitPoints),
    _attackDamage(class_copy._attackDamage)
{
    std::cout << "ClapTrap: Copy constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : _name(name), _energyPoints(10), _hitPoints(10), _attackDamage(10)
{
    std::cout << "ClapTrap: Constructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &other) 
{
    std::cout << "ClapTrap: Copy assignment operator called" << std::endl;
    if (this == &other)
        return *this;
    
    this->_name = other._name;
    this->_energyPoints = other._energyPoints;
    this->_hitPoints = other._hitPoints;
    this->_attackDamage = other._attackDamage; 
    
    return *this;
};

ClapTrap::ClapTrap(void) : _name("Unknown"), _energyPoints(10), _hitPoints(10), _attackDamage(10)
{
    std::cout << "ClapTrap: Default constructor called" << std::endl;
}

bool ClapTrap::_checkLifeAndEnergyPoints(void)
{
    if (_hitPoints == 0 && _energyPoints == 0)
    {
        return true;
    }
    else
    {
        std::cout << "ClapTrap: " << _name << " has no hit points or energy points left!" << std::endl;
        return false;
    }
}

void ClapTrap::attack(const std::string& target)
{
    if (_checkLifeAndEnergyPoints())
    {
        std::cout << "ClapTrap: " <<  _name << "attacks " << target << "causing " << _attackDamage << "points of damage!" << std::endl;
        _energyPoints--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (_checkLifeAndEnergyPoints())
    {
        std::cout << "ClapTrap: " <<  _name << "has taken a significant " << amount << "of damage" << std::endl;
        _hitPoints -= amount;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_checkLifeAndEnergyPoints())
    {
        std::cout << "ClapTrap: " <<  _name << "received a " << amount << "of life" << std::endl;
        _hitPoints += amount;
        _energyPoints--;
    }
}