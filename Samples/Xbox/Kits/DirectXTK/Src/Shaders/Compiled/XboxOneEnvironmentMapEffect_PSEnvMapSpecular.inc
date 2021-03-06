#if 0
//
// Generated by Microsoft (R) D3D Shader Disassembler for Durango
//
//
// Input signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// COLOR                    0   xyzw        0     NONE   float   xyzw
// COLOR                    1   xyzw        1     NONE   float   xyzw
// TEXCOORD                 0   xy          2     NONE   float   xy  
// TEXCOORD                 1   xyz         3     NONE   float   xyz 
//
//
// Output signature:
//
// Name                 Index   Mask Register SysValue  Format   Used
// -------------------- ----- ------ -------- -------- ------- ------
// SV_Target                0   xyzw        0   TARGET   float   xyzw
//
ps_5_0
// Opaque Custom Data - XBOX Precompiled Shader Header
// First Precompiled Shader at offset:[134]
// Embedded Data:
//  0x00000086 - Offset To First Precompiled Shader
//  0x00000050 - Original Shader Descriptor
//  0x00000081 - Original Shader Size
dcl_globalFlags refactoringAllowed
dcl_constantbuffer CB0[24], immediateIndexed
dcl_sampler s0, mode_default
dcl_sampler s1, mode_default
dcl_resource_texture2d (float,float,float,float) t0
dcl_resource_texturecube (float,float,float,float) t1
dcl_input_ps linear v0.xyzw
dcl_input_ps linear v1.xyzw
dcl_input_ps linear v2.xy
dcl_input_ps linear v3.xyz
dcl_output o0.xyzw
dcl_temps 2
sample_indexable(texturecube)(float,float,float,float) r0.xyzw, v3.xyzx, t1.xyzw, s1
sample_indexable(texture2d)(float,float,float,float) r1.xyzw, v2.xyxx, t0.xyzw, s0
mul r1.xyzw, r1.xyzw, v0.xyzw
mad r0.xyz, r0.xyzx, r1.wwww, -r1.xyzx
mul r0.w, r0.w, r1.w
mad r0.xyz, v1.xyzx, r0.xyzx, r1.xyzx
mad r0.xyz, cb0[0].xyzx, r0.wwww, r0.xyzx
mad r1.xyz, cb0[11].xyzx, r1.wwww, -r0.xyzx
mad o0.xyz, v1.wwww, r1.xyzx, r0.xyzx
mov o0.w, r1.w
ret 
// Opaque Custom Data - XBOX Precompiled Shader Object
// Offset:[134], bundle is:[210] DWORDS.
// Disassembled Precompiled Shader Object:
// Shader Type               : (PS)
// Shader Hw Stage           : (PS)
// PDB Filename              : D:\ATG\st_dev\Kits\DirectXTK\src\Shaders\Compiled\XboxOneEnvironmentMapEffect_PSEnvMapSpecular.pdb
// Shader Semantic Hash      : 0x9245f13ca1767e58
//
// Shader Data:
; ----------------- PS Data ------------------------
; Input Semantic Mappings
;   [0] generic,  usageIdx 0, channelMask 15, param0, paramSlot0, DefaultVal={0,0,0,0}
;   [1] generic,  usageIdx 1, channelMask 15, param1, paramSlot1, DefaultVal={0,0,0,0}
;   [2] generic,  usageIdx 2, channelMask  3, param2, paramSlot2, DefaultVal={0,0,0,0}
;   [3] generic,  usageIdx 3, channelMask  7, param3, paramSlot3, DefaultVal={0,0,0,0}

codeLenInByte        = 356 bytes;

; launchModeFlags    = 0x0000000E
srdTableSupport      = TRUE
immediateSupportExt  = TRUE
srdTableSupportExt   = TRUE

