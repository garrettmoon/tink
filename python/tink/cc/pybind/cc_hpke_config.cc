// Copyright 2022 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
///////////////////////////////////////////////////////////////////////////////

#include "tink/cc/cc_hpke_config.h"

#include "tink/cc/pybind/status_casters.h"

namespace crypto {
namespace tink {

void PybindRegisterCcHpkeConfig(pybind11::module* module) {
  namespace py = pybind11;
  py::module& m = *module;
  m.def("register_hpke", CcHpkeConfigRegister);
}

}  // namespace tink
}  // namespace crypto
