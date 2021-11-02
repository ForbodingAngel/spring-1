/* This file is part of the Spring engine (GPL v2 or later), see LICENSE.html */

#ifndef PFS_TYPES_HDR
#define PFS_TYPES_HDR

enum {
	NOPFS_TYPE  = -1, // for editors
	HAPFS_TYPE  =  0, // default HPA
	QTPFS_TYPE  =  1,
	TKPFS_TYPE  =  2, // default w/ multi-thread request support
	PFS_TYPE_MAX = TKPFS_TYPE,
};

#endif

