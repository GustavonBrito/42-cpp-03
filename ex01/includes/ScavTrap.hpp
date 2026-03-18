/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <gserafio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 22:00:22 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/18 18:26:12 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class   ScavTrap : public ClapTrap 
{
    public:
        ScavTrap(void);
        ScavTrap(const std::string name);
        ScavTrap(const ScavTrap& scavTrap);
        
        ScavTrap& operator=(const ScavTrap& scavTrap);

        ~ScavTrap();

        bool get_isModeGuardGate(void) const;
        void set_isModeGuardGate(bool _isGuardGate);

        void guardGate(void);
        void attack(const std::string& target);
        
    private:
        bool _isModeGuardGate;      
};

#endif