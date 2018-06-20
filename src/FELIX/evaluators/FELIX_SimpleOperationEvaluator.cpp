//*****************************************************************//
//    Albany 3.0:  Copyright 2016 Sandia Corporation               //
//    This Software is released under the BSD license detailed     //
//    in the file "license.txt" in the top-level Albany directory  //
//*****************************************************************//

#include "PHAL_AlbanyTraits.hpp"

#include "FELIX_SimpleOperationEvaluator.hpp"
#include "FELIX_SimpleOperationEvaluator_Def.hpp"

PHAL_INSTANTIATE_TEMPLATE_CLASS_WITH_ONE_SCALAR_TYPE(FELIX::UnaryScaleOp)
PHAL_INSTANTIATE_TEMPLATE_CLASS_WITH_ONE_SCALAR_TYPE(FELIX::UnaryLogOp)
PHAL_INSTANTIATE_TEMPLATE_CLASS_WITH_ONE_SCALAR_TYPE(FELIX::UnaryExpOp)
PHAL_INSTANTIATE_TEMPLATE_CLASS_WITH_ONE_SCALAR_TYPE(FELIX::UnaryLowPassOp)
PHAL_INSTANTIATE_TEMPLATE_CLASS_WITH_ONE_SCALAR_TYPE(FELIX::UnaryHighPassOp)
PHAL_INSTANTIATE_TEMPLATE_CLASS_WITH_ONE_SCALAR_TYPE(FELIX::UnaryBandPassOp)

PHAL_INSTANTIATE_TEMPLATE_CLASS_WITH_TWO_SCALAR_TYPES(FELIX::BinaryScaleOp)
PHAL_INSTANTIATE_TEMPLATE_CLASS_WITH_TWO_SCALAR_TYPES(FELIX::BinaryLogOp)
PHAL_INSTANTIATE_TEMPLATE_CLASS_WITH_TWO_SCALAR_TYPES(FELIX::BinaryExpOp)
PHAL_INSTANTIATE_TEMPLATE_CLASS_WITH_TWO_SCALAR_TYPES(FELIX::BinaryLowPassOp)
PHAL_INSTANTIATE_TEMPLATE_CLASS_WITH_TWO_SCALAR_TYPES(FELIX::BinaryHighPassOp)
PHAL_INSTANTIATE_TEMPLATE_CLASS_WITH_TWO_SCALAR_TYPES(FELIX::BinaryBandPassFixedLowerOp)
PHAL_INSTANTIATE_TEMPLATE_CLASS_WITH_TWO_SCALAR_TYPES(FELIX::BinaryBandPassFixedUpperOp)

PHAL_INSTANTIATE_TEMPLATE_CLASS_WITH_TWO_SCALAR_TYPES(FELIX::TernaryBandPassOp)