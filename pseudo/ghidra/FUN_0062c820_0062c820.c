// FUN_0062c820  0062c820

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall FUN_0062c820(int param_1,undefined4 param_2,undefined4 param_3)

{
  int local_98;
  undefined4 *local_94;
  void *local_90;
  char local_8c [128];
  uint local_c;
  uint local_8;
  
  local_c = DAT_00781870 ^ (uint)&stack0xfffffffc;
  if (*(int *)(param_1 + 8) == 0) {
    if (*(int *)(param_1 + 0xc) != 0) {
      fflush(*(FILE **)(param_1 + 0xc));
      local_8 = FUN_0062b530(param_2,param_3);
      if (local_8 <= **(int **)(param_1 + 0x14) - 1U) {
        local_94 = &param_2;
        sprintf(local_8c,"Deleteing resource %d type \'%c%c%c%c\'.\n",param_3,(int)(char)param_2,
                (int)param_2._1_1_,(int)param_2._2_1_,(int)param_2._3_1_);
        FUN_0062fde0(local_8c);
        FUN_0062c6f0(&local_8);
        local_98 = *(int *)(*(int *)(param_1 + 0x14) + 0x14 + local_8 * 0x10);
        FUN_0062c630(&local_8,&local_98);
        *(int *)(*(int *)(param_1 + 0x10) + 0x10) =
             *(int *)(*(int *)(param_1 + 0x10) + 0x10) + -0x10;
        **(int **)(param_1 + 0x14) = **(int **)(param_1 + 0x14) + -1;
        *(int *)(*(int *)(param_1 + 0x10) + 0x14) =
             *(int *)(*(int *)(param_1 + 0x10) + 0x14) - local_98;
        local_90 = operator_new(*(uint *)(*(int *)(param_1 + 0x10) + 0x10));
        memcpy(local_90,*(void **)(param_1 + 0x14),*(size_t *)(*(int *)(param_1 + 0x10) + 0x10));
        operator_delete(*(void **)(param_1 + 0x14));
        *(void **)(param_1 + 0x14) = local_90;
        fwrite(*(void **)(param_1 + 0x14),*(size_t *)(*(int *)(param_1 + 0x10) + 0x10),1,
               *(FILE **)(param_1 + 0xc));
        fseek(*(FILE **)(param_1 + 0xc),0,0);
        fwrite(*(void **)(param_1 + 0x10),0x18,1,*(FILE **)(param_1 + 0xc));
      }
    }
  }
  else {
    FUN_005e9f20("false","..\\scilib\\platform\\prf.cpp",0x2d6);
  }
  __security_check_cookie(local_c ^ (uint)&stack0xfffffffc);
  return;
}

