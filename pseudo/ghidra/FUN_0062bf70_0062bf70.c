// FUN_0062bf70  0062bf70

undefined4 __fastcall FUN_0062bf70(int param_1)

{
  size_t sVar1;
  undefined4 uVar2;
  
  sVar1 = fwrite(*(void **)(param_1 + 0x10),0x18,1,*(FILE **)(param_1 + 0xc));
  if (sVar1 == 0) {
    uVar2 = 0;
  }
  else {
    sVar1 = fwrite(*(void **)(param_1 + 0x14),*(size_t *)(*(int *)(param_1 + 0x10) + 0x10),1,
                   *(FILE **)(param_1 + 0xc));
    if (sVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

