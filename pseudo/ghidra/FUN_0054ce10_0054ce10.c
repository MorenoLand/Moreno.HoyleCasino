// FUN_0054ce10  0054ce10

int __fastcall FUN_0054ce10(int param_1)

{
  int iVar1;
  undefined2 extraout_var;
  undefined8 uVar2;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = 1;
  local_c = 1;
  local_14 = FUN_00641280(*(undefined2 *)(param_1 + 4));
  local_8 = 1;
  while( true ) {
    iVar1 = FUN_0054c540();
    if (iVar1 <= local_8) break;
    uVar2 = FUN_00641280(CONCAT22(extraout_var,*(undefined2 *)(param_1 + 4 + local_8 * 2)));
    if ((int)uVar2 == local_14) {
      local_10 = local_10 + 1;
    }
    else {
      iVar1 = (int)((ulonglong)uVar2 >> 0x20);
      if (local_c < local_10) {
        local_c = local_10;
        iVar1 = local_10;
      }
      local_10 = 1;
      local_14 = FUN_00641280(CONCAT22((short)((uint)iVar1 >> 0x10),
                                       *(undefined2 *)(param_1 + 4 + local_8 * 2)));
    }
    local_8 = local_8 + 1;
  }
  if (local_c < local_10) {
    local_c = local_10;
  }
  return local_c;
}

