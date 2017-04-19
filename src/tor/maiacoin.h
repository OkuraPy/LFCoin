/* Copyright (c) 2014, Lifecoin Developers */
/* See LICENSE for licensing information */

/**
 * \file Lifecoin.h
 * \brief Headers for Lifecoin.cpp
 **/

#ifndef TOR_Lifecoin_H
#define TOR_Lifecoin_H

#ifdef __cplusplus
extern "C" {
#endif

    char const* Lifecoin_tor_data_directory(
    );

    char const* Lifecoin_service_directory(
    );

    int check_interrupted(
    );

    void set_initialized(
    );

    void wait_initialized(
    );

#ifdef __cplusplus
}
#endif

#endif

