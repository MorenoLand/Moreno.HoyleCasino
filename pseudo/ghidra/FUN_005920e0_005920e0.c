// FUN_005920e0  005920e0

void __thiscall FUN_005920e0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined2 extraout_var;
  undefined4 uVar4;
  
  piVar1 = *(int **)(*(int *)(param_1 + 4 + param_2 * 4) + 8 + param_3 * 4);
  uVar2 = FUN_00598420(param_2,param_3);
  uVar3 = FUN_00591120(param_2);
  FUN_005eaf00(uVar3);
  uVar3 = FUN_00591070(param_2,CONCAT22(extraout_var,uVar2),param_3);
  (**(code **)(*piVar1 + 0xb0))(uVar3);
  uVar3 = FUN_005911a0(param_2,param_3);
  uVar4 = FUN_00591160(param_2,param_3);
  (**(code **)(*piVar1 + 0x44))(uVar4,uVar3);
  (**(code **)(*piVar1 + 0x6c))(param_3 + 5);
  (**(code **)(*piVar1 + 0x74))();
  return;
}

