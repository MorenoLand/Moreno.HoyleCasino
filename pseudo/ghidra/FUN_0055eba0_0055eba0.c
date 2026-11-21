// FUN_0055eba0  0055eba0

undefined4 __fastcall FUN_0055eba0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_10;
  int local_8;
  
  local_8 = 0;
  iVar1 = FUN_005596e0();
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    local_10 = 0;
    while( true ) {
      iVar2 = FUN_00559380();
      if (iVar2 <= local_10) break;
      iVar2 = FUN_00641280(*(undefined2 *)(param_1 + 4 + local_10 * 2));
      if (iVar2 == iVar1) {
        *(undefined1 *)(param_1 + local_8 + 0x14) = (undefined1)local_10;
        local_8 = local_8 + 1;
      }
      local_10 = local_10 + 1;
    }
    uVar3 = 1;
  }
  return uVar3;
}

