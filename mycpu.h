`ifndef MYCPU_H
    `define MYCPU_H

    // Bus width
    `define BR_BUS_WD       36
    `define FS_TO_DS_BUS_WD 74
    `define DS_TO_ES_BUS_WD 269
    `define ES_TO_MS_BUS_WD 211
    `define MS_TO_WS_BUS_WD 199
    `define WS_TO_RF_BUS_WD 38
    `define WS_TO_FS_BUS_WD 261
    `define ES_FORWARD_WD   59
    `define MS_FORWARD_WD   60
    `define WS_FORWARD_WD   124
    `define WS_TO_ES_BUS_WD 160
    // CSR
    // CRMD
    `define CSR_CRMD        0
    `define CSR_CRMD_PLV    1:0
    `define CSR_CRMD_IE     2
    `define CSR_CRMD_DA     3
    `define CSR_CRMD_PG     4
    `define CSR_CRMD_DATF   6:5
    `define CSR_CRMD_DATM   8:7
    // PRMD
    `define CSR_PRMD        1
    `define CSR_PRMD_PPLV   1:0
    `define CSR_PRMD_PIE    2
    // ECFG
    `define CSR_ECFG        4
    `define CSR_ECFG_LIE    12:0
    // ESTAT
    `define CSR_ESTAT       5
    `define CSR_ESTAT_IS10  1:0
    // ERA
    `define CSR_ERA         6
    `define CSR_ERA_PC      31:0
    // EENTRY
    `define CSR_EENTRY      12
    `define CSR_EENTRY_VA   31:6
    // SAVE
    `define CSR_SAVE0       48
    `define CSR_SAVE1       49
    `define CSR_SAVE2       50
    `define CSR_SAVE3       51
    `define CSR_SAVE_DATA   31:0
    // BADV
    `define CSR_BADV        7
    `define CSR_BADV_VADDR  31:0
    // TID
    `define CSR_TID         64
    `define CSR_TID_TID     31:0
    // TCFG
    `define CSR_TCFG        65
    `define CSR_TCFG_EN     0
    `define CSR_TCFG_PERIODIC 1
    `define CSR_TCFG_INITVAL  31:2
    // TVAL
    `define CSR_TVAL        66
    `define CSR_TVAL_TIMEVAL  63:0
    // TICLR
    `define CSR_TICLR       68
    `define CSR_TICLR_CLR   0
    // TLBIDX
    `define CSR_TLBIDX       16
    `define CSR_TLBIDX_INDEX 4 :0
    `define CSR_TLBIDX_PS    29:24
    `define CSR_TLBIDX_NE    31
    // TLBEHI
    `define CSR_TLBEHI      17
    `define CSR_TLBEHI_VPPN 31:13
    // TLBELO0 // TLBELO1
    `define CSR_TLBELO0    18
    `define CSR_TLBELO1    19
    `define CSR_TLBELO_V   0
    `define CSR_TLBELO_D   1
    `define CSR_TLBELO_PLV 3 :2
    `define CSR_TLBELO_MAT 5 :4
    `define CSR_TLBELO_G   6
    `define CSR_TLBELO_PPN 31:8
    // ASID
    `define CSR_ASID          24  
    `define CSR_ASID_ASID     9 :0
    `define CSR_ASID_ASIDBITS 23:16
    // TLBRENTRY
    `define CSR_TLBRENTRY    136
    `define CSR_TLBRENTRY_PA 31:6
    // DMW
    `define CSR_DMW0        384
    `define CSR_DMW1        385
    `define CSR_DMW_VSEG    31:29
    `define CSR_DMW_PSEG    27:25
    `define CSR_DMW_MAT     5:4
    `define CSR_DMW_PLV3    3
    `define CSR_DMW_PLV0    0
    // ECODE
    `define ECODE_ADE       8 
    `define ECODE_ALE       9
    `define ECODE_SYS       11
    `define ECODE_BRK       12
    `define ECODE_INE       13
    `define ECODE_INT       0
    `define ECODE_ERT       15
    `define ECODE_PIL       1
    `define ECODE_PIS       2
    `define ECODE_PIF       3
    `define ECODE_PME       4
    `define ECODE_PPE       7
    `define ECODE_TLBR      63
    `define ESUBCODE_ADEF   0
`endif
