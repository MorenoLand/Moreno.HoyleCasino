// FUN_00559920  00559920

undefined4 __fastcall FUN_00559920(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_8;
  
  iVar2 = FUN_00559d00();
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    iVar2 = FUN_00559d00();
    if (iVar2 < 3) {
      iVar2 = FUN_00559d00();
      if (iVar2 == 2) {
        for (local_8 = 0; iVar2 = FUN_00559380(), local_8 < iVar2; local_8 = local_8 + 1) {
          iVar2 = FUN_005593d0(*(undefined2 *)(param_1 + 4 + local_8 * 2));
          if (iVar2 != 0x14) {
            uVar3 = FUN_00641280(*(undefined2 *)(param_1 + 4 + local_8 * 2));
            iVar2 = FUN_00559d60(uVar3);
            if (iVar2 == 2) {
              return 1;
            }
          }
        }
        uVar3 = 0;
      }
      else {
        iVar2 = FUN_00559d00();
        if ((iVar2 == 1) && (cVar1 = FUN_00559660(), cVar1 != '\0')) {
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

