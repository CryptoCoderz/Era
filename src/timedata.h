// Copyright (c) 2018 The Era developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ERA_TIMEDATA_H
#define ERA_TIMEDATA_H

#include <stdint.h>

class CNetAddr;

/* Functions to keep track of adjusted P2P time */
int64_t GetTimeOffset();
int64_t GetAdjustedTime();
void AddTimeData(const CNetAddr& ip, int64_t nTime);

#endif
