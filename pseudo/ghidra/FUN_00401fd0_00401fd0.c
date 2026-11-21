// FUN_00401fd0  00401fd0

void __thiscall FUN_00401fd0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 extraout_var;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4 + param_2 * 4) + 8 + param_3 * 4);
  uVar2 = FUN_004093d0(param_2,param_3);
  uVar3 = FUN_004020a0(param_2,param_3);
  FUN_005eaf00(uVar3);
  uVar3 = FUN_00402100(param_2,CONCAT22(extraout_var,uVar2),param_3);
  (**(code **)(*piVar1 + 0xb0))(uVar3);
  uVar3 = FUN_00402210(param_2,param_3);
  uVar4 = FUN_004021b0(param_2,param_3);
  (**(code **)(*piVar1 + 0x44))(uVar4,uVar3);
  (**(code **)(*piVar1 + 0x6c))(param_3 + 5);
  (**(code **)(*piVar1 + 0x74))();
  return;
}

