// FUN_00539f40  00539f40

undefined4 __thiscall FUN_00539f40(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00462ba0(DAT_007933ec + 200 + param_2 * 6,3,0,param_1);
  if (iVar1 < 2) {
    iVar1 = FUN_004630c0(DAT_007933ec + 200 + param_2 * 6,0,3);
    if (iVar1 < 0xd) {
      iVar1 = FUN_004630c0(DAT_007933ec + 200 + param_2 * 6,0,3);
      if (iVar1 == 0xc) {
        iVar1 = FUN_004630c0(DAT_007933ec + 200 + param_2 * 6,1,3);
        if (6 < iVar1) {
          return 0;
        }
        iVar1 = FUN_004630c0(DAT_007933ec + 200 + param_2 * 6,1,3);
        if ((iVar1 == 6) && (iVar1 = FUN_004630c0(DAT_007933ec + 200 + param_2 * 6,2,3), 3 < iVar1))
        {
          return 0;
        }
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

