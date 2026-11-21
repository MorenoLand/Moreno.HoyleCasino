// FUN_0054cae0  0054cae0

undefined4 __fastcall FUN_0054cae0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_8;
  
  iVar2 = FUN_0054cec0();
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_0054cec0();
    if (iVar2 < 3) {
      iVar2 = FUN_0054cec0();
      if (iVar2 == 2) {
        for (local_8 = 0; iVar2 = FUN_0054c540(), local_8 < iVar2; local_8 = local_8 + 1) {
          iVar2 = FUN_0054c590(*(undefined2 *)(param_1 + 4 + local_8 * 2));
          if (iVar2 != 0x14) {
            uVar3 = FUN_00641280(*(undefined2 *)(param_1 + 4 + local_8 * 2));
            iVar2 = FUN_0054cf20(uVar3);
            if (iVar2 == 2) {
              return 1;
            }
          }
        }
        uVar3 = 0;
      }
      else {
        iVar2 = FUN_0054cec0();
        if ((iVar2 == 1) && (cVar1 = FUN_0054c820(), cVar1 != '\0')) {
          return 1;
        }
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}

