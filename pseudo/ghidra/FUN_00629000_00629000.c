// FUN_00629000  00629000

uint __thiscall FUN_00629000(int *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0xb8))();
  if (param_2 < (int)uVar1) {
    uVar2 = FUN_0060ca40(param_2);
    uVar1 = FUN_00629cc0(param_1,uVar2);
  }
  else {
    uVar1 = uVar1 & 0xffffff00;
  }
  return uVar1;
}

