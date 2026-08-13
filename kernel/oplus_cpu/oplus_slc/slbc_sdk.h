/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * OPLUS SLC stub for GKI (ACLK) build.
 * Real slbc_sdk.h lives in MTK vendor tree. All functions return
 * benign defaults (0) because no MTK SLBC hardware exists on GKI.
 */
#ifndef __SLBC_SDK_STUB_H__
#define __SLBC_SDK_STUB_H__

enum slbc_master_id {
ID_PD = 0,
ID_CPU = 1,
ID_GPU = 2,
ID_MAX = 3,
};

int slbc_get_cache_hit_bw(int id);
int slbc_get_cache_size(int id);
int slbc_get_cache_hit_rate(int id);
int slbc_get_cache_usage(int *cpu_usage, int *gpu_usage, int *other_usage);
int slbc_sspm_slc_disable(int disable);
int slbc_window(int win);
int slbc_force_cache(int uid, int size);
int slbc_force_cache_ratio(int uid, int size);
int slbc_cg_priority(int is_gpu);
int slbc_ceil(int uid, int size);

#endif /* __SLBC_SDK_STUB_H__ */
