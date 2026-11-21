// FUN_00608cf0  00608cf0

undefined4 __thiscall
FUN_00608cf0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  if (DAT_007960cb == '\0') {
    if (param_7 != (undefined4 *)0x0) {
      *param_7 = 0;
    }
    if (((*(char *)(param_1 + 9) == '\0') || (*(char *)(param_1 + 8) == '\0')) || (param_2 == 0)) {
      uVar1 = 0xffffffff;
    }
    else {
      piVar2 = (int *)FUN_00603c50(0x2033504d,param_2,1);
      if ((piVar2 != (int *)0x0) && (iVar3 = (**(code **)(*piVar2 + 4))(), iVar3 != 0)) {
        if (param_7 != (undefined4 *)0x0) {
          *param_7 = piVar2;
        }
        uVar1 = FUN_00608db0(piVar2,param_3,param_4,param_5,param_6);
        return uVar1;
      }
      uVar1 = 0xffffffff;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

