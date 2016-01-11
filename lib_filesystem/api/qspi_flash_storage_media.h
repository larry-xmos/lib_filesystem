// Copyright (c) 2016, XMOS Ltd, All rights reserved
#ifndef __qspi_flash_storage_media_h__
#define __qspi_flash_storage_media_h__

#include "filesystem.h"
#include <quadflash.h>
#include <stddef.h>

/** TODO: document */
[[distributable]]
void qspi_flash_fs_media(server interface fs_storage_media_if i_media,
                         fl_QSPIPorts &qspi_flash_ports,
                         const fl_QuadDeviceSpec qspi_spec,
                         static const size_t sector_size);

#endif // __qspi_flash_storage_media_h__
