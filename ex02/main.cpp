/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <gserafio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 20:54:44 by gserafio          #+#    #+#             */
/*   Updated: 2026/03/18 19:02:00 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ClapTrap.hpp"
#include "includes/FragTrap.hpp"

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
    
    std::cout << "\n\n===== FRAGTRAP TESTS =====" << std::endl;
    
    std::cout << "\n--- Test 1: FragTrap Constructor with Name ---" << std::endl;
    FragTrap frag1("Scavenger-1");
    
    std::cout << "\n--- Test 2: FragTrap Default Constructor ---" << std::endl;
    FragTrap frag2;
    
    std::cout << "\n--- Test 3: FragTrap Guard Gate ---" << std::endl;
    frag1.highFivesGuys();
      
    std::cout << "\n--- Test 4: FragTrap Copy Constructor ---" << std::endl;
    FragTrap frag3(frag1);
    
    std::cout << "\n--- Test 5: FragTrap Assignment Operator ---" << std::endl;
    FragTrap frag4("Frag4");
    frag3 = frag1;
    
    std::cout << "\n--- Test 6: FragTrap Guard Gate When Dead ---" << std::endl;
    FragTrap frag5("DeadScav");
    frag5.highFivesGuys();
    
    std::cout << "\n===== DESTRUCTORS =====" << std::endl;
    return 0;
}