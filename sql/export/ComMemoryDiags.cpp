/* -*-C++-*-
****************************************************************************
*
* File:         ComMemoryDiags.cpp
* RCS:          $Id: ComMemoryDiags.cpp,v 1.1 1998/07/29 23:21:44  Exp $
* Description:
*
* Created:      7/15/1998
* Modified:     $ $Date: 1998/07/29 23:21:44 $ (GMT)
* Language:     C++
* Status:       $State: Exp $
*
*
// @@@ START COPYRIGHT @@@
//
// (C) Copyright 1998-2014 Hewlett-Packard Development Company, L.P.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//
// @@@ END COPYRIGHT @@@
**************************************************************************** */

//
// This file is used ONLY to initialize the static data member
// contained in class ComMemoryDiags; see ComMemoryDiags.h for
// a description of this class
//
#include "Platform.h"


#include "ComMemoryDiags.h"

ostream * ComMemoryDiags::dumpMemoryInfo_ = 0 ; /* NULL */
