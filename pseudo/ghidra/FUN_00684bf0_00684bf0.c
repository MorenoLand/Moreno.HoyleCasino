// FUN_00684bf0  00684bf0

void FUN_00684bf0(int param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int extraout_EDX;
  int iVar8;
  int iVar9;
  bool bVar10;
  longlong lVar11;
  longlong lVar12;
  uint local_38;
  int local_34;
  undefined1 local_30 [16];
  undefined1 local_20 [32];
  
  pvVar3 = realloc(*(void **)(param_1 + 0x48),*(int *)(param_1 + 0x34) << 5);
  *(void **)(param_1 + 0x48) = pvVar3;
  pvVar3 = realloc(*(void **)(param_1 + 0x4c),*(int *)(param_1 + 0x34) << 4);
  *(void **)(param_1 + 0x4c) = pvVar3;
  pvVar3 = malloc(*(int *)(param_1 + 0x34) << 3);
  *(void **)(param_1 + 0x3c) = pvVar3;
  pvVar3 = malloc(*(int *)(param_1 + 0x34) << 4);
  *(void **)(param_1 + 0x44) = pvVar3;
  iVar9 = 0;
  if (0 < *(int *)(param_1 + 0x34)) {
    do {
      if (iVar9 == 0) {
        puVar2 = *(undefined4 **)(param_1 + 0x3c);
        *puVar2 = param_2;
        puVar2[1] = param_3;
        FUN_00684990(param_1,param_2,param_3);
      }
      else {
        FUN_00684990(param_1,*(undefined4 *)(*(int *)(param_1 + 0x38) + iVar9 * 8),
                     *(undefined4 *)(*(int *)(param_1 + 0x38) + 4 + iVar9 * 8));
        iVar4 = FUN_006844b0(param_1,iVar9 * 0x20 + *(int *)(param_1 + 0x48),
                             iVar9 * 0x10 + *(int *)(param_1 + 0x4c),0,0);
        if (iVar4 < 0) {
          iVar4 = *(int *)(param_1 + 0x3c);
          *(undefined4 *)(iVar4 + iVar9 * 8) = 0xffffffff;
          *(undefined4 *)(iVar4 + 4 + iVar9 * 8) = 0xffffffff;
        }
        else {
          iVar4 = *(int *)(param_1 + 0x3c);
          *(undefined4 *)(iVar4 + iVar9 * 8) = *(undefined4 *)(param_1 + 8);
          *(undefined4 *)(iVar4 + 4 + iVar9 * 8) = *(undefined4 *)(param_1 + 0xc);
        }
      }
      if ((*(uint *)(*(int *)(param_1 + 0x3c) + iVar9 * 8) &
          *(uint *)(*(int *)(param_1 + 0x3c) + 4 + iVar9 * 8)) != 0xffffffff) {
        iVar4 = param_1 + 0x78;
        local_38 = 0;
        local_34 = 0;
        iVar8 = -1;
        FUN_00686aa0(iVar4,*(undefined4 *)(*(int *)(param_1 + 0x40) + iVar9 * 4));
        do {
          FUN_006845f0(param_1,local_30,0xffffffff,0xffffffff);
          lVar11 = CONCAT44(local_34,local_38);
          if ((extraout_EDX < 0) ||
             (iVar5 = FUN_006862e0(local_30), lVar11 = CONCAT44(local_34,local_38),
             iVar5 != *(int *)(*(int *)(param_1 + 0x40) + iVar9 * 4))) goto LAB_00684de7;
          FUN_00686760(iVar4,local_30);
          iVar5 = FUN_00686ac0(iVar4,local_20);
          while (iVar5 != 0) {
            iVar6 = iVar8;
            if ((0 < iVar5) &&
               (iVar6 = FUN_00691e20(iVar9 * 0x20 + *(int *)(param_1 + 0x48),local_20), iVar8 != -1)
               ) {
              uVar7 = iVar6 + iVar8 >> 2;
              bVar10 = CARRY4(local_38,uVar7);
              local_38 = local_38 + uVar7;
              local_34 = local_34 + (iVar6 + iVar8 >> 0x1f) + (uint)bVar10;
            }
            iVar5 = FUN_00686ac0(iVar4,local_20);
            iVar8 = iVar6;
          }
          lVar11 = FUN_00686250(local_30);
        } while (lVar11 == -1);
        lVar11 = FUN_00686250(local_30);
        lVar11 = lVar11 - CONCAT44(local_34,local_38);
LAB_00684de7:
        local_34 = (int)((ulonglong)lVar11 >> 0x20);
        if ((local_34 < 1) && (lVar11 < 0)) {
          lVar11 = 0;
        }
        local_34 = (int)((ulonglong)lVar11 >> 0x20);
        local_38 = (uint)lVar11;
        iVar4 = *(int *)(param_1 + 0x44);
        *(uint *)(iVar9 * 0x10 + iVar4) = local_38;
        *(int *)(iVar9 * 0x10 + 4 + iVar4) = local_34;
      }
      FUN_00684990(param_1,*(undefined4 *)(*(int *)(param_1 + 0x38) + 8 + iVar9 * 8),
                   *(undefined4 *)(*(int *)(param_1 + 0x38) + 0xc + iVar9 * 8));
      while (lVar11 = FUN_00684870(param_1,local_30), -1 < lVar11) {
        lVar12 = FUN_00686250(local_30);
        if (lVar12 != -1) {
          plVar1 = (longlong *)(iVar9 * 0x10 + *(int *)(param_1 + 0x44));
          lVar11 = FUN_00686250(local_30);
          plVar1[1] = lVar11 - *plVar1;
          goto LAB_00684eb2;
        }
        *(longlong *)(param_1 + 8) = lVar11;
      }
      FUN_00690710(iVar9 * 0x20 + *(int *)(param_1 + 0x48));
      FUN_00690670(iVar9 * 0x10 + *(int *)(param_1 + 0x4c));
LAB_00684eb2:
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(param_1 + 0x34));
  }
  return;
}

