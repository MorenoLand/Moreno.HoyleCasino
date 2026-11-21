// FUN_00627180  00627180

void __thiscall
FUN_00627180(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  FUN_00627220(param_2,param_3,param_4,param_5);
  uVar1 = (**(code **)(*param_1 + 0x54))(param_6,param_7);
  uVar2 = (**(code **)(*param_1 + 0x4c))(uVar1);
  FUN_005f50c0(uVar2,uVar1,param_6,param_7);
  return;
}

