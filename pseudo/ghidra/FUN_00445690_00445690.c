// FUN_00445690  00445690

int __thiscall FUN_00445690(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_c;
  int local_8;
  
  local_c = 8;
  *(int *)(param_1 + 0x48 + param_2 * 0x78) = *(int *)(param_1 + 0x48 + param_2 * 0x78) + 1;
  *(undefined4 *)(param_1 + 0x68 + param_2 * 0x78) =
       *(undefined4 *)(param_1 + 0x50 + param_2 * 0x78);
  if ((*(int *)(DAT_007906f4 + 0xb0) == 2) && (iVar1 = FUN_00445600(param_2), iVar1 == 0)) {
    uVar2 = FUN_0062fbf0(5);
    *(undefined4 *)(param_1 + 0x68 + param_2 * 0x78) = uVar2;
  }
  if ((0 < *(int *)(DAT_007906f4 + 0xb0)) && (iVar1 = FUN_00445600(param_2), 5 < iVar1)) {
    uVar2 = FUN_0062fbf0(5);
    *(undefined4 *)(param_1 + 0x68 + param_2 * 0x78) = uVar2;
  }
  iVar1 = *(int *)(DAT_007906f4 + 0xb0);
  if (iVar1 == 0) {
    local_8 = 0;
    while ((local_8 < 5 && (iVar1 = FUN_005eb220(), iVar1 < 0x23))) {
      local_8 = local_8 + 1;
    }
    if (local_8 < 5) {
      local_c = FUN_0062fbf0(*(undefined4 *)(param_1 + 0x68 + param_2 * 0x78));
    }
    else {
      local_c = FUN_0062fbf0(5);
    }
    local_c = local_c + 0xc;
  }
  else if (iVar1 == 1) {
    if (*(int *)(param_1 + 0x74 + param_2 * 0x78) == 0) {
      if (*(char *)(param_1 + 0x78 + param_2 * 0x78) == '\0') {
        iVar1 = FUN_0062fbf0(2);
        if ((iVar1 == 0) || (iVar1 = FUN_00445600(param_2), iVar1 == 0)) {
          iVar1 = FUN_00445600(param_2);
          if ((iVar1 == 0) && (iVar1 = FUN_0062fbf0(2), iVar1 != 0)) {
            iVar1 = FUN_0062fbf0(10);
            *(int *)(param_1 + 0x68 + param_2 * 0x78) = iVar1 + 6;
          }
          local_c = FUN_0062fbf0(*(undefined4 *)(param_1 + 0x68 + param_2 * 0x78));
          local_c = local_c + 0xb;
        }
        else {
          local_c = FUN_0062fbf0(3);
          local_c = local_c + 9;
          iVar1 = FUN_0062fbf0(5);
          *(int *)(param_1 + 0x74 + param_2 * 0x78) = iVar1 + 10;
        }
      }
      else {
        if (*(char *)(param_1 + 0x25d) == '\0') {
          *(undefined1 *)(param_1 + 0x25d) = 1;
          FUN_0043d2c0();
          FUN_0043d6c0(param_2);
        }
        *(undefined4 *)(param_1 + 0x74 + param_2 * 0x78) = 0x14;
        local_c = 4;
      }
    }
    else {
      *(int *)(param_1 + 0x74 + param_2 * 0x78) = *(int *)(param_1 + 0x74 + param_2 * 0x78) + -1;
      local_c = *(int *)(*(int *)(DAT_007906f4 + 4 + param_2 * 4) + 0x178);
    }
  }
  else if (iVar1 == 2) {
    if (*(int *)(param_1 + 0x74 + param_2 * 0x78) == 0) {
      iVar1 = FUN_0062fbf0(2);
      if ((iVar1 == 0) || (iVar1 = FUN_00445600(param_2), iVar1 < 6)) {
        local_c = FUN_0062fbf0(*(undefined4 *)(param_1 + 0x68 + param_2 * 0x78));
      }
      else {
        local_c = FUN_0062fbf0(3);
        iVar1 = FUN_0062fbf0(5);
        *(int *)(param_1 + 0x74 + param_2 * 0x78) = iVar1 + 5;
      }
      local_c = local_c + 9;
    }
    else {
      *(int *)(param_1 + 0x74 + param_2 * 0x78) = *(int *)(param_1 + 0x74 + param_2 * 0x78) + -1;
      local_c = *(int *)(*(int *)(DAT_007906f4 + 4 + param_2 * 4) + 0x178);
    }
  }
  if (0x14 < local_c) {
    local_c = FUN_0062fbf0(6);
    local_c = local_c + 10;
  }
  return local_c;
}

