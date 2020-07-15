/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 16:52:45 by momotaun          #+#    #+#             */
/*   Updated: 2020/07/15 17:05:18 by momotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int    ft_iterative_factorial(int nb)
{
    if (nb!=0)
    {
        int     ans;
        ans = 1;
        if(nb == 1)
        {
            return 1;
        }
        else
        {
            while(nb >= 1)
            {
                ans = ans * nb;
                nb--;
            }
            return ans;
        }
    }
    else
    {
        return 0;
    }
}
