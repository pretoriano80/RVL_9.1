/*
 * hi6405_high_res_cfg.h
 *
 * high resistance headset cfg
 *
 * Copyright (c) 2019-2019 Huawei Technologies Co., Ltd.
 *
 * This software is licensed under the terms of the GNU General Public
 * License version 2, as published by the Free Software Foundation, and
 * may be copied, distributed, and modified under those terms.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 */

#ifndef __HI6405_HIGH_RES_CFG_H__
#define __HI6405_HIGH_RES_CFG_H__

#include "hi6405_regs.h"
struct high_res_reg_info {
	unsigned int reg;
	unsigned int mask;
	unsigned int val;
	unsigned int flag;
	unsigned int delay; /* ms */
};

enum {
	UPDATE_ALL_BITS = 0,
	UPDATE_SIGLE_BIT = 1,
};

const struct high_res_reg_info enable_res_det_table[] = {
	{ HI6405_IMP_DET_CTRL0_REG, 0x1 << HI6405_IMP_DET_EN_OFFSET,
		0x1 << HI6405_IMP_DET_EN_OFFSET, UPDATE_SIGLE_BIT, 0 },
	{ HI6405_IMP_DET_CTRL1_REG, 0xff, 0x17, UPDATE_ALL_BITS, 0 },
	{ HI6405_SC_CODEC_MUX_CTRL12_REG, 0xff, 0x0a, UPDATE_ALL_BITS, 0 },
	{ HI6405_MISC_CLK_EN_REG, 0xff, 0x53, UPDATE_ALL_BITS, 0 },
	{ HI6405_DACL_PRE_PGA_CTRL0_REG, 0x1 << HI6405_DACL_PRE_PGA_BYPASS_OFFSET,
		0, UPDATE_SIGLE_BIT, 0 },
	{ HI6405_DACL_PRE_PGA_CTRL1_REG, 0xff, 0x5c, UPDATE_ALL_BITS, 0 },
	{ HI6405_DACL_POST_PGA_CTRL0_REG, 0x1 << HI6405_DACL_POST_PGA_BYPASS_OFFSET,
		0, UPDATE_SIGLE_BIT, 0 },
	{ HI6405_DACL_POST_PGA_CTRL1_REG, 0xff, 0x88, UPDATE_ALL_BITS, 0 },
	{ HI6405_DACR_PRE_PGA_CTRL0_REG, 0x1 << HI6405_DACR_PRE_PGA_BYPASS_OFFSET,
		0, UPDATE_SIGLE_BIT, 0 },
	{ HI6405_DACR_PRE_PGA_CTRL1_REG, 0xff, 0x5c, UPDATE_ALL_BITS, 0 },
	{ HI6405_DACR_POST_PGA_CTRL0_REG, 0x1 << HI6405_DACR_POST_PGA_BYPASS_OFFSET,
		0, UPDATE_SIGLE_BIT, 0 },
	{ HI6405_DACR_POST_PGA_CTRL1_REG, 0xff, 0x88, UPDATE_ALL_BITS, 0 },
	{ HI6405_I2S_DSPIF_CLK_EN_REG, 0x1 << HI6405_CLK_IMP_DET_EN_OFFSET,
		0x1 << HI6405_CLK_IMP_DET_EN_OFFSET, UPDATE_SIGLE_BIT, 0 },
	{ HI6405_CODEC_ANA_RWREG_012, 0x1 << HI6405_MBHD_PD_MBHD_VTN, 0,
		UPDATE_SIGLE_BIT, 0 },
	{ HI6405_CODEC_ANA_RWREG_080, 0x1 << HI6405_MBHD_HSD_EN_BIT,
		0x1 << HI6405_MBHD_HSD_EN_BIT, UPDATE_SIGLE_BIT, 0 },
	{ HI6405_CODEC_ANA_RWREG_080, 0x1 << HI6405_MBHD_ECO_EN_BIT, 0,
		UPDATE_SIGLE_BIT, 0 },
	{ HI6405_CODEC_ANA_RWREG_080, 0x1 << HI6405_MBHD_PULLOUT_POP_EN_BIT, 0,
		UPDATE_SIGLE_BIT, 0 },
	{ HI6405_CODEC_ANA_RWREG_073, 0xf, 0x2, UPDATE_SIGLE_BIT, 0 },
	{ HI6405_CODEC_ANA_RWREG_073, 0x1 << HI6405_HSMICB2_DSCHG, 0,
		UPDATE_SIGLE_BIT, 0 },
	{ HI6405_CODEC_ANA_RWREG_013, 0x1 << HI6405_HS_MICB_PD_BIT, 0,
		UPDATE_SIGLE_BIT, 0 },
};

