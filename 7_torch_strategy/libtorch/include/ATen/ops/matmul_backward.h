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



#include <ATen/ops/matmul_backward_ops.h>

namespace at {


// aten::matmul_backward(Tensor grad, Tensor self, Tensor other, bool[2] mask) -> (Tensor, Tensor)
inline ::std::tuple<at::Tensor,at::Tensor> matmul_backward(const at::Tensor & grad, const at::Tensor & self, const at::Tensor & other, ::std::array<bool,2> mask) {
    return at::_ops::matmul_backward::call(grad, self, other, mask);
}

// aten::matmul_backward.out(Tensor grad, Tensor self, Tensor other, bool[2] mask, *, Tensor(a!) out0, Tensor(b!) out1) -> (Tensor(a!), Tensor(b!))
inline ::std::tuple<at::Tensor &,at::Tensor &> matmul_backward_out(at::Tensor & out0, at::Tensor & out1, const at::Tensor & grad, const at::Tensor & self, const at::Tensor & other, ::std::array<bool,2> mask) {
    return at::_ops::matmul_backward_out::call(grad, self, other, mask, out0, out1);
}

// aten::matmul_backward.out(Tensor grad, Tensor self, Tensor other, bool[2] mask, *, Tensor(a!) out0, Tensor(b!) out1) -> (Tensor(a!), Tensor(b!))
inline ::std::tuple<at::Tensor &,at::Tensor &> matmul_backward_outf(const at::Tensor & grad, const at::Tensor & self, const at::Tensor & other, ::std::array<bool,2> mask, at::Tensor & out0, at::Tensor & out1) {
    return at::_ops::matmul_backward_out::call(grad, self, other, mask, out0, out1);
}

}
