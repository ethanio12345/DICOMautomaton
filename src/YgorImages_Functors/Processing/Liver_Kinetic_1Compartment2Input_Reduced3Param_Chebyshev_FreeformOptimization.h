//Liver_Kinetic_1Compartment2Input_Reduced3Param_Chebyshev_FreeformOptimization.h.
#pragma once

#ifdef DCMA_USE_GNU_GSL

#include <cmath>
#include <any>
#include <functional>
#include <limits>
#include <list>
#include <map>
#include <regex>
#include <tuple>

#include "YgorImages.h"

template <class T> class contour_collection;


bool 
KineticModel_Liver_1C2I_Reduced3Param_Chebyshev_FreeformOptimization(planar_image_collection<float,double>::images_list_it_t first_img_it,
                        std::list<planar_image_collection<float,double>::images_list_it_t> selected_img_its,
                        std::list<std::reference_wrapper<planar_image_collection<float,double>>> outgoing_maps,
                        std::list<std::reference_wrapper<contour_collection<double>>> ccsl, 
                        std::any ud);

#endif // DCMA_USE_GNU_GSL

