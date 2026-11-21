// FUN_0042d0f0  0042d0f0

void FUN_0042d0f0(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_8;
  
  for (local_8 = 0x37; local_8 < 0x3d; local_8 = local_8 + 1) {
    iVar2 = FUN_00434880(local_8);
    uVar4 = *(undefined4 *)(DAT_007906dc + 0x14 + iVar2 * 4);
    uVar3 = extraout_var;
    cVar1 = FUN_005eb6d0(param_1);
    if (cVar1 != '\0') {
      FUN_0042cec0();
      return;
    }
    FUN_0042d070(uVar3,uVar4);
  }
  local_8 = 0x31;
  while( true ) {
    if (0x36 < local_8) {
      return;
    }
    iVar2 = FUN_00434880(local_8);
    uVar4 = *(undefined4 *)(DAT_007906dc + 0x14 + iVar2 * 4);
    uVar3 = extraout_var_00;
    cVar1 = FUN_005eb6d0(param_1);
    if (cVar1 != '\0') break;
    FUN_0042d070(uVar3,uVar4);
    local_8 = local_8 + 1;
  }
  FUN_0042cec0();
  return;
}

