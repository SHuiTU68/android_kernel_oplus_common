/* SPDX-License-Identifier: GPL-2.0-only */
/* OPLUS gpufreq_v2 stub for GKI build. */
#ifndef __GPUFREQ_V2_STUB_H__
#define __GPUFREQ_V2_STUB_H__

enum gpufreq_target_id {
TARGET_DEFAULT = 0,
};

long long gpufreq_get_cur_freq(int id);

#endif /* __GPUFREQ_V2_STUB_H__ */
