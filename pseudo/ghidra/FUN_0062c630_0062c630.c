// FUN_0062c630  0062c630

undefined4 __thiscall FUN_0062c630(int param_1,uint *param_2,int *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint local_8;
  
  if (*(int *)(param_1 + 8) == 0) {
    for (local_8 = *param_2; local_8 < **(uint **)(param_1 + 0x14); local_8 = local_8 + 1) {
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x14) + 8 + (local_8 + 1) * 0x10);
      puVar2 = (undefined4 *)(*(int *)(param_1 + 0x14) + 8 + local_8 * 0x10);
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      puVar2[3] = puVar1[3];
      *(int *)(*(int *)(param_1 + 0x14) + 0x10 + local_8 * 0x10) =
           *(int *)(*(int *)(param_1 + 0x14) + 0x10 + local_8 * 0x10) - *param_3;
    }
    uVar3 = 1;
  }
  else {
    FUN_005e9f20("false","..\\scilib\\platform\\prf.cpp",0x2ab);
    uVar3 = 0;
  }
  return uVar3;
}

