/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <gserafio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 23:35:50 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/18 18:49:55 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(void): ClapTrap(), _isHighFive(false)
{
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap: Default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string name)
: ClapTrap(name), _isHighFive(false)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "FragTrap: Parameterized constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& fragTrap) : ClapTrap(fragTrap)
{
    std::cout << "FragTrap: Copy constructor called" << std::endl;
	this->_name = fragTrap._name;
	this->_hitPoints = fragTrap._hitPoints;
	this->_energyPoints = fragTrap._energyPoints;
	this->_attackDamage = fragTrap._attackDamage;
	this->_isHighFive = fragTrap._isHighFive;
}

FragTrap & FragTrap::operator=(const FragTrap& fragTrap)
{
    std::cout << "FragTrap: Copy assignment operator called" << std::endl;
    if (this == &fragTrap)
        return *this;
    
    this->_name = fragTrap._name;
    this->_energyPoints = fragTrap._energyPoints;
    this->_hitPoints = fragTrap._hitPoints;
    this->_attackDamage = fragTrap._attackDamage;
    this->_isHighFive = fragTrap._isHighFive;
    
    return *this;
};

FragTrap::~FragTrap()
{
    std::cout << "FragTrap: Desctructor called" << std::endl;
}

bool FragTrap::get_highFivesGuys(void) const
{
    return _isHighFive;
}

void FragTrap::set_highFivesGuys(bool _isGuardGate)
{
    _isHighFive = _isGuardGate;
}

void FragTrap::highFivesGuys(void)
{
    int i = 0;
	std::string response;
	
	if (this->_hitPoints <= 0)
		std::cout << "FragTrap: " << this->_name << " is already dead" << std::endl;

	std::cout << "High five? (yes/no): ";
    std::getline(std::cin, response);
	while (response[i])
	{
		tolower(response[i]);
		i++;
	}
	if (response.compare("yes") == 0)
	{
		std::cout << "FragTrap: highfives you!" << std::endl;
		this->set_highFivesGuys(true);
	}
	else if (response.compare("no") == 0)
	{
		std::cout << "FragTrap: Is sad you dont want to high five him" << std::endl;	
		this->set_highFivesGuys(false);
	}
	else
		std::cout << "FragTrap: only accepts yes or no is accepted as response." << std::endl;
}