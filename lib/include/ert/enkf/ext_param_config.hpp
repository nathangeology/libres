/*
   Copyright (C) 2017  Statoil ASA, Norway.

   The file 'ext_param_config.h' is part of ERT - Ensemble based Reservoir Tool.

   ERT is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   ERT is distributed in the hope that it will be useful, but WITHOUT ANY
   WARRANTY; without even the implied warranty of MERCHANTABILITY or
   FITNESS FOR A PARTICULAR PURPOSE.

   See the GNU General Public License at <http://www.gnu.org/licenses/gpl.html>
   for more details.
*/

#ifndef EXT_PARAM_CONFIG_H
#define EXT_PARAM_CONFIG_H
#ifdef __cplusplus
extern "C" {
#endif
#include <ert/enkf/enkf_macros.hpp>

typedef struct ext_param_config_struct ext_param_config_type;

  const char            * ext_param_config_iget_key( const ext_param_config_type * config , int index);
  void                    ext_param_config_free( ext_param_config_type * config );
  int                     ext_param_config_get_data_size( const ext_param_config_type * config );
  ext_param_config_type * ext_param_config_alloc( const char * key, const stringlist_type * keys);
  int                     ext_param_config_get_key_index( const ext_param_config_type * config , const char * key);
  bool                    ext_param_config_has_key(const ext_param_config_type * config , const char * key);

UTIL_SAFE_CAST_HEADER(ext_param_config);
UTIL_SAFE_CAST_HEADER_CONST(ext_param_config);
VOID_FREE_HEADER(ext_param_config);
VOID_GET_DATA_SIZE_HEADER(ext_param);

#ifdef __cplusplus
}
#endif
#endif
