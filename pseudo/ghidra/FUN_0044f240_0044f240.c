// FUN_0044f240  0044f240

void __fastcall FUN_0044f240(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined8 uVar4;
  int local_10;
  int local_c;
  int local_8;
  
  for (local_8 = 0; local_8 < 7; local_8 = local_8 + 1) {
    iVar2 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_8 * 2));
    piVar1 = (int *)(param_1 + 0x18 + iVar2 * 0x2c);
    *piVar1 = *piVar1 + 1;
    iVar2 = FUN_0044f680(CONCAT22((short)((uint)piVar1 >> 0x10),
                                  *(undefined2 *)(param_1 + 4 + local_8 * 2)));
    if (iVar2 == 0xe) {
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
      iVar2 = FUN_0044f6c0(*(undefined2 *)(param_1 + 4 + local_8 * 2));
      if (iVar2 == -1) {
        *(undefined4 *)(param_1 + 0x58) = 1;
        *(undefined4 *)(param_1 + 0x294) = 1;
      }
      else {
        iVar2 = FUN_0044f6c0(CONCAT22(extraout_var_00,*(undefined2 *)(param_1 + 4 + local_8 * 2)));
        *(undefined4 *)(param_1 + 0x48 + iVar2 * 4) = 1;
        iVar2 = FUN_0044f6c0(*(undefined2 *)(param_1 + 4 + local_8 * 2));
        *(undefined4 *)(param_1 + 0x284 + iVar2 * 4) = 1;
      }
    }
    else {
      iVar2 = FUN_0044f680(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 4 + local_8 * 2)));
      iVar3 = FUN_0044f6c0(*(undefined2 *)(param_1 + 4 + local_8 * 2));
      *(undefined4 *)(param_1 + iVar2 * 0x2c + 0x1c + iVar3 * 4) = 1;
    }
  }
  local_8 = 1;
  do {
    if (0xe < local_8) {
      return;
    }
    uVar4 = FUN_0044f700(local_8);
    iVar2 = (int)((ulonglong)uVar4 >> 0x20);
    if ((int)uVar4 != 0) {
      local_10 = 0;
      while (local_10 < 7) {
        iVar2 = FUN_0044f680(CONCAT22((short)((uint)iVar2 >> 0x10),
                                      *(undefined2 *)(param_1 + 4 + local_10 * 2)));
        if ((iVar2 == local_8) ||
           ((iVar2 = FUN_0044f680(CONCAT22(extraout_var_01,
                                           *(undefined2 *)(param_1 + 4 + local_10 * 2))),
            iVar2 == 0xe && (local_8 == 1)))) {
          for (local_c = 0; local_c < 5; local_c = local_c + 1) {
            if (*(int *)(param_1 + local_8 * 0x2c + 0x30 + local_c * 4) == -1) {
              *(int *)(param_1 + local_8 * 0x2c + 0x30 + local_c * 4) = local_10;
              break;
            }
          }
        }
        iVar2 = local_10 + 1;
        local_10 = iVar2;
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}

