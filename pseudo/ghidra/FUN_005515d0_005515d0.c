// FUN_005515d0  005515d0

undefined4 __fastcall FUN_005515d0(int param_1)

{
  char cVar1;
  int iVar2;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 1;
  while( true ) {
    if (4 < local_c) {
      return 0;
    }
    cVar1 = FUN_005510d0(local_c,4);
    if (cVar1 != '\0') break;
    local_c = local_c + 1;
  }
  for (local_10 = 0; iVar2 = FUN_0054c540(), local_10 < iVar2; local_10 = local_10 + 1) {
    iVar2 = FUN_00641290(*(undefined2 *)(param_1 + 4 + local_10 * 2));
    if (iVar2 == local_c) {
      *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_10;
      local_8 = local_8 + 1;
    }
  }
  return 1;
}

