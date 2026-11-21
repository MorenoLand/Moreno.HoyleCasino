// FUN_00559720  00559720

undefined4 __fastcall FUN_00559720(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_8;
  
  local_8 = 0;
  do {
    iVar1 = FUN_00559380();
    if (iVar1 <= local_8) {
      return 0;
    }
    iVar1 = FUN_005593d0(*(undefined2 *)(param_1 + 4 + local_8 * 2));
    if (iVar1 != 0x14) {
      uVar2 = FUN_00641280(*(undefined2 *)(param_1 + 4 + local_8 * 2));
      iVar1 = FUN_00559d60(uVar2);
      if (iVar1 == 2) {
        uVar2 = FUN_00641280(*(undefined2 *)(param_1 + 4 + local_8 * 2));
        return uVar2;
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}

