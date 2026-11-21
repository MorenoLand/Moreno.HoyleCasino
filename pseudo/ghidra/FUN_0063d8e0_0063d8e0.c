// FUN_0063d8e0  0063d8e0

undefined4 __fastcall FUN_0063d8e0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1e4) == 0) {
    uVar1 = 0x138c;
  }
  else if (*(int *)(param_1 + 0x1dc) == 1) {
    uVar1 = 0x138d;
  }
  else {
    uVar1 = 0x138b;
  }
  return uVar1;
}

