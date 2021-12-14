/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oairola <oairola@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 10:43:37 by oairola           #+#    #+#             */
/*   Updated: 2021/12/14 15:00:17 by oairola          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BUFF_SIZE 256
#define fd_max 8192

int get_next_line(const int fd, char **line);