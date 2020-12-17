// Copyright (c) 2018 The Bitcoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file license.txt or http://www.opensource.org/licenses/mit-license.php.

#ifndef __INCLUDED_COIN_H__
#define __INCLUDED_COIN_H__

#include <string>

static const std::string mainnet_seeds[] = {"seed.dapscoin.com",
                                            "seed1.dapscoin.com",
                                            "seed2.dapscoin.com",
                                            "seed3.dapscoin.com",
                                            "seed4.dapscoin.com",
                                            "seed5.dapscoin.com",
                                            ""};

static const std::string testnet_seeds[] = {""};

static const int mainnet_port = 53572;
static const int testnet_port = 53574;

static unsigned char pchMessageStart[4] = { 0xa4, 0xb7, 0x79, 0x84 };
static unsigned char pchMessageStart_testnet[4] = { 0xa5, 0xb8, 0x7a, 0x85 };

#endif // __INCLUDED_COIN_H__
