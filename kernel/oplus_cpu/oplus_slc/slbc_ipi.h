/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * OPLUS SLC stub for GKI (ACLK) build.
 * Real slbc_ipi.h lives in MTK vendor tree (drivers/misc/mediatek/slbc).
 * SLBC (Smart Local Buffer Cache) is an MTK SoC feature; on GKI builds
 * the IPI ops are unavailable, so we provide an empty stub to keep the
 * module compilable. ipi_ops_ref stays NULL and guarded call sites
 * degrade gracefully.
 */
#ifndef __SLBC_IPI_STUB_H__
#define __SLBC_IPI_STUB_H__

struct slbc_ipi_ops {
int (*slbc_dcc_ctrl)(int cdwb_disable);
};

extern struct slbc_ipi_ops *ipi_ops_ref;

#endif /* __SLBC_IPI_STUB_H__ */
