/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 17:42:01 by momotaun          #+#    #+#             */
/*   Updated: 2020/07/15 17:42:12 by momotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int    ft_iterative_power(int nb, int power)
{
    if (nb > 0 || power == 0)
    {
        int     ans;
        int     count;
        count = 1;
        ans = 1;
        if(nb == 1)
        {
            return 1;
        }
        else
        {
            while(count <= power)
            {
                ans = ans * nb;
                count++;
            }
            return ans;
        }
    }
    else
    {
        return 0;
    }
}
