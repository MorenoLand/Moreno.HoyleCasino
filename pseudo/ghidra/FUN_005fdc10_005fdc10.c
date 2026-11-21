// FUN_005fdc10  005fdc10

void __thiscall FUN_005fdc10(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 local_8;
  
  local_8 = 0;
  (**(code **)(*DAT_015e55e4 + 0x44))(param_2,param_1 + 0x1c4);
  uVar1 = FUN_005fe7f0();
  FUN_005f9ce0(0,0,uVar1,0,0,1,0,0xff,0);
  piVar2 = (int *)FUN_005fb2b0(0);
  (**(code **)(*piVar2 + 0xb0))(4);
  for (; *(int *)(param_1 + 0x1c8 + local_8 * 4) != -1; local_8 = local_8 + 1) {
    FUN_005fe240(*(undefined4 *)(param_1 + 0x1c8 + local_8 * 4),uVar1,0xfffffffe,1);
  }
  FUN_005f9ce0(0,1,uVar1,0,0,1,0,0xff,0);
  piVar2 = (int *)FUN_005fb2b0(1);
  (**(code **)(*piVar2 + 0xb0))(5);
  FUN_005fdd10();
  return;
}

