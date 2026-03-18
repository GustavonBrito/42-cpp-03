/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 22:00:22 by gustavo-lin       #+#    #+#             */
/*   Updated: 2026/03/18 02:02:41 by gustavo-lin      ###   ########.fr       */
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
    
    private:
        bool _isModeGuardGate;      
};

#endif