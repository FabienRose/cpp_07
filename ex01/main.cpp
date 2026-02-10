/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmixtur <fmixtur@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 13:16:59 by fmixtur           #+#    #+#             */
/*   Updated: 2026/02/10 13:42:10 by fmixtur          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.h"
#include <iostream>
    
template<typename T>
void printer(T& x)
{
    std::cout << x << std::endl;
}

int main()
{
    int intArray[] = {1, 2, 3, 4, 5};
    char string[] = "Hello";

    std::cout << "Integer array:" << std::endl;
    ::iter(intArray, 5, printer);

    std::cout << "\nString array:" << std::endl;
    ::iter(string, 5, printer);
    // ::iter(strArray, 3, printInt());
    return 0;
}