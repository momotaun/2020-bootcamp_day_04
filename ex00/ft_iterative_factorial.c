/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 16:52:45 by momotaun          #+#    #+#             */
/*   Updated: 2020/07/16 12:59:37 by momotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_iterative_factorial(int nb)
{
    if (nb!=0)
    {
        int     ans;
        ans = 1;
        if (nb == 1 || nb == 0)
        {
            return 1;
        }
        else
        {
            while (nb >= 1)
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
