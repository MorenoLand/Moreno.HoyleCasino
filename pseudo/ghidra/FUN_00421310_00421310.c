// FUN_00421310  00421310

void __fastcall FUN_00421310(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_005eb220();
  uVar1 = uVar1 & 0x80000001;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
  }
  if (uVar1 != 0) {
    FUN_005eaf00(*(undefined4 *)(param_1 + 0x184));
    *(int *)(param_1 + 0x184) = *(int *)(param_1 + 0x184) + 1;
    if (0x3106e3 < *(int *)(param_1 + 0x184)) {
      *(undefined4 *)(param_1 + 0x184) = 0x3106e1;
    }
  }
  iVar2 = FUN_005eb220();
  if (iVar2 == 0) {
    FUN_00421070();
  }
  return;
}

