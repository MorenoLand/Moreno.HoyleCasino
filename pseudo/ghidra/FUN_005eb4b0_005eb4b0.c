// FUN_005eb4b0  005eb4b0

undefined4 __fastcall FUN_005eb4b0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x174) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_006164d0(*(undefined4 *)(param_1 + 0x164),*(undefined4 *)(param_1 + 0x15c));
  }
  return uVar1;
}

