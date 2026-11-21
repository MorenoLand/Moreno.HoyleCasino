// FUN_005ecd00  005ecd00

void __thiscall FUN_005ecd00(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  void *pvVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 uVar9;
  size_t _Size;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  undefined1 local_f4;
  int local_f0;
  int local_ec;
  undefined4 *local_e8;
  undefined1 local_e1;
  undefined1 local_a8 [16];
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  ushort local_88;
  int local_84;
  int *local_80;
  ushort *local_7c;
  int local_78;
  int local_74;
  int local_70;
  undefined4 local_6c;
  int local_68;
  uint local_64;
  int local_60;
  undefined4 local_5c;
  int local_58;
  size_t local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  int local_40;
  undefined4 *local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  void *local_24;
  int *local_20;
  int local_1c;
  int local_18;
  void *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar2 = (undefined2)param_4;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a9cb2;
  local_10 = ExceptionList;
  uVar3 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if (param_2 == -1) {
    return;
  }
  iVar8 = param_1[0x19];
  if (0 < iVar8) {
    if (iVar8 < 3) {
      if (param_1[0x18] == param_2) {
        return;
      }
    }
    else if (iVar8 != 3) goto LAB_005ecde1;
    if ((((param_1[0x18] == param_2) && (param_1[0x31] == param_3)) &&
        ((char)param_1[0x32] == (char)param_4)) &&
       ((*(char *)((int)param_1 + 0xc9) == param_4._1_1_ &&
        (*(char *)((int)param_1 + 0xca) == param_4._2_1_)))) {
      return;
    }
  }
LAB_005ecde1:
  ExceptionList = &local_10;
  param_1[0x18] = param_2;
  iVar8 = param_2 * 0xc;
  param_1[0x23] = *(int *)(&DAT_00770028 + iVar8);
  param_1[0x24] = *(int *)(&DAT_0077002c + iVar8);
  param_1[0x25] = *(int *)(&DAT_00770030 + iVar8);
  if (param_1[0x2c] != 0) {
    FUN_006041d0(param_1[0x2c]);
    param_1[0x2c] = 0;
  }
  if (param_1[0x2f] != 0) {
    Ordinal_66(param_1[0x2f],uVar3);
    param_1[0x2f] = 0;
  }
  if (param_1[0x2e] != 0) {
    FUN_006041d0(param_1[0x2e]);
    param_1[0x2e] = 0;
  }
  if (param_1[0x2d] != 0) {
    Ordinal_67(param_1[0x2d]);
    param_1[0x2d] = 0;
  }
  param_1[0x31] = -1;
  *(undefined2 *)(param_1 + 0x32) = DAT_0075ee1c;
  *(char *)((int)param_1 + 0xca) = DAT_0075ee1e;
  param_1[0x19] = 0;
  if ((param_1[0x23] == 0) || (*(short *)((int)param_1 + 0x96) < 0)) {
    if ((param_1[0x23] == 0) || (-1 < *(short *)((int)param_1 + 0x96))) {
      local_80 = (int *)FUN_00603c50(0x544e4f46,param_2,0);
      if ((local_80 == (int *)0x0) || (iVar8 = (**(code **)(*local_80 + 4))(), iVar8 == 0)) {
        param_2 = 2;
        local_80 = (int *)FUN_00603c50(0x544e4f46,2,0);
      }
      param_1[0x18] = param_2;
      local_7c = (ushort *)(**(code **)(*local_80 + 4))();
      param_1[0x19] = 1;
      if (local_7c == (ushort *)0x0) {
        if (param_1[0x26] != 0) {
          operator_delete((void *)param_1[0x26]);
          param_1[0x26] = 0;
        }
        memset(param_1 + 0x23,0,0xc);
        param_1[0x19] = 0;
      }
      else {
        param_1[0x23] = (uint)*local_7c;
        *(ushort *)(param_1 + 0x24) = local_7c[1];
        *(ushort *)((int)param_1 + 0x92) = local_7c[2];
        *(ushort *)(param_1 + 0x25) = local_7c[3];
        *(ushort *)((int)param_1 + 0x96) = local_7c[4];
        local_88 = local_7c[5];
        if (param_1[0x26] == 0) {
          pvVar6 = operator_new(0x802);
          param_1[0x26] = (int)pvVar6;
        }
        memcpy((void *)param_1[0x26],local_7c + 5,(uint)local_88 * 8 + 2);
        *(ushort *)param_1[0x26] = local_88;
        for (local_84 = 0; local_84 < (int)(uint)*(ushort *)param_1[0x26]; local_84 = local_84 + 1)
        {
        }
      }
      FUN_006041d0(local_80);
      if (param_1[0x2c] != 0) {
        FUN_006041d0(param_1[0x2c]);
      }
      iVar8 = FUN_00603c50(0x20584554,param_1[0x23],0);
      param_1[0x2c] = iVar8;
    }
    else {
      Ordinal_116(param_1 + 0x2d);
      if (param_1[0x2d] == 0) {
        if (param_1[0x2d] == 0) {
          FUN_005e9f20("m_hFTLibrary","..\\scilib\\scitext.cpp",0x128);
        }
        FUN_005ecd00(0x1f,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
        ExceptionList = local_10;
        return;
      }
      param_1[0x19] = 3;
      iVar8 = FUN_00603c50(0x20465454,param_1[0x23],0);
      param_1[0x2e] = iVar8;
      if ((param_1[0x2e] == 0) && (iVar8 = (**(code **)(*(int *)param_1[0x2e] + 4))(), iVar8 == 0))
      {
        if ((param_1[0x2e] == 0) ||
           (iVar8 = (**(code **)(*(int *)param_1[0x2e] + 4))(), uVar9 = extraout_var, iVar8 == 0)) {
          FUN_005e9f20("m_poFTFontResource && m_poFTFontResource->GetData()",
                       "..\\scilib\\scitext.cpp",0x132);
          uVar9 = extraout_var_00;
        }
        FUN_005ecd00(0x1f,0xffffffff,CONCAT13(uVar9,CONCAT12(DAT_0075ee1e,DAT_0075ee1c)));
        ExceptionList = local_10;
        return;
      }
      uVar4 = FUN_0061ed80(0,param_1 + 0x2f);
      uVar4 = (**(code **)(*(int *)param_1[0x2e] + 4))(uVar4);
      Ordinal_139(param_1[0x2d],uVar4);
      if (param_1[0x2f] == 0) {
        if (param_1[0x2f] == 0) {
          FUN_005e9f20("m_hFTFace","..\\scilib\\scitext.cpp",0x13b);
        }
        FUN_005ecd00(0x1f,0xffffffff,CONCAT12(DAT_0075ee1e,DAT_0075ee1c));
        ExceptionList = local_10;
        return;
      }
      if ((*(uint *)(param_1[0x2f] + 8) & 1) == 0) {
        FUN_005e9f20("FT_IS_SCALABLE(m_hFTFace)","..\\scilib\\scitext.cpp",0x13f);
      }
      memset(&local_4c,0,0x10);
      memset(param_1 + 0x30,0,0x10);
      param_1[0x30] = -1;
      if ((short)param_1[0x24] != 0) {
        piVar5 = (int *)FUN_006102a0(local_a8,(short)param_1[0x24]);
        local_98 = *piVar5;
        local_94 = piVar5[1];
        local_90 = piVar5[2];
        local_8c = piVar5[3];
        local_4c = local_98;
        local_48 = local_94;
        local_44 = local_90;
        local_40 = local_8c;
        if (local_98 == 0) {
          FUN_005e9f20("rFTFontInfo.iFTInfoID","..\\scilib\\scitext.cpp",0x146);
        }
      }
      if (param_3 < 1) {
        if ((short)param_1[0x24] == 0) {
          param_1[0x31] = 0xb;
        }
        else {
          param_1[0x31] = local_48;
        }
      }
      else {
        param_1[0x31] = param_3;
      }
      Ordinal_168(param_1[0x2f],param_1[0x31] << 6,0,0,0);
      if ((((char)param_4 == (char)DAT_0075ee1c) && (param_4._1_1_ == DAT_0075ee1c._1_1_)) &&
         (param_4._2_1_ == DAT_0075ee1e)) {
        if ((short)param_1[0x24] == 0) {
          *(undefined2 *)(param_1 + 0x32) = DAT_0075ee1c;
          *(char *)((int)param_1 + 0xca) = DAT_0075ee1e;
        }
        else {
          *(undefined2 *)(param_1 + 0x32) = (undefined2)local_44;
          *(undefined1 *)((int)param_1 + 0xca) = local_44._2_1_;
        }
      }
      else {
        *(undefined2 *)(param_1 + 0x32) = uVar2;
        *(char *)((int)param_1 + 0xca) = param_4._2_1_;
      }
      if ((short)param_1[0x24] == 0) {
        local_e1 = 1;
      }
      else {
        local_e1 = local_44._3_1_;
      }
      *(undefined1 *)((int)param_1 + 0xcb) = local_e1;
      if (0xff < param_1[0x18]) {
        FUN_005e9f20("fontNumber < 256","..\\scilib\\scitext.cpp",0x15c);
      }
      if (0x3f < param_1[0x31]) {
        FUN_005e9f20("m_rFTFontInfo.iPointSize < 64","..\\scilib\\scitext.cpp",0x15d);
      }
      local_2c = param_1[0x18] << 0x18 | (param_1[0x31] & 0x3fU) << 0x12 |
                 ((int)(uint)*(byte *)(param_1 + 0x32) >> 2) << 0xc |
                 ((int)(uint)*(byte *)((int)param_1 + 0xc9) >> 2) << 6 |
                 (int)(uint)*(byte *)((int)param_1 + 0xca) >> 2;
      local_20 = (int *)FUN_00603c50(0x53544e46,local_2c,0);
      if ((local_20 == (int *)0x0) || (iVar8 = (**(code **)(*local_20 + 4))(), iVar8 == 0)) {
        if (local_20 != (int *)0x0) {
          FUN_00604220(local_20);
        }
        pvVar6 = operator_new(800);
        local_8 = 0;
        if (pvVar6 == (void *)0x0) {
          local_e8 = (undefined4 *)0x0;
        }
        else {
          local_e8 = (undefined4 *)FUN_0061f3d0();
        }
        local_8 = 0xffffffff;
        local_3c = local_e8;
        if (local_e8 == (undefined4 *)0x0) {
          FUN_005e9f20("poNewTex","..\\scilib\\scitext.cpp",0x177);
        }
        local_38 = 0;
        local_28 = 0;
        local_30 = 0;
        memset(param_1 + 0x34,0,0x100);
        for (local_1c = 0; local_1c < 0x100; local_1c = local_1c + 1) {
          uVar4 = FUN_005ee4c0(local_1c,(-(uint)(*(char *)((int)param_1 + 0xcb) != '\0') &
                                        0xfffff000) + 0x1000 | 4);
          Ordinal_125(param_1[0x2f],uVar4);
          if (*(int *)(*(int *)(param_1[0x2f] + 0x54) + 0x68) < local_30) {
            local_ec = local_30;
          }
          else {
            local_ec = *(int *)(*(int *)(param_1[0x2f] + 0x54) + 0x68);
          }
          local_30 = local_ec;
          iVar8 = *(int *)(*(int *)(param_1[0x2f] + 0x54) + 0x1c) +
                  (((*(int *)(*(int *)(param_1[0x2f] + 0x54) + 0x1c) < 0) - 1 & 0x40) - 0x20);
          if ((((int)(iVar8 + (iVar8 >> 0x1f & 0x3fU)) >> 6) -
              *(int *)(*(int *)(param_1[0x2f] + 0x54) + 0x68)) + -1 < local_28) {
            local_f0 = local_28;
          }
          else {
            iVar8 = *(int *)(*(int *)(param_1[0x2f] + 0x54) + 0x1c) +
                    (((*(int *)(*(int *)(param_1[0x2f] + 0x54) + 0x1c) < 0) - 1 & 0x40) - 0x20);
            local_f0 = (((int)(iVar8 + (iVar8 >> 0x1f & 0x3fU)) >> 6) -
                       *(int *)(*(int *)(param_1[0x2f] + 0x54) + 0x68)) + -1;
          }
          local_28 = local_f0;
          if (*(int *)(*(int *)(param_1[0x2f] + 0x54) + 100) < 0) {
            local_f4 = (undefined1)*(undefined4 *)(*(int *)(param_1[0x2f] + 0x54) + 100);
          }
          else {
            local_f4 = 0;
          }
          *(undefined1 *)((int)param_1 + local_1c + 0xd0) = local_f4;
          if (*(int *)(*(int *)(param_1[0x2f] + 0x54) + 100) < 1) {
            local_f8 = 0;
          }
          else {
            local_f8 = *(int *)(*(int *)(param_1[0x2f] + 0x54) + 100);
          }
          iVar8 = *(int *)(*(int *)(param_1[0x2f] + 0x54) + 0x40) +
                  (((*(int *)(*(int *)(param_1[0x2f] + 0x54) + 0x40) < 0) - 1 & 0x40) - 0x20);
          if (((int)(iVar8 + (iVar8 >> 0x1f & 0x3fU)) >> 6) -
              (int)*(char *)((int)param_1 + local_1c + 0xd0) <
              (*(int *)(*(int *)(param_1[0x2f] + 0x54) + 0x50) -
              (int)*(char *)((int)param_1 + local_1c + 0xd0)) + local_f8) {
            if (*(int *)(*(int *)(param_1[0x2f] + 0x54) + 100) < 1) {
              local_fc = 0;
            }
            else {
              local_fc = *(int *)(*(int *)(param_1[0x2f] + 0x54) + 100);
            }
            local_100 = (*(int *)(*(int *)(param_1[0x2f] + 0x54) + 0x50) -
                        (int)*(char *)((int)param_1 + local_1c + 0xd0)) + local_fc;
          }
          else {
            iVar8 = *(int *)(*(int *)(param_1[0x2f] + 0x54) + 0x40) +
                    (((*(int *)(*(int *)(param_1[0x2f] + 0x54) + 0x40) < 0) - 1 & 0x40) - 0x20);
            local_100 = ((int)(iVar8 + (iVar8 >> 0x1f & 0x3fU)) >> 6) -
                        (int)*(char *)((int)param_1 + local_1c + 0xd0);
          }
          local_58 = local_100;
          if (*(int *)(*(int *)(param_1[0x2f] + 0x54) + 0x50) != 0) {
            if (local_100 <
                (*(int *)(*(int *)(param_1[0x2f] + 0x54) + 0x50) + 2) -
                (int)*(char *)((int)param_1 + local_1c + 0xd0)) {
              local_104 = local_100;
            }
            else {
              local_104 = (*(int *)(*(int *)(param_1[0x2f] + 0x54) + 0x50) + 2) -
                          (int)*(char *)((int)param_1 + local_1c + 0xd0);
            }
            local_58 = local_104;
          }
          if (local_58 < local_38) {
            local_108 = local_38;
          }
          else {
            local_108 = local_58;
          }
          local_38 = local_108;
        }
        local_34 = local_30 + 1 + local_28;
        if (local_34 == 0) {
          FUN_005e9f20("iHeight","..\\scilib\\scitext.cpp",0x18b);
        }
        local_54 = local_34 * 4 * local_38;
        lVar1 = (ulonglong)(uint)(local_34 * local_38) * 4;
        local_14 = operator_new(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
        *(short *)((int)param_1 + 0x96) = (short)local_34 + 1;
        for (local_1c = 0; local_1c < 0x100; local_1c = local_1c + 1) {
          local_5c = 1;
          local_6c = 8;
          uVar4 = FUN_005ee4c0(local_1c,(-(uint)(*(char *)((int)param_1 + 0xcb) != '\0') &
                                        0xfffff000) + 0x1000 | 4);
          Ordinal_125(param_1[0x2f],uVar4);
          local_74 = *(int *)(*(int *)(param_1[0x2f] + 0x54) + 0x58);
          local_78 = *(int *)(*(int *)(param_1[0x2f] + 0x54) + 0x54);
          if (*(int *)(*(int *)(param_1[0x2f] + 0x54) + 100) < 1) {
            local_10c = 0;
          }
          else {
            local_10c = *(int *)(*(int *)(param_1[0x2f] + 0x54) + 100);
          }
          iVar8 = (((*(int *)(*(int *)(param_1[0x2f] + 0x54) + 0x40) < 0) - 1 & 0x40) - 0x20) +
                  *(int *)(*(int *)(param_1[0x2f] + 0x54) + 0x40);
          if (((int)(iVar8 + (iVar8 >> 0x1f & 0x3fU)) >> 6) -
              (int)*(char *)((int)param_1 + local_1c + 0xd0) <
              (*(int *)(*(int *)(param_1[0x2f] + 0x54) + 0x50) -
              (int)*(char *)((int)param_1 + local_1c + 0xd0)) + local_10c) {
            if (*(int *)(*(int *)(param_1[0x2f] + 0x54) + 100) < 1) {
              local_110 = 0;
            }
            else {
              local_110 = *(int *)(*(int *)(param_1[0x2f] + 0x54) + 100);
            }
            local_114 = (*(int *)(*(int *)(param_1[0x2f] + 0x54) + 0x50) -
                        (int)*(char *)((int)param_1 + local_1c + 0xd0)) + local_110;
          }
          else {
            iVar8 = *(int *)(*(int *)(param_1[0x2f] + 0x54) + 0x40) +
                    (((*(int *)(*(int *)(param_1[0x2f] + 0x54) + 0x40) < 0) - 1 & 0x40) - 0x20);
            local_114 = ((int)(iVar8 + (iVar8 >> 0x1f & 0x3fU)) >> 6) -
                        (int)*(char *)((int)param_1 + local_1c + 0xd0);
          }
          local_18 = local_114;
          if (*(int *)(*(int *)(param_1[0x2f] + 0x54) + 0x50) != 0) {
            if (local_114 <
                (*(int *)(*(int *)(param_1[0x2f] + 0x54) + 0x50) + 2) -
                (int)*(char *)((int)param_1 + local_1c + 0xd0)) {
              local_118 = local_114;
            }
            else {
              local_118 = (*(int *)(*(int *)(param_1[0x2f] + 0x54) + 0x50) + 2) -
                          (int)*(char *)((int)param_1 + local_1c + 0xd0);
            }
            local_18 = local_118;
          }
          if (local_18 < 1) {
            FUN_005e9f20("iWidth > 0","..\\scilib\\scitext.cpp",0x1a7);
          }
          if (local_18 == 0) {
            local_18 = 1;
          }
          if (-1 < local_18) {
            memset(local_14,0,local_54);
            if (local_30 < *(int *)(*(int *)(param_1[0x2f] + 0x54) + 0x68)) {
              FUN_005e9f20("m_hFTFace->glyph->bitmap_top <= iHeightAboveBase",
                           "..\\scilib\\scitext.cpp",0x1b0);
            }
            local_60 = 0;
            local_70 = local_30 - *(int *)(*(int *)(param_1[0x2f] + 0x54) + 0x68);
            for (; local_60 < *(int *)(*(int *)(param_1[0x2f] + 0x54) + 0x4c);
                local_60 = local_60 + 1) {
              local_64 = 0;
              if (*(int *)(*(int *)(param_1[0x2f] + 0x54) + 100) < 1) {
                local_11c = 0;
              }
              else {
                local_11c = *(int *)(*(int *)(param_1[0x2f] + 0x54) + 100);
              }
              local_68 = local_11c;
              for (; (int)local_64 < *(int *)(*(int *)(param_1[0x2f] + 0x54) + 0x50);
                  local_64 = local_64 + 1) {
                if (local_68 < 0) {
                  FUN_005e9f20("iXDest >= 0","..\\scilib\\scitext.cpp",0x1b3);
                }
                if (*(char *)(*(int *)(param_1[0x2f] + 0x54) + 0x5e) == '\x01') {
                  uVar3 = local_64 & 0x80000007;
                  if ((int)uVar3 < 0) {
                    uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
                  }
                  *(byte *)((int)local_14 + (local_70 * local_18 + local_68) * 4 + 3) =
                       *(byte *)(((int)(local_64 + ((int)local_64 >> 0x1f & 7U)) >> 3) + local_74 +
                                local_60 * local_78) & (byte)(0x80 >> ((byte)uVar3 & 0x1f));
                  *(char *)((int)local_14 + (local_70 * local_18 + local_68) * 4 + 3) =
                       -(*(char *)((int)local_14 + (local_70 * local_18 + local_68) * 4 + 3) != '\0'
                        );
                }
                else {
                  *(undefined1 *)((int)local_14 + (local_70 * local_18 + local_68) * 4 + 3) =
                       *(undefined1 *)(local_74 + local_60 * local_78 + local_64);
                }
                *(undefined1 *)((int)local_14 + (local_70 * local_18 + local_68) * 4 + 2) =
                     *(undefined1 *)((int)param_1 + 0xca);
                *(undefined1 *)((int)local_14 + (local_70 * local_18 + local_68) * 4 + 1) =
                     *(undefined1 *)((int)param_1 + 0xc9);
                *(char *)((int)local_14 + (local_70 * local_18 + local_68) * 4) =
                     (char)param_1[0x32];
                local_68 = local_68 + 1;
              }
              local_70 = local_70 + 1;
            }
            FUN_006209d0(local_14,local_18,local_34,4,0,1);
          }
        }
        operator_delete(local_14);
        FUN_00620fe0(4,1);
        uVar3 = FUN_00620540();
        local_24 = operator_new(uVar3);
        local_50 = FUN_006201c0(local_24);
        local_2c = param_1[0x18] << 0x18 | (param_1[0x31] & 0x3fU) << 0x12 |
                   ((int)(uint)*(byte *)(param_1 + 0x32) >> 2) << 0xc |
                   ((int)(uint)*(byte *)((int)param_1 + 0xc9) >> 2) << 6 |
                   (int)(uint)*(byte *)((int)param_1 + 0xca) >> 2;
        pvVar6 = operator_new(0x96c);
        local_8 = 1;
        if (pvVar6 == (void *)0x0) {
          local_120 = 0;
        }
        else {
          local_120 = FUN_005ec560(0x53544e46,local_2c,local_24,local_50,
                                   *(undefined4 *)(DAT_007960d8 + 0x18));
        }
        local_8 = 0xffffffff;
        param_1[0x2c] = local_120;
        FUN_00603ae0(param_1[0x2c]);
        FUN_0061f1c0(0,param_1 + 0x34,1,0x100,1,1);
        FUN_0061f1c0(1,(int)param_1 + 0x96,1,2,1,1);
        FUN_0061f1c0(2,param_1 + 0x30,1,0x10,0,1);
        operator_delete(local_24);
        if (local_3c != (undefined4 *)0x0) {
          (**(code **)*local_3c)(1);
        }
      }
      else {
        _Size = 0x100;
        pvVar6 = (void *)FUN_0061f2a0(0);
        memcpy(param_1 + 0x34,pvVar6,_Size);
        puVar7 = (undefined2 *)FUN_0061f2a0(1);
        *(undefined2 *)((int)param_1 + 0x96) = *puVar7;
        piVar5 = (int *)FUN_0061f2a0(2);
        param_1[0x30] = *piVar5;
        param_1[0x31] = piVar5[1];
        param_1[0x32] = piVar5[2];
        param_1[0x33] = piVar5[3];
        param_1[0x2c] = (int)local_20;
      }
    }
  }
  else {
    iVar8 = FUN_00603c50(0x20584554,param_1[0x23],0);
    param_1[0x2c] = iVar8;
    param_1[0x19] = 2;
  }
  if (param_1[0x21] != -1) {
    *(short *)((int)param_1 + 0x96) = (short)param_1[0x21];
  }
  (**(code **)(*param_1 + 0xac))();
  ExceptionList = local_10;
  return;
}

