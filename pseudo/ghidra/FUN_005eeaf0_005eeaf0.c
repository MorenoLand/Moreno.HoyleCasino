// FUN_005eeaf0  005eeaf0

int __thiscall FUN_005eeaf0(int param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  int local_c;
  int local_8;
  
  uVar2 = FUN_005f0a30(param_2);
  uVar2 = uVar2 & 0xff;
  local_8 = 0;
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 == 1) {
    if (*(int *)(param_1 + 0x98) != 0) {
      local_8 = ((uint)*(ushort *)(*(int *)(param_1 + 0x98) + 6 + uVar2 * 8) -
                (uint)*(ushort *)(*(int *)(param_1 + 0x98) + 2 + uVar2 * 8)) + 1;
    }
  }
  else if (iVar1 == 2) {
    if (*(int *)(param_1 + 0xb0) != 0) {
      local_c = uVar2 - 0x20;
      if (local_c < 0) {
        local_c = 0;
      }
      local_8 = FUN_00616450(0,local_c);
    }
  }
  else {
    if (iVar1 != 3) {
      return 0;
    }
    if (*(int *)(param_1 + 0xb0) != 0) {
      local_8 = FUN_00616450(0,uVar2);
    }
  }
  return (uint)*(ushort *)(param_1 + 0x92) + local_8;
}

