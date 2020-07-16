/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 13:20:36 by momotaun          #+#    #+#             */
/*   Updated: 2020/07/16 13:20:46 by momotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_recursive_power(int nb, int power)
{
    int     ans;
    if (power == 1)
    {
        return nb;
    }
    else
    {
        if (power == 0)
        {
            return 1;
        }
        else
        {
            ans = nb * ft_recursive_power(nb, power -1);
        }
        return ans;
    }
}