const struct high_res_reg_info disable_res_det_table[] = {
	{ HI6405_CODEC_ANA_RWREG_077, 0x3 << HI6405_SAR_INPUT_SEL_BIT, 0,
		UPDATE_SIGLE_BIT, 0 },
	{ HI6405_CODEC_ANA_RWREG_080, 0x1 << HI6405_MBHD_PULLOUT_POP_EN_BIT,
		0x1 << HI6405_MBHD_PULLOUT_POP_EN_BIT, UPDATE_SIGLE_BIT, 0 },
	{ HI6405_MISC_CLK_EN_REG, 0xff, 0, UPDATE_ALL_BITS, 0 },
	{ HI6405_IMP_DET_CTRL0_REG, 0x1 << HI6405_IMP_DET_EN_OFFSET, 0,
		UPDATE_SIGLE_BIT, 0 },
	{ HI6405_SC_CODEC_MUX_CTRL12_REG, 0xff, 0, UPDATE_ALL_BITS, 0 },
	{ HI6405_CODEC_ANA_RWREG_073, 0xf << HI6405_HSMICB_ADJ,
		0xb << HI6405_HSMICB_ADJ, UPDATE_SIGLE_BIT, 0 },
	{ HI6405_DACL_PRE_PGA_CTRL1_REG, 0xff, 0x6e, UPDATE_ALL_BITS, 0 },
	{ HI6405_DACR_PRE_PGA_CTRL1_REG, 0xff, 0x6e, UPDATE_ALL_BITS, 0 },
	{ HI6405_I2S_DSPIF_CLK_EN_REG, 0x1 << HI6405_CLK_IMP_DET_EN_OFFSET,
		0, UPDATE_SIGLE_BIT, 0 },
	{ HI6405_DACL_PRE_PGA_CTRL0_REG, 0x1 << HI6405_DACL_PRE_PGA_BYPASS_OFFSET,
		0x1 << HI6405_DACL_PRE_PGA_BYPASS_OFFSET, UPDATE_SIGLE_BIT, 0 },
	{ HI6405_DACR_PRE_PGA_CTRL0_REG, 0x1 << HI6405_DACR_PRE_PGA_BYPASS_OFFSET,
		0x1 << HI6405_DACR_PRE_PGA_BYPASS_OFFSET, UPDATE_SIGLE_BIT, 0 },
	{ HI6405_DACL_POST_PGA_CTRL0_REG, 0x1 << HI6405_DACL_POST_PGA_BYPASS_OFFSET,
		0x1 << HI6405_DACL_POST_PGA_BYPASS_OFFSET, UPDATE_SIGLE_BIT, 0 },
	{ HI6405_DACR_POST_PGA_CTRL0_REG, 0x1 << HI6405_DACR_POST_PGA_BYPASS_OFFSET,
		0x1 << HI6405_DACR_POST_PGA_BYPASS_OFFSET, UPDATE_SIGLE_BIT, 0 },

};

