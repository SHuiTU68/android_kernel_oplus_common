/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * OPLUS dvfsrc stub for GKI (ACLK) build.
 * Real dvfsrc-exp.h lives in MTK vendor tree. OPP query returns 0.
 */
#ifndef __DVFSRC_EXP_STUB_H__
#define __DVFSRC_EXP_STUB_H__

enum dvfsrc_opp_idx {
MTK_DVFSRC_CURR_DRAM_KHZ,
MTK_DVFSRC_CURR_DVFS_OPP,
MTK_DVFSRC_CURR_VCORE_UV,
MTK_DVFSRC_CURR_VCORE_OPP,
MTK_DVFSRC_SW_REQ_VCORE_OPP,
};

long long mtk_dvfsrc_query_opp_info(int idx);

#endif /* __DVFSRC_EXP_STUB_H__ */
