// FUN_005b4000  005b4000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_005b4000(int param_1)

{
  double dVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x5c4) == 0) {
    uVar2 = 0;
  }
  else {
    iVar3 = FUN_005b58a0();
    iVar3 = iVar3 * 4 - *(int *)(param_1 + 0x5d0);
    if (iVar3 < 1) {
      uVar2 = 0xffffffff;
    }
    else {
      iVar4 = FUN_005b58a0();
      dVar1 = (double)(iVar4 * 0x34 - *(int *)(param_1 + 0x5c4)) / (double)iVar3;
      if (_DAT_006b4b28 < dVar1 == (_DAT_006b4b28 == dVar1)) {
        if (_DAT_006b4b20 < dVar1) {
          uVar2 = 0;
        }
        else {
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 0xffffffff;
      }
    }
  }
  return uVar2;
}

