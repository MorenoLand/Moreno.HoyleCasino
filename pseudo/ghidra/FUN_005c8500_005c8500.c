// FUN_005c8500  005c8500

void __thiscall FUN_005c8500(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_c;
  undefined4 local_8;
  
  FUN_005d0c30(&local_c,*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x80) + 4) + 4));
  uVar1 = local_c;
  uVar2 = local_8;
  FUN_005dcb00(param_2,local_c,local_8);
  FUN_005d5fb0(uVar1,uVar2);
  FUN_005dcb00(param_2,local_c,local_8);
  FUN_005d5cf0(local_c,local_8);
  FUN_005d0a20(0);
  (**(code **)(**(int **)(param_1 + 0x80) + 0x10))();
  return;
}

