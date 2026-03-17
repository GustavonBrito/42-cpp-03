/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gserafio <gserafio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 20:54:44 by gserafio          #+#    #+#             */
/*   Updated: 2026/03/16 20:56:13 by gserafio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ClapTrap.hpp"

int main(void)
{
    std::cout << "=== Test 1: Constructor ===" << std::endl;
    ClapTrap trap1("CL4P-TP");
    
    std::cout << "\n=== Test 2: Attack ===" << std::endl;
    trap1.attack("Robot");
    
    std::cout << "\n=== Test 3: Take Damage ===" << std::endl;
    trap1.takeDamage(3);
    
    std::cout << "\n=== Test 4: Be Repaired ===" << std::endl;
    trap1.beRepaired(2);
    
    std::cout << "\n=== Test 5: Copy Constructor ===" << std::endl;
    ClapTrap trap2(trap1);
    
    std::cout << "\n=== Test 6: Multiple Actions ===" << std::endl;
    for (int i = 0; i < 11; i++)
    {
        trap1.attack("Enemy");
    }
    
    std::cout << "\n=== Test 7: Out of Energy ===" << std::endl;
    trap1.beRepaired(5);
    
    std::cout << "\n=== Test 8: Take Heavy Damage ===" << std::endl;
    ClapTrap trap3("TestBot");
    trap3.takeDamage(20);
    trap3.attack("Target");
    
    std::cout << "\n=== Destructors ===" << std::endl;
    return 0;
}