const struct high_res_reg_info enable_path_table[] = {
	{ HI6405_DACL_PRE_PGA_CTRL0_REG, 1 << HI6405_DACL_PRE_PGA_BYPASS_OFFSET,
		1 << HI6405_DACL_PRE_PGA_BYPASS_OFFSET, UPDATE_SIGLE_BIT, 0 },
	{ HI6405_DACL_PRE_PGA_CTRL0_REG, 0x7 << HI6405_DACL_PRE_PGA_CFG_OFFSET,
		0x4 << HI6405_DACL_PRE_PGA_CFG_OFFSET, UPDATE_SIGLE_BIT, 0 },
	{ HI6405_DACR_PRE_PGA_CTRL0_REG, 1 << HI6405_DACR_PRE_PGA_BYPASS_OFFSET,
		1 << HI6405_DACR_PRE_PGA_BYPASS_OFFSET, UPDATE_SIGLE_BIT, 0 },
	{ HI6405_DACL_POST_PGA_CTRL0_REG, 1 << HI6405_DACL_POST_PGA_BYPASS_OFFSET,
		1 << HI6405_DACL_POST_PGA_BYPASS_OFFSET, UPDATE_SIGLE_BIT, 0 },
	{ HI6405_DACL_POST_PGA_CTRL0_REG, 0x7 << HI6405_DACL_POST_PGA_CFG_OFFSET,
		0x4 << HI6405_DACL_POST_PGA_CFG_OFFSET, UPDATE_SIGLE_BIT, 0 },
	{ HI6405_DACR_POST_PGA_CTRL0_REG, 1 << HI6405_DACR_POST_PGA_BYPASS_OFFSET,
		1 << HI6405_DACR_POST_PGA_BYPASS_OFFSET, UPDATE_SIGLE_BIT, 0 },
	{ HI6405_HP_SDM_L_CTRL7_REG, 0xff, 0xF2, UPDATE_ALL_BITS, 0 },
	{ HI6405_HP_SDM_L_CTRL8_REG, 0xff, 0x28, UPDATE_ALL_BITS, 0 },
	{ HI6405_HP_SDM_L_CTRL9_REG, 0x3 << HI6405_HP_SDM_L_CELLSEL_MODE_OFFSET,
		0, UPDATE_SIGLE_BIT, 0 },
	{ HI6405_HP_SDM_L_CTRL12_REG, 1 << HI6405_HP_SDM_L_CALT_VLD_OFFSET,
		1 << HI6405_HP_SDM_L_CALT_VLD_OFFSET, UPDATE_SIGLE_BIT, 0 },
	{ HI6405_HP_SDM_R_CTRL7_REG, 0xff, 0xF2, UPDATE_ALL_BITS, 0 },
	{ HI6405_HP_SDM_R_CTRL8_REG, 0xff, 0x28, UPDATE_ALL_BITS, 0 },
	{ HI6405_HP_SDM_R_CTRL9_REG, 0x3 << HI6405_HP_SDM_R_CELLSEL_MODE_OFFSET,
		0, UPDATE_SIGLE_BIT, 0 },
	{ HI6405_HP_SDM_R_CTRL12_REG, 1 << HI6405_HP_SDM_R_CALT_VLD_OFFSET,
		1 << HI6405_HP_SDM_R_CALT_VLD_OFFSET, UPDATE_SIGLE_BIT, 0 },
	{ HI6405_S1_MIXER_EQ_CLK_EN_REG, 1 << HI6405_CLK_DACL_UP16_EN_OFFSET,
		1 << HI6405_CLK_DACL_UP16_EN_OFFSET, UPDATE_SIGLE_BIT, 0 },
	{ HI6405_S1_MIXER_EQ_CLK_EN_REG, 1 << HI6405_CLK_DACR_UP16_EN_OFFSET,
		1 << HI6405_CLK_DACR_UP16_EN_OFFSET, UPDATE_SIGLE_BIT, 0 },
	{ HI6405_DAC_DP_CLK_EN_2_REG, 1 << HI6405_HP_SDM_R_CLK_EN_OFFSET,
		1 << HI6405_HP_SDM_R_CLK_EN_OFFSET, UPDATE_SIGLE_BIT, 0 },
	{ HI6405_DAC_DP_CLK_EN_2_REG, 1 << HI6405_HP_SDM_L_CLK_EN_OFFSET,
		1 << HI6405_HP_SDM_L_CLK_EN_OFFSET, UPDATE_SIGLE_BIT, 0 },
	{ HI6405_ADC_DAC_CLK_EN_REG, 1 << HI6405_CLK_DACL_EN_OFFSET,
		1 << HI6405_CLK_DACL_EN_OFFSET, UPDATE_SIGLE_BIT, 0 },
	{ HI6405_ADC_DAC_CLK_EN_REG, 1 << HI6405_CLK_DACR_EN_OFFSET,
		1 << HI6405_CLK_DACR_EN_OFFSET, UPDATE_SIGLE_BIT, 0 },
};

