// Copyright (c) 2018 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file license.txt or http://www.opensource.org/licenses/mit-license.php.

#ifndef __INCLUDED_COIN_H__
#define __INCLUDED_COIN_H__

#include <string>

static const std::string mainnet_seeds[] = {"seed.dapscoin-seeds.com",
                                            "seed2.dapscoin-seeds.com",
                                            "seed3.dapscoin-seeds.com",
                                            "seed4.dapscoin-seeds.com",
                                            "seed5.dapscoin-seeds.com",
                                            ""};

static const std::string testnet_seeds[] = {""};

static const int mainnet_port = 53572;
static const int testnet_port = 53574;

static unsigned char pchMessageStart[4] = { 0xa4, 0xb7, 0x79, 0x84 };
static unsigned char pchMessageStart_testnet[4] = { 0xa4, 0xb7, 0x79, 0x84 };

#endif // __INCLUDED_COIN_H__