userElementCount     = 1;
;  userElements[0]      = PTR_EXTENDED_USER_DATA, ReferencedExtUserElements=1, s[0x0:1]
extUserElementCount  = 5;
;  extUserElements 1[0] = IMM_RESOURCE 0, offset 0x0:7 dwords
;  extUserElements 1[1] = IMM_RESOURCE 1, offset 0x8:15 dwords
;  extUserElements 1[2] = IMM_SAMPLER 0, offset 0x10:19 dwords
;  extUserElements 1[3] = IMM_SAMPLER 1, offset 0x14:23 dwords
;  extUserElements 1[4] = IMM_CONST_BUFFER 0, offset 0x18:27 dwords
NumVgprs             = 14;
NumSgprs             = 32;
FloatMode            = 192;
IeeeMode             = 0;
FlatPtr32            = 0;
ScratchSize          = 0 dwords/thread;
LDSByteSize          = 0 bytes/workgroup (compile time only);
ScratchWaveOffsetReg = s65535;
; texSamplerUsage         = 0x00000003
; constBufUsage           = 0x00000001

; SPI_SHADER_PGM_RSRC2_PS = 0x00000004
SSPRP:SCRATCH_EN            = 0
SSPRP:USER_SGPR             = 2
SSPRP:TRAP_PRESENT          = 0
SSPRP:WAVE_CNT_EN           = 0
SSPRP:EXTRA_LDS_SIZE        = 0
SSPRP:EXCP_EN               = 0
; SPI_SHADER_Z_FORMAT     = 0x00000000
SPZF:Z_EXPORT_FORMAT        = 0; SPI_SHADER_ZERO
; SPI_PS_IN_CONTROL       = 0x00000004
SPIC:NUM_INTERP             = 4
SPIC:PARAM_GEN              = 0
SPIC:FOG_ADDR               = 0
SPIC:BC_OPTIMIZE_DISABLE    = 0
SPIC:PASS_FOG_THROUGH_PS    = 0
; SPI_PS_INPUT_ADDR       = 0x00000002
SPIA:PERSP_CENTER_ENA       = 1
; DB_SHADER_CONTROL       = 0x00000010
DB:Z_ORDER                  = 1
DB:CONSERVATIVE_Z_EXPORT    = 0; EXPORT_ANY_Z
; CB_SHADER_MASK          = 0x0000000F
CB:OUTPUT0_ENABLE           = 15

dx9TexCubeMask           = 0x00000002

; export table for mrt0 [patch@(bytes=0x150, dwords=0x54)]
// Export Patch Code (FMT_ZERO):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           null, off, off, off, off done vm        // 000000000008: F8001890 00000000
end
// Export Patch Code (FMT_32_R):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v2, off, off, off done vm         // 000000000008: F8001801 00000002
end
// Export Patch Code (FMT_32_GR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v2, v3, off, off done vm          // 000000000008: F8001803 00000302
end
// Export Patch Code (FMT_32_AR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v2, v5, off, off done vm          // 000000000008: F8001803 00000502
end
// Export Patch Code (FMT_FP16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pkrtz_f16_f32  v0, v2, v3                       // 000000000000: 5E000702
  v_cvt_pkrtz_f16_f32  v1, v4, v5                       // 000000000004: 5E020B04
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_UNORM16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pknorm_u16_f32  v0, v2, v3                      // 000000000000: 5C000702
  v_cvt_pknorm_u16_f32  v1, v4, v5                      // 000000000004: 5C020B04
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_SNORM16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pknorm_i16_f32  v0, v2, v3                      // 000000000000: 5A000702
  v_cvt_pknorm_i16_f32  v1, v4, v5                      // 000000000004: 5A020B04
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_UINT16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pk_u16_u32  v0, v2, v3                          // 000000000000: 60000702
  v_cvt_pk_u16_u32  v1, v4, v5                          // 000000000004: 60020B04
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_SINT16_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  v_cvt_pk_i16_i32  v0, v2, v3                          // 000000000000: 62000702
  v_cvt_pk_i16_i32  v1, v4, v5                          // 000000000004: 62020B04
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000008: F8001C0F 00000100
end
// Export Patch Code (FMT_32_ABGR):
shader patch
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_nop         0x0000                                  // 000000000000: BF800000
  s_nop         0x0000                                  // 000000000004: BF800000
  exp           mrt0, v2, v3, v4, v5 done vm            // 000000000008: F800180F 05040302
end

