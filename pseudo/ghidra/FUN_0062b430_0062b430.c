// FUN_0062b430  0062b430

undefined4 __thiscall
FUN_0062b430(int param_1,undefined4 param_2,undefined4 param_3,long *param_4,int *param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = FUN_0062b530(param_2,param_3);
    if (uVar2 < **(uint **)(param_1 + 0x14)) {
      *param_4 = *(long *)(*(int *)(param_1 + 0x14) + 0x10 + uVar2 * 0x10);
      local_10 = *(int *)(*(int *)(param_1 + 0x14) + 0x14 + uVar2 * 0x10);
      fseek(*(FILE **)(param_1 + 0xc),*param_4,0);
      if (*(int *)(*(int *)(param_1 + 0x14) + 4) != 0) {
        local_c = fgetc(*(FILE **)(param_1 + 0xc));
        while (local_c != 0) {
          local_10 = local_10 + -1;
          *param_4 = *param_4 + 1;
          local_c = fgetc(*(FILE **)(param_1 + 0xc));
        }
        local_10 = local_10 + -1;
        *param_4 = *param_4 + 1;
      }
      *param_5 = local_10;
      uVar1 = *(undefined4 *)(param_1 + 0xc);
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