const struct high_res_reg_info disable_path_table[] = {
	{ HI6405_ADC_DAC_CLK_EN_REG, 0x1 << HI6405_CLK_DACL_EN_OFFSET,
		0, UPDATE_SIGLE_BIT, 0 },
	{ HI6405_ADC_DAC_CLK_EN_REG, 0x1 << HI6405_CLK_DACR_EN_OFFSET,
		0, UPDATE_SIGLE_BIT, 0 },
	{ HI6405_DAC_DP_CLK_EN_2_REG, 0x1 << HI6405_HP_SDM_R_CLK_EN_OFFSET,
		0, UPDATE_SIGLE_BIT, 0 },
	{ HI6405_DAC_DP_CLK_EN_2_REG, 0x1 << HI6405_HP_SDM_L_CLK_EN_OFFSET,
		0, UPDATE_SIGLE_BIT, 0 },
	{ HI6405_S1_MIXER_EQ_CLK_EN_REG, 0x1 << HI6405_CLK_DACL_UP16_EN_OFFSET,
		0, UPDATE_SIGLE_BIT, 0 },
	{ HI6405_S1_MIXER_EQ_CLK_EN_REG, 0x1 << HI6405_CLK_DACR_UP16_EN_OFFSET,
		0, UPDATE_SIGLE_BIT, 0 },
	{ HI6405_HP_SDM_R_CTRL12_REG, 0x1 << HI6405_HP_SDM_R_CALT_VLD_OFFSET,
		0, UPDATE_SIGLE_BIT, 0 },
	{ HI6405_HP_SDM_R_CTRL8_REG, 0xff, 0, UPDATE_ALL_BITS, 0 },
	{ HI6405_HP_SDM_R_CTRL7_REG, 0xff, 0, UPDATE_ALL_BITS, 0 },
	{ HI6405_HP_SDM_L_CTRL12_REG, 0x1 << HI6405_HP_SDM_L_CALT_VLD_OFFSET,
		0, UPDATE_SIGLE_BIT, 0 },
	{ HI6405_HP_SDM_L_CTRL8_REG, 0xff, 0, UPDATE_ALL_BITS, 0 },
	{ HI6405_HP_SDM_L_CTRL7_REG, 0xff, 0, UPDATE_ALL_BITS, 0 },
};

const struct high_res_reg_info enable_get_res_table[] = {
	{ HI6405_CODEC_ANA_RWREG_065, 0x1 << 3, 0x1 << 3, UPDATE_SIGLE_BIT, 0 },
	{ HI6405_CODEC_ANA_RWREG_077, 0x3 << HI6405_SAR_INPUT_SEL_BIT,
		0x2 << HI6405_SAR_INPUT_SEL_BIT, UPDATE_SIGLE_BIT, 0 },
};

const struct high_res_reg_info hp_impdet_vpout_table[] = {
	{ HI6405_CODEC_ANA_RWREG_065, 0x1 << 5, 0, UPDATE_SIGLE_BIT, 0 },
	{ HI6405_CODEC_ANA_RWREG_065, 0x1, 0x1, UPDATE_SIGLE_BIT, 10 },
	{ HI6405_CODEC_ANA_RWREG_065, 0x1, 0, UPDATE_SIGLE_BIT, 10 },
	{ HI6405_CODEC_ANA_RWREG_065, 0x1 << 5, 0x1 << 5, UPDATE_SIGLE_BIT, 0 },
};

const struct high_res_reg_info disable_get_res_table[] = {
	{ HI6405_DACL_POST_PGA_CTRL1_REG, 0xff, 0x88, UPDATE_ALL_BITS, 0 },
	{ HI6405_DACR_POST_PGA_CTRL1_REG, 0xff, 0x88, UPDATE_ALL_BITS, 0 },
	{ HI6405_CODEC_ANA_RWREG_065, 0x1 << 5, 0, UPDATE_SIGLE_BIT, 0 },
	{ HI6405_CODEC_ANA_RWREG_065, 0x3 << 1, 0, UPDATE_SIGLE_BIT, 0 },
	{ HI6405_CODEC_ANA_RWREG_065, 0x1, 0x1, UPDATE_SIGLE_BIT, 0 },
	{ HI6405_CODEC_ANA_RWREG_065, 0x1 << 3, 0, UPDATE_SIGLE_BIT, 0 },
};

const struct high_res_reg_info enable_res_calib_table[] = {
	{ HI6405_CODEC_ANA_RWREG_080, 0x1 << HI6405_MBHD_RES_CALIB_EN_BIT,
		0x1 << HI6405_MBHD_RES_CALIB_EN_BIT, UPDATE_SIGLE_BIT, 0 },
	{ HI6405_CODEC_ANA_RWREG_077, 0x3 << HI6405_SAR_INPUT_SEL_BIT,
		0, UPDATE_SIGLE_BIT, 0 },
};

const struct high_res_reg_info disable_res_calib_table[] = {
	{ HI6405_CODEC_ANA_RWREG_080, 0x1 << HI6405_MBHD_RES_CALIB_EN_BIT,
		0, UPDATE_SIGLE_BIT, 0 },
};
#endif /* __HI6405_HIGH_RES_CFG_H__ */

