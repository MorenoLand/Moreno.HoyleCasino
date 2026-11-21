// FUN_00539020  00539020

undefined4 __thiscall FUN_00539020(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 1) {
    uVar1 = *(undefined4 *)(&DAT_00730bd0 + param_2 * 0x28);
  }
  else if (*(int *)(param_1 + 4) == 2) {
    uVar1 = *(undefined4 *)(&DAT_00730c98 + param_2 * 0x28);
  }
  else {
    uVar1 = *(undefined4 *)(&DAT_00730dd8 + param_2 * 0x28);
  }
  return uVar1;
}

