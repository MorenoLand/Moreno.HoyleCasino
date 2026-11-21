// FUN_00629080  00629080

undefined4 __thiscall FUN_00629080(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((-1 < param_2) && (iVar1 = (**(code **)(*param_1 + 0xb8))(), param_2 < iVar1)) {
    uVar2 = FUN_0060ca40(param_2);
    uVar2 = FUN_00629d00(param_1,uVar2);
    return uVar2;
  }
  return 1;
}

