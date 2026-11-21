// FUN_0062c6f0  0062c6f0

undefined4 __thiscall FUN_0062c6f0(int param_1,uint *param_2)

{
  undefined4 uVar1;
  void *_DstBuf;
  uint local_10;
  uint local_c;
  
  local_10 = 0;
  if (*(int *)(param_1 + 8) == 0) {
    for (local_c = *param_2; local_c < **(int **)(param_1 + 0x14) - 1U; local_c = local_c + 1) {
      local_10 = local_10 + *(int *)(*(int *)(param_1 + 0x14) + 0x14 + (local_c + 1) * 0x10);
    }
    fseek(*(FILE **)(param_1 + 0xc),
          *(long *)(*(int *)(param_1 + 0x14) + 0x10 + (*param_2 + 1) * 0x10),0);
    _DstBuf = operator_new(local_10);
    if (_DstBuf != (void *)0x0) {
      fread(_DstBuf,1,local_10,*(FILE **)(param_1 + 0xc));
      fseek(*(FILE **)(param_1 + 0xc),*(long *)(*(int *)(param_1 + 0x14) + 0x10 + *param_2 * 0x10),0
           );
      fwrite(_DstBuf,1,local_10,*(FILE **)(param_1 + 0xc));
      operator_delete(_DstBuf);
    }
    uVar1 = 1;
  }
  else {
    FUN_005e9f20("false","..\\scilib\\platform\\prf.cpp",700);
    uVar1 = 0;
  }
  return uVar1;
}