// Shader Instructions:
shader main
  asic(CI)
  type(PS)
                                                            // s_ps_state in s0
  s_mov_b64     s[28:29], exec                          // 000000000000: BE9C047E
  s_wqm_b64     exec, exec // wrscc                     // 000000000004: BEFE0A7E
  s_mov_b32     m0, s2                                  // 000000000008: BEFC0302
  s_load_dwordx16  s[4:19], s[0:1], 0x00                // 00000000000C: C1020100
  s_load_dwordx8  s[20:27], s[0:1], 0x10                // 000000000010: C0CA0110
  v_interp_p1_f32  v2, v0, attr3.x                      // 000000000014: C8080C00
  v_interp_p1_f32  v3, v0, attr3.y                      // 000000000018: C80C0D00
  v_interp_p1_f32  v4, v0, attr3.z                      // 00000000001C: C8100E00
  v_interp_p2_f32  v2, v1, attr3.x                      // 000000000020: C8090C01
  v_interp_p2_f32  v3, v1, attr3.y                      // 000000000024: C80D0D01
  v_interp_p2_f32  v4, v1, attr3.z                      // 000000000028: C8110E01
  v_cubema_f32  v5, v2, v3, v4                          // 00000000002C: D28E0005 04120702
  v_interp_p1_f32  v6, v0, attr2.x                      // 000000000034: C8180800
  v_interp_p1_f32  v7, v0, attr2.y                      // 000000000038: C81C0900
  v_cubetc_f32  v8, v2, v3, v4                          // 00000000003C: D28C0008 04120702
  v_cubesc_f32  v9, v2, v3, v4                          // 000000000044: D28A0009 04120702
  v_rcp_f32     v5, abs(v5)                             // 00000000004C: D3540105 00000105
  v_interp_p2_f32  v6, v1, attr2.x                      // 000000000054: C8190801
  v_interp_p2_f32  v7, v1, attr2.y                      // 000000000058: C81D0901
  v_cubeid_f32  v4, v2, v3, v4                          // 00000000005C: D2880004 04120702
  v_madak_f32   v3, v8, v5, 0x3fc00000                  // 000000000064: 42060B08 3FC00000
  v_madak_f32   v2, v9, v5, 0x3fc00000                  // 00000000006C: 42040B09 3FC00000
  s_waitcnt     lgkmcnt(0)                              // 000000000074: BF8C007F
  image_sample  v[5:8], v[6:7], s[4:11], s[20:23] dmask:0xf // 000000000078: F0800F00 00A10506
  image_sample  v[9:12], v[2:3], s[12:19], s[24:27] dmask:0xf // 000000000080: F0800F00 00C30902
  s_load_dwordx4  s[0:3], s[0:1], 0x18                  // 000000000088: C0800118
  s_waitcnt     lgkmcnt(0)                              // 00000000008C: BF8C007F
  s_buffer_load_dwordx4  s[4:7], s[0:3], 0x00           // 000000000090: C2820100
  v_interp_p1_f32  v2, v0, attr0.x                      // 000000000094: C8080000
  v_interp_p1_f32  v3, v0, attr0.y                      // 000000000098: C80C0100
  v_interp_p1_f32  v4, v0, attr0.z                      // 00000000009C: C8100200
  v_interp_p1_f32  v13, v0, attr0.w                     // 0000000000A0: C8340300
  s_buffer_load_dwordx4  s[0:3], s[0:3], 0x2c           // 0000000000A4: C280012C
  v_interp_p2_f32  v2, v1, attr0.x                      // 0000000000A8: C8090001
  v_interp_p2_f32  v3, v1, attr0.y                      // 0000000000AC: C80D0101
  v_interp_p2_f32  v4, v1, attr0.z                      // 0000000000B0: C8110201
  v_interp_p2_f32  v13, v1, attr0.w                     // 0000000000B4: C8350301
  s_waitcnt     vmcnt(1)                                // 0000000000B8: BF8C0F71
  v_mul_legacy_f32  v2, v5, v2                          // 0000000000BC: 0E040505
  v_mul_legacy_f32  v3, v6, v3                          // 0000000000C0: 0E060706
  v_mul_legacy_f32  v4, v7, v4                          // 0000000000C4: 0E080907
  v_mul_legacy_f32  v5, v8, v13                         // 0000000000C8: 0E0A1B08
  v_interp_p1_f32  v6, v0, attr1.x                      // 0000000000CC: C8180400
  v_interp_p1_f32  v7, v0, attr1.y                      // 0000000000D0: C81C0500
  v_interp_p1_f32  v8, v0, attr1.z                      // 0000000000D4: C8200600
  s_waitcnt     vmcnt(0)                                // 0000000000D8: BF8C0F70
  v_mad_legacy_f32  v9, v9, v5, -v2                     // 0000000000DC: D2800009 840A0B09
  v_mad_legacy_f32  v10, v10, v5, -v3                   // 0000000000E4: D280000A 840E0B0A
  v_mad_legacy_f32  v11, v11, v5, -v4                   // 0000000000EC: D280000B 84120B0B
  v_interp_p2_f32  v6, v1, attr1.x                      // 0000000000F4: C8190401
  v_interp_p2_f32  v7, v1, attr1.y                      // 0000000000F8: C81D0501
  v_interp_p2_f32  v8, v1, attr1.z                      // 0000000000FC: C8210601
  v_mul_legacy_f32  v12, v12, v5                        // 000000000100: 0E180B0C
  v_mac_f32     v2, v6, v9                              // 000000000104: 3E041306
  v_mac_f32     v3, v7, v10                             // 000000000108: 3E061507
  v_mac_f32     v4, v8, v11                             // 00000000010C: 3E081708
  s_waitcnt     lgkmcnt(0)                              // 000000000110: BF8C007F
  v_mac_f32     v2, s4, v12                             // 000000000114: 3E041804
  v_mac_f32     v3, s5, v12                             // 000000000118: 3E061805
  v_mac_f32     v4, s6, v12                             // 00000000011C: 3E081806
  v_interp_p1_f32  v0, v0, attr1.w                      // 000000000120: C8000700
  v_mad_legacy_f32  v6, s0, v5, -v2                     // 000000000124: D2800006 840A0A00
  v_mad_legacy_f32  v7, s1, v5, -v3                     // 00000000012C: D2800007 840E0A01
  v_mad_legacy_f32  v8, s2, v5, -v4                     // 000000000134: D2800008 84120A02
  v_interp_p2_f32  v0, v1, attr1.w                      // 00000000013C: C8010701
  v_mac_f32     v2, v0, v6                              // 000000000140: 3E040D00
  v_mac_f32     v3, v0, v7                              // 000000000144: 3E060F00
  v_mac_f32     v4, v0, v8                              // 000000000148: 3E081100
  s_mov_b64     exec, s[28:29]                          // 00000000014C: BEFE041C
  v_cvt_pkrtz_f16_f32  v0, v2, v3                       // 000000000150: 5E000702
  v_cvt_pkrtz_f16_f32  v1, v4, v5                       // 000000000154: 5E020B04
  exp           mrt0, v0, v0, v1, v1 done compr vm      // 000000000158: F8001C0F 00000100
  s_endpgm                                              // 000000000160: BF810000
