/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nryser <nryser@student.42lausane.ch>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 09:43:35 by nryser            #+#    #+#             */
/*   Updated: 2024/08/07 20:57:35 by nryser           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include "fractal.h"

// Utility function declarations
void	error_message(char *text, int mode);
void	ft_strlower(char *str);
void	print(char *str, int fd);
void	show_help(void);

#endif  /* UTILS_H */
