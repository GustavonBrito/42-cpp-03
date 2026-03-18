/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gustavo-linux <gustavo-linux@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 20:54:44 by gserafio          #+#    #+#             */
/*   Updated: 2026/03/18 02:07:00 by gustavo-lin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ClapTrap.hpp"
#include "includes/ScavTrap.hpp"

int main(void)
{
    std::cout << "===== CLAPTRAP TESTS =====" << std::endl;
    
    std::cout << "\n--- Test 1: ClapTrap Constructor ---" << std::endl;
    ClapTrap clap1("CL4P-TP");
    
    std::cout << "\n--- Test 2: ClapTrap Attack ---" << std::endl;
    clap1.attack("Goblin");
    
    std::cout << "\n--- Test 3: ClapTrap Take Damage ---" << std::endl;
    clap1.takeDamage(3);
    
    std::cout << "\n--- Test 4: ClapTrap Be Repaired ---" << std::endl;
    clap1.beRepaired(2);
    
    std::cout << "\n--- Test 5: ClapTrap Copy Constructor ---" << std::endl;
    ClapTrap clap2(clap1);
    std::cout << "clap2 created from clap1" << std::endl;
    
    std::cout << "\n--- Test 6: ClapTrap Assignment Operator ---" << std::endl;
    ClapTrap clap3("OtherBot");
    clap3 = clap1;
    std::cout << "clap3 assigned from clap1" << std::endl;
    
    std::cout << "\n--- Test 7: ClapTrap Drain Energy ---" << std::endl;
    for (int i = 0; i < 15; i++)
    {
        clap1.attack("Enemy");
    }
    
    std::cout << "\n\n===== SCAVTRAP TESTS =====" << std::endl;
    
    std::cout << "\n--- Test 1: ScavTrap Constructor with Name ---" << std::endl;
    ScavTrap scav1("Scavenger-1");
    
    std::cout << "\n--- Test 2: ScavTrap Default Constructor ---" << std::endl;
    ScavTrap scav2;
    
    std::cout << "\n--- Test 3: ScavTrap Inherited Attack ---" << std::endl;
    scav1.attack("Bandit");
    
    std::cout << "\n--- Test 4: ScavTrap Inherited Take Damage ---" << std::endl;
    scav1.takeDamage(5);
    
    std::cout << "\n--- Test 5: ScavTrap Inherited Be Repaired ---" << std::endl;
    scav1.beRepaired(3);
    
    std::cout << "\n--- Test 6: ScavTrap Guard Gate ---" << std::endl;
    scav1.guardGate();
    
    std::cout << "\n--- Test 7: ScavTrap Drain Energy ---" << std::endl;
    for (int i = 0; i < 55; i++)
    {
        scav1.attack("Goblin");
    }
    
    std::cout << "\n--- Test 8: ScavTrap Copy Constructor ---" << std::endl;
    ScavTrap scav3(scav1);
    
    std::cout << "\n--- Test 9: ScavTrap Assignment Operator ---" << std::endl;
    ScavTrap scav4("Scav4");
    scav4 = scav1;
    
    std::cout << "\n--- Test 10: ScavTrap Guard Gate When Dead ---" << std::endl;
    ScavTrap scav5("DeadScav");
    scav5.takeDamage(100);
    scav5.guardGate();
    
    std::cout << "\n===== DESTRUCTORS =====" << std::endl;
    return 0;
}