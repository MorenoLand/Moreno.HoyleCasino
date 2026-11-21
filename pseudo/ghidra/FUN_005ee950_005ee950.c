// FUN_005ee950  005ee950

int __thiscall FUN_005ee950(int param_1,undefined1 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_18 [2];
  uint local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_10 = FUN_005f0a30(param_2);
  local_10 = local_10 & 0xff;
  local_c = 0;
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 == 1) {
    if (*(int *)(param_1 + 0x98) != 0) {
      local_c = ((uint)*(ushort *)(*(int *)(param_1 + 0x98) + 8 + local_10 * 8) -
                (uint)*(ushort *)(*(int *)(param_1 + 0x98) + 4 + local_10 * 8)) + 1;
    }
  }
  else if (iVar1 == 2) {
    if (*(int *)(param_1 + 0xb0) != 0) {
      local_8 = local_10 - 0x20;
      if (local_8 < 0) {
        local_8 = 0;
      }
      local_c = FUN_00616410(0,local_8);
    }
  }
  else {
    if (iVar1 != 3) {
      return 0;
    }
    if ((((*(int *)(param_1 + 0xb0) != 0) &&
         (local_c = FUN_00616410(0,local_10), *(char *)(param_1 + 0xcc) != '\0')) && (-1 < param_3))
       && (param_3 < 0x100)) {
      uVar2 = Ordinal_78(*(undefined4 *)(param_1 + 0xbc),param_3,0,local_18);
      uVar2 = Ordinal_78(*(undefined4 *)(param_1 + 0xbc),local_10,uVar2);
      Ordinal_82(*(undefined4 *)(param_1 + 0xbc),uVar2);
      local_18[0] = (((local_18[0] < 0) - 1 & 0x40) - 0x20) + local_18[0];
      local_c = *(char *)(param_1 + param_3 + 0xd0) + local_c +
                ((int)(local_18[0] + (local_18[0] >> 0x1f & 0x3fU)) >> 6);
    }
  }
  return (uint)*(ushort *)(param_1 + 0x90) + local_c;
}

