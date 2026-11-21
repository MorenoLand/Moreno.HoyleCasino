// FUN_0054c8e0  0054c8e0

undefined4 __fastcall FUN_0054c8e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_8;
  
  local_8 = 0;
  do {
    iVar1 = FUN_0054c540();
    if (iVar1 <= local_8) {
      return 0;
    }
    iVar1 = FUN_0054c590(*(undefined2 *)(param_1 + 4 + local_8 * 2));
    if (iVar1 != 0x14) {
      uVar2 = FUN_00641280(*(undefined2 *)(param_1 + 4 + local_8 * 2));
      iVar1 = FUN_0054cf20(uVar2);
      if (iVar1 == 2) {
        uVar2 = FUN_00641280(*(undefined2 *)(param_1 + 4 + local_8 * 2));
        return uVar2;
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}

