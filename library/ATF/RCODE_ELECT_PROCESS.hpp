// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"


START_ATF_NAMESPACE
    enum RCODE_ELECT_PROCESS
    {
      success = 0x0,
      candidate_success = 0x1,
      candidate_closed = 0x2,
      candidate_overlap = 0x3,
      candidate_unqualified = 0x4,
      candidate_notenough_dalant = 0x5,
      candidate_retry = 0x6,
      vote_success = 0x7,
      only_one_candidacy = 0x8,
      vote_closed = 0x9,
      vote_overlap = 0xA,
      vote_unqualified = 0xB,
      vote_retry = 0xC,
      giveback_success = 0xD,
      giveback_failed = 0xE,
      overissue_max_money = 0xF,
      vote_iscandidacy = 0x10,
      candidate_invalid_charrank = 0x11,
      first_candidate_full = 0x12,
      vote_candidate_error = 0x13,
      is_not_patiarch = 0x14,
      is_not_appoint_period = 0x15,
      cant_discharge_class = 0x16,
      is_not_appoint_class = 0x17,
      is_not_equal_avatorname = 0x18,
      is_nothing_case = 0xFF,
    };
END_ATF_NAMESPACE
