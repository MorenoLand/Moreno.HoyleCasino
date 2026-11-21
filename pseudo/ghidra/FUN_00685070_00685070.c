// FUN_00685070  00685070

undefined4 FUN_00685070(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_EDX;
  int iVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  undefined8 uVar11;
  int local_1a4;
  uint local_1a0;
  int local_19c;
  undefined1 local_198 [16];
  undefined1 local_188 [16];
  uint local_178;
  uint local_174;
  undefined1 local_168 [360];
  
  if (1 < *(int *)(param_1 + 0x58)) {
    if (*(int *)(param_1 + 4) == 0) {
      return 0xffffff76;
    }
    if (((-1 < param_3) && (param_3 <= *(int *)(param_1 + 0x14))) &&
       ((param_3 < *(int *)(param_1 + 0x14) || (param_2 <= *(uint *)(param_1 + 0x10))))) {
      iVar6 = param_1 + 0x78;
      *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
      FUN_00686aa0(iVar6,*(undefined4 *)(param_1 + 0x5c));
      FUN_00691550(param_1 + 0x1e0);
      FUN_00684990(param_1,param_2,param_3);
      local_1a4 = 0;
      local_1a0 = 0;
      FUN_00686340(local_168,*(undefined4 *)(param_1 + 0x5c));
      FUN_00686a50(local_168);
      iVar8 = 0;
LAB_00685125:
      while ((2 < *(int *)(param_1 + 0x58) && (iVar1 = FUN_00686ac0(local_168,local_188), 0 < iVar1)
             )) {
        iVar1 = *(int *)(param_1 + 0x60) * 0x20;
        if (*(int *)(iVar1 + 0x1c + *(int *)(param_1 + 0x48)) == 0) {
          FUN_00686ac0(iVar6,0);
          break;
        }
        local_1a4 = FUN_00691e20(iVar1 + *(int *)(param_1 + 0x48),local_188);
        if (local_1a4 < 0) {
          FUN_00686ac0(iVar6,0);
          local_1a4 = 0;
        }
        else if (local_19c == 0) {
          if (iVar8 != 0) {
            local_1a0 = local_1a0 + (local_1a4 + iVar8 >> 2);
          }
        }
        else {
          FUN_00686ac0(iVar6,0);
        }
        iVar8 = local_1a4;
        if ((local_178 & local_174) != 0xffffffff) {
          iVar6 = *(int *)(param_1 + 0x60);
          iVar8 = *(int *)(param_1 + 0x44);
          puVar3 = (uint *)(iVar6 * 0x10 + iVar8);
          uVar9 = local_178 - *puVar3;
          iVar1 = (local_174 - *(int *)(iVar6 * 0x10 + 4 + iVar8)) - (uint)(local_178 < *puVar3);
          if ((iVar1 < 1) && (iVar1 < 0)) {
            uVar9 = 0;
            iVar1 = 0;
          }
          if (0 < iVar6) {
            puVar3 = (uint *)(iVar8 + 8);
            do {
              bVar10 = CARRY4(uVar9,*puVar3);
              uVar9 = uVar9 + *puVar3;
              iVar1 = iVar1 + puVar3[1] + (uint)bVar10;
              puVar3 = puVar3 + 4;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          *(uint *)(param_1 + 0x50) = uVar9 - local_1a0;
          *(uint *)(param_1 + 0x54) = (iVar1 - ((int)local_1a0 >> 0x1f)) - (uint)(uVar9 < local_1a0)
          ;
LAB_0068534a:
          FUN_006863b0(local_168);
          *(undefined4 *)(param_1 + 0x68) = 0;
          *(undefined4 *)(param_1 + 0x6c) = 0;
          *(undefined4 *)(param_1 + 0x70) = 0;
          *(undefined4 *)(param_1 + 0x74) = 0;
          return 0;
        }
      }
      if (iVar8 == 0) {
        FUN_006845f0(param_1,local_198,0xffffffff,0xffffffff);
        if (-1 < extraout_EDX) {
          if (*(int *)(param_1 + 0x58) < 3) {
LAB_00685237:
            iVar2 = FUN_006862e0(local_198);
            iVar1 = *(int *)(param_1 + 0x34);
            iVar5 = 0;
            *(int *)(param_1 + 0x5c) = iVar2;
            if (0 < iVar1) {
              piVar7 = *(int **)(param_1 + 0x40);
              do {
                iVar8 = local_1a4;
                if (*piVar7 == iVar2) break;
                iVar5 = iVar5 + 1;
                piVar7 = piVar7 + 1;
              } while (iVar5 < iVar1);
            }
            if (iVar5 == iVar1) {
              *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
              *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
              FUN_006863b0(local_168);
              FUN_00684f40(param_1);
              return 0xffffff77;
            }
            *(int *)(param_1 + 0x60) = iVar5;
            FUN_00686aa0(iVar6,iVar2);
            FUN_00686aa0(local_168,*(undefined4 *)(param_1 + 0x5c));
            *(undefined4 *)(param_1 + 0x58) = 3;
          }
          else {
            iVar1 = FUN_006862e0(local_198);
            if (*(int *)(param_1 + 0x5c) != iVar1) {
              FUN_00684f40(param_1);
              FUN_006863b0(local_168);
            }
            if (*(int *)(param_1 + 0x58) < 3) goto LAB_00685237;
          }
          FUN_00686760(iVar6,local_198);
          FUN_00686760(local_168,local_198);
          local_19c = FUN_00686240(local_198);
          goto LAB_00685125;
        }
        uVar11 = FUN_00684f70(param_1,0xffffffff);
        uVar4 = (undefined4)uVar11;
        *(int *)(param_1 + 0x54) = (int)((ulonglong)uVar11 >> 0x20);
      }
      else {
        uVar4 = 0xffffffff;
        *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
      }
      *(undefined4 *)(param_1 + 0x50) = uVar4;
      goto LAB_0068534a;
    }
  }
  return 0xffffff7d;
}

