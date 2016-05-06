﻿/* -*-	Mode:C++; c-basic-offset:8; tab-width:8; indent-tabs-mode:t -*- */
/*
 * Copyright (c) 1997 Regents of the University of California.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the Daedalus Research
 *	Group at the University of California Berkeley.
 * 4. Neither the name of the University nor of the Laboratory may be used
 *    to endorse or promote products derived from this software without
 *    specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * Contributed by Giao Nguyen, http://daedalus.cs.berkeley.edu/~gnguyen
 *
 * @(#) $Header: /nfs/jade/vint/CVSROOT/ns-2/tcp/template.h,v 1.12 1998/06/27 01:25:07 gnguyen Exp $ (UCB)
 */

#ifndef ns_template_h
#define ns_template_h

#include "config.h"

template<typename T1, typename T2>
inline auto min(const T1 &lhs, const T2 &rhs) -> decltype(lhs + rhs)
{
    return (lhs < rhs) ? lhs : rhs;
}

template<typename T1, typename T2>
inline auto max(const T1 &lhs, const T2 &rhs) -> decltype(lhs+rhs)
{
    return rhs < lhs ? lhs : rhs;
}

template<typename T1, typename T2, typename Pre>
inline decltype(T1()+T2()) compare(const T1 &lhs, const T2 &rhs, Pre comp)
{
    return comp(lhs, rhs) ? lhs : rhs;
}

inline int min(int a, int b)
{
	return a < b ? a : b;
}

inline double min(int a, double b)
{
	return a < b ? a : b;
}

inline double min(double a, int b)
{
	return a < b ? a : b;
}

inline double min(double a, double b)
{
	return a < b ? a : b;
}

inline int max(int a, int b)
{
	return a < b ? b : a;
}

inline double max(int a, double b)
{
	return a < b ? b : a;
}

inline double max(double a, int b)
{
	return a < b ? b : a;
}

inline double max(double a, double b)
{
	return a < b ? b : a;
}


template <class Type>
inline Type abs(Type a)
{
	return (a < 0) ? -a : a;
}

template <class Type>
inline void swap(Type& a, Type& b)
{
	Type t(a);
	a = b;
	b = t;
}

#endif
