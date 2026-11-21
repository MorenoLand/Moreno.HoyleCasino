// FUN_005ee890  005ee890

undefined ** __fastcall FUN_005ee890(int param_1)

{
  undefined **ppuVar1;
  
  if (*(int *)(param_1 + 0x5c) == 0) {
    ppuVar1 = &PTR_006b27f8;
  }
  else {
    ppuVar1 = *(undefined ***)(param_1 + 0x5c);
  }
  return ppuVar1;
}

