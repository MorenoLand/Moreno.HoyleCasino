// FUN_00447b60  00447b60

void __thiscall FUN_00447b60(int param_1,int param_2,undefined2 param_3,char param_4)

{
  undefined4 uVar1;
  undefined2 extraout_var;
  undefined4 uVar2;
  
  if (param_4 == '\0') {
    FUN_005eaf00(0x310e9d);
    (**(code **)(**(int **)(param_1 + 0x44 + param_2 * 4) + 0xb0))(0x35);
  }
  else {
    uVar1 = FUN_00447990(0xffffffff);
    FUN_005eaf00(uVar1);
    uVar1 = FUN_004479d0(0xffffffff,CONCAT22(extraout_var,param_3));
    (**(code **)(**(int **)(param_1 + 0x44 + param_2 * 4) + 0xb0))(uVar1);
  }
  uVar1 = FUN_00447af0(0xffffffff,param_2);
  uVar2 = FUN_00447a70(0xffffffff,param_2);
  (**(code **)(**(int **)(param_1 + 0x44 + param_2 * 4) + 0x44))(uVar2,uVar1);
  (**(code **)(**(int **)(param_1 + 0x44 + param_2 * 4) + 0x6c))(param_2 + 1);
  (**(code **)(**(int **)(param_1 + 0x44 + param_2 * 4) + 0x74))();
  return;
}

