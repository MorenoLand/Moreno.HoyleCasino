// FUN_00602bb0  00602bb0

undefined4 __fastcall FUN_00602bb0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 400) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 400) + 0x60);
  }
  return uVar1;
}

