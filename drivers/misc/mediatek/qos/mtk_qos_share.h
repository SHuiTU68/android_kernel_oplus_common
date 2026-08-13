/* SPDX-License-Identifier: GPL-2.0-only */
/* OPLUS mtk_qos stub for GKI build. */
#ifndef __MTK_QOS_SHARE_STUB_H__
#define __MTK_QOS_SHARE_STUB_H__

int qos_rec_get_hist_idx(void);
u32 qos_rec_get_hist_data_bw(int idx, int sel);
u32 qos_rec_get_hist_bw(int idx, int sel);
u32 qos_rec_get_dramc_hist_bw(int idx, int sel);

#endif /* __MTK_QOS_SHARE_STUB_H__ */
