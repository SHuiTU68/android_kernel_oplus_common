// SPDX-License-Identifier: GPL-2.0-only
/*
 * OPLUS SLC MTK interface stubs for GKI (ACLK) build.
 *
 * The real implementations live in the MTK vendor kernel
 * (drivers/misc/mediatek/{slbc,qos,dvfsrc}, drivers/gpu/mediatek/gpufreq).
 * On a GKI-only tree these are unavailable, so every function returns a
 * benign default. This keeps kernel/oplus_cpu/oplus_slc compilable and
 * linkable; the /proc/oplus_slc interfaces will report zeros.
 */
#include <linux/types.h>
#include <linux/module.h>
#include "slbc_ipi.h"

struct slbc_ipi_ops *ipi_ops_ref;
EXPORT_SYMBOL(ipi_ops_ref);

int slbc_get_cache_hit_bw(int id) { return 0; }
EXPORT_SYMBOL(slbc_get_cache_hit_bw);
int slbc_get_cache_size(int id) { return 0; }
EXPORT_SYMBOL(slbc_get_cache_size);
int slbc_get_cache_hit_rate(int id) { return 0; }
EXPORT_SYMBOL(slbc_get_cache_hit_rate);
int slbc_get_cache_usage(int *cpu_usage, int *gpu_usage, int *other_usage)
{
if (cpu_usage) *cpu_usage = 0;
if (gpu_usage) *gpu_usage = 0;
if (other_usage) *other_usage = 0;
return 0;
}
EXPORT_SYMBOL(slbc_get_cache_usage);
int slbc_sspm_slc_disable(int disable) { return 0; }
EXPORT_SYMBOL(slbc_sspm_slc_disable);
int slbc_window(int win) { return 0; }
EXPORT_SYMBOL(slbc_window);
int slbc_force_cache(int uid, int size) { return 0; }
EXPORT_SYMBOL(slbc_force_cache);
int slbc_force_cache_ratio(int uid, int size) { return 0; }
EXPORT_SYMBOL(slbc_force_cache_ratio);
int slbc_cg_priority(int is_gpu) { return 0; }
EXPORT_SYMBOL(slbc_cg_priority);
int slbc_ceil(int uid, int size) { return 0; }
EXPORT_SYMBOL(slbc_ceil);

long long gpufreq_get_cur_freq(int id) { return 0; }
EXPORT_SYMBOL(gpufreq_get_cur_freq);
long long mtk_dvfsrc_query_opp_info(int idx) { return 0; }
EXPORT_SYMBOL(mtk_dvfsrc_query_opp_info);
int osml_get_dvfsrc_sw_bw(int idx) { return 0; }
EXPORT_SYMBOL(osml_get_dvfsrc_sw_bw);
u32 qos_sram_read(int idx) { return 0; }
EXPORT_SYMBOL(qos_sram_read);
int qos_rec_get_hist_idx(void) { return 0; }
EXPORT_SYMBOL(qos_rec_get_hist_idx);
u32 qos_rec_get_hist_data_bw(int idx, int sel) { return 0; }
EXPORT_SYMBOL(qos_rec_get_hist_data_bw);
u32 qos_rec_get_hist_bw(int idx, int sel) { return 0; }
EXPORT_SYMBOL(qos_rec_get_hist_bw);
u32 qos_rec_get_dramc_hist_bw(int idx, int sel) { return 0; }
EXPORT_SYMBOL(qos_rec_get_dramc_hist_bw);
long long mtk_dramc_get_data_rate(void) { return 0; }
EXPORT_SYMBOL(mtk_dramc_get_data_rate);

unsigned long osml_ged_dvfs_get_gpu_cur_freq(void) { return 0; }
EXPORT_SYMBOL(osml_ged_dvfs_get_gpu_cur_freq);
