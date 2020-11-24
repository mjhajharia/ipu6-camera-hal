/*
* INTEL CONFIDENTIAL
*
* Copyright (C) 2010 - 2017 Intel Corporation.
* All Rights Reserved.
*
* The source code contained or described herein and all documents
* related to the source code ("Material") are owned by Intel Corporation
* or licensors. Title to the Material remains with Intel
* Corporation or its licensors. The Material contains trade
* secrets and proprietary and confidential information of Intel or its
* licensors. The Material is protected by worldwide copyright
* and trade secret laws and treaty provisions. No part of the Material may
* be used, copied, reproduced, modified, published, uploaded, posted,
* transmitted, distributed, or disclosed in any way without Intel's prior
* express written permission.
*
* No License under any patent, copyright, trade secret or other intellectual
* property right is granted to or conferred upon you by disclosure or
* delivery of the Materials, either expressly, by implication, inducement,
* estoppel or otherwise. Any license under such intellectual property rights
* must be express and approved by Intel in writing.
*/
/* Generated file - please do not edit. */

#ifndef _IPU_DEVICE_DATABUS_PROPERTIES_DEFS_H_
#define _IPU_DEVICE_DATABUS_PROPERTIES_DEFS_H_
#define IPU_DEVICE_BB_IP_BASE_ADDR 0x3280000
#define IPU_DEVICE_TNR_REFMEM_OFFSET 0x90000
#define IPU_DEVICE_TNR_INPMEM_OFFSET 0xA0000
#define IPU_DEVICE_TNR_INPMEM_ADDR (IPU_DEVICE_BB_IP_BASE_ADDR + IPU_DEVICE_TNR_INPMEM_OFFSET)
#define IPU_DEVICE_TNR_REFMEM_ADDR (IPU_DEVICE_BB_IP_BASE_ADDR + IPU_DEVICE_TNR_REFMEM_OFFSET)
#ifdef HAS_ISP0
#define IPU_DEVICE_DATABUS_ISP_TO_TRANSFER_VMEM0_ADDR _hrt_master_to_slave_address_ipu_par_idsp_idsp_tile_top_idsp_cmt_op_to_ipu_dma_top_vmem0_ip0
#define IPU_DEVICE_DATABUS_ISP_TO_TRANSFER_VMEM1_ADDR _hrt_master_to_slave_address_ipu_par_idsp_idsp_tile_top_idsp_cmt_op_to_ipu_dma_top_vmem1_ip0
#define IPU_DEVICE_DATABUS_ISP_TO_GDC_VMEM_ADDR (0x3280000 + 0xC000)
#define IPU_DEVICE_DATABUS_ISP_TO_OFS_VMEM_ADDR _hrt_master_to_slave_address_ipu_par_idsp_idsp_tile_top_idsp_cmt_op_to_ipu_ofs_top_buffer1_mem_vec_in
#define IPU_DEVICE_DATABUS_ISP_TO_LB_VMEM_ADDR _hrt_master_to_slave_address_ipu_par_idsp_idsp_tile_top_idsp_mt_bmem_op_to_ipu_lbff_infra_top_lbff_infra_vmem_ip0
#define IPU_DEVICE_DATABUS_ISP_TO_SPP0_DMEM_ADDR _hrt_master_to_slave_address_ipu_par_idsp_idsp_tile_top_idsp_cmt_op_to_ipu_sp_proxy_tile_ps_0_sp_sl_dmem_ip
#define IPU_DEVICE_DATABUS_DMA_TO_ISP_DMEM_ADDR _hrt_master_to_slave_address_ipu_dma_top_dma_hbfrx_m0_to_ipu_par_idsp_idsp_tile_top_idsp_sl_dmem_ip
#define IPU_DEVICE_DATABUS_DMA_TO_ISP_VMEM_ADDR _hrt_master_to_slave_address_ipu_dma_top_dma_hbfrx_m0_to_ipu_par_idsp_idsp_tile_top_idsp_sl_vmem_ip
#define IPU_DEVICE_DATABUS_DMA_TO_ISP_BAMEM_ADDR _hrt_master_to_slave_address_ipu_dma_top_dma_hbfrx_m0_to_ipu_par_idsp_idsp_tile_top_idsp_sl_bmem_ip
#endif
#define IPU_DEVICE_DATABUS_DMA_TO_TRANSFER_VMEM0_ADDR 0x1C0000
#define IPU_DEVICE_DATABUS_DMA_TO_TRANSFER_VMEM1_ADDR 0x1E0000
#define IPU_DEVICE_DATABUS_DMA_TO_GDC_VMEM_ADDR (0x3280000 + 0xC000)
#define IPU_DEVICE_DATABUS_DMA_TO_OFS_VMEM_8_ADDR 0x32C0000
#define IPU_DEVICE_DATABUS_DMA_TO_OFS_VMEM_ADDR 0x32D4000
#define IPU_DEVICE_DATABUS_DMA_TO_LB_VMEM_ADDR 0x3200000
#define IPU_DEVICE_DATABUS_DMA_TO_ISL_VMEM_ADDR 0x3000000
#define IPU_DEVICE_DATABUS_DMA_TO_SPP0_DMEM_ADDR 0x120000
#define IPU_DEVICE_DATABUS_DMA_TO_SPC0_DMEM_ADDR 0x118000
#ifdef HAS_ISP0
#define IPU_DEVICE_DATABUS_DMA_INT_TO_ISP_DMEM_ADDR _hrt_master_to_slave_address_ipu_fabric_top_cf_dev_cl_dma_internal_m0_to_ipu_par_idsp_idsp_tile_top_idsp_sl_dmem_ip
#define IPU_DEVICE_DATABUS_DMA_INT_TO_ISP_VMEM_ADDR _hrt_master_to_slave_address_ipu_fabric_top_cf_dev_cl_dma_internal_m0_to_ipu_par_idsp_idsp_tile_top_idsp_sl_vmem_ip
#define IPU_DEVICE_DATABUS_DMA_INT_TO_ISP_BAMEM_ADDR _hrt_master_to_slave_address_ipu_fabric_top_cf_dev_cl_dma_internal_m0_to_ipu_par_idsp_idsp_tile_top_idsp_sl_bmem_ip
#endif
#define IPU_DEVICE_DATABUS_DMA_INT_TO_TRANSFER_VMEM0_ADDR 0x1C0000
#define IPU_DEVICE_DATABUS_DMA_INT_TO_TRANSFER_VMEM1_ADDR 0x1E0000
#define IPU_DEVICE_DATABUS_DMA_INT_TO_GDC_VMEM_ADDR (0x3280000 + 0xC000)
#define IPU_DEVICE_DATABUS_DMA_INT_TO_OFS_VMEM_ADDR 0x32D4000
#define IPU_DEVICE_DATABUS_DMA_INT_TO_LB_VMEM_ADDR 0x3200000
#define IPU_DEVICE_DATABUS_DMA_INT_TO_ISL_VMEM_ADDR 0x3000000
#ifdef HAS_ISP0
#define IPU_DEVICE_DATABUS_GDC_TO_ISP_DMEM_ADDR _hrt_master_to_slave_address_ipu_gdc_top_gdc0_out_data_to_ipu_par_idsp_idsp_tile_top_idsp_sl_dmem_ip
#define IPU_DEVICE_DATABUS_GDC_TO_ISP_VMEM_ADDR _hrt_master_to_slave_address_ipu_gdc_top_gdc0_out_data_to_ipu_par_idsp_idsp_tile_top_idsp_sl_vmem_ip
#define IPU_DEVICE_DATABUS_GDC_TO_ISP_BAMEM_ADDR _hrt_master_to_slave_address_ipu_gdc_top_gdc0_out_data_to_ipu_par_idsp_idsp_tile_top_idsp_sl_bmem_ip
#endif
#define IPU_DEVICE_DATABUS_GDC_TO_TRANSFER_VMEM0_ADDR 0x1C0000
#define IPU_DEVICE_DATABUS_GDC_TO_TRANSFER_VMEM1_ADDR 0x1E0000
#define IPU_DEVICE_DATABUS_GDC_TO_GDC_VMEM_ADDR 0xC000
#define IPU_DEVICE_DATABUS_GDC_TO_OFS_VMEM_ADDR 0x32D4000
#ifdef HAS_ISP0
#define IPU_DEVICE_DATABUS_OFS_TO_ISP_DMEM_ADDR _hrt_master_to_slave_address_ipu_ofs_top_of_mt_vec_out_512_to_ipu_par_idsp_idsp_tile_top_ciodfsl_dmem_bus_sl
#define IPU_DEVICE_DATABUS_OFS_TO_ISP_VMEM_ADDR _hrt_master_to_slave_address_ipu_ofs_top_of_mt_vec_out_512_to_ipu_par_idsp_idsp_tile_top_ciodfsl_vmem_bus_sl
#define IPU_DEVICE_DATABUS_OFS_TO_ISP_BAMEM_ADDR _hrt_master_to_slave_address_ipu_ofs_top_of_mt_vec_out_512_to_ipu_par_idsp_idsp_tile_top_ciodfsl_bmem_bus_sl
#endif
#define IPU_DEVICE_DATABUS_OFS_TO_TRANSFER_VMEM0_ADDR 0x1C0000
#define IPU_DEVICE_DATABUS_OFS_TO_TRANSFER_VMEM1_ADDR 0x1E0000
#define IPU_DEVICE_DATABUS_OFS_TO_OFS_VMEM_ADDR 0x32D4000
#ifdef HAS_ISP0
#define IPU_DEVICE_DATABUS_S2V_TO_ISP_DMEM_ADDR _hrt_master_to_slave_address_ipu_lbff_infra_top_lbff_infra_str2vec_c_str2vec_mt_to_ipu_par_idsp_idsp_tile_top_idsp_sl_dmem_ip
#define IPU_DEVICE_DATABUS_S2V_TO_ISP_VMEM_ADDR _hrt_master_to_slave_address_ipu_lbff_infra_top_lbff_infra_str2vec_c_str2vec_mt_to_ipu_par_idsp_idsp_tile_top_idsp_sl_vmem_ip
#define IPU_DEVICE_DATABUS_S2V_TO_ISP_BAMEM_ADDR _hrt_master_to_slave_address_ipu_lbff_infra_top_lbff_infra_str2vec_c_str2vec_mt_to_ipu_par_idsp_idsp_tile_top_idsp_sl_bmem_ip
#endif
#define IPU_DEVICE_DATABUS_S2V_TO_TRANSFER_VMEM0_ADDR 0x1C0000
#define IPU_DEVICE_DATABUS_S2V_TO_TRANSFER_VMEM1_ADDR 0x1E0000
#define IPU_DEVICE_DATABUS_S2V_TO_LB_VMEM_ADDR 0x3200000
#define IPU_DEVICE_DATABUS_S2V_TO_ISL_VMEM_ADDR 0x3000000
#ifdef HAS_ISP0
#define IPU_DEVICE_DATABUS_LB_TO_ISP_DMEM_ADDR _hrt_master_to_slave_address_ipu_lbff_infra_top_lbff_infra_str2vec_c_str2vec_mt_to_ipu_par_idsp_idsp_tile_top_idsp_sl_dmem_ip
#define IPU_DEVICE_DATABUS_LB_TO_ISP_VMEM_ADDR _hrt_master_to_slave_address_ipu_lbff_infra_top_lbff_infra_str2vec_c_str2vec_mt_to_ipu_par_idsp_idsp_tile_top_idsp_sl_vmem_ip
#define IPU_DEVICE_DATABUS_LB_TO_ISP_BAMEM_ADDR _hrt_master_to_slave_address_ipu_lbff_infra_top_lbff_infra_str2vec_c_str2vec_mt_to_ipu_par_idsp_idsp_tile_top_idsp_sl_bmem_ip
#endif
#define IPU_DEVICE_DATABUS_LB_TO_TRANSFER_VMEM0_ADDR 0x1C0000
#define IPU_DEVICE_DATABUS_LB_TO_TRANSFER_VMEM1_ADDR 0x1E0000
#define IPU_DEVICE_DATABUS_LB_TO_LB_VMEM_ADDR 0x3200000
#define IPU_DEVICE_DATABUS_LB_TO_ISL_VMEM_ADDR 0x3000000
#ifdef HAS_ISP0
#define IPU_DEVICE_DATABUS_ISP_TO_ISP_STRIDE (_hrt_master_to_slave_address_ipu_dma_top_dma_hbfrx_m0_to_ipu_par_idsp_idsp_tile_top_idsp_sl_vmem_ip - _hrt_master_to_slave_address_ipu_dma_top_dma_hbfrx_m0_to_ipu_par_idsp_idsp_tile_top_idsp_sl_vmem_ip)
#endif
#endif /* _IPU_DEVICE_DATABUS_PROPERTIES_DEFS_H_ */
