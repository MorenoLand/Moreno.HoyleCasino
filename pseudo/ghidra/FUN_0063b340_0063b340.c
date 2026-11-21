// FUN_0063b340  0063b340

uint __fastcall FUN_0063b340(uint param_1)

{
  if (*(int *)(param_1 + 0x20) == 0) {
    param_1 = param_1 & 0xffffff00;
  }
  else {
    param_1 = FUN_006480d0(param_1,*(undefined4 *)(param_1 + 0x20));
  }
  return param_1;
}

