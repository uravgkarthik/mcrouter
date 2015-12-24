/*
 *  Copyright (c) 2015, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */
#pragma once

#include <folly/Range.h>

#include "mcrouter/lib/McOperation.h"
#include "mcrouter/lib/McRequest.h"
#include "mcrouter/lib/network/ThriftMessageList.h"
#include "mcrouter/lib/network/ThriftMsgDispatcher.h"

namespace facebook {
namespace memcache {

/**
 * The following convertToTypedRequest() methods,
 * convert McRequest to TypedRequest
 *
 * @param req  McRequest
 * @return TypedThriftMessage corresponding to the operation
 */
TypedThriftMessage<cpp2::McGetRequest> convertToTyped(const McRequest& req,
                                                      McOperation<mc_op_get>);

TypedThriftMessage<cpp2::McSetRequest> convertToTyped(const McRequest& req,
                                                      McOperation<mc_op_set>);

TypedThriftMessage<cpp2::McDeleteRequest> convertToTyped(
    const McRequest& req, McOperation<mc_op_delete>);

TypedThriftMessage<cpp2::McTouchRequest> convertToTyped(
    const McRequest& req, McOperation<mc_op_touch>);

TypedThriftMessage<cpp2::McLeaseGetRequest> convertToTyped(
    const McRequest& req, McOperation<mc_op_lease_get>);

TypedThriftMessage<cpp2::McLeaseSetRequest> convertToTyped(
    const McRequest& req, McOperation<mc_op_lease_set>);

TypedThriftMessage<cpp2::McAddRequest> convertToTyped(const McRequest& req,
                                                      McOperation<mc_op_add>);

TypedThriftMessage<cpp2::McReplaceRequest> convertToTyped(
    const McRequest& req, McOperation<mc_op_replace>);

TypedThriftMessage<cpp2::McGetsRequest> convertToTyped(const McRequest& req,
                                                       McOperation<mc_op_gets>);

TypedThriftMessage<cpp2::McCasRequest> convertToTyped(const McRequest& req,
                                                      McOperation<mc_op_cas>);

TypedThriftMessage<cpp2::McIncrRequest> convertToTyped(const McRequest& req,
                                                       McOperation<mc_op_incr>);

TypedThriftMessage<cpp2::McDecrRequest> convertToTyped(const McRequest& req,
                                                       McOperation<mc_op_decr>);

TypedThriftMessage<cpp2::McMetagetRequest> convertToTyped(
    const McRequest& req, McOperation<mc_op_metaget>);

TypedThriftMessage<cpp2::McVersionRequest> convertToTyped(
    const McRequest& req, McOperation<mc_op_version>);

TypedThriftMessage<cpp2::McAppendRequest> convertToTyped(
    const McRequest& req, McOperation<mc_op_append>);

TypedThriftMessage<cpp2::McPrependRequest> convertToTyped(
    const McRequest& req, McOperation<mc_op_prepend>);
}
}
