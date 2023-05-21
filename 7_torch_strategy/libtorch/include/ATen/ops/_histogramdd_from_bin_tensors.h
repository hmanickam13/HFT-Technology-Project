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



#include <ATen/ops/_histogramdd_from_bin_tensors_ops.h>

namespace at {


// aten::_histogramdd_from_bin_tensors(Tensor self, Tensor[] bins, *, Tensor? weight=None, bool density=False) -> Tensor
inline at::Tensor _histogramdd_from_bin_tensors(const at::Tensor & self, at::TensorList bins, const c10::optional<at::Tensor> & weight={}, bool density=false) {
    return at::_ops::_histogramdd_from_bin_tensors::call(self, bins, weight, density);
}

// aten::_histogramdd_from_bin_tensors.out(Tensor self, Tensor[] bins, *, Tensor? weight=None, bool density=False, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _histogramdd_from_bin_tensors_out(at::Tensor & out, const at::Tensor & self, at::TensorList bins, const c10::optional<at::Tensor> & weight={}, bool density=false) {
    return at::_ops::_histogramdd_from_bin_tensors_out::call(self, bins, weight, density, out);
}

// aten::_histogramdd_from_bin_tensors.out(Tensor self, Tensor[] bins, *, Tensor? weight=None, bool density=False, Tensor(a!) out) -> Tensor(a!)
inline at::Tensor & _histogramdd_from_bin_tensors_outf(const at::Tensor & self, at::TensorList bins, const c10::optional<at::Tensor> & weight, bool density, at::Tensor & out) {
    return at::_ops::_histogramdd_from_bin_tensors_out::call(self, bins, weight, density, out);
}

}
