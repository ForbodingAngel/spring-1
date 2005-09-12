/*
 * aibase.h
 * Base header for ai shared libaries
 * Copyright (C) 2005 Christopher Han
 */
#ifndef AIBASE_H
#define AIBASE_H

#ifdef _WIN32

#include <windows.h>

#define APIENTRY WINAPI

#else

#define APIENTRY

#endif

#endif /* AIBASE_H */
