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



#include <ATen/ops/to_sparse_ops.h>

namespace at {


// aten::to_sparse.sparse_dim_out(Tensor self, int sparse_dim, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & to_sparse_out(at::Tensor & out, const at::Tensor & self, int64_t sparse_dim) {
    return at::_ops::to_sparse_sparse_dim_out::call(self, sparse_dim, out);
}

// aten::to_sparse.sparse_dim_out(Tensor self, int sparse_dim, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & to_sparse_outf(const at::Tensor & self, int64_t sparse_dim, at::Tensor & out) {
    return at::_ops::to_sparse_sparse_dim_out::call(self, sparse_dim, out);
}

// aten::to_sparse.out(Tensor self, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & to_sparse_out(at::Tensor & out, const at::Tensor & self) {
    return at::_ops::to_sparse_out::call(self, out);
}

// aten::to_sparse.out(Tensor self, *, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & to_sparse_outf(const at::Tensor & self, at::Tensor & out) {
    return at::_ops::to_sparse_out::call(self, out);
}

}
