#pragma once

// @generated by torchgen/gen.py from Function.h

#include <ATen/Context.h>
#include <ATen/DeviceGuard.h>
#include <ATen/TensorUtils.h>
#include <ATen/TracerMode.h>
#include <ATen/core/Generator.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>



#include <ATen/ops/unsafe_split_ops.h>

namespace at {


// aten::unsafe_split.Tensor(Tensor self, int split_size, int dim=0) -> Tensor[]
inline ::std::vector<at::Tensor> unsafe_split(const at::Tensor & self, int64_t split_size, int64_t dim=0) {
    return at::_ops::unsafe_split_Tensor::call(self, split_size, dim);
}

// aten::unsafe_split.Tensor_out(Tensor self, int split_size, int dim=0, *, Tensor(a!)[] out) -> ()
inline void unsafe_split_out(at::TensorList out, const at::Tensor & self, int64_t split_size, int64_t dim=0) {
    return at::_ops::unsafe_split_Tensor_out::call(self, split_size, dim, out);
}

// aten::unsafe_split.Tensor_out(Tensor self, int split_size, int dim=0, *, Tensor(a!)[] out) -> ()
inline void unsafe_split_outf(const at::Tensor & self, int64_t split_size, int64_t dim, at::TensorList out) {
    return at::_ops::unsafe_split_Tensor_out::call(self, split_size, dim, out);
}

}
