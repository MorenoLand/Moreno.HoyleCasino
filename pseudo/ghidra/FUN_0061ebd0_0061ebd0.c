// FUN_0061ebd0  0061ebd0

void __fastcall FUN_0061ebd0(int param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  char local_38c [312];
  char local_254 [316];
  size_t local_118;
  undefined1 local_114 [264];
  uint local_c;
  FILE *local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  local_8 = (FILE *)0x0;
  local_114[0] = 0;
  local_8 = (FILE *)FUN_0061e6c0(local_114);
  if (local_8 == (FILE *)0x0) {
    if (DAT_00795fb2 != '\0') {
      sprintf(local_38c,"Resource %d.%c%c%c%c not found!  ",*(undefined4 *)(param_1 + 0x34),
              *(undefined4 *)(param_1 + 0x30),*(int *)(param_1 + 0x30) >> 8,
              *(int *)(param_1 + 0x30) >> 0x10,*(int *)(param_1 + 0x30) >> 0x18);
      FUN_0062fde0(local_38c);
    }
  }
  else {
    uVar1 = FUN_005e9fd0(local_8);
    *(undefined4 *)(param_1 + 0x14c) = uVar1;
    pvVar2 = operator_new(*(uint *)(param_1 + 0x14c));
    *(void **)(param_1 + 0x158) = pvVar2;
    local_118 = fread(*(void **)(param_1 + 0x158),1,*(size_t *)(param_1 + 0x14c),local_8);
    if (local_118 != *(size_t *)(param_1 + 0x14c)) {
      FUN_005e9f20("iNumRead == numOfBytes","..\\scilib\\platform\\resource.cpp",0x180);
    }
    fclose(local_8);
    if (DAT_00795fb2 != '\0') {
      sprintf(local_254,"Resource %s loaded.  ",local_114);
      FUN_0062fde0(local_254);
    }
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

