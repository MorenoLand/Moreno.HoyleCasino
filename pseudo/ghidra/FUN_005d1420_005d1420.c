// FUN_005d1420  005d1420

void __thiscall FUN_005d1420(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_005dcb00(0,param_1);
  if (iVar1 != 0) {
    uVar2 = param_2;
    uVar3 = param_3;
    FUN_005dcb00(0,param_2,param_3);
    FUN_005d5fb0(uVar2,uVar3);
    FUN_005dcb00(0,param_2,param_3);
    FUN_005d5cf0(param_2,param_3);
  }
  return;
}

