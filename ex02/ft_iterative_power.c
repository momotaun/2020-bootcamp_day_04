/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 17:42:01 by momotaun          #+#    #+#             */
/*   Updated: 2020/07/16 13:09:53 by momotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_iterative_power(int nb, int power)
{
    if (nb > 0)
    {
        int     ans;
        int     count;
        count = 1;
        ans = 1;
        if(nb == 1 || power == 0)
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
