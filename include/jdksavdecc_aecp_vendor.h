#pragma once

/*
  Copyright (c) 2013, J.D. Koftinoff Software, Ltd.
  All rights reserved.

  Redistribution and use in source and binary forms, with or without
  modification, are permitted provided that the following conditions are met:

   1. Redistributions of source code must retain the above copyright notice,
      this list of conditions and the following disclaimer.

   2. Redistributions in binary form must reproduce the above copyright
      notice, this list of conditions and the following disclaimer in the
      documentation and/or other materials provided with the distribution.

   3. Neither the name of J.D. Koftinoff Software, Ltd. nor the names of its
      contributors may be used to endorse or promote products derived from
      this software without specific prior written permission.

  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE.
*/

#include "jdksavdecc_world.h"
#include "jdksavdecc_aecp.h"

#ifdef __cplusplus
extern "C" {
#endif

/** \addtogroup aecp AECP - Clause 9 */
/*@{*/

/** \addtogroup aecp_vendor AECP Vendor
*/
/*@{*/

/** \addtogroup aecp_vendor AECP Vendor Unique Offsets - Clause 9.2.1.5 */
/*@{*/

#define JDKSAVDECC_AECP_VENDOR_OFFSET_CONTROLLER_ENTITY_ID (JDKSAVDECC_COMMON_CONTROL_HEADER_LEN + 0)
#define JDKSAVDECC_AECP_VENDOR_OFFSET_SEQUENCE_ID (JDKSAVDECC_COMMON_CONTROL_HEADER_LEN + 8)
#define JDKSAVDECC_AECP_VENDOR_OFFSET_PROTOCOL_ID (JDKSAVDECC_COMMON_CONTROL_HEADER_LEN + 10)
#define JDKSAVDECC_AECP_VENDOR_LEN (JDKSAVDECC_COMMON_CONTROL_HEADER_LEN + 16)

/*@}*/

/** \addtogroup aecp_vendor_status AECP Vendor Unique Status codes - Clause 9.2.1.5.3 */
/*@{*/

#define JDKSAVDECC_AECP_VENDOR_STATUS_SUCCESS (0)
#define JDKSAVDECC_AECP_VENDOR_STATUS_NOT_IMPLEMENTED (1)

/**
 * Extract the eui64 value of the controller_entity_id field of the AECPDU_VENDOR
 *object from a network buffer.
 *
 *
 * No bounds checking of the memory buffer is done. It is the caller's
 *responsibility to pre-validate base and pos.
 *
 * @param base pointer to raw memory buffer to read from.
 * @param pos offset from base to read the field from;
 * @return the struct jdksavdecc_eui64 controller_entity_id value
 */
static inline struct jdksavdecc_eui64 jdksavdecc_aecpdu_vendor_get_controller_entity_id(void const *base, ssize_t pos) {
    return jdksavdecc_eui64_get(base, pos + JDKSAVDECC_AECP_VENDOR_OFFSET_CONTROLLER_ENTITY_ID);
}

/**
 * Store a eui64 value to the controller_entity_id field of the AECPDU_VENDOR
 *object to a network buffer.
 *
 *
 * No bounds checking of the memory buffer is done. It is the caller's
 *responsibility to pre-validate base and pos.
 *
 * @param v The struct jdksavdecc_eui64 controller_entity_id value.
 * @param base pointer to raw memory buffer to write to.
 * @param pos offset from base to write the field to;
 */
static inline void jdksavdecc_aecpdu_vendor_set_controller_entity_id(struct jdksavdecc_eui64 v, void *base, ssize_t pos) {
    jdksavdecc_eui64_set(v, base, pos + JDKSAVDECC_AECP_VENDOR_OFFSET_CONTROLLER_ENTITY_ID);
}

/**
 * Extract the uint16 value of the sequence_id field of the AECPDU_VENDOR object
 *from a network buffer.
 *
 *
 * No bounds checking of the memory buffer is done. It is the caller's
 *responsibility to pre-validate base and pos.
 *
 * @param base pointer to raw memory buffer to read from.
 * @param pos offset from base to read the field from;
 * @return the uint16_t sequence_id value
 */
static inline uint16_t jdksavdecc_aecpdu_vendor_get_sequence_id(void const *base, ssize_t pos) {
    return jdksavdecc_uint16_get(base, pos + JDKSAVDECC_AECP_VENDOR_OFFSET_SEQUENCE_ID);
}

/**
 * Store a uint16 value to the sequence_id field of the AECPDU_VENDOR object to a
 *network buffer.
 *
 *
 * No bounds checking of the memory buffer is done. It is the caller's
 *responsibility to pre-validate base and pos.
 *
 * @param v The uint16_t sequence_id value.
 * @param base pointer to raw memory buffer to write to.
 * @param pos offset from base to write the field to;
 */
static inline void jdksavdecc_aecpdu_vendor_set_sequence_id(uint16_t v, void *base, ssize_t pos) {
    jdksavdecc_uint16_set(v, base, pos + JDKSAVDECC_AECP_VENDOR_OFFSET_SEQUENCE_ID);
}

/**
 * Extract the 48-bit value of the protocol_id field of the AECPDU_VENDOR object
 *from a network buffer.
 *
 *
 * No bounds checking of the memory buffer is done. It is the caller's
 *responsibility to pre-validate base and pos.
 *
 * @param base pointer to raw memory buffer to read from.
 * @param pos offset from base to read the field from;
 * @return the jdksavdecc_eui48 protocol_id value
 */
static inline jdksavdecc_eui48 jdksavdecc_aecpdu_vendor_get_protocol_id(void const *base, ssize_t pos) {
    return jdksavdecc_eui48_get(base, pos + JDKSAVDECC_AECP_VENDOR_OFFSET_PROTOCOL_ID);
}

/**
 * Store a 48-bit value to the protocol_id field of the AECPDU_VENDOR object to a
 *network buffer.
 *
 *
 * No bounds checking of the memory buffer is done. It is the caller's
 *responsibility to pre-validate base and pos.
 *
 * @param v The jdksavdecc_eui48 protocol_id value.
 * @param base pointer to raw memory buffer to write to.
 * @param pos offset from base to write the field to;
 */
static inline void jdksavdecc_aecpdu_vendor_set_protocol_id(jdksavdecc_eui48 v, void *base, ssize_t pos) {
    jdksavdecc_eui48_set(v, base, pos + JDKSAVDECC_AECP_VENDOR_OFFSET_PROTOCOL_ID);
}

/**
 * Extract the payload data field of the AECPDU_VENDOR object
 *from a network buffer.
 *
 *
 * No bounds checking of the memory buffer is done. It is the caller's
 *responsibility to pre-validate base and pos.
 *
 * @param base pointer to raw memory buffer to read from.
 * @param pos offset from base to read the field from;
 * @return the jdksavdecc_eui48 protocol_id value
 */
static inline uint8_t* jdksavdecc_aecpdu_vendor_get_payload_specific_data(void const *base, ssize_t pos, ssize_t len) {
    uint8_t* data = new uint8_t[len - JDKSAVDECC_AECP_VENDOR_LEN];
	memcpy(data, &base + pos, len);
	return data;
}

/**
 * Store a 48-bit value to the protocol_id field of the AECPDU_VENDOR object to a
 *network buffer.
 *
 *
 * No bounds checking of the memory buffer is done. It is the caller's
 *responsibility to pre-validate base and pos.
 *
 * @param v The jdksavdecc_eui48 protocol_id value.
 * @param base pointer to raw memory buffer to write to.
 * @param pos offset from base to write the field to;
 */
static inline void jdksavdecc_aecpdu_vendor_set_payload_specific_data(const uint8_t* v, void *base, ssize_t pos, size_t len) {
	memcpy(&base + pos, v, len);
}

/*@}*/

/** \addtogroup aecpdu_vendor AECPDU VENDOR - Clause 9.2.1.5 */
/*@}*/

/// AECPDU VENDOR - Clause 9.2.1.5
struct jdksavdecc_aecpdu_vendor {
    struct jdksavdecc_aecpdu_common aecpdu_header;
    jdksavdecc_eui48 protocol_id;
	//const uint8_t *payload_specific_data;
};

/**
 * Extract the avdecc_aecpdu_vendor_t structure from a network buffer.
 *
 *
 *
 * Bounds checking of the buffer size is done.
 *
 * @param p pointer to aecpdu_vendor structure to fill in.
 * @param base pointer to raw memory buffer to read from.
 * @param pos offset from base to read the field from;
 * @param len length of the raw memory buffer;
 * @return -1 if the buffer length is insufficent, otherwise the offset of the
 *octet following the structure in the buffer.
 */
static inline ssize_t jdksavdecc_aecpdu_vendor_read(struct jdksavdecc_aecpdu_vendor *p, void const *base, ssize_t pos, size_t len) {
    ssize_t r = jdksavdecc_validate_range(pos, len, JDKSAVDECC_AECP_VENDOR_LEN);
    if (r >= 0) {
        jdksavdecc_aecpdu_common_read(&p->aecpdu_header, base, pos, len);
        p->protocol_id = jdksavdecc_aecpdu_vendor_get_protocol_id(base, pos);
		//p->payload_specific_data = jdksavdecc_aecpdu_vendor_get_payload_specific_data(base, pos, len - JDKSAVDECC_AECP_VENDOR_LEN);
    }
    return r;
}

/**
 * Store the avdecc_aecpdu_vendor_t structure to a network buffer.
 *
 *
 *
 * Bounds checking of the buffer size is done.
 *
 * @param p const pointer to aecpdu_vendor structure to read from.
 * @param base pointer to raw memory buffer to write to.
 * @param pos offset from base to write the field to;
 * @param len length of the raw memory buffer;
 * @return -1 if the buffer length is insufficent, otherwise the offset of the
 *octet following the structure in the buffer.
 */
static inline ssize_t jdksavdecc_aecpdu_vendor_write(struct jdksavdecc_aecpdu_vendor const *p, void *base, size_t pos, size_t len) {
    ssize_t r = jdksavdecc_validate_range(pos, len, JDKSAVDECC_AECP_VENDOR_LEN);
    if (r >= 0) {
        jdksavdecc_aecpdu_common_write(&p->aecpdu_header, base, pos, len);
        jdksavdecc_aecpdu_vendor_set_protocol_id(p->protocol_id, base, pos);
		//jdksavdecc_aecpdu_vendor_set_payload_specific_data(p->payload_specific_data, base, pos, len - JDKSAVDECC_AECP_VENDOR_LEN);
    }
    return r;
}

/*@}*/

/*@}*/

#ifdef __cplusplus
}
#endif
