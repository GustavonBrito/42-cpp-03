/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 23:35:50 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/18 01:51:22 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap(), _isModeGuardGate(false)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap: Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string name)
: ClapTrap(name), _isModeGuardGate(false)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap: Parameterized constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& scavTrap) : ClapTrap(scavTrap)
{
    std::cout << "ScavTrap: Copy constructor called" << std::endl;
	this->_name = scavTrap._name;
	this->_hitPoints = scavTrap._hitPoints;
	this->_energyPoints = scavTrap._energyPoints;
	this->_attackDamage = scavTrap._attackDamage;
	this->_isModeGuardGate = scavTrap._isModeGuardGate;
}

ScavTrap & ScavTrap::operator=(const ScavTrap& scavTrap)
{
    std::cout << "ScavTrap: Copy assignment operator called" << std::endl;
    if (this == &scavTrap)
        return *this;
    
    this->_name = scavTrap._name;
    this->_energyPoints = scavTrap._energyPoints;
    this->_hitPoints = scavTrap._hitPoints;
    this->_attackDamage = scavTrap._attackDamage;
    this->_isModeGuardGate = scavTrap._isModeGuardGate;
    
    return *this;
};

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap: Desctructor called" << std::endl;
}

bool ScavTrap::get_isModeGuardGate(void) const
{
    return _isModeGuardGate;
}

void ScavTrap::set_isModeGuardGate(bool _isGuardGate)
{
    _isModeGuardGate = _isGuardGate;
}

void ScavTrap::guardGate(void)
{
    if (this->_hitPoints <= 0)
		std::cout << "ScavTrap " << this->_name << " is already dead to Keeper mode" << std::endl;
	else if (!this->_isModeGuardGate)
		std::cout << "ScavTrap " << this->_name << " is now IN Gate keeper mode!" << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " is now OUT Gate keeper mode!" << std::endl;
	this->set_isModeGuardGate(true);
}