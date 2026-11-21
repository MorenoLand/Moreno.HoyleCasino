// FUN_004ee620  004ee620

short __fastcall FUN_004ee620(int param_1)

{
  short sVar1;
  
  if (*(short *)(param_1 + 100) == 1) {
    sVar1 = *(short *)(param_1 + 0x398) << 1;
  }
  else {
    sVar1 = *(short *)(param_1 + 0x398);
  }
  return sVar1;
}

