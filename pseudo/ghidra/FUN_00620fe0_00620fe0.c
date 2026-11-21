// FUN_00620fe0  00620fe0

void __thiscall FUN_00620fe0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  void *pvVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int local_348;
  char local_340;
  byte bStack_33f;
  byte bStack_33e;
  char cStack_33d;
  char local_32c [772];
  int *local_28;
  int *local_24;
  void *local_20;
  char local_19;
  int local_18;
  void *local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_24 = (int *)(*(int *)(param_1 + 0x310) + -8 + *(int *)(param_1 + 0x30c) * 8);
  if (local_24[1] != 0) {
    operator_delete((void *)local_24[1]);
  }
  lVar4 = (ulonglong)*(uint *)(param_1 + 0x314) * 0x18;
  pvVar6 = operator_new(-(uint)((int)((ulonglong)lVar4 >> 0x20) != 0) | (uint)lVar4);
  local_24[1] = (int)pvVar6;
  *local_24 = *(int *)(param_1 + 0x314);
  for (local_10 = 0; local_10 < *local_24; local_10 = local_10 + 1) {
    piVar9 = (int *)(local_10 * 0x14 + *(int *)(param_1 + 0x318));
    local_28 = (int *)(local_10 * 0x18 + local_24[1]);
    local_28[2] = *piVar9;
    local_28[3] = piVar9[1];
    *local_28 = piVar9[2];
    local_28[1] = piVar9[3];
    pvVar6 = operator_new(-(uint)((int)((ulonglong)(uint)local_28[1] * 4 >> 0x20) != 0) |
                          (uint)((ulonglong)(uint)local_28[1] * 4));
    local_28[5] = (int)pvVar6;
    pvVar6 = operator_new(-(uint)((int)((ulonglong)(uint)local_28[1] * 4 >> 0x20) != 0) |
                          (uint)((ulonglong)(uint)local_28[1] * 4));
    local_28[4] = (int)pvVar6;
  }
  local_19 = '\0';
  local_14 = operator_new(0x80000);
  memset(local_14,0,0x80000);
  memset(local_32c,0,0x300);
  local_18 = 0;
  local_10 = 0;
  do {
    if (*local_24 <= local_10) {
      if (local_18 < 0x100) {
        FUN_00620870(local_32c,CONCAT31((int3)((uint)local_10 >> 8),(undefined1)local_18));
        *(undefined2 *)(param_1 + 0x308) = (undefined2)local_18;
      }
      else {
        FUN_006216c0(param_1 + 8,local_14);
        *(undefined2 *)(param_1 + 0x308) = 0x100;
        local_18 = 0x101;
      }
      for (local_10 = 0; local_10 < *local_24; local_10 = local_10 + 1) {
        iVar11 = local_10 * 0x14 + *(int *)(param_1 + 0x318);
        local_28 = (int *)(local_10 * 0x18 + local_24[1]);
        local_20 = operator_new(*local_28 * local_28[1]);
        pvVar6 = operator_new(*local_28 * local_28[1]);
        memset(local_14,0,0x80000);
        if (local_18 < 0x101) {
          FUN_00622150(param_1 + 8,*(undefined2 *)(param_1 + 0x308),*(undefined4 *)(iVar11 + 0x10),
                       local_20,pvVar6,*local_28,local_28[1]);
        }
        else {
          FUN_00622340(param_1 + 8,*(undefined2 *)(param_1 + 0x308),local_14,
                       *(undefined4 *)(iVar11 + 0x10),local_20,pvVar6,*local_28,local_28[1]);
        }
        for (local_8 = 0; local_8 < local_28[1]; local_8 = local_8 + 1) {
          uVar7 = FUN_00618330((void *)(local_8 * *local_28 + (int)local_20),*local_28,
                               local_28[4] + local_8 * 4,(void *)(local_8 * *local_28 + (int)pvVar6)
                               ,param_2);
          *(undefined4 *)(local_28[5] + local_8 * 4) = uVar7;
        }
        operator_delete(local_20);
        operator_delete(pvVar6);
      }
      operator_delete(local_14);
      for (local_10 = 0; local_10 < *(int *)(param_1 + 0x314); local_10 = local_10 + 1) {
        operator_delete(*(void **)(*(int *)(param_1 + 0x318) + 0x10 + local_10 * 0x14));
      }
      operator_delete(*(void **)(param_1 + 0x318));
      *(undefined4 *)(param_1 + 0x318) = 0;
      *(undefined4 *)(param_1 + 0x314) = 0;
      return;
    }
    iVar10 = local_10 * 0x14;
    iVar11 = *(int *)(param_1 + 0x318);
    local_28 = (int *)(local_10 * 0x18 + local_24[1]);
    iVar1 = local_28[1];
    iVar2 = *local_28;
    for (local_8 = 0; local_8 < iVar1 * iVar2; local_8 = local_8 + *local_28) {
      iVar8 = local_8 + *local_28;
      for (local_c = local_8; iVar5 = local_18, local_c < iVar8; local_c = local_c + 1) {
        uVar3 = *(uint *)(*(int *)(iVar10 + iVar11 + 0x10) + local_c * 4);
        cStack_33d = (char)(uVar3 >> 0x18);
        if (cStack_33d != '\0') {
          local_340 = (char)uVar3;
          bStack_33f = (byte)(uVar3 >> 8);
          bStack_33e = (byte)(uVar3 >> 0x10);
          piVar9 = (int *)((int)local_14 +
                          (((int)(uVar3 & 0xff) >> 2) * 0x800 + ((int)(uint)bStack_33f >> 2) * 0x20
                          + ((int)(uint)bStack_33e >> 3)) * 4);
          *piVar9 = *piVar9 + 1;
          if (local_19 == '\0') {
            for (local_348 = 0; local_348 < local_18; local_348 = local_348 + 1) {
              if (((local_32c[local_348 * 3] == local_340) &&
                  (local_32c[local_348 * 3 + 1] == bStack_33f)) &&
                 (local_32c[local_348 * 3 + 2] == bStack_33e)) goto LAB_00621244;
            }
            if (local_18 + 1 < 0x101) {
              local_18 = local_18 + 1;
              local_32c[iVar5 * 3] = local_340;
              local_32c[(local_18 + -1) * 3 + 1] = bStack_33f;
              local_32c[(local_18 + -1) * 3 + 2] = bStack_33e;
            }
            else {
              local_18 = local_18 + 1;
              local_19 = '\x01';
            }
          }
        }
LAB_00621244:
      }
    }
    local_10 = local_10 + 1;
  } while( true );
}