end


// Shader Statistics:
//  NumActiveWaveFront:         40
//  WorkgroupSize:              64
//  NumVRegs:                   14
//  NumSRegs:                   32
//  NumActiveWaveFrontByVReg:   40
//  NumActiveWaveFrontBySReg:   40
//  NumActiveWaveFrontByLDS:    40
//  CycleSim:                   89
//  CycleSimNWaves:             89
//  Code Size:                  356
//Assembler Counts:
//  num_32bit_ops                     : 59
//  num_64bit_ops                     : 14
//  num_alu                           : 55
//  num_fc                            : 15
//  num_inst_exp                      : 1
//  num_inst_ldsgds                   : 0
//  num_inst_mimg                     : 2
//  num_inst_mtbuf                    : 0
//  num_inst_mubuf                    : 0
//  num_inst_sopp                     : 6
//  num_inst_sopc                     : 0
//  num_inst_sop1                     : 4
//  num_inst_sop2                     : 0
//  num_inst_smrd                     : 0
//  num_inst_sopk                     : 0
//  num_inst_vop1                     : 0
//  num_inst_vop2                     : 18
//  num_inst_vop3                     : 13
//  num_inst_vopc                     : 0
//  num_inst_vintrp                   : 26
//  constant_literal_operands         : 0
//  num_tex                           : 3
//  num_vmem_group                    : 1
//  vmem_grouping_started             : 0
//
//Compilation Notes:
//
//  PS has no UAV writes, consider forcing REZ/LATEZ.
// Shader Statistics:
// m_uNumActiveWaveFront             : 40
// m_uVRegLimit                      : 256
// m_uSRegLimit                      : 512
// m_uNumVRegs                       : 14
// m_uNumSRegs                       : 32
// m_uSCCodeSize                     : 356
// m_uWorkgroupSize                  : 64
// m_uNumActiveWaveFrontByVReg       : 40
// m_uNumActiveWaveFrontBySReg       : 40
// m_uNumActiveWaveFrontByLDS        : 40
// m_uCycleSim1Wave                  : 89
// m_uCycleSimNWaves                 : 89

