// FUN_005c9740  005c9740

uint __fastcall FUN_005c9740(uint param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_44;
  int local_40;
  int local_18;
  char local_d;
  int local_8;
  
  local_d = '\x01';
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x14) < 0) {
    param_1 = param_1 & 0xffffff00;
  }
  else {
    iVar2 = -*(int *)(*(int *)(param_1 + 0x10) + 4) / 2;
    iVar3 = *(int *)(*(int *)(param_1 + 0x10) + 4) / 2;
    for (local_18 = 0; local_18 < **(int **)(param_1 + 0x10); local_18 = local_18 + 1) {
      piVar5 = (int *)(*(int *)(param_1 + 0x10) + 0x20 + local_18 * 0x7c);
      for (local_8 = 0;
          (local_8 < *piVar5 && (piVar5[local_8 + 1] != *(int *)(*(int *)(param_1 + 0x10) + 0x14)));
          local_8 = local_8 + 1) {
      }
      if (local_8 < *piVar5) {
        bVar1 = false;
        for (local_8 = iVar2; local_8 <= iVar3; local_8 = local_8 + 1) {
          if (*(int *)(param_1 + 0x18 + local_18 * 4) < 0) {
            local_40 = -*(int *)(param_1 + 0x18 + local_18 * 4);
          }
          else {
            local_40 = *(int *)(param_1 + 0x18 + local_18 * 4);
          }
          iVar4 = FUN_005be340(local_18,local_40 + local_8);
          if (iVar4 == *(int *)(*(int *)(param_1 + 0x10) + 0x14)) {
            bVar1 = true;
          }
        }
        if (!bVar1) {
          local_d = '\0';
          break;
        }
      }
    }
    piVar5 = (int *)0x0;
    if (local_d != '\0') {
      for (local_18 = 0; piVar5 = *(int **)(param_1 + 0x10), local_8 = iVar2, local_18 < *piVar5;
          local_18 = local_18 + 1) {
        for (; local_8 <= iVar3; local_8 = local_8 + 1) {
          if (*(int *)(param_1 + 0x18 + local_18 * 4) < 0) {
            local_44 = -*(int *)(param_1 + 0x18 + local_18 * 4);
          }
          else {
            local_44 = *(int *)(param_1 + 0x18 + local_18 * 4);
          }
          iVar4 = FUN_005be340(local_18,local_44 + local_8);
          if (iVar4 == *(int *)(*(int *)(param_1 + 0x10) + 0x14)) {
            *(undefined4 *)(param_1 + local_18 * 0x14 + 0x5c + local_8 * 4) = 0x32;
          }
        }
      }
    }
    param_1 = CONCAT31((int3)((uint)piVar5 >> 8),local_d);
  }
  return param_1;
}

