// FUN_00536b40  00536b40

void __thiscall FUN_00536b40(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0062fbf0(0x7fffffff,param_1);
  uVar1 = uVar1 & 0x8000003f;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xffffffc0) + 1;
  }
  FUN_00536b90(param_2,uVar1);
  return;
}

