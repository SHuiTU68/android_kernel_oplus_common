#ifndef _FRAME_GEAS_H
#define _FRAME_GEAS_H

struct geas_params {
	unsigned int compute_record_count;
	unsigned int frame_drive;
	unsigned int enable_irq;
	unsigned int active_ib_scale;
	unsigned int nactive_ib_scale;
	unsigned int active_ab_scale;
	unsigned int nactive_ab_scale;
	unsigned int active_sec_ib_scale;
	unsigned int nactive_sec_ib_scale;
	unsigned int active_sec_ab_scale;
	unsigned int nactive_sec_ab_scale;
	unsigned int nactive_voting_method;
	unsigned int active_voting_method;
	unsigned int hist_decay_rate;
	unsigned int frame_debug_level;
	unsigned int sec_voting_enhanced;
	unsigned int sec_io_pct_scale;
	unsigned int slc_mpki_thres;
	unsigned int sec_mbps_zones[DDR_OPP_CNT];
};

#endif /* _FRAME_GEAS_H */
