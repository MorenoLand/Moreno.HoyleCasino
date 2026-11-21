// FUN_00549080  00549080

undefined2 __thiscall FUN_00549080(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)(param_1 + 0x28 + param_2 * 0xc + param_3 * 2);
  *(undefined2 *)(param_1 + 0x28 + param_2 * 0xc + param_3 * 2) = 0;
  FUN_00544240(param_2,param_3);
  return uVar1;
}

