/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momotaun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 17:14:55 by momotaun          #+#    #+#             */
/*   Updated: 2020/07/16 13:02:30 by momotaun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_iterative_factorial(int nb)
{
    if (nb != 0)
    {
        int     ans;
        ans = 1;
        if (nb == 1 || nb == 0)
        {
            return 1;
        }
        else
        {
            ans = nb * ft_iterative_factorial(nb - 1);
            return ans;
        }
    }
    else
    {
        return 0;
    }
}
