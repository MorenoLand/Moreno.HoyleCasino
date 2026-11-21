// FUN_0063d7c0  0063d7c0

void __thiscall FUN_0063d7c0(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  FUN_0063d570(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1bc) + param_2 * 4) + 0x20),4);
  FUN_0063b2d0();
  FUN_0063a3e0(param_2,0);
  puVar1 = (undefined4 *)
           FUN_0063aac0(param_1,*(undefined4 *)(*(int *)(param_1 + 0x1bc) + param_2 * 4));
  *puVar1 = 0;
  (**(code **)(*DAT_0162ee80 + 0xec))(param_2);
  return;
}

