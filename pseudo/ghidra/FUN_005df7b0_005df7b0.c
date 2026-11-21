// FUN_005df7b0  005df7b0

uint __thiscall FUN_005df7b0(int *param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == -1) {
    param_2 = FUN_005f3bf0();
  }
  uVar1 = (**(code **)(*param_1 + 0x33c))(0xffffffff);
  if ((((uVar1 & 0xff) != 0) && (uVar1 = FUN_005da830(), (uVar1 & 0xff) == 0)) &&
     (uVar1 = FUN_005df700(param_2), (uVar1 & 0xff) != 0)) {
    FUN_005de600(param_2);
    uVar1 = FUN_005d5550(param_2);
    return uVar1;
  }
  return uVar1 & 0xffffff00;
}

