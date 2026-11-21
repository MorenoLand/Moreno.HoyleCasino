// FUN_006102a0  006102a0

undefined4 * FUN_006102a0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (*(int *)(&DAT_0076fed8 + local_8 * 0x10) == -1) {
      FUN_005e9f20("false","..\\scilib\\scilib.cpp",0x15);
      iVar1 = local_8 * 0x10;
      *param_1 = *(undefined4 *)(&DAT_0076fed8 + iVar1);
      param_1[1] = *(undefined4 *)(&DAT_0076fedc + iVar1);
      param_1[2] = (&PTR_DAT_0076fee0)[local_8 * 4];
      param_1[3] = *(undefined4 *)(&DAT_0076fee4 + iVar1);
      return param_1;
    }
    if (*(int *)(&DAT_0076fed8 + local_8 * 0x10) == param_2) break;
    local_8 = local_8 + 1;
  }
  iVar1 = local_8 * 0x10;
  *param_1 = *(undefined4 *)(&DAT_0076fed8 + iVar1);
  param_1[1] = *(undefined4 *)(&DAT_0076fedc + iVar1);
  param_1[2] = (&PTR_DAT_0076fee0)[local_8 * 4];
  param_1[3] = *(undefined4 *)(&DAT_0076fee4 + iVar1);
  return param_1;
}