// Assembler Counts:
// num_32bit_ops                     : 59
// num_64bit_ops                     : 14
// num_alu                           : 55
// num_fc                            : 15
// num_inst_exp                      : 1
// num_inst_ldsgds                   : 0
// num_inst_mimg                     : 2
// num_inst_mtbuf                    : 0
// num_inst_mubuf                    : 0
// num_inst_sopp                     : 6
// num_inst_sopc                     : 0
// num_inst_sop1                     : 4
// num_inst_sop2                     : 0
// num_inst_smrd                     : 0
// num_inst_sopk                     : 0
// num_inst_vop1                     : 0
// num_inst_vop2                     : 18
// num_inst_vop3                     : 13
// num_inst_vopc                     : 0
// num_inst_vintrp                   : 26
// num_inst_smem                     : 5
// constant_literal_operands         : 0
// num_tex                           : 3
// num_vmem_group                    : 1
// vmem_grouping_started             : 0
// m_fFullPrecompilePromise          : 0
// m_fIntegerDivideExpansion         : 0
// m_fIntegerModExpansion            : 0
// m_fDoubleDivideExpansion          : 0
// m_fUsesScratch                    : 0
// m_fPerThreadIndirection           : 0
// m_fUsingTableLoads                : 0
// m_fUsingSHmemLoads                : 1
// fSemanticHashFlagOverrideApplied  : 0
// fPSHasNoUAVWrite                  : 1
// m_fRenderTargetsCanBeCompacted    : 0
// version                           : 3
// fCodePatched                      : 0

// Approximately 0 instruction slots used
#endif

