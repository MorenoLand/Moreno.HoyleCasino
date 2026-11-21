// FUN_005f9590  005f9590

undefined4 __thiscall FUN_005f9590(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1ac);
  *(undefined4 *)(param_1 + 0x1ac) = param_2;
  return uVar1;
}

