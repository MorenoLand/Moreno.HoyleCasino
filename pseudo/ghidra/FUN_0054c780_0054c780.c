// FUN_0054c780  0054c780

undefined4 __fastcall FUN_0054c780(int param_1)

{
  int iVar1;
  int local_c;
  int local_8;
  
  local_c = FUN_00641280(*(undefined2 *)(param_1 + 4));
  local_8 = 1;
  while( true ) {
    iVar1 = FUN_0054c540();
    if (iVar1 <= local_8) {
      return 1;
    }
    local_c = local_c + 1;
    iVar1 = FUN_00641280(CONCAT22((short)((uint)local_c >> 0x10),
                                  *(undefined2 *)(param_1 + 4 + local_8 * 2)));
    if ((iVar1 != local_c) &&
       (((local_8 != 4 || (local_c != 6)) ||
        (iVar1 = FUN_00641280(*(undefined2 *)(param_1 + 0xc)), iVar1 != 0xe)))) break;
    local_8 = local_8 + 1;
  }
  return 0;
}

