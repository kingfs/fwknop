/*
 *****************************************************************************
 *
 * File:    getpasswd.h
 *
 * Purpose: Header file for getpasswd.c.
 *
 *  Fwknop is developed primarily by the people listed in the file 'AUTHORS'.
 *  Copyright (C) 2009-2014 fwknop developers and contributors. For a full
 *  list of contributors, see the file 'CREDITS'.
 *
 *  License (GNU General Public License):
 *
 *  This program is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License
 *  as published by the Free Software Foundation; either version 2
 *  of the License, or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307
 *  USA
 *
 *****************************************************************************
*/
#ifndef GETPASSWD_H
#define GETPASSWD_H

/* Prototypes
*/
char* getpasswd(const char *prompt, int fd);

/* This can be used to acquire an encryption key or HMAC key
*/
int get_key_file(char *key, int *key_len, const char *key_file,
    fko_ctx_t ctx, const fko_cli_options_t *options);

#ifdef HAVE_C_UNIT_TESTS
int register_ts_getpassword(void);
#endif

#endif  /* GETPASSWD_H */
