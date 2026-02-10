/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmixtur <fmixtur@student.42lausanne.ch>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 13:12:30 by fmixtur           #+#    #+#             */
/*   Updated: 2026/02/10 13:16:09 by fmixtur          ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T>
void iter(T* array, int length, void (*func)(T&))
{
    for (int i = 0; i < length; i++)
        func(array[i]);
}