/*
 * Copyright (c) 2018-2019, Arm Limited. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */

/*******************************************************************************
 * !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 * THIS FILE IS AN AUTO-GENERATED FILE - DO NOT MODIFY IT.
 * !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
 * Template Version 1.0
 * Generated by tools/psa/generate_partition_code.py Version 1.1
 ******************************************************************************/

#ifndef __TFM_PARTITION_LIST_INC__
#define __TFM_PARTITION_LIST_INC__

/*************************** Service Partitions *******************************/
/* -----------------------------------------------------------------------------
 * ATTEST_SRV
 * -------------------------------------------------------------------------- */
PARTITION_DECLARE(ATTEST_SRV, 0
    | SPM_PART_FLAG_IPC
    , "APPLICATION-ROT", 37, NORMAL, 8192);
PARTITION_ADD_INIT_FUNC(ATTEST_SRV, attest_main);

/* -----------------------------------------------------------------------------
 * CRYPTO_SRV
 * -------------------------------------------------------------------------- */
PARTITION_DECLARE(CRYPTO_SRV, 0
    | SPM_PART_FLAG_IPC
    , "APPLICATION-ROT", 35, NORMAL, 16384);
PARTITION_ADD_INIT_FUNC(CRYPTO_SRV, crypto_main);

/* -----------------------------------------------------------------------------
 * PLATFORM
 * -------------------------------------------------------------------------- */
PARTITION_DECLARE(PLATFORM, 0
    | SPM_PART_FLAG_IPC
    , "APPLICATION-ROT", 8, NORMAL, 1024);
PARTITION_ADD_INIT_FUNC(PLATFORM, platform_partition_entry);

/* -----------------------------------------------------------------------------
 * ITS
 * -------------------------------------------------------------------------- */
PARTITION_DECLARE(ITS, 0
    | SPM_PART_FLAG_IPC
    , "APPLICATION-ROT", 10, NORMAL, 2048);
PARTITION_ADD_INIT_FUNC(ITS, its_entry);

/*************************** Test Partitions **********************************/
#ifdef USE_PSA_TEST_PARTITIONS

#ifdef USE_CRYPTO_ACL_TEST
/* -----------------------------------------------------------------------------
 * CRYPTO_ACL_TEST
 * -------------------------------------------------------------------------- */
PARTITION_DECLARE(CRYPTO_ACL_TEST, 0
    | SPM_PART_FLAG_IPC
    , "APPLICATION-ROT", 128, NORMAL, 512);
PARTITION_ADD_INIT_FUNC(CRYPTO_ACL_TEST, test_partition_main);
#endif // USE_CRYPTO_ACL_TEST

#ifdef USE_CLIENT_TESTS_PART1
/* -----------------------------------------------------------------------------
 * CLIENT_TESTS_PART1
 * -------------------------------------------------------------------------- */
PARTITION_DECLARE(CLIENT_TESTS_PART1, 0
    | SPM_PART_FLAG_IPC
    , "APPLICATION-ROT", 1, NORMAL, 1024);
PARTITION_ADD_INIT_FUNC(CLIENT_TESTS_PART1, client_part_main);
#endif // USE_CLIENT_TESTS_PART1

#ifdef USE_SERVER_TESTS_PART1
/* -----------------------------------------------------------------------------
 * SERVER_TESTS_PART1
 * -------------------------------------------------------------------------- */
PARTITION_DECLARE(SERVER_TESTS_PART1, 0
    | SPM_PART_FLAG_IPC
    , "APPLICATION-ROT", 2, NORMAL, 1024);
PARTITION_ADD_INIT_FUNC(SERVER_TESTS_PART1, server_part1_main);
#endif // USE_SERVER_TESTS_PART1

#ifdef USE_SERVER_TESTS_PART2
/* -----------------------------------------------------------------------------
 * SERVER_TESTS_PART2
 * -------------------------------------------------------------------------- */
PARTITION_DECLARE(SERVER_TESTS_PART2, 0
    | SPM_PART_FLAG_IPC
    , "APPLICATION-ROT", 3, NORMAL, 1024);
PARTITION_ADD_INIT_FUNC(SERVER_TESTS_PART2, server_part2_main);
#endif // USE_SERVER_TESTS_PART2

#ifdef USE_SMOKE_TESTS_PART1
/* -----------------------------------------------------------------------------
 * SMOKE_TESTS_PART1
 * -------------------------------------------------------------------------- */
PARTITION_DECLARE(SMOKE_TESTS_PART1, 0
    | SPM_PART_FLAG_IPC
    , "APPLICATION-ROT", 4, NORMAL, 512);
PARTITION_ADD_INIT_FUNC(SMOKE_TESTS_PART1, smoke_part_main);
#endif // USE_SMOKE_TESTS_PART1

#endif // USE_PSA_TEST_PARTITIONS

#endif // __TFM_PARTITION_LIST_INC__