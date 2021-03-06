/**
 * vim: set ts=4 :
 * =============================================================================
 * SourceMod
 * Copyright (C) 2004-2008 AlliedModders LLC.  All rights reserved.
 * =============================================================================
 *
 * This program is free software; you can redistribute it and/or modify it under
 * the terms of the GNU General Public License, version 3.0, as published by the
 * Free Software Foundation.
 * 
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * As a special exception, AlliedModders LLC gives you permission to link the
 * code of this program (as well as its derivative works) to "Half-Life 2," the
 * "Source Engine," the "SourcePawn JIT," and any Game MODs that run on software
 * by the Valve Corporation.  You must obey the GNU General Public License in
 * all respects for all other code used.  Additionally, AlliedModders LLC grants
 * this exception to all derivative works.  AlliedModders LLC defines further
 * exceptions, found in LICENSE.txt (as of this writing, version JULY-31-2007),
 * or <http://www.sourcemod.net/license.php>.
 *
 * Version: $Id$
 */

#ifndef _INCLUDE_CSSDM_VERSION_INFORMATION_H_
#define _INCLUDE_CSSDM_VERSION_INFORMATION_H_

/**
 * @file Contains SourceMod version information.
 * @brief This file will redirect to an autogenerated version if being compiled via
 * the build scripts.
 */

#if defined CSSDM_GENERATED_BUILD
#include <cssdm_version_auto.h>
#else
#define CSSDM_BUILD_STRING		"-pdev"
#define CSSDM_BUILD_UNIQUEID	"nn:y" CSSDM_BUILD_STRING
#define CSSDM_FULL_VERSION		"2.1.5" CSSDM_BUILD_STRING
#define CSSDM_FILE_VERSION		2,1,3,0
#endif
#define CSSDM_BUILD_TIMESTAMP	__DATE__ " " __TIME__

#endif /* _INCLUDE_CSSDM_VERSION_INFORMATION_H_ */

