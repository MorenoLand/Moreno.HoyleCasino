// FUN_00652a70  00652a70

undefined4 __fastcall FUN_00652a70(int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(*(int *)(param_1 + 8) * 0x14 + *(int *)(param_1 + 0x80)) == 0) ||
     (*(int *)((*(int *)(param_1 + 8) + 1) * 0x14 + *(int *)(param_1 + 0x80)) == 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x80) + 4 + *(int *)(param_1 + 8) * 0x14);
  }
  return uVar1;
}

