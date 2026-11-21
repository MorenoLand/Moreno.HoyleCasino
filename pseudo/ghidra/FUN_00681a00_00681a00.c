// FUN_00681a00  00681a00

int FUN_00681a00(int *param_1,int param_2)

{
  byte *pbVar1;
  undefined1 uVar2;
  uint *puVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  uint extraout_EDX;
  uint uVar11;
  uint uVar12;
  byte *_Src;
  int iVar13;
  undefined1 *puVar14;
  uint local_2c;
  undefined4 local_28;
  uint local_24;
  uint local_20;
  char local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 *local_18;
  undefined1 *local_14;
  uint local_10;
  int local_c;
  uint local_8;
  uint local_4;
  
  if ((((param_1 == (int *)0x0) || (puVar3 = (uint *)param_1[7], puVar3 == (uint *)0x0)) ||
      (param_1[3] == 0)) || ((*param_1 == 0 && (param_1[1] != 0)))) {
    return -2;
  }
  if (*puVar3 == 0xb) {
    *puVar3 = 0xc;
  }
  local_14 = (undefined1 *)param_1[3];
  uVar7 = param_1[1];
  uVar12 = puVar3[0xe];
  _Src = (byte *)*param_1;
  local_20 = param_1[4];
  uVar5 = *puVar3;
  puVar14 = (undefined1 *)puVar3[0xf];
  local_c = 0;
  local_2c = uVar7;
  local_4 = uVar7;
  local_24 = uVar12;
  local_10 = local_20;
  do {
    if (0x1c < uVar5) {
      return -2;
    }
    uVar11 = uVar7;
    switch(uVar5) {
    case 0:
      uVar5 = uVar7;
      if (puVar3[2] == 0) {
        *puVar3 = 0xc;
      }
      else {
        for (; uVar7 = local_2c, puVar14 < (undefined1 *)0x10; puVar14 = puVar14 + 8) {
          uVar11 = 0;
          if (uVar5 == 0) goto LAB_00682e5c;
          bVar10 = *_Src;
          uVar5 = uVar5 - 1;
          _Src = _Src + 1;
          uVar12 = uVar12 + ((uint)bVar10 << ((byte)puVar14 & 0x1f));
          local_2c = uVar5;
          local_24 = uVar12;
        }
        local_2c = uVar7;
        if (((puVar3[2] & 2) == 0) || (uVar12 != 0x8b1f)) {
          puVar3[4] = 0;
          if (puVar3[8] != 0) {
            *(undefined4 *)(puVar3[8] + 0x30) = 0xffffffff;
          }
          if (((puVar3[2] & 1) == 0) || (((uVar12 & 0xff) * 0x100 + (uVar12 >> 8)) % 0x1f != 0)) {
            param_1[6] = (int)"incorrect header check";
          }
          else if (((byte)uVar12 & 0xf) == 8) {
            local_24 = uVar12 >> 4;
            uVar5 = (local_24 & 0xf) + 8;
            puVar14 = puVar14 + -4;
            if (uVar5 <= puVar3[9]) {
              puVar3[5] = 1 << (sbyte)uVar5;
              uVar5 = FUN_00683a20(0,0,0);
              puVar3[6] = uVar5;
              param_1[0xc] = uVar5;
              *puVar3 = ~(uVar12 >> 0xc) & 2 | 9;
              uVar12 = 0;
              local_24 = 0;
              puVar14 = (undefined1 *)0x0;
              break;
            }
            param_1[6] = (int)"invalid window size";
            uVar12 = local_24;
          }
          else {
            param_1[6] = (int)"unknown compression method";
          }
          goto LAB_00682df8;
        }
        uVar5 = FUN_00683f40(0,0,0);
        puVar3[6] = uVar5;
        local_1c = '\x1f';
        local_1b = 0x8b;
        uVar5 = FUN_00683f40(puVar3[6],&local_1c,2);
        uVar12 = 0;
        puVar3[6] = uVar5;
        local_24 = 0;
        puVar14 = (undefined1 *)0x0;
        *puVar3 = 1;
      }
      break;
    case 1:
      for (; puVar14 < (undefined1 *)0x10; puVar14 = puVar14 + 8) {
        uVar11 = 0;
        if (uVar7 == 0) goto LAB_00682e5c;
        bVar10 = *_Src;
        uVar7 = uVar7 - 1;
        _Src = _Src + 1;
        uVar12 = uVar12 + ((uint)bVar10 << ((byte)puVar14 & 0x1f));
        local_2c = uVar7;
        local_24 = uVar12;
      }
      puVar3[4] = uVar12;
      if ((char)uVar12 == '\b') {
        if ((uVar12 & 0xe000) == 0) {
          if ((uint *)puVar3[8] != (uint *)0x0) {
            *(uint *)puVar3[8] = uVar12 >> 8 & 1;
          }
          if ((puVar3[4] & 0x200) != 0) {
            local_1b = (undefined1)(uVar12 >> 8);
            local_1c = (char)uVar12;
            uVar7 = FUN_00683f40(puVar3[6],&local_1c,2);
            puVar3[6] = uVar7;
            uVar7 = local_2c;
          }
          uVar12 = 0;
          puVar14 = (undefined1 *)0x0;
          *puVar3 = 2;
          do {
            uVar11 = 0;
            if (uVar7 == 0) goto LAB_00682e5c;
            bVar10 = *_Src;
            bVar9 = (byte)puVar14;
            uVar7 = uVar7 - 1;
            puVar14 = puVar14 + 8;
            _Src = _Src + 1;
            uVar12 = uVar12 + ((uint)bVar10 << (bVar9 & 0x1f));
            local_2c = uVar7;
joined_r0x00681ca6:
          } while (puVar14 < (undefined1 *)0x20);
          if (puVar3[8] != 0) {
            *(uint *)(puVar3[8] + 4) = uVar12;
          }
          if ((puVar3[4] & 0x200) != 0) {
            local_1c = (char)uVar12;
            local_1b = (undefined1)(uVar12 >> 8);
            local_1a = (undefined1)(uVar12 >> 0x10);
            local_19 = (undefined1)(uVar12 >> 0x18);
            uVar7 = FUN_00683f40(puVar3[6],&local_1c,4);
            puVar3[6] = uVar7;
            uVar7 = local_2c;
          }
          uVar12 = 0;
          puVar14 = (undefined1 *)0x0;
          *puVar3 = 3;
          do {
            uVar11 = 0;
            if (uVar7 == 0) goto LAB_00682e5c;
            bVar10 = *_Src;
            bVar9 = (byte)puVar14;
            uVar7 = uVar7 - 1;
            puVar14 = puVar14 + 8;
            _Src = _Src + 1;
            uVar12 = uVar12 + ((uint)bVar10 << (bVar9 & 0x1f));
            local_2c = uVar7;
joined_r0x00681d25:
          } while (puVar14 < (undefined1 *)0x10);
          if (puVar3[8] != 0) {
            *(uint *)(puVar3[8] + 8) = uVar12 & 0xff;
            *(uint *)(puVar3[8] + 0xc) = uVar12 >> 8;
          }
          if ((puVar3[4] & 0x200) != 0) {
            local_1c = (char)uVar12;
            local_1b = (undefined1)(uVar12 >> 8);
            uVar7 = FUN_00683f40(puVar3[6],&local_1c,2);
            puVar3[6] = uVar7;
            uVar7 = local_2c;
          }
          uVar12 = 0;
          local_24 = 0;
          puVar14 = (undefined1 *)0x0;
          *puVar3 = 4;
          goto switchD_00681a80_caseD_4;
        }
        param_1[6] = (int)"unknown header flags set";
      }
      else {
        param_1[6] = (int)"unknown compression method";
      }
      goto LAB_00682df8;
    case 2:
      goto joined_r0x00681ca6;
    case 3:
      goto joined_r0x00681d25;
    case 4:
switchD_00681a80_caseD_4:
      if ((puVar3[4] & 0x400) == 0) {
        if (puVar3[8] != 0) {
          *(undefined4 *)(puVar3[8] + 0x10) = 0;
        }
      }
      else {
        for (; puVar14 < (undefined1 *)0x10; puVar14 = puVar14 + 8) {
          uVar11 = 0;
          if (uVar7 == 0) goto LAB_00682e5c;
          bVar10 = *_Src;
          uVar7 = uVar7 - 1;
          _Src = _Src + 1;
          uVar12 = uVar12 + ((uint)bVar10 << ((byte)puVar14 & 0x1f));
          local_2c = uVar7;
        }
        puVar3[0x10] = uVar12;
        if (puVar3[8] != 0) {
          *(uint *)(puVar3[8] + 0x14) = uVar12;
        }
        if ((puVar3[4] & 0x200) != 0) {
          local_1c = (char)uVar12;
          local_1b = (undefined1)(uVar12 >> 8);
          uVar7 = FUN_00683f40(puVar3[6],&local_1c,2);
          puVar3[6] = uVar7;
          uVar7 = local_2c;
        }
        uVar12 = 0;
        local_24 = 0;
        puVar14 = (undefined1 *)0x0;
      }
      *puVar3 = 5;
      uVar11 = uVar7;
    case 5:
      if ((puVar3[4] & 0x400) == 0) {
LAB_00681ede:
        puVar3[0x10] = 0;
        *puVar3 = 6;
switchD_00681a80_caseD_6:
        if ((puVar3[4] & 0x800) == 0) {
          if (puVar3[8] != 0) {
            *(undefined4 *)(puVar3[8] + 0x1c) = 0;
          }
LAB_00681f96:
          puVar3[0x10] = 0;
          *puVar3 = 7;
switchD_00681a80_caseD_7:
          if ((puVar3[4] & 0x1000) == 0) {
            if (puVar3[8] != 0) {
              *(undefined4 *)(puVar3[8] + 0x24) = 0;
            }
LAB_00682054:
            *puVar3 = 8;
switchD_00681a80_caseD_8:
            uVar7 = uVar11;
            if ((puVar3[4] & 0x200) != 0) {
              for (; puVar14 < (undefined1 *)0x10; puVar14 = puVar14 + 8) {
                uVar11 = 0;
                if (uVar7 == 0) goto LAB_00682e5c;
                bVar10 = *_Src;
                local_2c = uVar7 - 1;
                _Src = _Src + 1;
                uVar12 = uVar12 + ((uint)bVar10 << ((byte)puVar14 & 0x1f));
                uVar7 = local_2c;
                local_24 = uVar12;
              }
              if (uVar12 != (ushort)puVar3[6]) {
                param_1[6] = (int)"header crc mismatch";
                goto LAB_00682df8;
              }
              uVar12 = 0;
              local_24 = 0;
              puVar14 = (undefined1 *)0x0;
            }
            if (puVar3[8] != 0) {
              *(uint *)(puVar3[8] + 0x2c) = (int)puVar3[4] >> 9 & 1;
              *(undefined4 *)(puVar3[8] + 0x30) = 1;
            }
            uVar7 = FUN_00683f40(0,0,0);
            puVar3[6] = uVar7;
            param_1[0xc] = uVar7;
            *puVar3 = 0xb;
            uVar7 = local_2c;
            break;
          }
          if (uVar11 != 0) {
            uVar7 = 0;
            do {
              pbVar1 = _Src + uVar7;
              local_18 = (undefined1 *)(uint)*pbVar1;
              uVar7 = uVar7 + 1;
              uVar5 = puVar3[8];
              if (((uVar5 != 0) && (local_8 = *(uint *)(uVar5 + 0x24), local_8 != 0)) &&
                 (puVar3[0x10] < *(uint *)(uVar5 + 0x28))) {
                *(byte *)(local_8 + puVar3[0x10]) = *pbVar1;
                puVar3[0x10] = puVar3[0x10] + 1;
                uVar11 = local_2c;
              }
            } while ((local_18 != (undefined1 *)0x0) && (uVar7 < uVar11));
            if ((puVar3[4] & 0x200) != 0) {
              uVar5 = FUN_00683f40(puVar3[6],_Src,uVar7);
              puVar3[6] = uVar5;
              uVar11 = local_2c;
            }
            uVar11 = uVar11 - uVar7;
            _Src = _Src + uVar7;
            local_2c = uVar11;
            if (local_18 == (undefined1 *)0x0) goto LAB_00682054;
          }
        }
        else if (uVar11 != 0) {
          uVar7 = 0;
          do {
            pbVar1 = _Src + uVar7;
            local_18 = (undefined1 *)(uint)*pbVar1;
            uVar7 = uVar7 + 1;
            uVar5 = puVar3[8];
            if (((uVar5 != 0) && (local_8 = *(uint *)(uVar5 + 0x1c), local_8 != 0)) &&
               (puVar3[0x10] < *(uint *)(uVar5 + 0x20))) {
              *(byte *)(local_8 + puVar3[0x10]) = *pbVar1;
              puVar3[0x10] = puVar3[0x10] + 1;
              uVar11 = local_2c;
            }
          } while ((local_18 != (undefined1 *)0x0) && (uVar7 < uVar11));
          if ((puVar3[4] & 0x200) != 0) {
            uVar5 = FUN_00683f40(puVar3[6],_Src,uVar7);
            puVar3[6] = uVar5;
            uVar11 = local_2c;
          }
          uVar11 = uVar11 - uVar7;
          _Src = _Src + uVar7;
          local_2c = uVar11;
          if (local_18 == (undefined1 *)0x0) goto LAB_00681f96;
        }
      }
      else {
        uVar7 = puVar3[0x10];
        if (uVar11 < puVar3[0x10]) {
          uVar7 = uVar11;
        }
        if (uVar7 != 0) {
          if ((puVar3[8] != 0) && (local_8 = *(uint *)(puVar3[8] + 0x10), local_8 != 0)) {
            local_18 = (undefined1 *)(*(int *)(puVar3[8] + 0x14) - puVar3[0x10]);
            uVar5 = uVar7;
            if (*(undefined1 **)(puVar3[8] + 0x18) < local_18 + uVar7) {
              uVar5 = (int)*(undefined1 **)(puVar3[8] + 0x18) - (int)local_18;
            }
            memcpy(local_18 + local_8,_Src,uVar5);
            uVar11 = local_2c;
          }
          if ((puVar3[4] & 0x200) != 0) {
            uVar5 = FUN_00683f40(puVar3[6],_Src,uVar7);
            puVar3[6] = uVar5;
            uVar11 = local_2c;
          }
          uVar11 = uVar11 - uVar7;
          _Src = _Src + uVar7;
          puVar3[0x10] = puVar3[0x10] - uVar7;
          local_2c = uVar11;
        }
        if (puVar3[0x10] == 0) goto LAB_00681ede;
      }
LAB_00682e5c:
      param_1[3] = (int)local_14;
      param_1[4] = local_20;
      *param_1 = (int)_Src;
      param_1[1] = uVar11;
      puVar3[0xe] = uVar12;
      puVar3[0xf] = (uint)puVar14;
      if (((puVar3[10] == 0) && ((0x17 < (int)*puVar3 || (local_10 == param_1[4])))) ||
         (iVar6 = FUN_00681910(), iVar6 == 0)) {
        iVar13 = local_4 - param_1[1];
        iVar6 = local_10 - param_1[4];
        param_1[2] = param_1[2] + iVar13;
        param_1[5] = param_1[5] + iVar6;
        puVar3[7] = puVar3[7] + iVar6;
        if ((puVar3[2] != 0) && (iVar6 != 0)) {
          if (puVar3[4] == 0) {
            uVar7 = FUN_00683a20(puVar3[6],param_1[3] - iVar6,iVar6);
          }
          else {
            uVar7 = FUN_00683f40(puVar3[6],param_1[3] - iVar6);
          }
          puVar3[6] = uVar7;
          param_1[0xc] = uVar7;
        }
        param_1[0xb] = (-(uint)(puVar3[1] != 0) & 0x40) + ((*puVar3 != 0xb) - 1 & 0x80) +
                       puVar3[0xf];
        if (((iVar13 != 0) || (iVar6 != 0)) && (param_2 != 4)) {
          return local_c;
        }
        if (local_c != 0) {
          return local_c;
        }
        return -5;
      }
      *puVar3 = 0x1c;
switchD_00681a80_caseD_1c:
      return -4;
    case 6:
      goto switchD_00681a80_caseD_6;
    case 7:
      goto switchD_00681a80_caseD_7;
    case 8:
      goto switchD_00681a80_caseD_8;
    case 9:
      for (; puVar14 < (undefined1 *)0x20; puVar14 = puVar14 + 8) {
        uVar11 = 0;
        if (uVar7 == 0) goto LAB_00682e5c;
        bVar10 = *_Src;
        uVar7 = uVar7 - 1;
        _Src = _Src + 1;
        uVar12 = uVar12 + ((uint)bVar10 << ((byte)puVar14 & 0x1f));
        local_2c = uVar7;
        local_24 = uVar12;
      }
      uVar5 = ((uVar12 & 0xff00) + uVar12 * 0x10000) * 0x100 + (local_24 >> 0x10 & 0xff) * 0x100 +
              (uVar12 >> 0x18);
      puVar3[6] = uVar5;
      param_1[0xc] = uVar5;
      uVar12 = 0;
      puVar14 = (undefined1 *)0x0;
      *puVar3 = 10;
    case 10:
      if (puVar3[3] == 0) {
        param_1[3] = (int)local_14;
        *param_1 = (int)_Src;
        param_1[4] = local_20;
        param_1[1] = uVar7;
        puVar3[0xf] = (uint)puVar14;
        puVar3[0xe] = uVar12;
        return 2;
      }
      uVar7 = FUN_00683a20(0,0,0);
      puVar3[6] = uVar7;
      param_1[0xc] = uVar7;
      *puVar3 = 0xb;
      uVar11 = local_2c;
switchD_00681a80_caseD_b:
      if (param_2 != 5) {
switchD_00681a80_caseD_c:
        uVar7 = uVar11;
        if (puVar3[1] == 0) {
          for (; puVar14 < (undefined1 *)0x3; puVar14 = puVar14 + 8) {
            uVar11 = 0;
            if (uVar7 == 0) goto LAB_00682e5c;
            bVar10 = *_Src;
            local_2c = uVar7 - 1;
            _Src = _Src + 1;
            uVar12 = uVar12 + ((uint)bVar10 << ((byte)puVar14 & 0x1f));
            uVar7 = local_2c;
          }
          puVar3[1] = uVar12 & 1;
          switch(uVar12 >> 1 & 3) {
          case 0:
            uVar12 = uVar12 >> 3;
            *puVar3 = 0xd;
            puVar14 = puVar14 + -3;
            local_24 = uVar12;
            break;
          case 1:
            FUN_006818f0();
            uVar12 = uVar12 >> 3;
            *puVar3 = 0x12;
            puVar14 = puVar14 + -3;
            uVar7 = extraout_EDX;
            local_24 = uVar12;
            break;
          case 2:
            uVar12 = uVar12 >> 3;
            *puVar3 = 0xf;
            puVar14 = puVar14 + -3;
            local_24 = uVar12;
            break;
          case 3:
            param_1[6] = (int)"invalid block type";
            *puVar3 = 0x1b;
          default:
            uVar12 = uVar12 >> 3;
            puVar14 = puVar14 + -3;
            local_24 = uVar12;
          }
        }
        else {
          uVar12 = uVar12 >> (sbyte)((uint)puVar14 & 7);
          puVar14 = puVar14 + -((uint)puVar14 & 7);
          *puVar3 = 0x18;
          local_24 = uVar12;
        }
        break;
      }
      goto LAB_00682e5c;
    case 0xb:
      goto switchD_00681a80_caseD_b;
    case 0xc:
      goto switchD_00681a80_caseD_c;
    case 0xd:
      uVar12 = uVar12 >> (sbyte)((uint)puVar14 & 7);
      for (puVar14 = puVar14 + -((uint)puVar14 & 7); puVar14 < (undefined1 *)0x20;
          puVar14 = puVar14 + 8) {
        uVar11 = 0;
        if (uVar7 == 0) goto LAB_00682e5c;
        bVar10 = *_Src;
        uVar7 = uVar7 - 1;
        _Src = _Src + 1;
        uVar12 = uVar12 + ((uint)bVar10 << ((byte)puVar14 & 0x1f));
        local_2c = uVar7;
      }
      uVar5 = uVar12 & 0xffff;
      if (uVar5 == ~uVar12 >> 0x10) {
        uVar12 = 0;
        puVar3[0x10] = uVar5;
        local_24 = 0;
        puVar14 = (undefined1 *)0x0;
        *puVar3 = 0xe;
        uVar11 = uVar7;
        goto switchD_00681a80_caseD_e;
      }
      param_1[6] = (int)"invalid stored block lengths";
      local_24 = uVar12;
      goto LAB_00682df8;
    case 0xe:
switchD_00681a80_caseD_e:
      local_28 = puVar3[0x10];
      if (local_28 == 0) {
LAB_0068298c:
        *puVar3 = 0xb;
        uVar7 = uVar11;
      }
      else {
        if (uVar11 < local_28) {
          local_28 = uVar11;
        }
        if (local_20 < local_28) {
          local_28 = local_20;
        }
        if (local_28 == 0) goto LAB_00682e5c;
        memcpy(local_14,_Src,local_28);
        local_20 = local_20 - local_28;
        local_14 = local_14 + local_28;
        _Src = _Src + local_28;
        puVar3[0x10] = puVar3[0x10] - local_28;
        uVar7 = local_2c - local_28;
        local_2c = local_2c - local_28;
      }
      break;
    case 0xf:
      for (; puVar14 < (undefined1 *)0xe; puVar14 = puVar14 + 8) {
        uVar11 = 0;
        if (uVar7 == 0) goto LAB_00682e5c;
        bVar10 = *_Src;
        uVar7 = uVar7 - 1;
        _Src = _Src + 1;
        uVar12 = uVar12 + ((uint)bVar10 << ((byte)puVar14 & 0x1f));
        local_2c = uVar7;
      }
      puVar3[0x18] = (uVar12 & 0x1f) + 0x101;
      uVar11 = uVar12 >> 10;
      uVar5 = (uVar12 >> 5 & 0x1f) + 1;
      uVar12 = uVar12 >> 0xe;
      puVar14 = puVar14 + -0xe;
      puVar3[0x19] = uVar5;
      puVar3[0x17] = (uVar11 & 0xf) + 4;
      local_24 = uVar12;
      if ((puVar3[0x18] < 0x11f) && (uVar5 < 0x1f)) {
        puVar3[0x1a] = 0;
        *puVar3 = 0x10;
        goto switchD_00681a80_caseD_10;
      }
      param_1[6] = (int)"too many length or distance symbols";
      goto LAB_00682df8;
    case 0x10:
switchD_00681a80_caseD_10:
      if (puVar3[0x1a] < puVar3[0x17]) {
        do {
          for (; puVar14 < (undefined1 *)0x3; puVar14 = puVar14 + 8) {
            uVar11 = 0;
            if (uVar7 == 0) goto LAB_00682e5c;
            bVar10 = *_Src;
            uVar7 = uVar7 - 1;
            _Src = _Src + 1;
            uVar12 = uVar12 + ((uint)bVar10 << ((byte)puVar14 & 0x1f));
            local_2c = uVar7;
          }
          *(ushort *)((int)puVar3 + (uint)*(ushort *)(&DAT_006e2bd0 + puVar3[0x1a] * 2) * 2 + 0x70)
               = (ushort)uVar12 & 7;
          puVar3[0x1a] = puVar3[0x1a] + 1;
          uVar12 = uVar12 >> 3;
          puVar14 = puVar14 + -3;
          local_24 = uVar12;
        } while (puVar3[0x1a] < puVar3[0x17]);
      }
      uVar7 = puVar3[0x1a];
      while (uVar7 < 0x13) {
        *(undefined2 *)
         ((int)puVar3 + (uint)*(ushort *)(&DAT_006e2bd0 + puVar3[0x1a] * 2) * 2 + 0x70) = 0;
        puVar3[0x1a] = puVar3[0x1a] + 1;
        uVar7 = puVar3[0x1a];
      }
      puVar3[0x1b] = (uint)(puVar3 + 0x14c);
      puVar3[0x13] = (uint)(puVar3 + 0x14c);
      puVar3[0x15] = 7;
      local_c = FUN_00683530(0,puVar3 + 0x1c,0x13,puVar3 + 0x1b,puVar3 + 0x15,puVar3 + 0xbc);
      uVar7 = local_2c;
      if (local_c == 0) {
        puVar3[0x1a] = 0;
        *puVar3 = 0x11;
        goto switchD_00681a80_caseD_11;
      }
      param_1[6] = (int)"invalid code lengths set";
LAB_00682df8:
      *puVar3 = 0x1b;
      break;
    case 0x11:
switchD_00681a80_caseD_11:
      if (puVar3[0x1a] < puVar3[0x19] + puVar3[0x18]) {
        do {
          uVar5 = *(uint *)(puVar3[0x13] + ((1 << ((byte)puVar3[0x15] & 0x1f)) - 1U & uVar12) * 4);
          if (puVar14 < (undefined1 *)(uVar5 >> 8 & 0xff)) {
            do {
              uVar11 = 0;
              if (uVar7 == 0) goto LAB_00682e5c;
              bVar10 = (byte)puVar14;
              uVar7 = uVar7 - 1;
              puVar14 = puVar14 + 8;
              uVar12 = uVar12 + ((uint)*_Src << (bVar10 & 0x1f));
              _Src = _Src + 1;
              uVar5 = *(uint *)(puVar3[0x13] +
                               ((1 << ((byte)puVar3[0x15] & 0x1f)) - 1U & uVar12) * 4);
              local_2c = uVar7;
            } while (puVar14 < (undefined1 *)(uVar5 >> 8 & 0xff));
          }
          local_28._2_2_ = (short)(uVar5 >> 0x10);
          bVar10 = (byte)(uVar5 >> 8);
          if (uVar5 >> 0x10 < 0x10) {
            if (puVar14 < (undefined1 *)(uVar5 >> 8 & 0xff)) {
              do {
                uVar11 = 0;
                if (uVar7 == 0) goto LAB_00682e5c;
                bVar9 = *_Src;
                bVar8 = (byte)puVar14;
                uVar7 = uVar7 - 1;
                puVar14 = puVar14 + 8;
                _Src = _Src + 1;
                uVar12 = uVar12 + ((uint)bVar9 << (bVar8 & 0x1f));
                local_2c = uVar7;
              } while (puVar14 < (undefined1 *)(uVar5 >> 8 & 0xff));
            }
            local_24 = uVar12 >> (bVar10 & 0x1f);
            puVar14 = puVar14 + -(uVar5 >> 8 & 0xff);
            *(short *)((int)puVar3 + puVar3[0x1a] * 2 + 0x70) = local_28._2_2_;
            puVar3[0x1a] = puVar3[0x1a] + 1;
          }
          else {
            if (local_28._2_2_ == 0x10) {
              local_18 = (undefined1 *)(uVar5 >> 8 & 0xff);
              if (puVar14 < local_18 + 2) {
                do {
                  uVar11 = 0;
                  if (uVar7 == 0) goto LAB_00682e5c;
                  bVar9 = (byte)puVar14;
                  uVar7 = uVar7 - 1;
                  puVar14 = puVar14 + 8;
                  uVar12 = uVar12 + ((uint)*_Src << (bVar9 & 0x1f));
                  _Src = _Src + 1;
                  local_2c = uVar7;
                } while (puVar14 < local_18 + 2);
              }
              uVar12 = uVar12 >> (bVar10 & 0x1f);
              puVar14 = puVar14 + -(int)local_18;
              if (puVar3[0x1a] == 0) {
                param_1[6] = (int)"invalid bit length repeat";
                local_24 = uVar12;
                goto LAB_00682df8;
              }
              local_18 = (undefined1 *)(uint)*(ushort *)((int)puVar3 + puVar3[0x1a] * 2 + 0x6e);
              local_28 = (uVar12 & 3) + 3;
              local_24 = uVar12 >> 2;
              puVar14 = puVar14 + -2;
            }
            else {
              local_18 = (undefined1 *)(uVar5 >> 8 & 0xff);
              if (local_28._2_2_ == 0x11) {
                if (puVar14 < local_18 + 3) {
                  do {
                    uVar11 = 0;
                    if (uVar7 == 0) goto LAB_00682e5c;
                    bVar9 = (byte)puVar14;
                    uVar7 = uVar7 - 1;
                    puVar14 = puVar14 + 8;
                    uVar12 = uVar12 + ((uint)*_Src << (bVar9 & 0x1f));
                    _Src = _Src + 1;
                    local_2c = uVar7;
                  } while (puVar14 < local_18 + 3);
                }
                uVar12 = uVar12 >> (bVar10 & 0x1f);
                local_28 = (uVar12 & 7) + 3;
                local_24 = uVar12 >> 3;
                iVar6 = -3;
              }
              else {
                if (puVar14 < local_18 + 7) {
                  do {
                    uVar11 = 0;
                    if (uVar7 == 0) goto LAB_00682e5c;
                    bVar9 = (byte)puVar14;
                    uVar7 = uVar7 - 1;
                    puVar14 = puVar14 + 8;
                    uVar12 = uVar12 + ((uint)*_Src << (bVar9 & 0x1f));
                    _Src = _Src + 1;
                    local_2c = uVar7;
                  } while (puVar14 < local_18 + 7);
                }
                uVar12 = uVar12 >> (bVar10 & 0x1f);
                local_28 = (uVar12 & 0x7f) + 0xb;
                local_24 = uVar12 >> 7;
                iVar6 = -7;
              }
              puVar14 = puVar14 + (iVar6 - (int)local_18);
              local_18 = (undefined1 *)0x0;
            }
            if (puVar3[0x19] + puVar3[0x18] < puVar3[0x1a] + local_28) {
              param_1[6] = (int)"invalid bit length repeat";
              uVar12 = local_24;
              goto LAB_00682df8;
            }
            for (; local_28 != 0; local_28 = local_28 + -1) {
              *(short *)((int)puVar3 + puVar3[0x1a] * 2 + 0x70) = (short)local_18;
              puVar3[0x1a] = puVar3[0x1a] + 1;
            }
          }
          uVar12 = local_24;
        } while (puVar3[0x1a] < puVar3[0x19] + puVar3[0x18]);
      }
      if (*puVar3 != 0x1b) {
        puVar3[0x1b] = (uint)(puVar3 + 0x14c);
        puVar3[0x13] = (uint)(puVar3 + 0x14c);
        puVar3[0x15] = 9;
        local_c = FUN_00683530(1,puVar3 + 0x1c,puVar3[0x18],puVar3 + 0x1b,puVar3 + 0x15,
                               puVar3 + 0xbc);
        uVar7 = local_2c;
        if (local_c == 0) {
          puVar3[0x14] = puVar3[0x1b];
          puVar3[0x16] = 6;
          local_c = FUN_00683530(2,(int)puVar3 + puVar3[0x18] * 2 + 0x70,puVar3[0x19],puVar3 + 0x1b,
                                 puVar3 + 0x16,puVar3 + 0xbc);
          if (local_c == 0) {
            *puVar3 = 0x12;
            goto switchD_00681a80_caseD_12;
          }
          param_1[6] = (int)&DAT_006e2c7c;
        }
        else {
          param_1[6] = (int)"invalid literal/lengths set";
        }
        goto LAB_00682df8;
      }
      break;
    case 0x12:
switchD_00681a80_caseD_12:
      if ((uVar7 < 6) || (local_20 < 0x102)) {
        uVar5 = *(uint *)(puVar3[0x13] + ((1 << ((byte)puVar3[0x15] & 0x1f)) - 1U & uVar12) * 4);
        if (puVar14 < (undefined1 *)(uVar5 >> 8 & 0xff)) {
          do {
            uVar11 = 0;
            if (uVar7 == 0) goto LAB_00682e5c;
            bVar10 = (byte)puVar14;
            uVar7 = uVar7 - 1;
            puVar14 = puVar14 + 8;
            uVar12 = uVar12 + ((uint)*_Src << (bVar10 & 0x1f));
            _Src = _Src + 1;
            uVar5 = *(uint *)(puVar3[0x13] + ((1 << ((byte)puVar3[0x15] & 0x1f)) - 1U & uVar12) * 4)
            ;
            local_2c = uVar7;
          } while (puVar14 < (undefined1 *)(uVar5 >> 8 & 0xff));
        }
        cVar4 = (char)uVar5;
        local_28 = uVar5;
        if ((cVar4 != '\0') && ((uVar5 & 0xf0) == 0)) {
          local_8 = uVar5 >> 8;
          local_18 = (undefined1 *)(local_8 & 0xff);
          bVar10 = (byte)(uVar5 >> 8);
          local_28 = *(uint *)(puVar3[0x13] +
                              ((((1 << (cVar4 + bVar10 & 0x1f)) - 1U & uVar12) >> (bVar10 & 0x1f)) +
                              (uVar5 >> 0x10)) * 4);
          if (puVar14 < (undefined1 *)((local_28 >> 8 & 0xff) + (local_8 & 0xff))) {
            do {
              uVar11 = 0;
              if (uVar7 == 0) goto LAB_00682e5c;
              bVar9 = (byte)puVar14;
              uVar7 = uVar7 - 1;
              puVar14 = puVar14 + 8;
              uVar12 = uVar12 + ((uint)*_Src << (bVar9 & 0x1f));
              local_18 = (undefined1 *)(uVar5 >> 8 & 0xff);
              _Src = _Src + 1;
              local_28 = *(uint *)(puVar3[0x13] +
                                  ((((1 << (cVar4 + bVar10 & 0x1f)) - 1U & uVar12) >>
                                   (bVar10 & 0x1f)) + (uVar5 >> 0x10)) * 4);
              local_2c = uVar7;
            } while (puVar14 < local_18 + (local_28 >> 8 & 0xff));
          }
          uVar12 = uVar12 >> (bVar10 & 0x1f);
          puVar14 = puVar14 + -(uint)bVar10;
        }
        local_18 = (undefined1 *)(local_28 >> 8 & 0xff);
        uVar12 = uVar12 >> ((byte)(local_28 >> 8) & 0x1f);
        puVar14 = puVar14 + -(int)local_18;
        puVar3[0x10] = local_28 >> 0x10;
        local_24 = uVar12;
        if ((char)local_28 == '\0') {
          *puVar3 = 0x17;
          break;
        }
        uVar11 = uVar7;
        if ((local_28 & 0x20) == 0) {
          if ((local_28 & 0x40) == 0) {
            puVar3[0x12] = local_28 & 0xf;
            *puVar3 = 0x13;
            goto switchD_00681a80_caseD_13;
          }
          param_1[6] = (int)"invalid literal/length code";
          goto LAB_00682df8;
        }
        goto LAB_0068298c;
      }
      param_1[4] = local_20;
      param_1[3] = (int)local_14;
      *param_1 = (int)_Src;
      param_1[1] = local_2c;
      puVar3[0xe] = uVar12;
      puVar3[0xf] = (uint)puVar14;
      FUN_00683070(param_1,local_10);
      local_20 = param_1[4];
      local_14 = (undefined1 *)param_1[3];
      _Src = (byte *)*param_1;
      uVar12 = puVar3[0xe];
      puVar14 = (undefined1 *)puVar3[0xf];
      uVar7 = param_1[1];
      local_2c = param_1[1];
      local_24 = uVar12;
      break;
    case 0x13:
switchD_00681a80_caseD_13:
      if ((undefined1 *)puVar3[0x12] != (undefined1 *)0x0) {
        if (puVar14 < (undefined1 *)puVar3[0x12]) {
          do {
            uVar11 = 0;
            if (uVar7 == 0) goto LAB_00682e5c;
            bVar10 = *_Src;
            bVar9 = (byte)puVar14;
            uVar7 = uVar7 - 1;
            puVar14 = puVar14 + 8;
            _Src = _Src + 1;
            uVar12 = uVar12 + ((uint)bVar10 << (bVar9 & 0x1f));
            local_2c = uVar7;
          } while (puVar14 < (undefined1 *)puVar3[0x12]);
        }
        bVar10 = (byte)puVar3[0x12];
        puVar3[0x10] = puVar3[0x10] + ((1 << (bVar10 & 0x1f)) - 1U & uVar12);
        uVar12 = uVar12 >> (bVar10 & 0x1f);
        puVar14 = puVar14 + -puVar3[0x12];
      }
      *puVar3 = 0x14;
    case 0x14:
      uVar5 = *(uint *)(puVar3[0x14] + ((1 << ((byte)puVar3[0x16] & 0x1f)) - 1U & uVar12) * 4);
      if (puVar14 < (undefined1 *)(uVar5 >> 8 & 0xff)) {
        do {
          uVar11 = 0;
          if (uVar7 == 0) goto LAB_00682e5c;
          bVar10 = (byte)puVar14;
          uVar7 = uVar7 - 1;
          puVar14 = puVar14 + 8;
          uVar12 = uVar12 + ((uint)*_Src << (bVar10 & 0x1f));
          _Src = _Src + 1;
          uVar5 = *(uint *)(puVar3[0x14] + ((1 << ((byte)puVar3[0x16] & 0x1f)) - 1U & uVar12) * 4);
          local_2c = uVar7;
        } while (puVar14 < (undefined1 *)(uVar5 >> 8 & 0xff));
      }
      local_28 = uVar5;
      if ((uVar5 & 0xf0) == 0) {
        local_8 = uVar5 >> 8;
        local_18 = (undefined1 *)(local_8 & 0xff);
        bVar10 = (byte)(uVar5 >> 8);
        local_28 = *(uint *)(puVar3[0x14] +
                            ((((1 << ((char)uVar5 + bVar10 & 0x1f)) - 1U & uVar12) >>
                             (bVar10 & 0x1f)) + (uVar5 >> 0x10)) * 4);
        if (puVar14 < (undefined1 *)((local_28 >> 8 & 0xff) + (local_8 & 0xff))) {
          do {
            uVar11 = 0;
            if (uVar7 == 0) goto LAB_00682e5c;
            bVar9 = (byte)puVar14;
            uVar7 = uVar7 - 1;
            puVar14 = puVar14 + 8;
            uVar12 = uVar12 + ((uint)*_Src << (bVar9 & 0x1f));
            local_18 = (undefined1 *)(uVar5 >> 8 & 0xff);
            _Src = _Src + 1;
            local_28 = *(uint *)(puVar3[0x14] +
                                ((((1 << ((char)uVar5 + bVar10 & 0x1f)) - 1U & uVar12) >>
                                 (bVar10 & 0x1f)) + (uVar5 >> 0x10)) * 4);
            local_2c = uVar7;
          } while (puVar14 < local_18 + (local_28 >> 8 & 0xff));
        }
        uVar12 = uVar12 >> (bVar10 & 0x1f);
        puVar14 = puVar14 + -(uint)bVar10;
      }
      local_18 = (undefined1 *)(local_28 >> 8 & 0xff);
      uVar12 = uVar12 >> ((byte)(local_28 >> 8) & 0x1f);
      puVar14 = puVar14 + -(int)local_18;
      local_24 = uVar12;
      if ((local_28 & 0x40) != 0) {
        param_1[6] = (int)"invalid distance code";
        goto LAB_00682df8;
      }
      puVar3[0x11] = local_28 >> 0x10;
      puVar3[0x12] = local_28 & 0xf;
      *puVar3 = 0x15;
switchD_00681a80_caseD_15:
      if ((undefined1 *)puVar3[0x12] != (undefined1 *)0x0) {
        if (puVar14 < (undefined1 *)puVar3[0x12]) {
          do {
            uVar11 = 0;
            if (uVar7 == 0) goto LAB_00682e5c;
            bVar10 = *_Src;
            bVar9 = (byte)puVar14;
            uVar7 = uVar7 - 1;
            puVar14 = puVar14 + 8;
            _Src = _Src + 1;
            uVar12 = uVar12 + ((uint)bVar10 << (bVar9 & 0x1f));
            local_2c = uVar7;
          } while (puVar14 < (undefined1 *)puVar3[0x12]);
        }
        bVar10 = (byte)puVar3[0x12];
        puVar3[0x11] = puVar3[0x11] + ((1 << (bVar10 & 0x1f)) - 1U & uVar12);
        uVar12 = uVar12 >> (bVar10 & 0x1f);
        puVar14 = puVar14 + -puVar3[0x12];
        local_24 = uVar12;
      }
      if ((puVar3[0xb] - local_20) + local_10 < puVar3[0x11]) {
        param_1[6] = (int)"invalid distance too far back";
        goto LAB_00682df8;
      }
      *puVar3 = 0x16;
      uVar11 = uVar7;
switchD_00681a80_caseD_16:
      if (local_20 != 0) {
        local_28 = puVar3[0x11];
        if (local_10 - local_20 < local_28) {
          local_28 = local_28 - (local_10 - local_20);
          if (puVar3[0xc] < local_28) {
            local_28 = local_28 - puVar3[0xc];
            local_18 = (undefined1 *)((puVar3[0xd] + puVar3[10]) - local_28);
          }
          else {
            local_18 = (undefined1 *)((puVar3[0xd] - local_28) + puVar3[0xc]);
          }
          local_8 = puVar3[0x10];
          if (local_8 < local_28) goto LAB_00682c4f;
        }
        else {
          local_18 = local_14 + -local_28;
          local_8 = puVar3[0x10];
LAB_00682c4f:
          local_28 = local_8;
        }
        if (local_20 < local_28) {
          local_28 = local_20;
        }
        local_20 = local_20 - local_28;
        puVar3[0x10] = local_8 - local_28;
        do {
          uVar2 = *local_18;
          local_18 = local_18 + 1;
          *local_14 = uVar2;
          local_14 = local_14 + 1;
          local_28 = local_28 - 1;
        } while (local_28 != 0);
        uVar7 = uVar11;
        if (puVar3[0x10] == 0) {
          *puVar3 = 0x12;
        }
        break;
      }
      goto LAB_00682e5c;
    case 0x15:
      goto switchD_00681a80_caseD_15;
    case 0x16:
      goto switchD_00681a80_caseD_16;
    case 0x17:
      if (local_20 == 0) goto LAB_00682e5c;
      *local_14 = (char)puVar3[0x10];
      local_14 = local_14 + 1;
      local_20 = local_20 - 1;
      *puVar3 = 0x12;
      break;
    case 0x18:
      if (puVar3[2] != 0) {
        for (; puVar14 < (undefined1 *)0x20; puVar14 = puVar14 + 8) {
          uVar11 = 0;
          if (uVar7 == 0) goto LAB_00682e5c;
          bVar10 = *_Src;
          uVar7 = uVar7 - 1;
          _Src = _Src + 1;
          uVar12 = uVar12 + ((uint)bVar10 << ((byte)puVar14 & 0x1f));
          local_2c = uVar7;
          local_24 = uVar12;
        }
        local_10 = local_10 - local_20;
        param_1[5] = param_1[5] + local_10;
        puVar3[7] = puVar3[7] + local_10;
        if (local_10 != 0) {
          if (puVar3[4] == 0) {
            uVar7 = FUN_00683a20(puVar3[6],(int)local_14 - local_10,local_10);
          }
          else {
            uVar7 = FUN_00683f40();
          }
          puVar3[6] = uVar7;
          param_1[0xc] = uVar7;
          uVar7 = local_2c;
        }
        uVar5 = uVar12;
        if (puVar3[4] == 0) {
          uVar5 = ((uVar12 & 0xff00) + uVar12 * 0x10000) * 0x100 + (local_24 >> 0x10 & 0xff) * 0x100
                  + (uVar12 >> 0x18);
        }
        local_10 = local_20;
        if (uVar5 != puVar3[6]) {
          param_1[6] = (int)"incorrect data check";
          goto LAB_00682df8;
        }
        uVar12 = 0;
        local_24 = 0;
        puVar14 = (undefined1 *)0x0;
      }
      *puVar3 = 0x19;
    case 0x19:
      if ((puVar3[2] != 0) && (puVar3[4] != 0)) {
        for (; puVar14 < (undefined1 *)0x20; puVar14 = puVar14 + 8) {
          uVar11 = 0;
          if (uVar7 == 0) goto LAB_00682e5c;
          bVar10 = *_Src;
          uVar7 = uVar7 - 1;
          _Src = _Src + 1;
          uVar12 = uVar12 + ((uint)bVar10 << ((byte)puVar14 & 0x1f));
          local_2c = uVar7;
          local_24 = uVar12;
        }
        if (uVar12 != puVar3[7]) {
          param_1[6] = (int)"incorrect length check";
          goto LAB_00682df8;
        }
        uVar12 = 0;
        puVar14 = (undefined1 *)0x0;
      }
      *puVar3 = 0x1a;
switchD_00681a80_caseD_1a:
      local_c = 1;
      uVar11 = uVar7;
      goto LAB_00682e5c;
    case 0x1a:
      goto switchD_00681a80_caseD_1a;
    case 0x1b:
      local_c = -3;
      goto LAB_00682e5c;
    case 0x1c:
      goto switchD_00681a80_caseD_1c;
    }
    uVar5 = *puVar3;
  } while( true );
}

