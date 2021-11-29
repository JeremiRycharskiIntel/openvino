// Copyright (C) 2018-2021 Intel Corporation
// SPDX-License-Identifier: Apache-2.0
//

#include <node_context.hpp>

#include "openvino/opsets/opset6.hpp"

namespace ov {
namespace frontend {
namespace pdpd {
namespace op {
NamedOutputs sigmoid(const NodeContext& node) {
    auto data = node.get_ng_input("X");
    return node.default_single_output_mapping({std::make_shared<ov::opset6::Sigmoid>(data)}, {"Out"});
}

}  // namespace op
}  // namespace pdpd
}  // namespace frontend
}  // namespace ov