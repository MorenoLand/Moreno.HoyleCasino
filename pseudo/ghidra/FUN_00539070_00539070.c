// FUN_00539070  00539070

undefined4 __fastcall FUN_00539070(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 1) {
    uVar1 = 5;
  }
  else if (*(int *)(param_1 + 4) == 2) {
    uVar1 = 8;
  }
  else {
    uVar1 = 8;
  }
  return uVar1;
}

