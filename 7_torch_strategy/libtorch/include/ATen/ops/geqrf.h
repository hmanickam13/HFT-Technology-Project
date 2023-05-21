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



#include <ATen/ops/geqrf_ops.h>

namespace at {


// aten::geqrf.a(Tensor self, *, Tensor(a!) a, Tensor(b!) tau) -> (Tensor(a!) a, Tensor(b!) tau)
inline ::std::tuple<at::Tensor &,at::Tensor &> geqrf_out(at::Tensor & a, at::Tensor & tau, const at::Tensor & self) {
    return at::_ops::geqrf_a::call(self, a, tau);
}

// aten::geqrf.a(Tensor self, *, Tensor(a!) a, Tensor(b!) tau) -> (Tensor(a!) a, Tensor(b!) tau)
inline ::std::tuple<at::Tensor &,at::Tensor &> geqrf_outf(const at::Tensor & self, at::Tensor & a, at::Tensor & tau) {
    return at::_ops::geqrf_a::call(self, a, tau);
}

// aten::geqrf(Tensor self) -> (Tensor a, Tensor tau)
inline ::std::tuple<at::Tensor,at::Tensor> geqrf(const at::Tensor & self) {
    return at::_ops::geqrf::call(self);
}

}
