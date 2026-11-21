// FUN_005c63d0  005c63d0

int __thiscall FUN_005c63d0(int param_1,int param_2)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int local_16c;
  int local_168;
  uint local_164;
  uint local_160;
  int local_15c;
  uint local_158;
  uint local_154;
  int local_150;
  
  if (param_1 != param_2) {
    if (*(int *)(param_2 + 4) == 0) {
      local_150 = 0;
    }
    else {
      local_150 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 2;
    }
    if (local_150 == 0) {
      FUN_005bc3e0();
    }
    else {
      if (*(int *)(param_2 + 4) == 0) {
        local_154 = 0;
      }
      else {
        local_154 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 2;
      }
      if (*(int *)(param_1 + 4) == 0) {
        local_158 = 0;
      }
      else {
        local_158 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
      }
      if (local_158 < local_154) {
        if (*(int *)(param_2 + 4) == 0) {
          local_160 = 0;
        }
        else {
          local_160 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 2;
        }
        if (*(int *)(param_1 + 4) == 0) {
          local_164 = 0;
        }
        else {
          local_164 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 2;
        }
        if (local_164 < local_160) {
          if (*(int *)(param_1 + 4) != 0) {
            operator_delete(*(void **)(param_1 + 4));
          }
          if (*(int *)(param_2 + 4) == 0) {
            local_16c = 0;
          }
          else {
            local_16c = *(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 2;
          }
          cVar2 = FUN_005bef20(local_16c);
          if (cVar2 != '\0') {
            uVar3 = FUN_005bf010(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
                                 *(undefined4 *)(param_1 + 4),param_1);
            *(undefined4 *)(param_1 + 8) = uVar3;
          }
        }
        else {
          if (*(int *)(param_1 + 4) == 0) {
            local_168 = 0;
          }
          else {
            local_168 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
          }
          iVar1 = *(int *)(param_2 + 4) + local_168 * 4;
          FUN_005c0980(*(undefined4 *)(param_2 + 4),iVar1,*(undefined4 *)(param_1 + 4));
          uVar3 = FUN_005bf010(iVar1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_1 + 8),
                               param_1);
          *(undefined4 *)(param_1 + 8) = uVar3;
        }
      }
      else {
        FUN_005c0980(*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
                     *(undefined4 *)(param_1 + 4));
        if (*(int *)(param_2 + 4) == 0) {
          local_15c = 0;
        }
        else {
          local_15c = *(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 2;
        }
        *(int *)(param_1 + 8) = *(int *)(param_1 + 4) + local_15c * 4;
      }
    }
  }
  return param_1;
}

