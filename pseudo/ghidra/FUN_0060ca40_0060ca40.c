// FUN_0060ca40  0060ca40

undefined4 __thiscall FUN_0060ca40(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 4) <= param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0xc) + param_2 * 4);
  }
  return uVar1;
}