const BYTE EnvironmentMapEffect_PSEnvMapSpecular[] =
{
     68,  88,  66,  67,  39,  50, 
    203,  26,  42,  59,  88, 176, 
    241,  80,  79,  78, 165,  25, 
      4, 144,   1,   0,   0,   0, 
    210,   6,   0,   0,   5,   0, 
      0,   0,  52,   0,   0,   0, 
    180,   0,   0,   0, 232,   0, 
      0,   0,  88,   6,   0,   0, 
    104,   6,   0,   0,  73,  83, 
     71,  78, 120,   0,   0,   0, 
      4,   0,   0,   0,   8,   0, 
      0,   0, 104,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      0,   0,   0,   0,  15,  15, 
      0,   0, 104,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      1,   0,   0,   0,  15,  15, 
      0,   0, 110,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      2,   0,   0,   0,   3,   3, 
      0,   0, 110,   0,   0,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   3,   0,   0,   0, 
      3,   0,   0,   0,   7,   7, 
      0,   0,  67,  79,  76,  79, 
     82,   0,  84,  69,  88,  67, 
     79,  79,  82,  68,   0, 171, 
     79,  83,  71,  78,  44,   0, 
      0,   0,   1,   0,   0,   0, 
      8,   0,   0,   0,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   3,   0, 
      0,   0,   0,   0,   0,   0, 
     15,   0,   0,   0,  83,  86, 
     95,  84,  97, 114, 103, 101, 
    116,   0, 171, 171,  83,  72, 
     69,  88, 104,   5,   0,   0, 
     80,   0,   0,   0,  90,   1, 
      0,   0,  53,  16,   0,   0, 
      5,   0,   0,   0, 134,   0, 
      0,   0,  80,   0,   0,   0, 
    129,   0,   0,   0, 106,   8, 
      0,   1,  89,   0,   0,   4, 
     70, 142,  32,   0,   0,   0, 
      0,   0,  24,   0,   0,   0, 
     90,   0,   0,   3,   0,  96, 
     16,   0,   0,   0,   0,   0, 
     90,   0,   0,   3,   0,  96, 
     16,   0,   1,   0,   0,   0, 
     88,  24,   0,   4,   0, 112, 
     16,   0,   0,   0,   0,   0, 
     85,  85,   0,   0,  88,  48, 
      0,   4,   0, 112,  16,   0, 
      1,   0,   0,   0,  85,  85, 
      0,   0,  98,  16,   0,   3, 
    242,  16,  16,   0,   0,   0, 
      0,   0,  98,  16,   0,   3, 
    242,  16,  16,   0,   1,   0, 
      0,   0,  98,  16,   0,   3, 
     50,  16,  16,   0,   2,   0, 
      0,   0,  98,  16,   0,   3, 
    114,  16,  16,   0,   3,   0, 
      0,   0, 101,   0,   0,   3, 
    242,  32,  16,   0,   0,   0, 
      0,   0, 104,   0,   0,   2, 
      2,   0,   0,   0,  69,   0, 
      0, 139, 130,   1,   0, 128, 
     67,  85,  21,   0, 242,   0, 
     16,   0,   0,   0,   0,   0, 
     70,  18,  16,   0,   3,   0, 
      0,   0,  70, 126,  16,   0, 
      1,   0,   0,   0,   0,  96, 
     16,   0,   1,   0,   0,   0, 
     69,   0,   0, 139, 194,   0, 
      0, 128,  67,  85,  21,   0, 
    242,   0,  16,   0,   1,   0, 
      0,   0,  70,  16,  16,   0, 
      2,   0,   0,   0,  70, 126, 
     16,   0,   0,   0,   0,   0, 
      0,  96,  16,   0,   0,   0, 
      0,   0,  56,   0,   0,   7, 
    242,   0,  16,   0,   1,   0, 
      0,   0,  70,  14,  16,   0, 
      1,   0,   0,   0,  70,  30, 
     16,   0,   0,   0,   0,   0, 
     50,   0,   0,  10, 114,   0, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0, 246,  15,  16,   0, 
      1,   0,   0,   0,  70,   2, 
     16, 128,  65,   0,   0,   0, 
      1,   0,   0,   0,  56,   0, 
      0,   7, 130,   0,  16,   0, 
      0,   0,   0,   0,  58,   0, 
     16,   0,   0,   0,   0,   0, 
     58,   0,  16,   0,   1,   0, 
      0,   0,  50,   0,   0,   9, 
    114,   0,  16,   0,   0,   0, 
      0,   0,  70,  18,  16,   0, 
      1,   0,   0,   0,  70,   2, 
     16,   0,   0,   0,   0,   0, 
     70,   2,  16,   0,   1,   0, 
      0,   0,  50,   0,   0,  10, 
    114,   0,  16,   0,   0,   0, 
      0,   0,  70, 130,  32,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0, 246,  15,  16,   0, 
      0,   0,   0,   0,  70,   2, 
     16,   0,   0,   0,   0,   0, 
     50,   0,   0,  11, 114,   0, 
     16,   0,   1,   0,   0,   0, 
     70, 130,  32,   0,   0,   0, 
      0,   0,  11,   0,   0,   0, 
    246,  15,  16,   0,   1,   0, 
      0,   0,  70,   2,  16, 128, 
     65,   0,   0,   0,   0,   0, 
      0,   0,  50,   0,   0,   9, 
    114,  32,  16,   0,   0,   0, 
      0,   0, 246,  31,  16,   0, 
      1,   0,   0,   0,  70,   2, 
     16,   0,   1,   0,   0,   0, 
     70,   2,  16,   0,   0,   0, 
      0,   0,  54,   0,   0,   5, 
    130,  32,  16,   0,   0,   0, 
      0,   0,  58,   0,  16,   0, 
      1,   0,   0,   0,  62,   0, 
      0,   1,  53,  16,   0,   0, 
    212,   0,   0,   0,  23,   0, 
      1,   0,  41, 211,  16,   0, 
    120,   1, 237,  87,  77, 107, 
     19,  65,  24, 126, 103,  51, 
    187, 217, 143, 116, 147,  86, 
    197,  84,  83, 172, 232, 161, 
      7,  17, 161, 138, 160, 178, 
    106, 109,  81,  41, 162, 208, 
     28, 106,  89, 250, 145, 143, 
     98, 161,  31,  49, 141, 197, 
     83,  77,  37, 130,  72,  17, 
    209, 131,  30, 244,  80, 240, 
      7, 248,   3, 164, 137, 245, 
     50, 120, 108, 255, 129,  39, 
    111, 214, 155, 135, 162, 190, 
    239, 100, 166, 141,  85, 111, 
      1,  69, 242, 192,  51, 239, 
     62,  51,  59, 179, 207, 204, 
    187, 135, 121,  55,  18,  32, 
    241, 108, 252, 237, 103, 138, 
     31,  95, 165, 159, 115,   3, 
    192, 196, 103, 134, 164,  72, 
    120, 209,  70,  45,  64,  41, 
     78,  45,  64,  15,  53, 244, 
      2, 190, 235,  99, 232,  70, 
    230,  80,  95, 192,  72,  99, 
    154, 189, 189,  75, 125, 147, 
    147,  15, 250, 240,  17,  14, 
     32, 233, 115,  55,  21, 207, 
     34, 105, 238, 105,  36,  45, 
     75, 203,  17, 112, 201, 109, 
     88, 212,  32,  56,  53, 187, 
    208, 129,  84, 182, 228, 218, 
    218, 107,   4, 169, 215, 146, 
    200,  83, 243, 123,  92,  69, 
    146, 135,  63, 129, 188, 105, 
     63, 180, 166, 218, 190, 220, 
    239, 223,  70, 125, 143, 117, 
    119, 122, 207,  58,  79,   4, 
    202,  71,  35, 104, 159, 186, 
    107,  75, 109,  90, 159,  89, 
     66, 109, 140, 186, 105, 111, 
     53, 228, 159, 240,  29, 145, 
    162, 135,   6, 104,  77, 121, 
    178, 212,  41,  89, 236,  16, 
    128, 141, 209,  56,  34,  19, 
    111,  69, 240,  52, 147,  52, 
    242, 127,  67, 255, 171,  20, 
     41,  59, 244, 207, 171, 227, 
    149, 208, 227, 105, 106, 160, 
     92,  37,  62,  73, 194,  87, 
     82,  90,  51, 212, 245, 204, 
    214, 117, 132,  52,  37, 185, 
     81,  99, 242, 140,  40, 140, 
    114, 207,  24, 141, 167, 112, 
     62,  38,  23, 117, 136,  58, 
    108, 208,  35, 168,  71,  26, 
    244,  56, 234, 241,   6, 157, 
     65, 157, 209,  90, 175,  31, 
    151, 223, 227,  38, 229,  26, 
     59,  23, 255, 101, 182,  60, 
     54, 135,  45, 143, 205,  97, 
    203,  99, 115, 216, 242, 216, 
     28, 182,  60,  54, 135,  45, 
    143, 205,  97, 203,  99, 115, 
     72, 247, 195,  69, 254, 114, 
    117, 209, 253, 182, 106,  68, 
    182,  86, 129,  25, 239,  18, 
    236,  67,  13,  98, 182, 128, 
    182, 152,   0,  63,  33,  88, 
    204,  17, 172, 173,  77,  48, 
    191,  93, 152, 240, 120, 221, 
    136, 118, 112, 176, 147,   2, 
    156, 148, 176,  97,  89, 106, 
      7,  30, 201, 104, 178, 244, 
    134, 137, 119,  64, 102, 119, 
     10, 230, 116,   9,  14,  15, 
    101, 191, 237,  89,  88, 191, 
    213, 206,  59,  30, 151, 241, 
     30,  44,  87,  33,  94, 222, 
    180, 204,  21, 188, 216, 150, 
     55,  13, 231,  61,  36,  89, 
    185,  38, 251, 217, 253,  53, 
    188, 244,  11,  96, 248, 125, 
     35,  33,  32, 114,  82,  28, 
     99, 229,  53,   6, 232, 131, 
    161,  15, 163,  93, 176, 200, 
     41, 113,  59, 190,  92,  53, 
     77, 238,  91,  81, 203, 143, 
     58, 182, 111,  31, 116, 125, 
    224, 232, 203,  76,   9, 176, 
    186,  69,   1, 199,  29,  40, 
    175,  59, 158,  91, 113,  49, 
    186, 158,  95, 241,  48, 122, 
     94,  71, 133, 113, 244, 103, 
    118,   9, 102,  29,  22,  49, 
     47, 233,  91, 123, 120,  16, 
    221, 103,   5, 246, 126,  59, 
     32,  15,  60, 201,   3,  51, 
    105,   5,  86, 210,  14,  32, 
     10, 194, 194, 121, 224, 186, 
    149,  40,  70, 230, 250,  21, 
     27, 163, 225, 226,  58,  81, 
    134, 231, 196,   3, 136,  91, 
      1, 180, 219,  65, 138, 227, 
     57, 238, 186,  79,   3,  44, 
     85,  59,  41, 214,  47, 227, 
     63, 195, 150,  47, 236, 128, 
     36, 246,  97, 201, 179,  13, 
    249,   6, 103, 178,   6, 208, 
     96, 212, 137, 125, 123,  49, 
    104, 200, 229, 177, 175, 177, 
     60, 122, 163, 138, 134, 101, 
     21, 143,  34,  29,  36, 147, 
    213,  94, 189, 148, 226, 170, 
     66,  30,  94,  92,  88,  57, 
    247, 101, 224,  41,  61,  19, 
     62, 169,  57,  66,  69, 170, 
    233,  98, 200,  29, 188, 166, 
    230,  23,  36, 180,  81,  21, 
     41,  80, 189, 226, 235,  74, 
     81, 213, 141,  39, 212, 120, 
    143, 138, 180, 103,  15, 185, 
    219, 199,  21,  53, 158,  69, 
    146, 211, 254,  51, 225, 197, 
    244, 229, 112, 190,  52, 150, 
    203,  47, 132, 131,  83, 165, 
    249, 176, 127, 170, 152, 207, 
    150, 134, 211, 131, 225, 124, 
     49,  27,  14, 221, 154, 200, 
    229, 139, 243, 225, 165, 185, 
    153, 194, 212, 116,  62,  23, 
     14, 103, 230, 238,  94, 159, 
    205,  15, 204,  46,  76,  21, 
    231, 102, 103, 242, 179, 165, 
    107,  19, 133, 129, 201,  73, 
    156,  51, 118,  99,   8, 187, 
     81,  14,  21, 242, 217,  59, 
    211,  19, 197, 227, 133,  92, 
      6, 126,   0,  25, 122,  26, 
    118,   0,   0,   0,  88,  72, 
     83,  72,   8,   0,   0,   0, 
     88, 126, 118, 161,  60, 241, 
     69, 146,  88,  80,  68,  80, 
     98,   0,   0,   0,  68,  58, 
     92,  65,  84,  71,  92, 115, 
    116,  95, 100, 101, 118,  92, 
     75, 105, 116, 115,  92,  68, 
    105, 114, 101,  99, 116,  88, 
     84,  75,  92, 115, 114,  99, 
     92,  83, 104,  97, 100, 101, 
    114, 115,  92,  67, 111, 109, 
    112, 105, 108, 101, 100,  92, 
     88,  98, 111, 120,  79, 110, 
    101,  69, 110, 118, 105, 114, 
    111, 110, 109, 101, 110, 116, 
     77,  97, 112,  69, 102, 102, 
    101,  99, 116,  95,  80,  83, 
     69, 110, 118,  77,  97, 112, 
     83, 112, 101,  99, 117, 108, 
     97, 114,  46, 112, 100,  98
};
